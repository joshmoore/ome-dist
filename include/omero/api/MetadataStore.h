// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `MetadataStore.ice'

#ifndef __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_MetadataStore_h__
#define __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_MetadataStore_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/OutgoingAsync.h>
#include <Ice/Incoming.h>
#include <Ice/IncomingAsync.h>
#include <Ice/Direct.h>
#include <Ice/UserExceptionFactory.h>
#include <Ice/FactoryTable.h>
#include <Ice/StreamF.h>
#include <Ice/BuiltinSequences.h>
#include <omero/ModelF.h>
#include <omero/ServicesF.h>
#include <omero/Scripts.h>
#include <omero/Repositories.h>
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

namespace metadatastore
{

class IObjectContainer;

}

namespace api
{

class MetadataStore;

}

}

}

namespace omero
{

namespace metadatastore
{

class IObjectContainer;
bool operator==(const IObjectContainer&, const IObjectContainer&);
bool operator<(const IObjectContainer&, const IObjectContainer&);

}

namespace api
{

class MetadataStore;
bool operator==(const MetadataStore&, const MetadataStore&);
bool operator<(const MetadataStore&, const MetadataStore&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::metadatastore::IObjectContainer*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::metadatastore::IObjectContainer*);

::Ice::Object* upCast(::omero::api::MetadataStore*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::MetadataStore*);

}

namespace omero
{

namespace metadatastore
{

typedef ::IceInternal::Handle< ::omero::metadatastore::IObjectContainer> IObjectContainerPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::metadatastore::IObjectContainer> IObjectContainerPrx;

void __read(::IceInternal::BasicStream*, IObjectContainerPrx&);
void __patch__IObjectContainerPtr(void*, ::Ice::ObjectPtr&);

}

namespace api
{

typedef ::IceInternal::Handle< ::omero::api::MetadataStore> MetadataStorePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::MetadataStore> MetadataStorePrx;

void __read(::IceInternal::BasicStream*, MetadataStorePrx&);
void __patch__MetadataStorePtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace constants
{

const ::std::string METADATASTORE = "omero.api.MetadataStore";

}

namespace metadatastore
{

typedef ::std::vector< ::omero::metadatastore::IObjectContainerPtr> IObjectContainerArray;
void __writeIObjectContainerArray(::IceInternal::BasicStream*, const ::omero::metadatastore::IObjectContainerPtr*, const ::omero::metadatastore::IObjectContainerPtr*);
void __readIObjectContainerArray(::IceInternal::BasicStream*, IObjectContainerArray&);

}

}

namespace omero
{

namespace api
{

class AMI_MetadataStore_createRoot : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::MetadataStorePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_MetadataStore_createRoot> AMI_MetadataStore_createRootPtr;

class AMD_MetadataStore_createRoot : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_MetadataStore_createRoot> AMD_MetadataStore_createRootPtr;

class AMI_MetadataStore_updateObjects : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::MetadataStorePrx&, const ::omero::metadatastore::IObjectContainerArray&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_MetadataStore_updateObjects> AMI_MetadataStore_updateObjectsPtr;

class AMD_MetadataStore_updateObjects : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_MetadataStore_updateObjects> AMD_MetadataStore_updateObjectsPtr;

class AMI_MetadataStore_updateReferences : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::MetadataStorePrx&, const ::omero::api::StringStringArrayMap&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_MetadataStore_updateReferences> AMI_MetadataStore_updateReferencesPtr;

class AMD_MetadataStore_updateReferences : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_MetadataStore_updateReferences> AMD_MetadataStore_updateReferencesPtr;

class AMI_MetadataStore_saveToDB : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectListMap&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::MetadataStorePrx&, const ::omero::model::FilesetJobLinkPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_MetadataStore_saveToDB> AMI_MetadataStore_saveToDBPtr;

class AMD_MetadataStore_saveToDB : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectListMap&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_MetadataStore_saveToDB> AMD_MetadataStore_saveToDBPtr;

class AMI_MetadataStore_populateMinMax : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::MetadataStorePrx&, const ::omero::api::DoubleArrayArrayArray&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_MetadataStore_populateMinMax> AMI_MetadataStore_populateMinMaxPtr;

class AMD_MetadataStore_populateMinMax : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_MetadataStore_populateMinMax> AMD_MetadataStore_populateMinMaxPtr;

class AMI_MetadataStore_setPixelsParams : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::MetadataStorePrx&, ::Ice::Long, bool, const ::omero::api::StringStringMap&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_MetadataStore_setPixelsParams> AMI_MetadataStore_setPixelsParamsPtr;

class AMD_MetadataStore_setPixelsParams : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_MetadataStore_setPixelsParams> AMD_MetadataStore_setPixelsParamsPtr;

class AMI_MetadataStore_postProcess : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::grid::InteractiveProcessorList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::MetadataStorePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_MetadataStore_postProcess> AMI_MetadataStore_postProcessPtr;

class AMD_MetadataStore_postProcess : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::grid::InteractiveProcessorList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_MetadataStore_postProcess> AMD_MetadataStore_postProcessPtr;

}

}

namespace IceAsync
{

namespace omero
{

namespace api
{

class AMD_MetadataStore_createRoot : public ::omero::api::AMD_MetadataStore_createRoot, public ::IceInternal::IncomingAsync
{
public:

