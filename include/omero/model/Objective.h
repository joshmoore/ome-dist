// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Objective.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Objective_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Objective_h__

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

class Immersion;

class Correction;

class Instrument;

class Details;

class Objective;

}

}

}

namespace omero
{

namespace model
{

class Immersion;
bool operator==(const Immersion&, const Immersion&);
bool operator<(const Immersion&, const Immersion&);

class Correction;
bool operator==(const Correction&, const Correction&);
bool operator<(const Correction&, const Correction&);

class Instrument;
bool operator==(const Instrument&, const Instrument&);
bool operator<(const Instrument&, const Instrument&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class Objective;
bool operator==(const Objective&, const Objective&);
bool operator<(const Objective&, const Objective&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Immersion*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Immersion*);

::Ice::Object* upCast(::omero::model::Correction*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Correction*);

::Ice::Object* upCast(::omero::model::Instrument*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Instrument*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::Objective*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Objective*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Immersion> ImmersionPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Immersion> ImmersionPrx;

void __read(::IceInternal::BasicStream*, ImmersionPrx&);
void __patch__ImmersionPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Correction> CorrectionPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Correction> CorrectionPrx;

void __read(::IceInternal::BasicStream*, CorrectionPrx&);
void __patch__CorrectionPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Instrument> InstrumentPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Instrument> InstrumentPrx;

void __read(::IceInternal::BasicStream*, InstrumentPrx&);
void __patch__InstrumentPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Objective> ObjectivePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Objective> ObjectivePrx;

void __read(::IceInternal::BasicStream*, ObjectivePrx&);
void __patch__ObjectivePtr(void*, ::Ice::ObjectPtr&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Objective : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::RDoublePtr getNominalMagnification()
    {
        return getNominalMagnification(0);
    }
    ::omero::RDoublePtr getNominalMagnification(const ::Ice::Context& __ctx)
    {
        return getNominalMagnification(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getNominalMagnification(const ::Ice::Context*);
    
public:

    void setNominalMagnification(const ::omero::RDoublePtr& theNominalMagnification)
    {
        setNominalMagnification(theNominalMagnification, 0);
    }
    void setNominalMagnification(const ::omero::RDoublePtr& theNominalMagnification, const ::Ice::Context& __ctx)
    {
        setNominalMagnification(theNominalMagnification, &__ctx);
    }
    
private:

    void setNominalMagnification(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getCalibratedMagnification()
    {
        return getCalibratedMagnification(0);
    }
    ::omero::RDoublePtr getCalibratedMagnification(const ::Ice::Context& __ctx)
    {
        return getCalibratedMagnification(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getCalibratedMagnification(const ::Ice::Context*);
    
public:

    void setCalibratedMagnification(const ::omero::RDoublePtr& theCalibratedMagnification)
    {
        setCalibratedMagnification(theCalibratedMagnification, 0);
    }
    void setCalibratedMagnification(const ::omero::RDoublePtr& theCalibratedMagnification, const ::Ice::Context& __ctx)
    {
        setCalibratedMagnification(theCalibratedMagnification, &__ctx);
    }
    
private:

    void setCalibratedMagnification(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getLensNA()
    {
        return getLensNA(0);
    }
    ::omero::RDoublePtr getLensNA(const ::Ice::Context& __ctx)
    {
        return getLensNA(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getLensNA(const ::Ice::Context*);
    
public:

    void setLensNA(const ::omero::RDoublePtr& theLensNA)
    {
        setLensNA(theLensNA, 0);
    }
    void setLensNA(const ::omero::RDoublePtr& theLensNA, const ::Ice::Context& __ctx)
    {
        setLensNA(theLensNA, &__ctx);
    }
    
private:

    void setLensNA(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::model::ImmersionPtr getImmersion()
    {
        return getImmersion(0);
    }
    ::omero::model::ImmersionPtr getImmersion(const ::Ice::Context& __ctx)
    {
        return getImmersion(&__ctx);
    }
    
private:

    ::omero::model::ImmersionPtr getImmersion(const ::Ice::Context*);
    
public:

    void setImmersion(const ::omero::model::ImmersionPtr& theImmersion)
    {
        setImmersion(theImmersion, 0);
    }
    void setImmersion(const ::omero::model::ImmersionPtr& theImmersion, const ::Ice::Context& __ctx)
    {
        setImmersion(theImmersion, &__ctx);
    }
    
private:

    void setImmersion(const ::omero::model::ImmersionPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::CorrectionPtr getCorrection()
    {
        return getCorrection(0);
    }
    ::omero::model::CorrectionPtr getCorrection(const ::Ice::Context& __ctx)
    {
        return getCorrection(&__ctx);
    }
    
private:

    ::omero::model::CorrectionPtr getCorrection(const ::Ice::Context*);
    
public:

    void setCorrection(const ::omero::model::CorrectionPtr& theCorrection)
    {
        setCorrection(theCorrection, 0);
    }
    void setCorrection(const ::omero::model::CorrectionPtr& theCorrection, const ::Ice::Context& __ctx)
    {
        setCorrection(theCorrection, &__ctx);
    }
    
private:

    void setCorrection(const ::omero::model::CorrectionPtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getWorkingDistance()
    {
        return getWorkingDistance(0);
    }
    ::omero::RDoublePtr getWorkingDistance(const ::Ice::Context& __ctx)
    {
        return getWorkingDistance(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getWorkingDistance(const ::Ice::Context*);
    
public:

    void setWorkingDistance(const ::omero::RDoublePtr& theWorkingDistance)
    {
        setWorkingDistance(theWorkingDistance, 0);
    }
    void setWorkingDistance(const ::omero::RDoublePtr& theWorkingDistance, const ::Ice::Context& __ctx)
    {
        setWorkingDistance(theWorkingDistance, &__ctx);
    }
    
private:

    void setWorkingDistance(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RBoolPtr getIris()
    {
        return getIris(0);
    }
    ::omero::RBoolPtr getIris(const ::Ice::Context& __ctx)
    {
        return getIris(&__ctx);
    }
    
private:

    ::omero::RBoolPtr getIris(const ::Ice::Context*);
    
public:

    void setIris(const ::omero::RBoolPtr& theIris)
    {
        setIris(theIris, 0);
    }
    void setIris(const ::omero::RBoolPtr& theIris, const ::Ice::Context& __ctx)
    {
        setIris(theIris, &__ctx);
    }
    
private:

    void setIris(const ::omero::RBoolPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::InstrumentPtr getInstrument()
    {
        return getInstrument(0);
    }
    ::omero::model::InstrumentPtr getInstrument(const ::Ice::Context& __ctx)
    {
        return getInstrument(&__ctx);
    }
    
private:

    ::omero::model::InstrumentPtr getInstrument(const ::Ice::Context*);
    
public:

    void setInstrument(const ::omero::model::InstrumentPtr& theInstrument)
    {
        setInstrument(theInstrument, 0);
    }
    void setInstrument(const ::omero::model::InstrumentPtr& theInstrument, const ::Ice::Context& __ctx)
    {
        setInstrument(theInstrument, &__ctx);
    }
    
private:

    void setInstrument(const ::omero::model::InstrumentPtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Objective> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Objective*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Objective*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Objective> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Objective*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Objective*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Objective> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Objective*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Objective*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Objective> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Objective*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Objective*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Objective> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Objective*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Objective*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Objective> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Objective*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Objective*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Objective> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Objective*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Objective*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Objective> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Objective*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Objective*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Objective> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Objective*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Objective*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Objective> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Objective*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Objective*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Objective> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Objective*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Objective*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Objective> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Objective*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Objective*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Objective> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Objective*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Objective*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Objective> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Objective*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Objective*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Objective> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Objective*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Objective*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Objective> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Objective*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Objective*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Objective> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Objective*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Objective*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Objective> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Objective*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Objective*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Objective> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Objective*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Objective*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Objective : virtual public ::IceDelegate::omero::model::IObject
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

    virtual ::omero::RDoublePtr getNominalMagnification(const ::Ice::Context*) = 0;

    virtual void setNominalMagnification(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getCalibratedMagnification(const ::Ice::Context*) = 0;

    virtual void setCalibratedMagnification(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getLensNA(const ::Ice::Context*) = 0;

    virtual void setLensNA(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::ImmersionPtr getImmersion(const ::Ice::Context*) = 0;

    virtual void setImmersion(const ::omero::model::ImmersionPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::CorrectionPtr getCorrection(const ::Ice::Context*) = 0;

    virtual void setCorrection(const ::omero::model::CorrectionPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getWorkingDistance(const ::Ice::Context*) = 0;

    virtual void setWorkingDistance(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RBoolPtr getIris(const ::Ice::Context*) = 0;

    virtual void setIris(const ::omero::RBoolPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::InstrumentPtr getInstrument(const ::Ice::Context*) = 0;

    virtual void setInstrument(const ::omero::model::InstrumentPtr&, const ::Ice::Context*) = 0;
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

class Objective : virtual public ::IceDelegate::omero::model::Objective,
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

    virtual ::omero::RDoublePtr getNominalMagnification(const ::Ice::Context*);

    virtual void setNominalMagnification(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getCalibratedMagnification(const ::Ice::Context*);

    virtual void setCalibratedMagnification(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getLensNA(const ::Ice::Context*);

    virtual void setLensNA(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::model::ImmersionPtr getImmersion(const ::Ice::Context*);

    virtual void setImmersion(const ::omero::model::ImmersionPtr&, const ::Ice::Context*);

    virtual ::omero::model::CorrectionPtr getCorrection(const ::Ice::Context*);

    virtual void setCorrection(const ::omero::model::CorrectionPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getWorkingDistance(const ::Ice::Context*);

    virtual void setWorkingDistance(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RBoolPtr getIris(const ::Ice::Context*);

    virtual void setIris(const ::omero::RBoolPtr&, const ::Ice::Context*);

    virtual ::omero::model::InstrumentPtr getInstrument(const ::Ice::Context*);

    virtual void setInstrument(const ::omero::model::InstrumentPtr&, const ::Ice::Context*);
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

class Objective : virtual public ::IceDelegate::omero::model::Objective,
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

    virtual ::omero::RDoublePtr getNominalMagnification(const ::Ice::Context*);

    virtual void setNominalMagnification(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getCalibratedMagnification(const ::Ice::Context*);

    virtual void setCalibratedMagnification(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getLensNA(const ::Ice::Context*);

    virtual void setLensNA(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::model::ImmersionPtr getImmersion(const ::Ice::Context*);

    virtual void setImmersion(const ::omero::model::ImmersionPtr&, const ::Ice::Context*);

    virtual ::omero::model::CorrectionPtr getCorrection(const ::Ice::Context*);

    virtual void setCorrection(const ::omero::model::CorrectionPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getWorkingDistance(const ::Ice::Context*);

    virtual void setWorkingDistance(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RBoolPtr getIris(const ::Ice::Context*);

    virtual void setIris(const ::omero::RBoolPtr&, const ::Ice::Context*);

    virtual ::omero::model::InstrumentPtr getInstrument(const ::Ice::Context*);

    virtual void setInstrument(const ::omero::model::InstrumentPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class Objective : virtual public ::omero::model::IObject
{
public:

    typedef ObjectivePrx ProxyType;
    typedef ObjectivePtr PointerType;
    
    Objective() {}
    Objective(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RDoublePtr&, const ::omero::RDoublePtr&, const ::omero::RDoublePtr&, const ::omero::model::ImmersionPtr&, const ::omero::model::CorrectionPtr&, const ::omero::RDoublePtr&, const ::omero::RBoolPtr&, const ::omero::model::InstrumentPtr&);
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

    virtual ::omero::RDoublePtr getNominalMagnification(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getNominalMagnification(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setNominalMagnification(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setNominalMagnification(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getCalibratedMagnification(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getCalibratedMagnification(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setCalibratedMagnification(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setCalibratedMagnification(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getLensNA(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getLensNA(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setLensNA(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setLensNA(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ImmersionPtr getImmersion(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getImmersion(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setImmersion(const ::omero::model::ImmersionPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setImmersion(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::CorrectionPtr getCorrection(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getCorrection(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setCorrection(const ::omero::model::CorrectionPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setCorrection(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getWorkingDistance(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getWorkingDistance(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setWorkingDistance(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setWorkingDistance(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RBoolPtr getIris(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getIris(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setIris(const ::omero::RBoolPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setIris(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::InstrumentPtr getInstrument(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getInstrument(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setInstrument(const ::omero::model::InstrumentPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setInstrument(::IceInternal::Incoming&, const ::Ice::Current&);

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

    ::omero::RDoublePtr nominalMagnification;

    ::omero::RDoublePtr calibratedMagnification;

    ::omero::RDoublePtr lensNA;

    ::omero::model::ImmersionPtr immersion;

    ::omero::model::CorrectionPtr correction;

    ::omero::RDoublePtr workingDistance;

    ::omero::RBoolPtr iris;

    ::omero::model::InstrumentPtr instrument;
};

}

}

#endif
