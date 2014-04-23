// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `ObjectiveSettings.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_ObjectiveSettings_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_ObjectiveSettings_h__

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

class Medium;

class Objective;

class Details;

class ObjectiveSettings;

}

}

}

namespace omero
{

namespace model
{

class Medium;
bool operator==(const Medium&, const Medium&);
bool operator<(const Medium&, const Medium&);

class Objective;
bool operator==(const Objective&, const Objective&);
bool operator<(const Objective&, const Objective&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class ObjectiveSettings;
bool operator==(const ObjectiveSettings&, const ObjectiveSettings&);
bool operator<(const ObjectiveSettings&, const ObjectiveSettings&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Medium*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Medium*);

::Ice::Object* upCast(::omero::model::Objective*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Objective*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::ObjectiveSettings*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::ObjectiveSettings*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Medium> MediumPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Medium> MediumPrx;

void __read(::IceInternal::BasicStream*, MediumPrx&);
void __patch__MediumPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Objective> ObjectivePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Objective> ObjectivePrx;

void __read(::IceInternal::BasicStream*, ObjectivePrx&);
void __patch__ObjectivePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::ObjectiveSettings> ObjectiveSettingsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ObjectiveSettings> ObjectiveSettingsPrx;

void __read(::IceInternal::BasicStream*, ObjectiveSettingsPrx&);
void __patch__ObjectiveSettingsPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class ObjectiveSettings : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::RDoublePtr getCorrectionCollar()
    {
        return getCorrectionCollar(0);
    }
    ::omero::RDoublePtr getCorrectionCollar(const ::Ice::Context& __ctx)
    {
        return getCorrectionCollar(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getCorrectionCollar(const ::Ice::Context*);
    
public:

    void setCorrectionCollar(const ::omero::RDoublePtr& theCorrectionCollar)
    {
        setCorrectionCollar(theCorrectionCollar, 0);
    }
    void setCorrectionCollar(const ::omero::RDoublePtr& theCorrectionCollar, const ::Ice::Context& __ctx)
    {
        setCorrectionCollar(theCorrectionCollar, &__ctx);
    }
    
private:

    void setCorrectionCollar(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::model::MediumPtr getMedium()
    {
        return getMedium(0);
    }
    ::omero::model::MediumPtr getMedium(const ::Ice::Context& __ctx)
    {
        return getMedium(&__ctx);
    }
    
private:

    ::omero::model::MediumPtr getMedium(const ::Ice::Context*);
    
public:

    void setMedium(const ::omero::model::MediumPtr& theMedium)
    {
        setMedium(theMedium, 0);
    }
    void setMedium(const ::omero::model::MediumPtr& theMedium, const ::Ice::Context& __ctx)
    {
        setMedium(theMedium, &__ctx);
    }
    
private:

    void setMedium(const ::omero::model::MediumPtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getRefractiveIndex()
    {
        return getRefractiveIndex(0);
    }
    ::omero::RDoublePtr getRefractiveIndex(const ::Ice::Context& __ctx)
    {
        return getRefractiveIndex(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getRefractiveIndex(const ::Ice::Context*);
    
public:

    void setRefractiveIndex(const ::omero::RDoublePtr& theRefractiveIndex)
    {
        setRefractiveIndex(theRefractiveIndex, 0);
    }
    void setRefractiveIndex(const ::omero::RDoublePtr& theRefractiveIndex, const ::Ice::Context& __ctx)
    {
        setRefractiveIndex(theRefractiveIndex, &__ctx);
    }
    
private:

    void setRefractiveIndex(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::model::ObjectivePtr getObjective()
    {
        return getObjective(0);
    }
    ::omero::model::ObjectivePtr getObjective(const ::Ice::Context& __ctx)
    {
        return getObjective(&__ctx);
    }
    
private:

    ::omero::model::ObjectivePtr getObjective(const ::Ice::Context*);
    
public:

    void setObjective(const ::omero::model::ObjectivePtr& theObjective)
    {
        setObjective(theObjective, 0);
    }
    void setObjective(const ::omero::model::ObjectivePtr& theObjective, const ::Ice::Context& __ctx)
    {
        setObjective(theObjective, &__ctx);
    }
    
private:

    void setObjective(const ::omero::model::ObjectivePtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<ObjectiveSettings> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ObjectiveSettings*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ObjectiveSettings*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ObjectiveSettings> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ObjectiveSettings*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ObjectiveSettings*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ObjectiveSettings> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ObjectiveSettings*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ObjectiveSettings*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ObjectiveSettings> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ObjectiveSettings*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ObjectiveSettings*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ObjectiveSettings> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ObjectiveSettings*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ObjectiveSettings*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ObjectiveSettings> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ObjectiveSettings*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ObjectiveSettings*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ObjectiveSettings> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ObjectiveSettings*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ObjectiveSettings*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ObjectiveSettings> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ObjectiveSettings*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ObjectiveSettings*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ObjectiveSettings> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ObjectiveSettings*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ObjectiveSettings*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ObjectiveSettings> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ObjectiveSettings*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ObjectiveSettings*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ObjectiveSettings> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ObjectiveSettings*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ObjectiveSettings*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ObjectiveSettings> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ObjectiveSettings*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ObjectiveSettings*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ObjectiveSettings> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ObjectiveSettings*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ObjectiveSettings*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ObjectiveSettings> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ObjectiveSettings*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ObjectiveSettings*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ObjectiveSettings> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ObjectiveSettings*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ObjectiveSettings*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ObjectiveSettings> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ObjectiveSettings*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ObjectiveSettings*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ObjectiveSettings> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ObjectiveSettings*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ObjectiveSettings*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ObjectiveSettings> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ObjectiveSettings*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ObjectiveSettings*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ObjectiveSettings> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ObjectiveSettings*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ObjectiveSettings*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class ObjectiveSettings : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getCorrectionCollar(const ::Ice::Context*) = 0;

    virtual void setCorrectionCollar(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::MediumPtr getMedium(const ::Ice::Context*) = 0;

    virtual void setMedium(const ::omero::model::MediumPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getRefractiveIndex(const ::Ice::Context*) = 0;

    virtual void setRefractiveIndex(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::ObjectivePtr getObjective(const ::Ice::Context*) = 0;

    virtual void setObjective(const ::omero::model::ObjectivePtr&, const ::Ice::Context*) = 0;
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

class ObjectiveSettings : virtual public ::IceDelegate::omero::model::ObjectiveSettings,
                          virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getCorrectionCollar(const ::Ice::Context*);

    virtual void setCorrectionCollar(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::model::MediumPtr getMedium(const ::Ice::Context*);

    virtual void setMedium(const ::omero::model::MediumPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getRefractiveIndex(const ::Ice::Context*);

    virtual void setRefractiveIndex(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::model::ObjectivePtr getObjective(const ::Ice::Context*);

    virtual void setObjective(const ::omero::model::ObjectivePtr&, const ::Ice::Context*);
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

class ObjectiveSettings : virtual public ::IceDelegate::omero::model::ObjectiveSettings,
                          virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getCorrectionCollar(const ::Ice::Context*);

    virtual void setCorrectionCollar(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::model::MediumPtr getMedium(const ::Ice::Context*);

    virtual void setMedium(const ::omero::model::MediumPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getRefractiveIndex(const ::Ice::Context*);

    virtual void setRefractiveIndex(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::model::ObjectivePtr getObjective(const ::Ice::Context*);

    virtual void setObjective(const ::omero::model::ObjectivePtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class ObjectiveSettings : virtual public ::omero::model::IObject
{
public:

    typedef ObjectiveSettingsPrx ProxyType;
    typedef ObjectiveSettingsPtr PointerType;
    
    ObjectiveSettings() {}
    ObjectiveSettings(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::RDoublePtr&, const ::omero::model::MediumPtr&, const ::omero::RDoublePtr&, const ::omero::model::ObjectivePtr&);
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

    virtual ::omero::RDoublePtr getCorrectionCollar(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getCorrectionCollar(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setCorrectionCollar(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setCorrectionCollar(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::MediumPtr getMedium(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMedium(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setMedium(const ::omero::model::MediumPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setMedium(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getRefractiveIndex(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRefractiveIndex(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setRefractiveIndex(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setRefractiveIndex(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ObjectivePtr getObjective(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getObjective(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setObjective(const ::omero::model::ObjectivePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setObjective(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::RDoublePtr correctionCollar;

    ::omero::model::MediumPtr medium;

    ::omero::RDoublePtr refractiveIndex;

    ::omero::model::ObjectivePtr objective;
};

}

}

#endif
