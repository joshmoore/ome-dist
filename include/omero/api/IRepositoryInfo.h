// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `IRepositoryInfo.ice'

#ifndef __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_IRepositoryInfo_h__
#define __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_IRepositoryInfo_h__

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

namespace api
{

class IRepositoryInfo;

}

}

}

namespace omero
{

namespace api
{

class IRepositoryInfo;
bool operator==(const IRepositoryInfo&, const IRepositoryInfo&);
bool operator<(const IRepositoryInfo&, const IRepositoryInfo&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::api::IRepositoryInfo*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::IRepositoryInfo*);

}

namespace omero
{

namespace api
{

typedef ::IceInternal::Handle< ::omero::api::IRepositoryInfo> IRepositoryInfoPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::IRepositoryInfo> IRepositoryInfoPrx;

void __read(::IceInternal::BasicStream*, IRepositoryInfoPrx&);
void __patch__IRepositoryInfoPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace api
{

class AMI_IRepositoryInfo_getUsedSpaceInKilobytes : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRepositoryInfoPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRepositoryInfo_getUsedSpaceInKilobytes> AMI_IRepositoryInfo_getUsedSpaceInKilobytesPtr;

class AMD_IRepositoryInfo_getUsedSpaceInKilobytes : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRepositoryInfo_getUsedSpaceInKilobytes> AMD_IRepositoryInfo_getUsedSpaceInKilobytesPtr;

class AMI_IRepositoryInfo_getFreeSpaceInKilobytes : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRepositoryInfoPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRepositoryInfo_getFreeSpaceInKilobytes> AMI_IRepositoryInfo_getFreeSpaceInKilobytesPtr;

class AMD_IRepositoryInfo_getFreeSpaceInKilobytes : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRepositoryInfo_getFreeSpaceInKilobytes> AMD_IRepositoryInfo_getFreeSpaceInKilobytesPtr;

class AMI_IRepositoryInfo_getUsageFraction : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Double) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRepositoryInfoPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRepositoryInfo_getUsageFraction> AMI_IRepositoryInfo_getUsageFractionPtr;

class AMD_IRepositoryInfo_getUsageFraction : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Double) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRepositoryInfo_getUsageFraction> AMD_IRepositoryInfo_getUsageFractionPtr;

class AMI_IRepositoryInfo_sanityCheckRepository : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRepositoryInfoPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRepositoryInfo_sanityCheckRepository> AMI_IRepositoryInfo_sanityCheckRepositoryPtr;

class AMD_IRepositoryInfo_sanityCheckRepository : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRepositoryInfo_sanityCheckRepository> AMD_IRepositoryInfo_sanityCheckRepositoryPtr;

class AMI_IRepositoryInfo_removeUnusedFiles : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRepositoryInfoPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRepositoryInfo_removeUnusedFiles> AMI_IRepositoryInfo_removeUnusedFilesPtr;

class AMD_IRepositoryInfo_removeUnusedFiles : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRepositoryInfo_removeUnusedFiles> AMD_IRepositoryInfo_removeUnusedFilesPtr;

}

}