    AMD_MetadataStore_createRoot(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_MetadataStore_updateObjects : public ::omero::api::AMD_MetadataStore_updateObjects, public ::IceInternal::IncomingAsync
{
public:

    AMD_MetadataStore_updateObjects(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_MetadataStore_updateReferences : public ::omero::api::AMD_MetadataStore_updateReferences, public ::IceInternal::IncomingAsync
{
public:

    AMD_MetadataStore_updateReferences(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_MetadataStore_saveToDB : public ::omero::api::AMD_MetadataStore_saveToDB, public ::IceInternal::IncomingAsync
{
public:

    AMD_MetadataStore_saveToDB(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectListMap&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_MetadataStore_populateMinMax : public ::omero::api::AMD_MetadataStore_populateMinMax, public ::IceInternal::IncomingAsync
{
public:

    AMD_MetadataStore_populateMinMax(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_MetadataStore_setPixelsParams : public ::omero::api::AMD_MetadataStore_setPixelsParams, public ::IceInternal::IncomingAsync
{
public:

    AMD_MetadataStore_setPixelsParams(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_MetadataStore_postProcess : public ::omero::api::AMD_MetadataStore_postProcess, public ::IceInternal::IncomingAsync
{
public:

    AMD_MetadataStore_postProcess(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::grid::InteractiveProcessorList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

}

}

}

namespace IceProxy
{

namespace omero
{

namespace metadatastore
{

class IObjectContainer : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<IObjectContainer> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObjectContainer*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<IObjectContainer*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObjectContainer> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObjectContainer*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<IObjectContainer*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObjectContainer> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObjectContainer*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<IObjectContainer*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObjectContainer> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObjectContainer*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<IObjectContainer*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObjectContainer> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObjectContainer*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<IObjectContainer*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObjectContainer> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObjectContainer*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<IObjectContainer*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObjectContainer> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObjectContainer*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<IObjectContainer*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObjectContainer> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObjectContainer*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<IObjectContainer*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObjectContainer> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObjectContainer*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<IObjectContainer*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObjectContainer> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObjectContainer*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<IObjectContainer*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObjectContainer> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObjectContainer*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<IObjectContainer*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObjectContainer> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObjectContainer*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<IObjectContainer*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObjectContainer> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObjectContainer*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<IObjectContainer*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObjectContainer> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObjectContainer*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<IObjectContainer*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObjectContainer> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObjectContainer*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<IObjectContainer*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObjectContainer> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObjectContainer*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<IObjectContainer*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObjectContainer> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObjectContainer*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<IObjectContainer*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObjectContainer> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObjectContainer*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<IObjectContainer*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObjectContainer> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObjectContainer*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<IObjectContainer*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

namespace api
{

class MetadataStore : virtual public ::IceProxy::omero::api::StatefulServiceInterface
{
public:

    void createRoot()
    {
        createRoot(0);
    }
    void createRoot(const ::Ice::Context& __ctx)
    {
        createRoot(&__ctx);
    }
    
private:

    void createRoot(const ::Ice::Context*);
    
public:
    bool createRoot_async(const ::omero::api::AMI_MetadataStore_createRootPtr&);
    bool createRoot_async(const ::omero::api::AMI_MetadataStore_createRootPtr&, const ::Ice::Context&);

    void updateObjects(const ::omero::metadatastore::IObjectContainerArray& objects)
    {
        updateObjects(objects, 0);
    }
    void updateObjects(const ::omero::metadatastore::IObjectContainerArray& objects, const ::Ice::Context& __ctx)
    {
        updateObjects(objects, &__ctx);
    }
    
private:

    void updateObjects(const ::omero::metadatastore::IObjectContainerArray&, const ::Ice::Context*);
    
public:
    bool updateObjects_async(const ::omero::api::AMI_MetadataStore_updateObjectsPtr&, const ::omero::metadatastore::IObjectContainerArray&);
    bool updateObjects_async(const ::omero::api::AMI_MetadataStore_updateObjectsPtr&, const ::omero::metadatastore::IObjectContainerArray&, const ::Ice::Context&);

    void updateReferences(const ::omero::api::StringStringArrayMap& references)
    {
        updateReferences(references, 0);
    }
    void updateReferences(const ::omero::api::StringStringArrayMap& references, const ::Ice::Context& __ctx)
    {
        updateReferences(references, &__ctx);
    }
    
private:

    void updateReferences(const ::omero::api::StringStringArrayMap&, const ::Ice::Context*);
    
public:
    bool updateReferences_async(const ::omero::api::AMI_MetadataStore_updateReferencesPtr&, const ::omero::api::StringStringArrayMap&);
    bool updateReferences_async(const ::omero::api::AMI_MetadataStore_updateReferencesPtr&, const ::omero::api::StringStringArrayMap&, const ::Ice::Context&);

    ::omero::api::IObjectListMap saveToDB(const ::omero::model::FilesetJobLinkPtr& activity)
    {
        return saveToDB(activity, 0);
    }
    ::omero::api::IObjectListMap saveToDB(const ::omero::model::FilesetJobLinkPtr& activity, const ::Ice::Context& __ctx)
    {
        return saveToDB(activity, &__ctx);
    }
    
private:

    ::omero::api::IObjectListMap saveToDB(const ::omero::model::FilesetJobLinkPtr&, const ::Ice::Context*);
    
public:
    bool saveToDB_async(const ::omero::api::AMI_MetadataStore_saveToDBPtr&, const ::omero::model::FilesetJobLinkPtr&);
    bool saveToDB_async(const ::omero::api::AMI_MetadataStore_saveToDBPtr&, const ::omero::model::FilesetJobLinkPtr&, const ::Ice::Context&);

    void populateMinMax(const ::omero::api::DoubleArrayArrayArray& imageChannelGlobalMinMax)
    {
        populateMinMax(imageChannelGlobalMinMax, 0);
    }
    void populateMinMax(const ::omero::api::DoubleArrayArrayArray& imageChannelGlobalMinMax, const ::Ice::Context& __ctx)
    {
        populateMinMax(imageChannelGlobalMinMax, &__ctx);
    }
    
private:

    void populateMinMax(const ::omero::api::DoubleArrayArrayArray&, const ::Ice::Context*);
    
public:
    bool populateMinMax_async(const ::omero::api::AMI_MetadataStore_populateMinMaxPtr&, const ::omero::api::DoubleArrayArrayArray&);
    bool populateMinMax_async(const ::omero::api::AMI_MetadataStore_populateMinMaxPtr&, const ::omero::api::DoubleArrayArrayArray&, const ::Ice::Context&);

    void setPixelsParams(::Ice::Long pixelsId, bool useOriginalFile, const ::omero::api::StringStringMap& params)
    {
        setPixelsParams(pixelsId, useOriginalFile, params, 0);
    }
    void setPixelsParams(::Ice::Long pixelsId, bool useOriginalFile, const ::omero::api::StringStringMap& params, const ::Ice::Context& __ctx)
    {
        setPixelsParams(pixelsId, useOriginalFile, params, &__ctx);
    }
    
private:

    void setPixelsParams(::Ice::Long, bool, const ::omero::api::StringStringMap&, const ::Ice::Context*);
    
public:
    bool setPixelsParams_async(const ::omero::api::AMI_MetadataStore_setPixelsParamsPtr&, ::Ice::Long, bool, const ::omero::api::StringStringMap&);
    bool setPixelsParams_async(const ::omero::api::AMI_MetadataStore_setPixelsParamsPtr&, ::Ice::Long, bool, const ::omero::api::StringStringMap&, const ::Ice::Context&);

    ::omero::grid::InteractiveProcessorList postProcess()
    {
        return postProcess(0);
    }
    ::omero::grid::InteractiveProcessorList postProcess(const ::Ice::Context& __ctx)
    {
        return postProcess(&__ctx);
    }
    
private:

    ::omero::grid::InteractiveProcessorList postProcess(const ::Ice::Context*);
    
public:
    bool postProcess_async(const ::omero::api::AMI_MetadataStore_postProcessPtr&);
    bool postProcess_async(const ::omero::api::AMI_MetadataStore_postProcessPtr&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<MetadataStore> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MetadataStore*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<MetadataStore*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MetadataStore> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MetadataStore*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<MetadataStore*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MetadataStore> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MetadataStore*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<MetadataStore*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MetadataStore> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MetadataStore*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<MetadataStore*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MetadataStore> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MetadataStore*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<MetadataStore*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MetadataStore> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MetadataStore*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<MetadataStore*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MetadataStore> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MetadataStore*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<MetadataStore*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MetadataStore> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MetadataStore*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<MetadataStore*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MetadataStore> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MetadataStore*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<MetadataStore*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MetadataStore> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MetadataStore*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<MetadataStore*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MetadataStore> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MetadataStore*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<MetadataStore*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MetadataStore> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MetadataStore*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<MetadataStore*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MetadataStore> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MetadataStore*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<MetadataStore*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MetadataStore> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MetadataStore*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<MetadataStore*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MetadataStore> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MetadataStore*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<MetadataStore*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MetadataStore> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MetadataStore*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<MetadataStore*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MetadataStore> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MetadataStore*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<MetadataStore*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MetadataStore> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MetadataStore*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<MetadataStore*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MetadataStore> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MetadataStore*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<MetadataStore*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace metadatastore
{

class IObjectContainer : virtual public ::IceDelegate::Ice::Object
{
public:
};

}

namespace api
{

class MetadataStore : virtual public ::IceDelegate::omero::api::StatefulServiceInterface
{
public:

    virtual void createRoot(const ::Ice::Context*) = 0;

    virtual void updateObjects(const ::omero::metadatastore::IObjectContainerArray&, const ::Ice::Context*) = 0;

    virtual void updateReferences(const ::omero::api::StringStringArrayMap&, const ::Ice::Context*) = 0;

    virtual ::omero::api::IObjectListMap saveToDB(const ::omero::model::FilesetJobLinkPtr&, const ::Ice::Context*) = 0;

    virtual void populateMinMax(const ::omero::api::DoubleArrayArrayArray&, const ::Ice::Context*) = 0;

    virtual void setPixelsParams(::Ice::Long, bool, const ::omero::api::StringStringMap&, const ::Ice::Context*) = 0;

    virtual ::omero::grid::InteractiveProcessorList postProcess(const ::Ice::Context*) = 0;
};

}

}

}

namespace IceDelegateM
{

namespace omero
{

namespace metadatastore
{

class IObjectContainer : virtual public ::IceDelegate::omero::metadatastore::IObjectContainer,
                         virtual public ::IceDelegateM::Ice::Object
{
public:
};

}

namespace api
{

class MetadataStore : virtual public ::IceDelegate::omero::api::MetadataStore,
                      virtual public ::IceDelegateM::omero::api::StatefulServiceInterface
{
public:

    virtual void createRoot(const ::Ice::Context*);

    virtual void updateObjects(const ::omero::metadatastore::IObjectContainerArray&, const ::Ice::Context*);

    virtual void updateReferences(const ::omero::api::StringStringArrayMap&, const ::Ice::Context*);

    virtual ::omero::api::IObjectListMap saveToDB(const ::omero::model::FilesetJobLinkPtr&, const ::Ice::Context*);

    virtual void populateMinMax(const ::omero::api::DoubleArrayArrayArray&, const ::Ice::Context*);

    virtual void setPixelsParams(::Ice::Long, bool, const ::omero::api::StringStringMap&, const ::Ice::Context*);

    virtual ::omero::grid::InteractiveProcessorList postProcess(const ::Ice::Context*);
};

}

}

}

namespace IceDelegateD
{

namespace omero
{

namespace metadatastore
{

class IObjectContainer : virtual public ::IceDelegate::omero::metadatastore::IObjectContainer,
                         virtual public ::IceDelegateD::Ice::Object
{
public:
};

}

namespace api
{

class MetadataStore : virtual public ::IceDelegate::omero::api::MetadataStore,
                      virtual public ::IceDelegateD::omero::api::StatefulServiceInterface
{
public:

    virtual void createRoot(const ::Ice::Context*);

    virtual void updateObjects(const ::omero::metadatastore::IObjectContainerArray&, const ::Ice::Context*);

    virtual void updateReferences(const ::omero::api::StringStringArrayMap&, const ::Ice::Context*);

    virtual ::omero::api::IObjectListMap saveToDB(const ::omero::model::FilesetJobLinkPtr&, const ::Ice::Context*);

    virtual void populateMinMax(const ::omero::api::DoubleArrayArrayArray&, const ::Ice::Context*);

    virtual void setPixelsParams(::Ice::Long, bool, const ::omero::api::StringStringMap&, const ::Ice::Context*);

    virtual ::omero::grid::InteractiveProcessorList postProcess(const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace metadatastore
{

class IObjectContainer : virtual public ::Ice::Object
{
public:

    typedef IObjectContainerPrx ProxyType;
    typedef IObjectContainerPtr PointerType;
    
    IObjectContainer() {}
    IObjectContainer(const ::std::string&, const ::omero::api::StringIntMap&, const ::omero::model::IObjectPtr&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __incRef();
    virtual void __decRef();
    virtual void __addObject(::IceInternal::GCCountMap&);
    virtual bool __usesClasses();
    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~IObjectContainer() {}

    friend class IObjectContainer__staticInit;

public:

    ::std::string LSID;

    ::omero::api::StringIntMap indexes;

    ::omero::model::IObjectPtr sourceObject;
};

class IObjectContainer__staticInit
{
public:

    ::omero::metadatastore::IObjectContainer _init;
};

static IObjectContainer__staticInit _IObjectContainer_init;

}

namespace api
{

class MetadataStore : virtual public ::omero::api::StatefulServiceInterface
{
public:

    typedef MetadataStorePrx ProxyType;
    typedef MetadataStorePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void createRoot_async(const ::omero::api::AMD_MetadataStore_createRootPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createRoot(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void updateObjects_async(const ::omero::api::AMD_MetadataStore_updateObjectsPtr&, const ::omero::metadatastore::IObjectContainerArray&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___updateObjects(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void updateReferences_async(const ::omero::api::AMD_MetadataStore_updateReferencesPtr&, const ::omero::api::StringStringArrayMap&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___updateReferences(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void saveToDB_async(const ::omero::api::AMD_MetadataStore_saveToDBPtr&, const ::omero::model::FilesetJobLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___saveToDB(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void populateMinMax_async(const ::omero::api::AMD_MetadataStore_populateMinMaxPtr&, const ::omero::api::DoubleArrayArrayArray&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___populateMinMax(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPixelsParams_async(const ::omero::api::AMD_MetadataStore_setPixelsParamsPtr&, ::Ice::Long, bool, const ::omero::api::StringStringMap&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPixelsParams(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void postProcess_async(const ::omero::api::AMD_MetadataStore_postProcessPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___postProcess(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
