// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `MicrobeamManipulation.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_MicrobeamManipulation_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_MicrobeamManipulation_h__

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

class MicrobeamManipulationType;

class LightSettings;

class Experiment;

class Details;

class MicrobeamManipulation;

}

}

}

namespace omero
{

namespace model
{

class MicrobeamManipulationType;
bool operator==(const MicrobeamManipulationType&, const MicrobeamManipulationType&);
bool operator<(const MicrobeamManipulationType&, const MicrobeamManipulationType&);

class LightSettings;
bool operator==(const LightSettings&, const LightSettings&);
bool operator<(const LightSettings&, const LightSettings&);

class Experiment;
bool operator==(const Experiment&, const Experiment&);
bool operator<(const Experiment&, const Experiment&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class MicrobeamManipulation;
bool operator==(const MicrobeamManipulation&, const MicrobeamManipulation&);
bool operator<(const MicrobeamManipulation&, const MicrobeamManipulation&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::MicrobeamManipulationType*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::MicrobeamManipulationType*);

::Ice::Object* upCast(::omero::model::LightSettings*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::LightSettings*);

::Ice::Object* upCast(::omero::model::Experiment*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Experiment*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::MicrobeamManipulation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::MicrobeamManipulation*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::MicrobeamManipulationType> MicrobeamManipulationTypePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::MicrobeamManipulationType> MicrobeamManipulationTypePrx;

void __read(::IceInternal::BasicStream*, MicrobeamManipulationTypePrx&);
void __patch__MicrobeamManipulationTypePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::LightSettings> LightSettingsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::LightSettings> LightSettingsPrx;

void __read(::IceInternal::BasicStream*, LightSettingsPrx&);
void __patch__LightSettingsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Experiment> ExperimentPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Experiment> ExperimentPrx;

void __read(::IceInternal::BasicStream*, ExperimentPrx&);
void __patch__ExperimentPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::MicrobeamManipulation> MicrobeamManipulationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::MicrobeamManipulation> MicrobeamManipulationPrx;

void __read(::IceInternal::BasicStream*, MicrobeamManipulationPrx&);
void __patch__MicrobeamManipulationPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

typedef ::std::vector< ::omero::model::LightSettingsPtr> MicrobeamManipulationLightSourceSettingsSeq;
void __writeMicrobeamManipulationLightSourceSettingsSeq(::IceInternal::BasicStream*, const ::omero::model::LightSettingsPtr*, const ::omero::model::LightSettingsPtr*);
void __readMicrobeamManipulationLightSourceSettingsSeq(::IceInternal::BasicStream*, MicrobeamManipulationLightSourceSettingsSeq&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class MicrobeamManipulation : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::model::MicrobeamManipulationTypePtr getType()
    {
        return getType(0);
    }
    ::omero::model::MicrobeamManipulationTypePtr getType(const ::Ice::Context& __ctx)
    {
        return getType(&__ctx);
    }
    
private:

    ::omero::model::MicrobeamManipulationTypePtr getType(const ::Ice::Context*);
    
public:

    void setType(const ::omero::model::MicrobeamManipulationTypePtr& theType)
    {
        setType(theType, 0);
    }
    void setType(const ::omero::model::MicrobeamManipulationTypePtr& theType, const ::Ice::Context& __ctx)
    {
        setType(theType, &__ctx);
    }
    
private:

    void setType(const ::omero::model::MicrobeamManipulationTypePtr&, const ::Ice::Context*);
    
public:

    void unloadLightSourceSettings()
    {
        unloadLightSourceSettings(0);
    }
    void unloadLightSourceSettings(const ::Ice::Context& __ctx)
    {
        unloadLightSourceSettings(&__ctx);
    }
    
private:

    void unloadLightSourceSettings(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfLightSourceSettings()
    {
        return sizeOfLightSourceSettings(0);
    }
    ::Ice::Int sizeOfLightSourceSettings(const ::Ice::Context& __ctx)
    {
        return sizeOfLightSourceSettings(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfLightSourceSettings(const ::Ice::Context*);
    
public:

    ::omero::model::MicrobeamManipulationLightSourceSettingsSeq copyLightSourceSettings()
    {
        return copyLightSourceSettings(0);
    }
    ::omero::model::MicrobeamManipulationLightSourceSettingsSeq copyLightSourceSettings(const ::Ice::Context& __ctx)
    {
        return copyLightSourceSettings(&__ctx);
    }
    
private:

    ::omero::model::MicrobeamManipulationLightSourceSettingsSeq copyLightSourceSettings(const ::Ice::Context*);
    
public:

    void addLightSettings(const ::omero::model::LightSettingsPtr& target)
    {
        addLightSettings(target, 0);
    }
    void addLightSettings(const ::omero::model::LightSettingsPtr& target, const ::Ice::Context& __ctx)
    {
        addLightSettings(target, &__ctx);
    }
    
private:

    void addLightSettings(const ::omero::model::LightSettingsPtr&, const ::Ice::Context*);
    
public:

    void addAllLightSettingsSet(const ::omero::model::MicrobeamManipulationLightSourceSettingsSeq& targets)
    {
        addAllLightSettingsSet(targets, 0);
    }
    void addAllLightSettingsSet(const ::omero::model::MicrobeamManipulationLightSourceSettingsSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllLightSettingsSet(targets, &__ctx);
    }
    
private:

    void addAllLightSettingsSet(const ::omero::model::MicrobeamManipulationLightSourceSettingsSeq&, const ::Ice::Context*);
    
public:

    void removeLightSettings(const ::omero::model::LightSettingsPtr& theTarget)
    {
        removeLightSettings(theTarget, 0);
    }
    void removeLightSettings(const ::omero::model::LightSettingsPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeLightSettings(theTarget, &__ctx);
    }
    
private:

    void removeLightSettings(const ::omero::model::LightSettingsPtr&, const ::Ice::Context*);
    
public:

    void removeAllLightSettingsSet(const ::omero::model::MicrobeamManipulationLightSourceSettingsSeq& targets)
    {
        removeAllLightSettingsSet(targets, 0);
    }
    void removeAllLightSettingsSet(const ::omero::model::MicrobeamManipulationLightSourceSettingsSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllLightSettingsSet(targets, &__ctx);
    }
    
private:

    void removeAllLightSettingsSet(const ::omero::model::MicrobeamManipulationLightSourceSettingsSeq&, const ::Ice::Context*);
    
public:

    void clearLightSourceSettings()
    {
        clearLightSourceSettings(0);
    }
    void clearLightSourceSettings(const ::Ice::Context& __ctx)
    {
        clearLightSourceSettings(&__ctx);
    }
    
private:

    void clearLightSourceSettings(const ::Ice::Context*);
    
public:

    void reloadLightSourceSettings(const ::omero::model::MicrobeamManipulationPtr& toCopy)
    {
        reloadLightSourceSettings(toCopy, 0);
    }
    void reloadLightSourceSettings(const ::omero::model::MicrobeamManipulationPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadLightSourceSettings(toCopy, &__ctx);
    }
    
private:

    void reloadLightSourceSettings(const ::omero::model::MicrobeamManipulationPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::ExperimentPtr getExperiment()
    {
        return getExperiment(0);
    }
    ::omero::model::ExperimentPtr getExperiment(const ::Ice::Context& __ctx)
    {
        return getExperiment(&__ctx);
    }
    
private:

    ::omero::model::ExperimentPtr getExperiment(const ::Ice::Context*);
    
public:

    void setExperiment(const ::omero::model::ExperimentPtr& theExperiment)
    {
        setExperiment(theExperiment, 0);
    }
    void setExperiment(const ::omero::model::ExperimentPtr& theExperiment, const ::Ice::Context& __ctx)
    {
        setExperiment(theExperiment, &__ctx);
    }
    
private:

    void setExperiment(const ::omero::model::ExperimentPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getDescription()
    {
        return getDescription(0);
    }
    ::omero::RStringPtr getDescription(const ::Ice::Context& __ctx)
    {
        return getDescription(&__ctx);
    }
    
private:

    ::omero::RStringPtr getDescription(const ::Ice::Context*);
    
public:

    void setDescription(const ::omero::RStringPtr& theDescription)
    {
        setDescription(theDescription, 0);
    }
    void setDescription(const ::omero::RStringPtr& theDescription, const ::Ice::Context& __ctx)
    {
        setDescription(theDescription, &__ctx);
    }
    
private:

    void setDescription(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<MicrobeamManipulation> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MicrobeamManipulation*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<MicrobeamManipulation*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MicrobeamManipulation> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MicrobeamManipulation*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<MicrobeamManipulation*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MicrobeamManipulation> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MicrobeamManipulation*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<MicrobeamManipulation*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MicrobeamManipulation> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MicrobeamManipulation*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<MicrobeamManipulation*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MicrobeamManipulation> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MicrobeamManipulation*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<MicrobeamManipulation*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MicrobeamManipulation> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MicrobeamManipulation*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<MicrobeamManipulation*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MicrobeamManipulation> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MicrobeamManipulation*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<MicrobeamManipulation*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MicrobeamManipulation> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MicrobeamManipulation*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<MicrobeamManipulation*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MicrobeamManipulation> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MicrobeamManipulation*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<MicrobeamManipulation*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MicrobeamManipulation> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MicrobeamManipulation*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<MicrobeamManipulation*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MicrobeamManipulation> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MicrobeamManipulation*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<MicrobeamManipulation*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MicrobeamManipulation> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MicrobeamManipulation*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<MicrobeamManipulation*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MicrobeamManipulation> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MicrobeamManipulation*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<MicrobeamManipulation*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MicrobeamManipulation> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MicrobeamManipulation*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<MicrobeamManipulation*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MicrobeamManipulation> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MicrobeamManipulation*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<MicrobeamManipulation*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MicrobeamManipulation> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MicrobeamManipulation*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<MicrobeamManipulation*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MicrobeamManipulation> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MicrobeamManipulation*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<MicrobeamManipulation*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MicrobeamManipulation> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MicrobeamManipulation*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<MicrobeamManipulation*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MicrobeamManipulation> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MicrobeamManipulation*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<MicrobeamManipulation*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class MicrobeamManipulation : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::MicrobeamManipulationTypePtr getType(const ::Ice::Context*) = 0;

    virtual void setType(const ::omero::model::MicrobeamManipulationTypePtr&, const ::Ice::Context*) = 0;

    virtual void unloadLightSourceSettings(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfLightSourceSettings(const ::Ice::Context*) = 0;

    virtual ::omero::model::MicrobeamManipulationLightSourceSettingsSeq copyLightSourceSettings(const ::Ice::Context*) = 0;

    virtual void addLightSettings(const ::omero::model::LightSettingsPtr&, const ::Ice::Context*) = 0;

    virtual void addAllLightSettingsSet(const ::omero::model::MicrobeamManipulationLightSourceSettingsSeq&, const ::Ice::Context*) = 0;

    virtual void removeLightSettings(const ::omero::model::LightSettingsPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllLightSettingsSet(const ::omero::model::MicrobeamManipulationLightSourceSettingsSeq&, const ::Ice::Context*) = 0;

    virtual void clearLightSourceSettings(const ::Ice::Context*) = 0;

    virtual void reloadLightSourceSettings(const ::omero::model::MicrobeamManipulationPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::ExperimentPtr getExperiment(const ::Ice::Context*) = 0;

    virtual void setExperiment(const ::omero::model::ExperimentPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getDescription(const ::Ice::Context*) = 0;

    virtual void setDescription(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;
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

class MicrobeamManipulation : virtual public ::IceDelegate::omero::model::MicrobeamManipulation,
                              virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::MicrobeamManipulationTypePtr getType(const ::Ice::Context*);

    virtual void setType(const ::omero::model::MicrobeamManipulationTypePtr&, const ::Ice::Context*);

    virtual void unloadLightSourceSettings(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfLightSourceSettings(const ::Ice::Context*);

    virtual ::omero::model::MicrobeamManipulationLightSourceSettingsSeq copyLightSourceSettings(const ::Ice::Context*);

    virtual void addLightSettings(const ::omero::model::LightSettingsPtr&, const ::Ice::Context*);

    virtual void addAllLightSettingsSet(const ::omero::model::MicrobeamManipulationLightSourceSettingsSeq&, const ::Ice::Context*);

    virtual void removeLightSettings(const ::omero::model::LightSettingsPtr&, const ::Ice::Context*);

    virtual void removeAllLightSettingsSet(const ::omero::model::MicrobeamManipulationLightSourceSettingsSeq&, const ::Ice::Context*);

    virtual void clearLightSourceSettings(const ::Ice::Context*);

    virtual void reloadLightSourceSettings(const ::omero::model::MicrobeamManipulationPtr&, const ::Ice::Context*);

    virtual ::omero::model::ExperimentPtr getExperiment(const ::Ice::Context*);

    virtual void setExperiment(const ::omero::model::ExperimentPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getDescription(const ::Ice::Context*);

    virtual void setDescription(const ::omero::RStringPtr&, const ::Ice::Context*);
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

class MicrobeamManipulation : virtual public ::IceDelegate::omero::model::MicrobeamManipulation,
                              virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::MicrobeamManipulationTypePtr getType(const ::Ice::Context*);

    virtual void setType(const ::omero::model::MicrobeamManipulationTypePtr&, const ::Ice::Context*);

    virtual void unloadLightSourceSettings(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfLightSourceSettings(const ::Ice::Context*);

    virtual ::omero::model::MicrobeamManipulationLightSourceSettingsSeq copyLightSourceSettings(const ::Ice::Context*);

    virtual void addLightSettings(const ::omero::model::LightSettingsPtr&, const ::Ice::Context*);

    virtual void addAllLightSettingsSet(const ::omero::model::MicrobeamManipulationLightSourceSettingsSeq&, const ::Ice::Context*);

    virtual void removeLightSettings(const ::omero::model::LightSettingsPtr&, const ::Ice::Context*);

    virtual void removeAllLightSettingsSet(const ::omero::model::MicrobeamManipulationLightSourceSettingsSeq&, const ::Ice::Context*);

    virtual void clearLightSourceSettings(const ::Ice::Context*);

    virtual void reloadLightSourceSettings(const ::omero::model::MicrobeamManipulationPtr&, const ::Ice::Context*);

    virtual ::omero::model::ExperimentPtr getExperiment(const ::Ice::Context*);

    virtual void setExperiment(const ::omero::model::ExperimentPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getDescription(const ::Ice::Context*);

    virtual void setDescription(const ::omero::RStringPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class MicrobeamManipulation : virtual public ::omero::model::IObject
{
public:

    typedef MicrobeamManipulationPrx ProxyType;
    typedef MicrobeamManipulationPtr PointerType;
    
    MicrobeamManipulation() {}
    MicrobeamManipulation(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::model::MicrobeamManipulationTypePtr&, const ::omero::model::MicrobeamManipulationLightSourceSettingsSeq&, bool, const ::omero::model::ExperimentPtr&, const ::omero::RStringPtr&);
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

    virtual ::omero::model::MicrobeamManipulationTypePtr getType(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setType(const ::omero::model::MicrobeamManipulationTypePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadLightSourceSettings(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadLightSourceSettings(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfLightSourceSettings(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfLightSourceSettings(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::MicrobeamManipulationLightSourceSettingsSeq copyLightSourceSettings(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyLightSourceSettings(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addLightSettings(const ::omero::model::LightSettingsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addLightSettings(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllLightSettingsSet(const ::omero::model::MicrobeamManipulationLightSourceSettingsSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllLightSettingsSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeLightSettings(const ::omero::model::LightSettingsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeLightSettings(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllLightSettingsSet(const ::omero::model::MicrobeamManipulationLightSourceSettingsSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllLightSettingsSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearLightSourceSettings(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearLightSourceSettings(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadLightSourceSettings(const ::omero::model::MicrobeamManipulationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadLightSourceSettings(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ExperimentPtr getExperiment(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getExperiment(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setExperiment(const ::omero::model::ExperimentPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setExperiment(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getDescription(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getDescription(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setDescription(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setDescription(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::model::MicrobeamManipulationTypePtr type;

    ::omero::model::MicrobeamManipulationLightSourceSettingsSeq lightSourceSettingsSeq;

    bool lightSourceSettingsLoaded;

    ::omero::model::ExperimentPtr experiment;

    ::omero::RStringPtr description;
};

}

}

#endif
