// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `RawFileStore.ice'

#ifndef __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_RawFileStore_h__
#define __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_RawFileStore_h__

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
#include <omero/ModelF.h>
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

class RawFileStore;

}

}

}

namespace omero
{

namespace api
{

class RawFileStore;
bool operator==(const RawFileStore&, const RawFileStore&);
bool operator<(const RawFileStore&, const RawFileStore&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::api::RawFileStore*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::RawFileStore*);

}

namespace omero
{

namespace api
{

typedef ::IceInternal::Handle< ::omero::api::RawFileStore> RawFileStorePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::RawFileStore> RawFileStorePrx;

void __read(::IceInternal::BasicStream*, RawFileStorePrx&);
void __patch__RawFileStorePtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace api
{

class AMI_RawFileStore_getFileId : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::RLongPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawFileStorePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawFileStore_getFileId> AMI_RawFileStore_getFileIdPtr;

class AMD_RawFileStore_getFileId : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::RLongPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawFileStore_getFileId> AMD_RawFileStore_getFileIdPtr;

class AMI_RawFileStore_setFileId : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawFileStorePrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawFileStore_setFileId> AMI_RawFileStore_setFileIdPtr;

class AMD_RawFileStore_setFileId : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawFileStore_setFileId> AMD_RawFileStore_setFileIdPtr;

class AMI_RawFileStore_read : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawFileStorePrx&, ::Ice::Long, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawFileStore_read> AMI_RawFileStore_readPtr;

class AMD_RawFileStore_read : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawFileStore_read> AMD_RawFileStore_readPtr;

class AMI_RawFileStore_size : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawFileStorePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawFileStore_size> AMI_RawFileStore_sizePtr;

class AMD_RawFileStore_size : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawFileStore_size> AMD_RawFileStore_sizePtr;

class AMI_RawFileStore_truncate : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawFileStorePrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawFileStore_truncate> AMI_RawFileStore_truncatePtr;

class AMD_RawFileStore_truncate : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawFileStore_truncate> AMD_RawFileStore_truncatePtr;

class AMI_RawFileStore_write : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawFileStorePrx&, const ::Ice::ByteSeq&, ::Ice::Long, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawFileStore_write> AMI_RawFileStore_writePtr;

class AMD_RawFileStore_write : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawFileStore_write> AMD_RawFileStore_writePtr;

class AMI_RawFileStore_exists : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawFileStorePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawFileStore_exists> AMI_RawFileStore_existsPtr;

class AMD_RawFileStore_exists : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawFileStore_exists> AMD_RawFileStore_existsPtr;

class AMI_RawFileStore_save : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::OriginalFilePtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawFileStorePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawFileStore_save> AMI_RawFileStore_savePtr;

class AMD_RawFileStore_save : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::OriginalFilePtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawFileStore_save> AMD_RawFileStore_savePtr;

}

}

namespace IceAsync
{

namespace omero
{

namespace api
{

class AMD_RawFileStore_getFileId : public ::omero::api::AMD_RawFileStore_getFileId, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawFileStore_getFileId(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::RLongPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawFileStore_setFileId : public ::omero::api::AMD_RawFileStore_setFileId, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawFileStore_setFileId(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawFileStore_read : public ::omero::api::AMD_RawFileStore_read, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawFileStore_read(::IceInternal::Incoming&);

    virtual void ice_response(const ::Ice::ByteSeq&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawFileStore_size : public ::omero::api::AMD_RawFileStore_size, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawFileStore_size(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Long);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawFileStore_truncate : public ::omero::api::AMD_RawFileStore_truncate, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawFileStore_truncate(::IceInternal::Incoming&);

    virtual void ice_response(bool);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawFileStore_write : public ::omero::api::AMD_RawFileStore_write, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawFileStore_write(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawFileStore_exists : public ::omero::api::AMD_RawFileStore_exists, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawFileStore_exists(::IceInternal::Incoming&);

    virtual void ice_response(bool);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawFileStore_save : public ::omero::api::AMD_RawFileStore_save, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawFileStore_save(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::OriginalFilePtr&);
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

class RawFileStore : virtual public ::IceProxy::omero::api::StatefulServiceInterface
{
public:

    ::omero::RLongPtr getFileId()
    {
        return getFileId(0);
    }
    ::omero::RLongPtr getFileId(const ::Ice::Context& __ctx)
    {
        return getFileId(&__ctx);
    }
    
private:

    ::omero::RLongPtr getFileId(const ::Ice::Context*);
    
public:
    bool getFileId_async(const ::omero::api::AMI_RawFileStore_getFileIdPtr&);
    bool getFileId_async(const ::omero::api::AMI_RawFileStore_getFileIdPtr&, const ::Ice::Context&);

    void setFileId(::Ice::Long fileId)
    {
        setFileId(fileId, 0);
    }
    void setFileId(::Ice::Long fileId, const ::Ice::Context& __ctx)
    {
        setFileId(fileId, &__ctx);
    }
    
private:

    void setFileId(::Ice::Long, const ::Ice::Context*);
    
public:
    bool setFileId_async(const ::omero::api::AMI_RawFileStore_setFileIdPtr&, ::Ice::Long);
    bool setFileId_async(const ::omero::api::AMI_RawFileStore_setFileIdPtr&, ::Ice::Long, const ::Ice::Context&);

    ::Ice::ByteSeq read(::Ice::Long position, ::Ice::Int length)
    {
        return read(position, length, 0);
    }
    ::Ice::ByteSeq read(::Ice::Long position, ::Ice::Int length, const ::Ice::Context& __ctx)
    {
        return read(position, length, &__ctx);
    }
    
private:

    ::Ice::ByteSeq read(::Ice::Long, ::Ice::Int, const ::Ice::Context*);
    
public:
    bool read_async(const ::omero::api::AMI_RawFileStore_readPtr&, ::Ice::Long, ::Ice::Int);
    bool read_async(const ::omero::api::AMI_RawFileStore_readPtr&, ::Ice::Long, ::Ice::Int, const ::Ice::Context&);

    ::Ice::Long size()
    {
        return size(0);
    }
    ::Ice::Long size(const ::Ice::Context& __ctx)
    {
        return size(&__ctx);
    }
    
private:

    ::Ice::Long size(const ::Ice::Context*);
    
public:
    bool size_async(const ::omero::api::AMI_RawFileStore_sizePtr&);
    bool size_async(const ::omero::api::AMI_RawFileStore_sizePtr&, const ::Ice::Context&);

    bool truncate(::Ice::Long length)
    {
        return truncate(length, 0);
    }
    bool truncate(::Ice::Long length, const ::Ice::Context& __ctx)
    {
        return truncate(length, &__ctx);
    }
    
private:

    bool truncate(::Ice::Long, const ::Ice::Context*);
    
public:
    bool truncate_async(const ::omero::api::AMI_RawFileStore_truncatePtr&, ::Ice::Long);
    bool truncate_async(const ::omero::api::AMI_RawFileStore_truncatePtr&, ::Ice::Long, const ::Ice::Context&);

    void write(const ::Ice::ByteSeq& buf, ::Ice::Long position, ::Ice::Int length)
    {
        write(buf, position, length, 0);
    }
    void write(const ::Ice::ByteSeq& buf, ::Ice::Long position, ::Ice::Int length, const ::Ice::Context& __ctx)
    {
        write(buf, position, length, &__ctx);
    }
    
private:

    void write(const ::Ice::ByteSeq&, ::Ice::Long, ::Ice::Int, const ::Ice::Context*);
    
public:
    bool write_async(const ::omero::api::AMI_RawFileStore_writePtr&, const ::Ice::ByteSeq&, ::Ice::Long, ::Ice::Int);
    bool write_async(const ::omero::api::AMI_RawFileStore_writePtr&, const ::Ice::ByteSeq&, ::Ice::Long, ::Ice::Int, const ::Ice::Context&);

    bool exists()
    {
        return exists(0);
    }
    bool exists(const ::Ice::Context& __ctx)
    {
        return exists(&__ctx);
    }
    
private:

    bool exists(const ::Ice::Context*);
    
public:
    bool exists_async(const ::omero::api::AMI_RawFileStore_existsPtr&);
    bool exists_async(const ::omero::api::AMI_RawFileStore_existsPtr&, const ::Ice::Context&);

    ::omero::model::OriginalFilePtr save()
    {
        return save(0);
    }
    ::omero::model::OriginalFilePtr save(const ::Ice::Context& __ctx)
    {
        return save(&__ctx);
    }
    
private:

    ::omero::model::OriginalFilePtr save(const ::Ice::Context*);
    
public:
    bool save_async(const ::omero::api::AMI_RawFileStore_savePtr&);
    bool save_async(const ::omero::api::AMI_RawFileStore_savePtr&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<RawFileStore> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawFileStore*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RawFileStore*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawFileStore> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawFileStore*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RawFileStore*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawFileStore> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawFileStore*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RawFileStore*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawFileStore> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawFileStore*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RawFileStore*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawFileStore> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawFileStore*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RawFileStore*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawFileStore> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawFileStore*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RawFileStore*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawFileStore> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawFileStore*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RawFileStore*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawFileStore> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawFileStore*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RawFileStore*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawFileStore> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawFileStore*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RawFileStore*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawFileStore> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawFileStore*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RawFileStore*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawFileStore> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawFileStore*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RawFileStore*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawFileStore> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawFileStore*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RawFileStore*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawFileStore> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawFileStore*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RawFileStore*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawFileStore> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawFileStore*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RawFileStore*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawFileStore> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawFileStore*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RawFileStore*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawFileStore> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawFileStore*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RawFileStore*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawFileStore> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawFileStore*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RawFileStore*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawFileStore> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawFileStore*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RawFileStore*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawFileStore> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawFileStore*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RawFileStore*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class RawFileStore : virtual public ::IceDelegate::omero::api::StatefulServiceInterface
{
public:

    virtual ::omero::RLongPtr getFileId(const ::Ice::Context*) = 0;

    virtual void setFileId(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::Ice::ByteSeq read(::Ice::Long, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Long size(const ::Ice::Context*) = 0;

    virtual bool truncate(::Ice::Long, const ::Ice::Context*) = 0;

    virtual void write(const ::Ice::ByteSeq&, ::Ice::Long, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual bool exists(const ::Ice::Context*) = 0;

    virtual ::omero::model::OriginalFilePtr save(const ::Ice::Context*) = 0;
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

class RawFileStore : virtual public ::IceDelegate::omero::api::RawFileStore,
                     virtual public ::IceDelegateM::omero::api::StatefulServiceInterface
{
public:

    virtual ::omero::RLongPtr getFileId(const ::Ice::Context*);

    virtual void setFileId(::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::ByteSeq read(::Ice::Long, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Long size(const ::Ice::Context*);

    virtual bool truncate(::Ice::Long, const ::Ice::Context*);

    virtual void write(const ::Ice::ByteSeq&, ::Ice::Long, ::Ice::Int, const ::Ice::Context*);

    virtual bool exists(const ::Ice::Context*);

    virtual ::omero::model::OriginalFilePtr save(const ::Ice::Context*);
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

class RawFileStore : virtual public ::IceDelegate::omero::api::RawFileStore,
                     virtual public ::IceDelegateD::omero::api::StatefulServiceInterface
{
public:

    virtual ::omero::RLongPtr getFileId(const ::Ice::Context*);

    virtual void setFileId(::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::ByteSeq read(::Ice::Long, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Long size(const ::Ice::Context*);

    virtual bool truncate(::Ice::Long, const ::Ice::Context*);

    virtual void write(const ::Ice::ByteSeq&, ::Ice::Long, ::Ice::Int, const ::Ice::Context*);

    virtual bool exists(const ::Ice::Context*);

    virtual ::omero::model::OriginalFilePtr save(const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace api
{

class RawFileStore : virtual public ::omero::api::StatefulServiceInterface
{
public:

    typedef RawFileStorePrx ProxyType;
    typedef RawFileStorePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void getFileId_async(const ::omero::api::AMD_RawFileStore_getFileIdPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFileId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setFileId_async(const ::omero::api::AMD_RawFileStore_setFileIdPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setFileId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void read_async(const ::omero::api::AMD_RawFileStore_readPtr&, ::Ice::Long, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___read(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void size_async(const ::omero::api::AMD_RawFileStore_sizePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___size(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void truncate_async(const ::omero::api::AMD_RawFileStore_truncatePtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___truncate(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void write_async(const ::omero::api::AMD_RawFileStore_writePtr&, const ::Ice::ByteSeq&, ::Ice::Long, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___write(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void exists_async(const ::omero::api::AMD_RawFileStore_existsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___exists(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void save_async(const ::omero::api::AMD_RawFileStore_savePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___save(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
