// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `OTF.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_OTF_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_OTF_h__

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

class PixelsType;

class FilterSet;

class Objective;

class Instrument;

class Details;

class OTF;

}

}

}

namespace omero
{

namespace model
{

class PixelsType;
bool operator==(const PixelsType&, const PixelsType&);
bool operator<(const PixelsType&, const PixelsType&);

class FilterSet;
bool operator==(const FilterSet&, const FilterSet&);
bool operator<(const FilterSet&, const FilterSet&);

class Objective;
bool operator==(const Objective&, const Objective&);
bool operator<(const Objective&, const Objective&);

class Instrument;
bool operator==(const Instrument&, const Instrument&);
bool operator<(const Instrument&, const Instrument&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class OTF;
bool operator==(const OTF&, const OTF&);
bool operator<(const OTF&, const OTF&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::PixelsType*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::PixelsType*);

::Ice::Object* upCast(::omero::model::FilterSet*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::FilterSet*);

::Ice::Object* upCast(::omero::model::Objective*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Objective*);

::Ice::Object* upCast(::omero::model::Instrument*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Instrument*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::OTF*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::OTF*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::PixelsType> PixelsTypePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::PixelsType> PixelsTypePrx;

void __read(::IceInternal::BasicStream*, PixelsTypePrx&);
void __patch__PixelsTypePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::FilterSet> FilterSetPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::FilterSet> FilterSetPrx;

void __read(::IceInternal::BasicStream*, FilterSetPrx&);
void __patch__FilterSetPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Objective> ObjectivePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Objective> ObjectivePrx;

void __read(::IceInternal::BasicStream*, ObjectivePrx&);
void __patch__ObjectivePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Instrument> InstrumentPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Instrument> InstrumentPrx;

void __read(::IceInternal::BasicStream*, InstrumentPrx&);
void __patch__InstrumentPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::OTF> OTFPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::OTF> OTFPrx;

void __read(::IceInternal::BasicStream*, OTFPrx&);
void __patch__OTFPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class OTF : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::RIntPtr getSizeX()
    {
        return getSizeX(0);
    }
    ::omero::RIntPtr getSizeX(const ::Ice::Context& __ctx)
    {
        return getSizeX(&__ctx);
    }
    
private:

    ::omero::RIntPtr getSizeX(const ::Ice::Context*);
    
public:

    void setSizeX(const ::omero::RIntPtr& theSizeX)
    {
        setSizeX(theSizeX, 0);
    }
    void setSizeX(const ::omero::RIntPtr& theSizeX, const ::Ice::Context& __ctx)
    {
        setSizeX(theSizeX, &__ctx);
    }
    
private:

    void setSizeX(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getSizeY()
    {
        return getSizeY(0);
    }
    ::omero::RIntPtr getSizeY(const ::Ice::Context& __ctx)
    {
        return getSizeY(&__ctx);
    }
    
private:

    ::omero::RIntPtr getSizeY(const ::Ice::Context*);
    
public:

    void setSizeY(const ::omero::RIntPtr& theSizeY)
    {
        setSizeY(theSizeY, 0);
    }
    void setSizeY(const ::omero::RIntPtr& theSizeY, const ::Ice::Context& __ctx)
    {
        setSizeY(theSizeY, &__ctx);
    }
    
private:

    void setSizeY(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RBoolPtr getOpticalAxisAveraged()
    {
        return getOpticalAxisAveraged(0);
    }
    ::omero::RBoolPtr getOpticalAxisAveraged(const ::Ice::Context& __ctx)
    {
        return getOpticalAxisAveraged(&__ctx);
    }
    
private:

    ::omero::RBoolPtr getOpticalAxisAveraged(const ::Ice::Context*);
    
public:

    void setOpticalAxisAveraged(const ::omero::RBoolPtr& theOpticalAxisAveraged)
    {
        setOpticalAxisAveraged(theOpticalAxisAveraged, 0);
    }
    void setOpticalAxisAveraged(const ::omero::RBoolPtr& theOpticalAxisAveraged, const ::Ice::Context& __ctx)
    {
        setOpticalAxisAveraged(theOpticalAxisAveraged, &__ctx);
    }
    
private:

    void setOpticalAxisAveraged(const ::omero::RBoolPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::PixelsTypePtr getPixelsType()
    {
        return getPixelsType(0);
    }
    ::omero::model::PixelsTypePtr getPixelsType(const ::Ice::Context& __ctx)
    {
        return getPixelsType(&__ctx);
    }
    
private:

    ::omero::model::PixelsTypePtr getPixelsType(const ::Ice::Context*);
    
public:

    void setPixelsType(const ::omero::model::PixelsTypePtr& thePixelsType)
    {
        setPixelsType(thePixelsType, 0);
    }
    void setPixelsType(const ::omero::model::PixelsTypePtr& thePixelsType, const ::Ice::Context& __ctx)
    {
        setPixelsType(thePixelsType, &__ctx);
    }
    
private:

    void setPixelsType(const ::omero::model::PixelsTypePtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getPath()
    {
        return getPath(0);
    }
    ::omero::RStringPtr getPath(const ::Ice::Context& __ctx)
    {
        return getPath(&__ctx);
    }
    
private:

    ::omero::RStringPtr getPath(const ::Ice::Context*);
    
public:

    void setPath(const ::omero::RStringPtr& thePath)
    {
        setPath(thePath, 0);
    }
    void setPath(const ::omero::RStringPtr& thePath, const ::Ice::Context& __ctx)
    {
        setPath(thePath, &__ctx);
    }
    
private:

    void setPath(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::FilterSetPtr getFilterSet()
    {
        return getFilterSet(0);
    }
    ::omero::model::FilterSetPtr getFilterSet(const ::Ice::Context& __ctx)
    {
        return getFilterSet(&__ctx);
    }
    
private:

    ::omero::model::FilterSetPtr getFilterSet(const ::Ice::Context*);
    
public:

    void setFilterSet(const ::omero::model::FilterSetPtr& theFilterSet)
    {
        setFilterSet(theFilterSet, 0);
    }
    void setFilterSet(const ::omero::model::FilterSetPtr& theFilterSet, const ::Ice::Context& __ctx)
    {
        setFilterSet(theFilterSet, &__ctx);
    }
    
private:

    void setFilterSet(const ::omero::model::FilterSetPtr&, const ::Ice::Context*);
    
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
    
    ::IceInternal::ProxyHandle<OTF> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OTF*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<OTF*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OTF> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OTF*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<OTF*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OTF> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OTF*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<OTF*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OTF> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OTF*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<OTF*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OTF> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OTF*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<OTF*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OTF> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OTF*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<OTF*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OTF> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OTF*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<OTF*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OTF> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OTF*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<OTF*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OTF> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OTF*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<OTF*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OTF> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OTF*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<OTF*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OTF> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OTF*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<OTF*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OTF> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OTF*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<OTF*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OTF> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OTF*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<OTF*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OTF> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OTF*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<OTF*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OTF> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OTF*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<OTF*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OTF> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OTF*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<OTF*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OTF> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OTF*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<OTF*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OTF> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OTF*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<OTF*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OTF> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OTF*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<OTF*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class OTF : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getSizeX(const ::Ice::Context*) = 0;

    virtual void setSizeX(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getSizeY(const ::Ice::Context*) = 0;

    virtual void setSizeY(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RBoolPtr getOpticalAxisAveraged(const ::Ice::Context*) = 0;

    virtual void setOpticalAxisAveraged(const ::omero::RBoolPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::PixelsTypePtr getPixelsType(const ::Ice::Context*) = 0;

    virtual void setPixelsType(const ::omero::model::PixelsTypePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getPath(const ::Ice::Context*) = 0;

    virtual void setPath(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::FilterSetPtr getFilterSet(const ::Ice::Context*) = 0;

    virtual void setFilterSet(const ::omero::model::FilterSetPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::ObjectivePtr getObjective(const ::Ice::Context*) = 0;

    virtual void setObjective(const ::omero::model::ObjectivePtr&, const ::Ice::Context*) = 0;

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

class OTF : virtual public ::IceDelegate::omero::model::OTF,
            virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getSizeX(const ::Ice::Context*);

    virtual void setSizeX(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getSizeY(const ::Ice::Context*);

    virtual void setSizeY(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RBoolPtr getOpticalAxisAveraged(const ::Ice::Context*);

    virtual void setOpticalAxisAveraged(const ::omero::RBoolPtr&, const ::Ice::Context*);

    virtual ::omero::model::PixelsTypePtr getPixelsType(const ::Ice::Context*);

    virtual void setPixelsType(const ::omero::model::PixelsTypePtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getPath(const ::Ice::Context*);

    virtual void setPath(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::model::FilterSetPtr getFilterSet(const ::Ice::Context*);

    virtual void setFilterSet(const ::omero::model::FilterSetPtr&, const ::Ice::Context*);

    virtual ::omero::model::ObjectivePtr getObjective(const ::Ice::Context*);

    virtual void setObjective(const ::omero::model::ObjectivePtr&, const ::Ice::Context*);

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

class OTF : virtual public ::IceDelegate::omero::model::OTF,
            virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getSizeX(const ::Ice::Context*);

    virtual void setSizeX(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getSizeY(const ::Ice::Context*);

    virtual void setSizeY(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RBoolPtr getOpticalAxisAveraged(const ::Ice::Context*);

    virtual void setOpticalAxisAveraged(const ::omero::RBoolPtr&, const ::Ice::Context*);

    virtual ::omero::model::PixelsTypePtr getPixelsType(const ::Ice::Context*);

    virtual void setPixelsType(const ::omero::model::PixelsTypePtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getPath(const ::Ice::Context*);

    virtual void setPath(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::model::FilterSetPtr getFilterSet(const ::Ice::Context*);

    virtual void setFilterSet(const ::omero::model::FilterSetPtr&, const ::Ice::Context*);

    virtual ::omero::model::ObjectivePtr getObjective(const ::Ice::Context*);

    virtual void setObjective(const ::omero::model::ObjectivePtr&, const ::Ice::Context*);

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

class OTF : virtual public ::omero::model::IObject
{
public:

    typedef OTFPrx ProxyType;
    typedef OTFPtr PointerType;
    
    OTF() {}
    OTF(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RBoolPtr&, const ::omero::model::PixelsTypePtr&, const ::omero::RStringPtr&, const ::omero::model::FilterSetPtr&, const ::omero::model::ObjectivePtr&, const ::omero::model::InstrumentPtr&);
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

    virtual ::omero::RIntPtr getSizeX(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getSizeX(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setSizeX(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setSizeX(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getSizeY(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getSizeY(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setSizeY(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setSizeY(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RBoolPtr getOpticalAxisAveraged(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getOpticalAxisAveraged(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setOpticalAxisAveraged(const ::omero::RBoolPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setOpticalAxisAveraged(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PixelsTypePtr getPixelsType(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPixelsType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPixelsType(const ::omero::model::PixelsTypePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPixelsType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getPath(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPath(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPath(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPath(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FilterSetPtr getFilterSet(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFilterSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setFilterSet(const ::omero::model::FilterSetPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setFilterSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ObjectivePtr getObjective(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getObjective(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setObjective(const ::omero::model::ObjectivePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setObjective(::IceInternal::Incoming&, const ::Ice::Current&);

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

    ::omero::RIntPtr sizeX;

    ::omero::RIntPtr sizeY;

    ::omero::RBoolPtr opticalAxisAveraged;

    ::omero::model::PixelsTypePtr pixelsType;

    ::omero::RStringPtr path;

    ::omero::model::FilterSetPtr filterSet;

    ::omero::model::ObjectivePtr objective;

    ::omero::model::InstrumentPtr instrument;
};

}

}

#endif
