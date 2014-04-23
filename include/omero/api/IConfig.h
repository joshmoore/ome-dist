// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `IConfig.ice'

#ifndef __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_IConfig_h__
#define __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_IConfig_h__

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
#include <omero/RTypes.h>
#include <omero/ServicesF.h>
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

class IConfig;

}

}

}

namespace omero
{

namespace api
{

class IConfig;
bool operator==(const IConfig&, const IConfig&);
bool operator<(const IConfig&, const IConfig&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::api::IConfig*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::IConfig*);

}

namespace omero
{

namespace api
{

typedef ::IceInternal::Handle< ::omero::api::IConfig> IConfigPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::IConfig> IConfigPrx;

void __read(::IceInternal::BasicStream*, IConfigPrx&);
void __patch__IConfigPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace api
{

class AMI_IConfig_getVersion : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IConfigPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IConfig_getVersion> AMI_IConfig_getVersionPtr;

class AMD_IConfig_getVersion : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::std::string&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IConfig_getVersion> AMD_IConfig_getVersionPtr;

class AMI_IConfig_getConfigValue : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IConfigPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IConfig_getConfigValue> AMI_IConfig_getConfigValuePtr;

class AMD_IConfig_getConfigValue : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::std::string&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IConfig_getConfigValue> AMD_IConfig_getConfigValuePtr;

class AMI_IConfig_setConfigValue : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IConfigPrx&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IConfig_setConfigValue> AMI_IConfig_setConfigValuePtr;

class AMD_IConfig_setConfigValue : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IConfig_setConfigValue> AMD_IConfig_setConfigValuePtr;

class AMI_IConfig_setConfigValueIfEquals : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IConfigPrx&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IConfig_setConfigValueIfEquals> AMI_IConfig_setConfigValueIfEqualsPtr;

class AMD_IConfig_setConfigValueIfEquals : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IConfig_setConfigValueIfEquals> AMD_IConfig_setConfigValueIfEqualsPtr;

class AMI_IConfig_getDatabaseUuid : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IConfigPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IConfig_getDatabaseUuid> AMI_IConfig_getDatabaseUuidPtr;

class AMD_IConfig_getDatabaseUuid : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::std::string&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IConfig_getDatabaseUuid> AMD_IConfig_getDatabaseUuidPtr;

class AMI_IConfig_getDatabaseTime : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::RTimePtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IConfigPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IConfig_getDatabaseTime> AMI_IConfig_getDatabaseTimePtr;

class AMD_IConfig_getDatabaseTime : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::RTimePtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IConfig_getDatabaseTime> AMD_IConfig_getDatabaseTimePtr;

class AMI_IConfig_getServerTime : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::RTimePtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IConfigPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IConfig_getServerTime> AMI_IConfig_getServerTimePtr;

class AMD_IConfig_getServerTime : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::RTimePtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IConfig_getServerTime> AMD_IConfig_getServerTimePtr;

}

}

namespace IceAsync
{

namespace omero
{

namespace api
{

class AMD_IConfig_getVersion : public ::omero::api::AMD_IConfig_getVersion, public ::IceInternal::IncomingAsync
{
public:

    AMD_IConfig_getVersion(::IceInternal::Incoming&);