namespace IceAsync
{

namespace omero
{

namespace api
{

class AMD_IRepositoryInfo_getUsedSpaceInKilobytes : public ::omero::api::AMD_IRepositoryInfo_getUsedSpaceInKilobytes, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRepositoryInfo_getUsedSpaceInKilobytes(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Long);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRepositoryInfo_getFreeSpaceInKilobytes : public ::omero::api::AMD_IRepositoryInfo_getFreeSpaceInKilobytes, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRepositoryInfo_getFreeSpaceInKilobytes(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Long);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRepositoryInfo_getUsageFraction : public ::omero::api::AMD_IRepositoryInfo_getUsageFraction, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRepositoryInfo_getUsageFraction(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Double);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRepositoryInfo_sanityCheckRepository : public ::omero::api::AMD_IRepositoryInfo_sanityCheckRepository, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRepositoryInfo_sanityCheckRepository(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRepositoryInfo_removeUnusedFiles : public ::omero::api::AMD_IRepositoryInfo_removeUnusedFiles, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRepositoryInfo_removeUnusedFiles(::IceInternal::Incoming&);

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

class IRepositoryInfo : virtual public ::IceProxy::omero::api::ServiceInterface
{
public:

    ::Ice::Long getUsedSpaceInKilobytes()
    {
        return getUsedSpaceInKilobytes(0);
    }
    ::Ice::Long getUsedSpaceInKilobytes(const ::Ice::Context& __ctx)
    {
        return getUsedSpaceInKilobytes(&__ctx);
    }
    
private:

    ::Ice::Long getUsedSpaceInKilobytes(const ::Ice::Context*);
    
public:
    bool getUsedSpaceInKilobytes_async(const ::omero::api::AMI_IRepositoryInfo_getUsedSpaceInKilobytesPtr&);
    bool getUsedSpaceInKilobytes_async(const ::omero::api::AMI_IRepositoryInfo_getUsedSpaceInKilobytesPtr&, const ::Ice::Context&);

    ::Ice::Long getFreeSpaceInKilobytes()
    {
        return getFreeSpaceInKilobytes(0);
    }
    ::Ice::Long getFreeSpaceInKilobytes(const ::Ice::Context& __ctx)
    {
        return getFreeSpaceInKilobytes(&__ctx);
    }
    
private:

    ::Ice::Long getFreeSpaceInKilobytes(const ::Ice::Context*);
    
public:
    bool getFreeSpaceInKilobytes_async(const ::omero::api::AMI_IRepositoryInfo_getFreeSpaceInKilobytesPtr&);
    bool getFreeSpaceInKilobytes_async(const ::omero::api::AMI_IRepositoryInfo_getFreeSpaceInKilobytesPtr&, const ::Ice::Context&);

    ::Ice::Double getUsageFraction()
    {
        return getUsageFraction(0);
    }
    ::Ice::Double getUsageFraction(const ::Ice::Context& __ctx)
    {
        return getUsageFraction(&__ctx);
    }
    
private:

    ::Ice::Double getUsageFraction(const ::Ice::Context*);
    
public:
    bool getUsageFraction_async(const ::omero::api::AMI_IRepositoryInfo_getUsageFractionPtr&);
    bool getUsageFraction_async(const ::omero::api::AMI_IRepositoryInfo_getUsageFractionPtr&, const ::Ice::Context&);

    void sanityCheckRepository()
    {
        sanityCheckRepository(0);
    }
    void sanityCheckRepository(const ::Ice::Context& __ctx)
    {
        sanityCheckRepository(&__ctx);
    }
    
private:

    void sanityCheckRepository(const ::Ice::Context*);
    
public:
    bool sanityCheckRepository_async(const ::omero::api::AMI_IRepositoryInfo_sanityCheckRepositoryPtr&);
    bool sanityCheckRepository_async(const ::omero::api::AMI_IRepositoryInfo_sanityCheckRepositoryPtr&, const ::Ice::Context&);

    void removeUnusedFiles()
    {
        removeUnusedFiles(0);
    }
    void removeUnusedFiles(const ::Ice::Context& __ctx)
    {
        removeUnusedFiles(&__ctx);
    }
    
private:

    void removeUnusedFiles(const ::Ice::Context*);
    
public:
    bool removeUnusedFiles_async(const ::omero::api::AMI_IRepositoryInfo_removeUnusedFilesPtr&);
    bool removeUnusedFiles_async(const ::omero::api::AMI_IRepositoryInfo_removeUnusedFilesPtr&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<IRepositoryInfo> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRepositoryInfo*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<IRepositoryInfo*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRepositoryInfo> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRepositoryInfo*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<IRepositoryInfo*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRepositoryInfo> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRepositoryInfo*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<IRepositoryInfo*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRepositoryInfo> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRepositoryInfo*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<IRepositoryInfo*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRepositoryInfo> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRepositoryInfo*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<IRepositoryInfo*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRepositoryInfo> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRepositoryInfo*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<IRepositoryInfo*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRepositoryInfo> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRepositoryInfo*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<IRepositoryInfo*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRepositoryInfo> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRepositoryInfo*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<IRepositoryInfo*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRepositoryInfo> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRepositoryInfo*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<IRepositoryInfo*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRepositoryInfo> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRepositoryInfo*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<IRepositoryInfo*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRepositoryInfo> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRepositoryInfo*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<IRepositoryInfo*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRepositoryInfo> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRepositoryInfo*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<IRepositoryInfo*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRepositoryInfo> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRepositoryInfo*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<IRepositoryInfo*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRepositoryInfo> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRepositoryInfo*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<IRepositoryInfo*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRepositoryInfo> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRepositoryInfo*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<IRepositoryInfo*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRepositoryInfo> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRepositoryInfo*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<IRepositoryInfo*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRepositoryInfo> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRepositoryInfo*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<IRepositoryInfo*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRepositoryInfo> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRepositoryInfo*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<IRepositoryInfo*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRepositoryInfo> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRepositoryInfo*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<IRepositoryInfo*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class IRepositoryInfo : virtual public ::IceDelegate::omero::api::ServiceInterface
{
public:

    virtual ::Ice::Long getUsedSpaceInKilobytes(const ::Ice::Context*) = 0;

    virtual ::Ice::Long getFreeSpaceInKilobytes(const ::Ice::Context*) = 0;

    virtual ::Ice::Double getUsageFraction(const ::Ice::Context*) = 0;

    virtual void sanityCheckRepository(const ::Ice::Context*) = 0;

    virtual void removeUnusedFiles(const ::Ice::Context*) = 0;
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

class IRepositoryInfo : virtual public ::IceDelegate::omero::api::IRepositoryInfo,
                        virtual public ::IceDelegateM::omero::api::ServiceInterface
{
public:

    virtual ::Ice::Long getUsedSpaceInKilobytes(const ::Ice::Context*);

    virtual ::Ice::Long getFreeSpaceInKilobytes(const ::Ice::Context*);

    virtual ::Ice::Double getUsageFraction(const ::Ice::Context*);

    virtual void sanityCheckRepository(const ::Ice::Context*);

    virtual void removeUnusedFiles(const ::Ice::Context*);
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

class IRepositoryInfo : virtual public ::IceDelegate::omero::api::IRepositoryInfo,
                        virtual public ::IceDelegateD::omero::api::ServiceInterface
{
public:

    virtual ::Ice::Long getUsedSpaceInKilobytes(const ::Ice::Context*);

    virtual ::Ice::Long getFreeSpaceInKilobytes(const ::Ice::Context*);

    virtual ::Ice::Double getUsageFraction(const ::Ice::Context*);

    virtual void sanityCheckRepository(const ::Ice::Context*);

    virtual void removeUnusedFiles(const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace api
{

class IRepositoryInfo : virtual public ::omero::api::ServiceInterface
{
public:

    typedef IRepositoryInfoPrx ProxyType;
    typedef IRepositoryInfoPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void getUsedSpaceInKilobytes_async(const ::omero::api::AMD_IRepositoryInfo_getUsedSpaceInKilobytesPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getUsedSpaceInKilobytes(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getFreeSpaceInKilobytes_async(const ::omero::api::AMD_IRepositoryInfo_getFreeSpaceInKilobytesPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFreeSpaceInKilobytes(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getUsageFraction_async(const ::omero::api::AMD_IRepositoryInfo_getUsageFractionPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getUsageFraction(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void sanityCheckRepository_async(const ::omero::api::AMD_IRepositoryInfo_sanityCheckRepositoryPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sanityCheckRepository(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeUnusedFiles_async(const ::omero::api::AMD_IRepositoryInfo_removeUnusedFilesPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeUnusedFiles(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
