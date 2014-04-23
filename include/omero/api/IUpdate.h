// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `IUpdate.ice'

#ifndef __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_IUpdate_h__
#define __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_IUpdate_h__

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
#include <omero/cmd/API.h>
#include <omero/ServicesF.h>
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

namespace api
{

class IUpdate;

class Save;

class SaveRsp;

}

}

}

namespace omero
{

namespace api
{

class IUpdate;
bool operator==(const IUpdate&, const IUpdate&);
bool operator<(const IUpdate&, const IUpdate&);

class Save;
bool operator==(const Save&, const Save&);
bool operator<(const Save&, const Save&);

class SaveRsp;
bool operator==(const SaveRsp&, const SaveRsp&);
bool operator<(const SaveRsp&, const SaveRsp&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::api::IUpdate*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::IUpdate*);

::Ice::Object* upCast(::omero::api::Save*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::Save*);

::Ice::Object* upCast(::omero::api::SaveRsp*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::SaveRsp*);

}

namespace omero
{

namespace api
{

typedef ::IceInternal::Handle< ::omero::api::IUpdate> IUpdatePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::IUpdate> IUpdatePrx;

void __read(::IceInternal::BasicStream*, IUpdatePrx&);
void __patch__IUpdatePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::Save> SavePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::Save> SavePrx;

void __read(::IceInternal::BasicStream*, SavePrx&);
void __patch__SavePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::SaveRsp> SaveRspPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::SaveRsp> SaveRspPrx;

void __read(::IceInternal::BasicStream*, SaveRspPrx&);
void __patch__SaveRspPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace api
{

class AMI_IUpdate_saveObject : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IUpdatePrx&, const ::omero::model::IObjectPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IUpdate_saveObject> AMI_IUpdate_saveObjectPtr;

class AMD_IUpdate_saveObject : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IUpdate_saveObject> AMD_IUpdate_saveObjectPtr;

class AMI_IUpdate_saveCollection : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IUpdatePrx&, const ::omero::api::IObjectList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IUpdate_saveCollection> AMI_IUpdate_saveCollectionPtr;

class AMD_IUpdate_saveCollection : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IUpdate_saveCollection> AMD_IUpdate_saveCollectionPtr;

class AMI_IUpdate_saveAndReturnObject : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::IObjectPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IUpdatePrx&, const ::omero::model::IObjectPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IUpdate_saveAndReturnObject> AMI_IUpdate_saveAndReturnObjectPtr;

class AMD_IUpdate_saveAndReturnObject : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::IObjectPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IUpdate_saveAndReturnObject> AMD_IUpdate_saveAndReturnObjectPtr;

class AMI_IUpdate_saveArray : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IUpdatePrx&, const ::omero::api::IObjectList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IUpdate_saveArray> AMI_IUpdate_saveArrayPtr;

class AMD_IUpdate_saveArray : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IUpdate_saveArray> AMD_IUpdate_saveArrayPtr;

class AMI_IUpdate_saveAndReturnArray : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IUpdatePrx&, const ::omero::api::IObjectList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IUpdate_saveAndReturnArray> AMI_IUpdate_saveAndReturnArrayPtr;

class AMD_IUpdate_saveAndReturnArray : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IUpdate_saveAndReturnArray> AMD_IUpdate_saveAndReturnArrayPtr;

class AMI_IUpdate_saveAndReturnIds : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::sys::LongList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IUpdatePrx&, const ::omero::api::IObjectList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IUpdate_saveAndReturnIds> AMI_IUpdate_saveAndReturnIdsPtr;

class AMD_IUpdate_saveAndReturnIds : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::sys::LongList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IUpdate_saveAndReturnIds> AMD_IUpdate_saveAndReturnIdsPtr;

class AMI_IUpdate_deleteObject : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IUpdatePrx&, const ::omero::model::IObjectPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IUpdate_deleteObject> AMI_IUpdate_deleteObjectPtr;

class AMD_IUpdate_deleteObject : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IUpdate_deleteObject> AMD_IUpdate_deleteObjectPtr;

class AMI_IUpdate_indexObject : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IUpdatePrx&, const ::omero::model::IObjectPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IUpdate_indexObject> AMI_IUpdate_indexObjectPtr;

class AMD_IUpdate_indexObject : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IUpdate_indexObject> AMD_IUpdate_indexObjectPtr;

}

}

namespace IceAsync
{

namespace omero
{

namespace api
{

class AMD_IUpdate_saveObject : public ::omero::api::AMD_IUpdate_saveObject, public ::IceInternal::IncomingAsync
{
public:

    AMD_IUpdate_saveObject(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IUpdate_saveCollection : public ::omero::api::AMD_IUpdate_saveCollection, public ::IceInternal::IncomingAsync
{
public:

    AMD_IUpdate_saveCollection(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IUpdate_saveAndReturnObject : public ::omero::api::AMD_IUpdate_saveAndReturnObject, public ::IceInternal::IncomingAsync
{
public:

    AMD_IUpdate_saveAndReturnObject(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::IObjectPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IUpdate_saveArray : public ::omero::api::AMD_IUpdate_saveArray, public ::IceInternal::IncomingAsync
{
public:

    AMD_IUpdate_saveArray(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IUpdate_saveAndReturnArray : public ::omero::api::AMD_IUpdate_saveAndReturnArray, public ::IceInternal::IncomingAsync
{
public:

    AMD_IUpdate_saveAndReturnArray(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IUpdate_saveAndReturnIds : public ::omero::api::AMD_IUpdate_saveAndReturnIds, public ::IceInternal::IncomingAsync
{
public:

    AMD_IUpdate_saveAndReturnIds(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::sys::LongList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IUpdate_deleteObject : public ::omero::api::AMD_IUpdate_deleteObject, public ::IceInternal::IncomingAsync
{
public:

    AMD_IUpdate_deleteObject(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IUpdate_indexObject : public ::omero::api::AMD_IUpdate_indexObject, public ::IceInternal::IncomingAsync
{
public:

    AMD_IUpdate_indexObject(::IceInternal::Incoming&);

    virtual void ice_response();
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

namespace api
{

class IUpdate : virtual public ::IceProxy::omero::api::ServiceInterface
{
public:

    void saveObject(const ::omero::model::IObjectPtr& obj)
    {
        saveObject(obj, 0);
    }
    void saveObject(const ::omero::model::IObjectPtr& obj, const ::Ice::Context& __ctx)
    {
        saveObject(obj, &__ctx);
    }
    
private:

    void saveObject(const ::omero::model::IObjectPtr&, const ::Ice::Context*);
    
public:
    bool saveObject_async(const ::omero::api::AMI_IUpdate_saveObjectPtr&, const ::omero::model::IObjectPtr&);
    bool saveObject_async(const ::omero::api::AMI_IUpdate_saveObjectPtr&, const ::omero::model::IObjectPtr&, const ::Ice::Context&);

    void saveCollection(const ::omero::api::IObjectList& objs)
    {
        saveCollection(objs, 0);
    }
    void saveCollection(const ::omero::api::IObjectList& objs, const ::Ice::Context& __ctx)
    {
        saveCollection(objs, &__ctx);
    }
    
private:

    void saveCollection(const ::omero::api::IObjectList&, const ::Ice::Context*);
    
public:
    bool saveCollection_async(const ::omero::api::AMI_IUpdate_saveCollectionPtr&, const ::omero::api::IObjectList&);
    bool saveCollection_async(const ::omero::api::AMI_IUpdate_saveCollectionPtr&, const ::omero::api::IObjectList&, const ::Ice::Context&);

    ::omero::model::IObjectPtr saveAndReturnObject(const ::omero::model::IObjectPtr& obj)
    {
        return saveAndReturnObject(obj, 0);
    }
    ::omero::model::IObjectPtr saveAndReturnObject(const ::omero::model::IObjectPtr& obj, const ::Ice::Context& __ctx)
    {
        return saveAndReturnObject(obj, &__ctx);
    }
    
private:

    ::omero::model::IObjectPtr saveAndReturnObject(const ::omero::model::IObjectPtr&, const ::Ice::Context*);
    
public:
    bool saveAndReturnObject_async(const ::omero::api::AMI_IUpdate_saveAndReturnObjectPtr&, const ::omero::model::IObjectPtr&);
    bool saveAndReturnObject_async(const ::omero::api::AMI_IUpdate_saveAndReturnObjectPtr&, const ::omero::model::IObjectPtr&, const ::Ice::Context&);

    void saveArray(const ::omero::api::IObjectList& graph)
    {
        saveArray(graph, 0);
    }
    void saveArray(const ::omero::api::IObjectList& graph, const ::Ice::Context& __ctx)
    {
        saveArray(graph, &__ctx);
    }
    
private:

    void saveArray(const ::omero::api::IObjectList&, const ::Ice::Context*);
    
public:
    bool saveArray_async(const ::omero::api::AMI_IUpdate_saveArrayPtr&, const ::omero::api::IObjectList&);
    bool saveArray_async(const ::omero::api::AMI_IUpdate_saveArrayPtr&, const ::omero::api::IObjectList&, const ::Ice::Context&);

    ::omero::api::IObjectList saveAndReturnArray(const ::omero::api::IObjectList& graph)
    {
        return saveAndReturnArray(graph, 0);
    }
    ::omero::api::IObjectList saveAndReturnArray(const ::omero::api::IObjectList& graph, const ::Ice::Context& __ctx)
    {
        return saveAndReturnArray(graph, &__ctx);
    }
    
private:

    ::omero::api::IObjectList saveAndReturnArray(const ::omero::api::IObjectList&, const ::Ice::Context*);
    
public:
    bool saveAndReturnArray_async(const ::omero::api::AMI_IUpdate_saveAndReturnArrayPtr&, const ::omero::api::IObjectList&);
    bool saveAndReturnArray_async(const ::omero::api::AMI_IUpdate_saveAndReturnArrayPtr&, const ::omero::api::IObjectList&, const ::Ice::Context&);

    ::omero::sys::LongList saveAndReturnIds(const ::omero::api::IObjectList& graph)
    {
        return saveAndReturnIds(graph, 0);
    }
    ::omero::sys::LongList saveAndReturnIds(const ::omero::api::IObjectList& graph, const ::Ice::Context& __ctx)
    {
        return saveAndReturnIds(graph, &__ctx);
    }
    
private:

    ::omero::sys::LongList saveAndReturnIds(const ::omero::api::IObjectList&, const ::Ice::Context*);
    
public:
    bool saveAndReturnIds_async(const ::omero::api::AMI_IUpdate_saveAndReturnIdsPtr&, const ::omero::api::IObjectList&);
    bool saveAndReturnIds_async(const ::omero::api::AMI_IUpdate_saveAndReturnIdsPtr&, const ::omero::api::IObjectList&, const ::Ice::Context&);

    void deleteObject(const ::omero::model::IObjectPtr& row)
    {
        deleteObject(row, 0);
    }
    void deleteObject(const ::omero::model::IObjectPtr& row, const ::Ice::Context& __ctx)
    {
        deleteObject(row, &__ctx);
    }
    
private:

    void deleteObject(const ::omero::model::IObjectPtr&, const ::Ice::Context*);
    
public:
    bool deleteObject_async(const ::omero::api::AMI_IUpdate_deleteObjectPtr&, const ::omero::model::IObjectPtr&);
    bool deleteObject_async(const ::omero::api::AMI_IUpdate_deleteObjectPtr&, const ::omero::model::IObjectPtr&, const ::Ice::Context&);

    void indexObject(const ::omero::model::IObjectPtr& row)
    {
        indexObject(row, 0);
    }
    void indexObject(const ::omero::model::IObjectPtr& row, const ::Ice::Context& __ctx)
    {
        indexObject(row, &__ctx);
    }
    
private:

    void indexObject(const ::omero::model::IObjectPtr&, const ::Ice::Context*);
    
public:
    bool indexObject_async(const ::omero::api::AMI_IUpdate_indexObjectPtr&, const ::omero::model::IObjectPtr&);
    bool indexObject_async(const ::omero::api::AMI_IUpdate_indexObjectPtr&, const ::omero::model::IObjectPtr&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<IUpdate> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IUpdate*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<IUpdate*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IUpdate> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IUpdate*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<IUpdate*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IUpdate> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IUpdate*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<IUpdate*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IUpdate> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IUpdate*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<IUpdate*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IUpdate> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IUpdate*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<IUpdate*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IUpdate> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IUpdate*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<IUpdate*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IUpdate> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IUpdate*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<IUpdate*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IUpdate> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IUpdate*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<IUpdate*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IUpdate> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IUpdate*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<IUpdate*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IUpdate> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IUpdate*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<IUpdate*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IUpdate> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IUpdate*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<IUpdate*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IUpdate> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IUpdate*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<IUpdate*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IUpdate> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IUpdate*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<IUpdate*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IUpdate> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IUpdate*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<IUpdate*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IUpdate> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IUpdate*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<IUpdate*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IUpdate> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IUpdate*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<IUpdate*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IUpdate> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IUpdate*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<IUpdate*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IUpdate> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IUpdate*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<IUpdate*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IUpdate> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IUpdate*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<IUpdate*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Save : virtual public ::IceProxy::omero::cmd::Request
{
public:
    
    ::IceInternal::ProxyHandle<Save> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Save*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Save*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Save> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Save*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Save*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Save> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Save*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Save*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Save> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Save*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Save*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Save> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Save*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Save*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Save> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Save*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Save*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Save> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Save*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Save*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Save> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Save*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Save*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Save> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Save*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Save*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Save> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Save*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Save*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Save> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Save*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Save*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Save> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Save*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Save*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Save> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Save*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Save*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Save> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Save*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Save*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Save> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Save*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Save*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Save> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Save*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Save*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Save> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Save*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Save*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Save> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Save*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Save*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Save> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Save*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Save*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class SaveRsp : virtual public ::IceProxy::omero::cmd::Response
{
public:
    
    ::IceInternal::ProxyHandle<SaveRsp> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SaveRsp*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<SaveRsp*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SaveRsp> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SaveRsp*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<SaveRsp*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SaveRsp> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SaveRsp*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<SaveRsp*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SaveRsp> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SaveRsp*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<SaveRsp*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SaveRsp> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SaveRsp*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<SaveRsp*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SaveRsp> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SaveRsp*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<SaveRsp*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SaveRsp> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SaveRsp*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<SaveRsp*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SaveRsp> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SaveRsp*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<SaveRsp*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SaveRsp> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SaveRsp*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<SaveRsp*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SaveRsp> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SaveRsp*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<SaveRsp*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SaveRsp> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SaveRsp*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<SaveRsp*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SaveRsp> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SaveRsp*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<SaveRsp*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SaveRsp> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SaveRsp*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<SaveRsp*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SaveRsp> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SaveRsp*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<SaveRsp*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SaveRsp> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SaveRsp*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<SaveRsp*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SaveRsp> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SaveRsp*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<SaveRsp*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SaveRsp> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SaveRsp*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<SaveRsp*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SaveRsp> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SaveRsp*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<SaveRsp*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SaveRsp> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SaveRsp*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<SaveRsp*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace api
{

class IUpdate : virtual public ::IceDelegate::omero::api::ServiceInterface
{
public:

    virtual void saveObject(const ::omero::model::IObjectPtr&, const ::Ice::Context*) = 0;

    virtual void saveCollection(const ::omero::api::IObjectList&, const ::Ice::Context*) = 0;

    virtual ::omero::model::IObjectPtr saveAndReturnObject(const ::omero::model::IObjectPtr&, const ::Ice::Context*) = 0;

    virtual void saveArray(const ::omero::api::IObjectList&, const ::Ice::Context*) = 0;

    virtual ::omero::api::IObjectList saveAndReturnArray(const ::omero::api::IObjectList&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::LongList saveAndReturnIds(const ::omero::api::IObjectList&, const ::Ice::Context*) = 0;

    virtual void deleteObject(const ::omero::model::IObjectPtr&, const ::Ice::Context*) = 0;

    virtual void indexObject(const ::omero::model::IObjectPtr&, const ::Ice::Context*) = 0;
};

class Save : virtual public ::IceDelegate::omero::cmd::Request
{
public:
};

class SaveRsp : virtual public ::IceDelegate::omero::cmd::Response
{
public:
};

}

}

}

namespace IceDelegateM
{

namespace omero
{

namespace api
{

class IUpdate : virtual public ::IceDelegate::omero::api::IUpdate,
                virtual public ::IceDelegateM::omero::api::ServiceInterface
{
public:

    virtual void saveObject(const ::omero::model::IObjectPtr&, const ::Ice::Context*);

    virtual void saveCollection(const ::omero::api::IObjectList&, const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr saveAndReturnObject(const ::omero::model::IObjectPtr&, const ::Ice::Context*);

    virtual void saveArray(const ::omero::api::IObjectList&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList saveAndReturnArray(const ::omero::api::IObjectList&, const ::Ice::Context*);

    virtual ::omero::sys::LongList saveAndReturnIds(const ::omero::api::IObjectList&, const ::Ice::Context*);

    virtual void deleteObject(const ::omero::model::IObjectPtr&, const ::Ice::Context*);

    virtual void indexObject(const ::omero::model::IObjectPtr&, const ::Ice::Context*);
};

class Save : virtual public ::IceDelegate::omero::api::Save,
             virtual public ::IceDelegateM::omero::cmd::Request
{
public:
};

class SaveRsp : virtual public ::IceDelegate::omero::api::SaveRsp,
                virtual public ::IceDelegateM::omero::cmd::Response
{
public:
};

}

}

}

namespace IceDelegateD
{

namespace omero
{

namespace api
{

class IUpdate : virtual public ::IceDelegate::omero::api::IUpdate,
                virtual public ::IceDelegateD::omero::api::ServiceInterface
{
public:

    virtual void saveObject(const ::omero::model::IObjectPtr&, const ::Ice::Context*);

    virtual void saveCollection(const ::omero::api::IObjectList&, const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr saveAndReturnObject(const ::omero::model::IObjectPtr&, const ::Ice::Context*);

    virtual void saveArray(const ::omero::api::IObjectList&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList saveAndReturnArray(const ::omero::api::IObjectList&, const ::Ice::Context*);

    virtual ::omero::sys::LongList saveAndReturnIds(const ::omero::api::IObjectList&, const ::Ice::Context*);

    virtual void deleteObject(const ::omero::model::IObjectPtr&, const ::Ice::Context*);

    virtual void indexObject(const ::omero::model::IObjectPtr&, const ::Ice::Context*);
};

class Save : virtual public ::IceDelegate::omero::api::Save,
             virtual public ::IceDelegateD::omero::cmd::Request
{
public:
};

class SaveRsp : virtual public ::IceDelegate::omero::api::SaveRsp,
                virtual public ::IceDelegateD::omero::cmd::Response
{
public:
};

}

}

}

namespace omero
{

namespace api
{

class IUpdate : virtual public ::omero::api::ServiceInterface
{
public:

    typedef IUpdatePrx ProxyType;
    typedef IUpdatePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void saveObject_async(const ::omero::api::AMD_IUpdate_saveObjectPtr&, const ::omero::model::IObjectPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___saveObject(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void saveCollection_async(const ::omero::api::AMD_IUpdate_saveCollectionPtr&, const ::omero::api::IObjectList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___saveCollection(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void saveAndReturnObject_async(const ::omero::api::AMD_IUpdate_saveAndReturnObjectPtr&, const ::omero::model::IObjectPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___saveAndReturnObject(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void saveArray_async(const ::omero::api::AMD_IUpdate_saveArrayPtr&, const ::omero::api::IObjectList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___saveArray(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void saveAndReturnArray_async(const ::omero::api::AMD_IUpdate_saveAndReturnArrayPtr&, const ::omero::api::IObjectList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___saveAndReturnArray(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void saveAndReturnIds_async(const ::omero::api::AMD_IUpdate_saveAndReturnIdsPtr&, const ::omero::api::IObjectList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___saveAndReturnIds(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void deleteObject_async(const ::omero::api::AMD_IUpdate_deleteObjectPtr&, const ::omero::model::IObjectPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___deleteObject(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void indexObject_async(const ::omero::api::AMD_IUpdate_indexObjectPtr&, const ::omero::model::IObjectPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___indexObject(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class Save : virtual public ::omero::cmd::Request
{
public:

    typedef SavePrx ProxyType;
    typedef SavePtr PointerType;
    
    Save() {}
    explicit Save(const ::omero::model::IObjectPtr&);
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

    virtual ~Save() {}

    friend class Save__staticInit;

public:

    ::omero::model::IObjectPtr obj;
};

class Save__staticInit
{
public:

    ::omero::api::Save _init;
};

static Save__staticInit _Save_init;

class SaveRsp : virtual public ::omero::cmd::Response
{
public:

    typedef SaveRspPrx ProxyType;
    typedef SaveRspPtr PointerType;
    
    SaveRsp() {}
    explicit SaveRsp(const ::omero::model::IObjectPtr&);
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

    virtual ~SaveRsp() {}

public:

    ::omero::model::IObjectPtr obj;
};

}

}

#endif
