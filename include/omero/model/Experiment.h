// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Experiment.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Experiment_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Experiment_h__

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

class ExperimentType;

class MicrobeamManipulation;

class Details;

class Experiment;

}

}

}

namespace omero
{

namespace model
{

class ExperimentType;
bool operator==(const ExperimentType&, const ExperimentType&);
bool operator<(const ExperimentType&, const ExperimentType&);

class MicrobeamManipulation;
bool operator==(const MicrobeamManipulation&, const MicrobeamManipulation&);
bool operator<(const MicrobeamManipulation&, const MicrobeamManipulation&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class Experiment;
bool operator==(const Experiment&, const Experiment&);
bool operator<(const Experiment&, const Experiment&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::ExperimentType*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::ExperimentType*);

::Ice::Object* upCast(::omero::model::MicrobeamManipulation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::MicrobeamManipulation*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::Experiment*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Experiment*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::ExperimentType> ExperimentTypePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ExperimentType> ExperimentTypePrx;

void __read(::IceInternal::BasicStream*, ExperimentTypePrx&);
void __patch__ExperimentTypePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::MicrobeamManipulation> MicrobeamManipulationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::MicrobeamManipulation> MicrobeamManipulationPrx;

void __read(::IceInternal::BasicStream*, MicrobeamManipulationPrx&);
void __patch__MicrobeamManipulationPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Experiment> ExperimentPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Experiment> ExperimentPrx;

void __read(::IceInternal::BasicStream*, ExperimentPrx&);
void __patch__ExperimentPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

typedef ::std::vector< ::omero::model::MicrobeamManipulationPtr> ExperimentMicrobeamManipulationSeq;
void __writeExperimentMicrobeamManipulationSeq(::IceInternal::BasicStream*, const ::omero::model::MicrobeamManipulationPtr*, const ::omero::model::MicrobeamManipulationPtr*);
void __readExperimentMicrobeamManipulationSeq(::IceInternal::BasicStream*, ExperimentMicrobeamManipulationSeq&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Experiment : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::model::ExperimentTypePtr getType()
    {
        return getType(0);
    }
    ::omero::model::ExperimentTypePtr getType(const ::Ice::Context& __ctx)
    {
        return getType(&__ctx);
    }
    
private:

    ::omero::model::ExperimentTypePtr getType(const ::Ice::Context*);
    
public:

    void setType(const ::omero::model::ExperimentTypePtr& theType)
    {
        setType(theType, 0);
    }
    void setType(const ::omero::model::ExperimentTypePtr& theType, const ::Ice::Context& __ctx)
    {
        setType(theType, &__ctx);
    }
    
private:

    void setType(const ::omero::model::ExperimentTypePtr&, const ::Ice::Context*);
    
public:

    void unloadMicrobeamManipulation()
    {
        unloadMicrobeamManipulation(0);
    }
    void unloadMicrobeamManipulation(const ::Ice::Context& __ctx)
    {
        unloadMicrobeamManipulation(&__ctx);
    }
    
private:

    void unloadMicrobeamManipulation(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfMicrobeamManipulation()
    {
        return sizeOfMicrobeamManipulation(0);
    }
    ::Ice::Int sizeOfMicrobeamManipulation(const ::Ice::Context& __ctx)
    {
        return sizeOfMicrobeamManipulation(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfMicrobeamManipulation(const ::Ice::Context*);
    
public:

    ::omero::model::ExperimentMicrobeamManipulationSeq copyMicrobeamManipulation()
    {
        return copyMicrobeamManipulation(0);
    }
    ::omero::model::ExperimentMicrobeamManipulationSeq copyMicrobeamManipulation(const ::Ice::Context& __ctx)
    {
        return copyMicrobeamManipulation(&__ctx);
    }
    
private:

    ::omero::model::ExperimentMicrobeamManipulationSeq copyMicrobeamManipulation(const ::Ice::Context*);
    
public:

    void addMicrobeamManipulation(const ::omero::model::MicrobeamManipulationPtr& target)
    {
        addMicrobeamManipulation(target, 0);
    }
    void addMicrobeamManipulation(const ::omero::model::MicrobeamManipulationPtr& target, const ::Ice::Context& __ctx)
    {
        addMicrobeamManipulation(target, &__ctx);
    }
    
private:

    void addMicrobeamManipulation(const ::omero::model::MicrobeamManipulationPtr&, const ::Ice::Context*);
    
public:

    void addAllMicrobeamManipulationSet(const ::omero::model::ExperimentMicrobeamManipulationSeq& targets)
    {
        addAllMicrobeamManipulationSet(targets, 0);
    }
    void addAllMicrobeamManipulationSet(const ::omero::model::ExperimentMicrobeamManipulationSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllMicrobeamManipulationSet(targets, &__ctx);
    }
    
private:

    void addAllMicrobeamManipulationSet(const ::omero::model::ExperimentMicrobeamManipulationSeq&, const ::Ice::Context*);
    
public:

    void removeMicrobeamManipulation(const ::omero::model::MicrobeamManipulationPtr& theTarget)
    {
        removeMicrobeamManipulation(theTarget, 0);
    }
    void removeMicrobeamManipulation(const ::omero::model::MicrobeamManipulationPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeMicrobeamManipulation(theTarget, &__ctx);
    }
    
private:

    void removeMicrobeamManipulation(const ::omero::model::MicrobeamManipulationPtr&, const ::Ice::Context*);
    
public:

    void removeAllMicrobeamManipulationSet(const ::omero::model::ExperimentMicrobeamManipulationSeq& targets)
    {
        removeAllMicrobeamManipulationSet(targets, 0);
    }
    void removeAllMicrobeamManipulationSet(const ::omero::model::ExperimentMicrobeamManipulationSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllMicrobeamManipulationSet(targets, &__ctx);
    }
    
private:

    void removeAllMicrobeamManipulationSet(const ::omero::model::ExperimentMicrobeamManipulationSeq&, const ::Ice::Context*);
    
public:

    void clearMicrobeamManipulation()
    {
        clearMicrobeamManipulation(0);
    }
    void clearMicrobeamManipulation(const ::Ice::Context& __ctx)
    {
        clearMicrobeamManipulation(&__ctx);
    }
    
private:

    void clearMicrobeamManipulation(const ::Ice::Context*);
    
public:

    void reloadMicrobeamManipulation(const ::omero::model::ExperimentPtr& toCopy)
    {
        reloadMicrobeamManipulation(toCopy, 0);
    }
    void reloadMicrobeamManipulation(const ::omero::model::ExperimentPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadMicrobeamManipulation(toCopy, &__ctx);
    }
    
private:

    void reloadMicrobeamManipulation(const ::omero::model::ExperimentPtr&, const ::Ice::Context*);
    
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
    
    ::IceInternal::ProxyHandle<Experiment> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experiment*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Experiment*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experiment> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experiment*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Experiment*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experiment> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experiment*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Experiment*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experiment> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experiment*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Experiment*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experiment> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experiment*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Experiment*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experiment> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experiment*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Experiment*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experiment> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experiment*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Experiment*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experiment> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experiment*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Experiment*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experiment> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experiment*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Experiment*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experiment> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experiment*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Experiment*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experiment> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experiment*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Experiment*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experiment> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experiment*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Experiment*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experiment> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experiment*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Experiment*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experiment> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experiment*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Experiment*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experiment> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experiment*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Experiment*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experiment> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experiment*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Experiment*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experiment> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experiment*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Experiment*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experiment> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experiment*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Experiment*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Experiment> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Experiment*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Experiment*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Experiment : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::ExperimentTypePtr getType(const ::Ice::Context*) = 0;

    virtual void setType(const ::omero::model::ExperimentTypePtr&, const ::Ice::Context*) = 0;

    virtual void unloadMicrobeamManipulation(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfMicrobeamManipulation(const ::Ice::Context*) = 0;

    virtual ::omero::model::ExperimentMicrobeamManipulationSeq copyMicrobeamManipulation(const ::Ice::Context*) = 0;

    virtual void addMicrobeamManipulation(const ::omero::model::MicrobeamManipulationPtr&, const ::Ice::Context*) = 0;

    virtual void addAllMicrobeamManipulationSet(const ::omero::model::ExperimentMicrobeamManipulationSeq&, const ::Ice::Context*) = 0;

    virtual void removeMicrobeamManipulation(const ::omero::model::MicrobeamManipulationPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllMicrobeamManipulationSet(const ::omero::model::ExperimentMicrobeamManipulationSeq&, const ::Ice::Context*) = 0;

    virtual void clearMicrobeamManipulation(const ::Ice::Context*) = 0;

    virtual void reloadMicrobeamManipulation(const ::omero::model::ExperimentPtr&, const ::Ice::Context*) = 0;

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

class Experiment : virtual public ::IceDelegate::omero::model::Experiment,
                   virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::ExperimentTypePtr getType(const ::Ice::Context*);

    virtual void setType(const ::omero::model::ExperimentTypePtr&, const ::Ice::Context*);

    virtual void unloadMicrobeamManipulation(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfMicrobeamManipulation(const ::Ice::Context*);

    virtual ::omero::model::ExperimentMicrobeamManipulationSeq copyMicrobeamManipulation(const ::Ice::Context*);

    virtual void addMicrobeamManipulation(const ::omero::model::MicrobeamManipulationPtr&, const ::Ice::Context*);

    virtual void addAllMicrobeamManipulationSet(const ::omero::model::ExperimentMicrobeamManipulationSeq&, const ::Ice::Context*);

    virtual void removeMicrobeamManipulation(const ::omero::model::MicrobeamManipulationPtr&, const ::Ice::Context*);

    virtual void removeAllMicrobeamManipulationSet(const ::omero::model::ExperimentMicrobeamManipulationSeq&, const ::Ice::Context*);

    virtual void clearMicrobeamManipulation(const ::Ice::Context*);

    virtual void reloadMicrobeamManipulation(const ::omero::model::ExperimentPtr&, const ::Ice::Context*);

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

class Experiment : virtual public ::IceDelegate::omero::model::Experiment,
                   virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::ExperimentTypePtr getType(const ::Ice::Context*);

    virtual void setType(const ::omero::model::ExperimentTypePtr&, const ::Ice::Context*);

    virtual void unloadMicrobeamManipulation(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfMicrobeamManipulation(const ::Ice::Context*);

    virtual ::omero::model::ExperimentMicrobeamManipulationSeq copyMicrobeamManipulation(const ::Ice::Context*);

    virtual void addMicrobeamManipulation(const ::omero::model::MicrobeamManipulationPtr&, const ::Ice::Context*);

    virtual void addAllMicrobeamManipulationSet(const ::omero::model::ExperimentMicrobeamManipulationSeq&, const ::Ice::Context*);

    virtual void removeMicrobeamManipulation(const ::omero::model::MicrobeamManipulationPtr&, const ::Ice::Context*);

    virtual void removeAllMicrobeamManipulationSet(const ::omero::model::ExperimentMicrobeamManipulationSeq&, const ::Ice::Context*);

    virtual void clearMicrobeamManipulation(const ::Ice::Context*);

    virtual void reloadMicrobeamManipulation(const ::omero::model::ExperimentPtr&, const ::Ice::Context*);

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

class Experiment : virtual public ::omero::model::IObject
{
public:

    typedef ExperimentPrx ProxyType;
    typedef ExperimentPtr PointerType;
    
    Experiment() {}
    Experiment(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::model::ExperimentTypePtr&, const ::omero::model::ExperimentMicrobeamManipulationSeq&, bool, const ::omero::RStringPtr&);
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

    virtual ::omero::model::ExperimentTypePtr getType(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setType(const ::omero::model::ExperimentTypePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadMicrobeamManipulation(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadMicrobeamManipulation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfMicrobeamManipulation(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfMicrobeamManipulation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ExperimentMicrobeamManipulationSeq copyMicrobeamManipulation(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyMicrobeamManipulation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addMicrobeamManipulation(const ::omero::model::MicrobeamManipulationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addMicrobeamManipulation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllMicrobeamManipulationSet(const ::omero::model::ExperimentMicrobeamManipulationSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllMicrobeamManipulationSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeMicrobeamManipulation(const ::omero::model::MicrobeamManipulationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeMicrobeamManipulation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllMicrobeamManipulationSet(const ::omero::model::ExperimentMicrobeamManipulationSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllMicrobeamManipulationSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearMicrobeamManipulation(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearMicrobeamManipulation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadMicrobeamManipulation(const ::omero::model::ExperimentPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadMicrobeamManipulation(::IceInternal::Incoming&, const ::Ice::Current&);

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

    ::omero::model::ExperimentTypePtr type;

    ::omero::model::ExperimentMicrobeamManipulationSeq microbeamManipulationSeq;

    bool microbeamManipulationLoaded;

    ::omero::RStringPtr description;
};

}

}

#endif