    virtual void ice_response(const ::std::string&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IConfig_getConfigValue : public ::omero::api::AMD_IConfig_getConfigValue, public ::IceInternal::IncomingAsync
{
public:

    AMD_IConfig_getConfigValue(::IceInternal::Incoming&);

    virtual void ice_response(const ::std::string&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IConfig_setConfigValue : public ::omero::api::AMD_IConfig_setConfigValue, public ::IceInternal::IncomingAsync
{
public:

    AMD_IConfig_setConfigValue(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IConfig_setConfigValueIfEquals : public ::omero::api::AMD_IConfig_setConfigValueIfEquals, public ::IceInternal::IncomingAsync
{
public:

    AMD_IConfig_setConfigValueIfEquals(::IceInternal::Incoming&);

    virtual void ice_response(bool);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IConfig_getDatabaseUuid : public ::omero::api::AMD_IConfig_getDatabaseUuid, public ::IceInternal::IncomingAsync
{
public:

    AMD_IConfig_getDatabaseUuid(::IceInternal::Incoming&);

    virtual void ice_response(const ::std::string&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IConfig_getDatabaseTime : public ::omero::api::AMD_IConfig_getDatabaseTime, public ::IceInternal::IncomingAsync
{
public:

    AMD_IConfig_getDatabaseTime(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::RTimePtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IConfig_getServerTime : public ::omero::api::AMD_IConfig_getServerTime, public ::IceInternal::IncomingAsync
{
public:

    AMD_IConfig_getServerTime(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::RTimePtr&);
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

class IConfig : virtual public ::IceProxy::omero::api::ServiceInterface
{
public:

    ::std::string getVersion()
    {
        return getVersion(0);
    }
    ::std::string getVersion(const ::Ice::Context& __ctx)
    {
        return getVersion(&__ctx);
    }
    
private:

    ::std::string getVersion(const ::Ice::Context*);
    
public:
    bool getVersion_async(const ::omero::api::AMI_IConfig_getVersionPtr&);
    bool getVersion_async(const ::omero::api::AMI_IConfig_getVersionPtr&, const ::Ice::Context&);

    ::std::string getConfigValue(const ::std::string& key)
    {
        return getConfigValue(key, 0);
    }
    ::std::string getConfigValue(const ::std::string& key, const ::Ice::Context& __ctx)
    {
        return getConfigValue(key, &__ctx);
    }
    
private:

    ::std::string getConfigValue(const ::std::string&, const ::Ice::Context*);
    
public:
    bool getConfigValue_async(const ::omero::api::AMI_IConfig_getConfigValuePtr&, const ::std::string&);
    bool getConfigValue_async(const ::omero::api::AMI_IConfig_getConfigValuePtr&, const ::std::string&, const ::Ice::Context&);

    void setConfigValue(const ::std::string& key, const ::std::string& value)
    {
        setConfigValue(key, value, 0);
    }
    void setConfigValue(const ::std::string& key, const ::std::string& value, const ::Ice::Context& __ctx)
    {
        setConfigValue(key, value, &__ctx);
    }
    
private:

    void setConfigValue(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:
    bool setConfigValue_async(const ::omero::api::AMI_IConfig_setConfigValuePtr&, const ::std::string&, const ::std::string&);
    bool setConfigValue_async(const ::omero::api::AMI_IConfig_setConfigValuePtr&, const ::std::string&, const ::std::string&, const ::Ice::Context&);

    bool setConfigValueIfEquals(const ::std::string& key, const ::std::string& value, const ::std::string& test)
    {
        return setConfigValueIfEquals(key, value, test, 0);
    }
    bool setConfigValueIfEquals(const ::std::string& key, const ::std::string& value, const ::std::string& test, const ::Ice::Context& __ctx)
    {
        return setConfigValueIfEquals(key, value, test, &__ctx);
    }
    
private:

    bool setConfigValueIfEquals(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:
    bool setConfigValueIfEquals_async(const ::omero::api::AMI_IConfig_setConfigValueIfEqualsPtr&, const ::std::string&, const ::std::string&, const ::std::string&);
    bool setConfigValueIfEquals_async(const ::omero::api::AMI_IConfig_setConfigValueIfEqualsPtr&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context&);

    ::std::string getDatabaseUuid()
    {
        return getDatabaseUuid(0);
    }
    ::std::string getDatabaseUuid(const ::Ice::Context& __ctx)
    {
        return getDatabaseUuid(&__ctx);
    }
    
private:

    ::std::string getDatabaseUuid(const ::Ice::Context*);
    
public:
    bool getDatabaseUuid_async(const ::omero::api::AMI_IConfig_getDatabaseUuidPtr&);
    bool getDatabaseUuid_async(const ::omero::api::AMI_IConfig_getDatabaseUuidPtr&, const ::Ice::Context&);

    ::omero::RTimePtr getDatabaseTime()
    {
        return getDatabaseTime(0);
    }
    ::omero::RTimePtr getDatabaseTime(const ::Ice::Context& __ctx)
    {
        return getDatabaseTime(&__ctx);
    }
    
private:

    ::omero::RTimePtr getDatabaseTime(const ::Ice::Context*);
    
public:
    bool getDatabaseTime_async(const ::omero::api::AMI_IConfig_getDatabaseTimePtr&);
    bool getDatabaseTime_async(const ::omero::api::AMI_IConfig_getDatabaseTimePtr&, const ::Ice::Context&);

    ::omero::RTimePtr getServerTime()
    {
        return getServerTime(0);
    }
    ::omero::RTimePtr getServerTime(const ::Ice::Context& __ctx)
    {
        return getServerTime(&__ctx);
    }
    
private:

    ::omero::RTimePtr getServerTime(const ::Ice::Context*);
    
public:
    bool getServerTime_async(const ::omero::api::AMI_IConfig_getServerTimePtr&);
    bool getServerTime_async(const ::omero::api::AMI_IConfig_getServerTimePtr&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<IConfig> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IConfig*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<IConfig*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IConfig> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IConfig*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<IConfig*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IConfig> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IConfig*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<IConfig*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IConfig> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IConfig*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<IConfig*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IConfig> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IConfig*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<IConfig*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IConfig> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IConfig*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<IConfig*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IConfig> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IConfig*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<IConfig*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IConfig> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IConfig*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<IConfig*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IConfig> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IConfig*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<IConfig*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IConfig> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IConfig*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<IConfig*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IConfig> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IConfig*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<IConfig*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IConfig> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IConfig*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<IConfig*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IConfig> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IConfig*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<IConfig*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IConfig> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IConfig*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<IConfig*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IConfig> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IConfig*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<IConfig*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IConfig> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IConfig*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<IConfig*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IConfig> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IConfig*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<IConfig*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IConfig> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IConfig*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<IConfig*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IConfig> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IConfig*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<IConfig*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class IConfig : virtual public ::IceDelegate::omero::api::ServiceInterface
{
public:

    virtual ::std::string getVersion(const ::Ice::Context*) = 0;

    virtual ::std::string getConfigValue(const ::std::string&, const ::Ice::Context*) = 0;

    virtual void setConfigValue(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual bool setConfigValueIfEquals(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::std::string getDatabaseUuid(const ::Ice::Context*) = 0;

    virtual ::omero::RTimePtr getDatabaseTime(const ::Ice::Context*) = 0;

    virtual ::omero::RTimePtr getServerTime(const ::Ice::Context*) = 0;
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

class IConfig : virtual public ::IceDelegate::omero::api::IConfig,
                virtual public ::IceDelegateM::omero::api::ServiceInterface
{
public:

    virtual ::std::string getVersion(const ::Ice::Context*);

    virtual ::std::string getConfigValue(const ::std::string&, const ::Ice::Context*);

    virtual void setConfigValue(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual bool setConfigValueIfEquals(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::std::string getDatabaseUuid(const ::Ice::Context*);

    virtual ::omero::RTimePtr getDatabaseTime(const ::Ice::Context*);

    virtual ::omero::RTimePtr getServerTime(const ::Ice::Context*);
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

class IConfig : virtual public ::IceDelegate::omero::api::IConfig,
                virtual public ::IceDelegateD::omero::api::ServiceInterface
{
public:

    virtual ::std::string getVersion(const ::Ice::Context*);

    virtual ::std::string getConfigValue(const ::std::string&, const ::Ice::Context*);

    virtual void setConfigValue(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual bool setConfigValueIfEquals(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::std::string getDatabaseUuid(const ::Ice::Context*);

    virtual ::omero::RTimePtr getDatabaseTime(const ::Ice::Context*);

    virtual ::omero::RTimePtr getServerTime(const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace api
{

class IConfig : virtual public ::omero::api::ServiceInterface
{
public:

    typedef IConfigPrx ProxyType;
    typedef IConfigPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void getVersion_async(const ::omero::api::AMD_IConfig_getVersionPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getVersion(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getConfigValue_async(const ::omero::api::AMD_IConfig_getConfigValuePtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getConfigValue(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setConfigValue_async(const ::omero::api::AMD_IConfig_setConfigValuePtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setConfigValue(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setConfigValueIfEquals_async(const ::omero::api::AMD_IConfig_setConfigValueIfEqualsPtr&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setConfigValueIfEquals(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getDatabaseUuid_async(const ::omero::api::AMD_IConfig_getDatabaseUuidPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getDatabaseUuid(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getDatabaseTime_async(const ::omero::api::AMD_IConfig_getDatabaseTimePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getDatabaseTime(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getServerTime_async(const ::omero::api::AMD_IConfig_getServerTimePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getServerTime(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
