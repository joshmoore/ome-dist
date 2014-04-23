// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `PyramidService.ice'

#ifndef __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_PyramidService_h__
#define __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_PyramidService_h__

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

class ResolutionDescription;

class PyramidService;

}

}

}

namespace omero
{

namespace api
{

class ResolutionDescription;
bool operator==(const ResolutionDescription&, const ResolutionDescription&);
bool operator<(const ResolutionDescription&, const ResolutionDescription&);

class PyramidService;
bool operator==(const PyramidService&, const PyramidService&);
bool operator<(const PyramidService&, const PyramidService&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::api::ResolutionDescription*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::ResolutionDescription*);

::Ice::Object* upCast(::omero::api::PyramidService*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::PyramidService*);

}

namespace omero
{

namespace api
{

typedef ::IceInternal::Handle< ::omero::api::ResolutionDescription> ResolutionDescriptionPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::ResolutionDescription> ResolutionDescriptionPrx;

void __read(::IceInternal::BasicStream*, ResolutionDescriptionPrx&);
void __patch__ResolutionDescriptionPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::PyramidService> PyramidServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::PyramidService> PyramidServicePrx;

void __read(::IceInternal::BasicStream*, PyramidServicePrx&);
void __patch__PyramidServicePtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace api
{

typedef ::std::vector< ::omero::api::ResolutionDescriptionPtr> ResolutionDescriptions;
void __writeResolutionDescriptions(::IceInternal::BasicStream*, const ::omero::api::ResolutionDescriptionPtr*, const ::omero::api::ResolutionDescriptionPtr*);
void __readResolutionDescriptions(::IceInternal::BasicStream*, ResolutionDescriptions&);

}

}

namespace omero
{

namespace api
{

class AMI_PyramidService_requiresPixelsPyramid : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::PyramidServicePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_PyramidService_requiresPixelsPyramid> AMI_PyramidService_requiresPixelsPyramidPtr;

class AMD_PyramidService_requiresPixelsPyramid : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_PyramidService_requiresPixelsPyramid> AMD_PyramidService_requiresPixelsPyramidPtr;

class AMI_PyramidService_getResolutionLevels : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::PyramidServicePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_PyramidService_getResolutionLevels> AMI_PyramidService_getResolutionLevelsPtr;

class AMD_PyramidService_getResolutionLevels : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_PyramidService_getResolutionLevels> AMD_PyramidService_getResolutionLevelsPtr;

class AMI_PyramidService_getResolutionDescriptions : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::ResolutionDescriptions&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::PyramidServicePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_PyramidService_getResolutionDescriptions> AMI_PyramidService_getResolutionDescriptionsPtr;

class AMD_PyramidService_getResolutionDescriptions : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::ResolutionDescriptions&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_PyramidService_getResolutionDescriptions> AMD_PyramidService_getResolutionDescriptionsPtr;

class AMI_PyramidService_getResolutionLevel : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::PyramidServicePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_PyramidService_getResolutionLevel> AMI_PyramidService_getResolutionLevelPtr;

class AMD_PyramidService_getResolutionLevel : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_PyramidService_getResolutionLevel> AMD_PyramidService_getResolutionLevelPtr;

class AMI_PyramidService_setResolutionLevel : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::PyramidServicePrx&, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_PyramidService_setResolutionLevel> AMI_PyramidService_setResolutionLevelPtr;

class AMD_PyramidService_setResolutionLevel : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_PyramidService_setResolutionLevel> AMD_PyramidService_setResolutionLevelPtr;

class AMI_PyramidService_getTileSize : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Ice::IntSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::PyramidServicePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_PyramidService_getTileSize> AMI_PyramidService_getTileSizePtr;

class AMD_PyramidService_getTileSize : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::Ice::IntSeq&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_PyramidService_getTileSize> AMD_PyramidService_getTileSizePtr;

}

}

namespace IceAsync
{

namespace omero
{

namespace api
{

class AMD_PyramidService_requiresPixelsPyramid : public ::omero::api::AMD_PyramidService_requiresPixelsPyramid, public ::IceInternal::IncomingAsync
{
public:

    AMD_PyramidService_requiresPixelsPyramid(::IceInternal::Incoming&);

    virtual void ice_response(bool);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_PyramidService_getResolutionLevels : public ::omero::api::AMD_PyramidService_getResolutionLevels, public ::IceInternal::IncomingAsync
{
public:

    AMD_PyramidService_getResolutionLevels(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_PyramidService_getResolutionDescriptions : public ::omero::api::AMD_PyramidService_getResolutionDescriptions, public ::IceInternal::IncomingAsync
{
public:

    AMD_PyramidService_getResolutionDescriptions(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::ResolutionDescriptions&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_PyramidService_getResolutionLevel : public ::omero::api::AMD_PyramidService_getResolutionLevel, public ::IceInternal::IncomingAsync
{
public:

    AMD_PyramidService_getResolutionLevel(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_PyramidService_setResolutionLevel : public ::omero::api::AMD_PyramidService_setResolutionLevel, public ::IceInternal::IncomingAsync
{
public:

    AMD_PyramidService_setResolutionLevel(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_PyramidService_getTileSize : public ::omero::api::AMD_PyramidService_getTileSize, public ::IceInternal::IncomingAsync
{
public:

    AMD_PyramidService_getTileSize(::IceInternal::Incoming&);

    virtual void ice_response(const ::Ice::IntSeq&);
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

class ResolutionDescription : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<ResolutionDescription> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ResolutionDescription*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ResolutionDescription*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ResolutionDescription> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ResolutionDescription*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ResolutionDescription*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ResolutionDescription> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ResolutionDescription*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ResolutionDescription*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ResolutionDescription> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ResolutionDescription*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ResolutionDescription*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ResolutionDescription> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ResolutionDescription*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ResolutionDescription*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ResolutionDescription> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ResolutionDescription*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ResolutionDescription*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ResolutionDescription> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ResolutionDescription*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ResolutionDescription*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ResolutionDescription> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ResolutionDescription*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ResolutionDescription*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ResolutionDescription> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ResolutionDescription*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ResolutionDescription*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ResolutionDescription> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ResolutionDescription*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ResolutionDescription*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ResolutionDescription> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ResolutionDescription*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ResolutionDescription*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ResolutionDescription> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ResolutionDescription*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ResolutionDescription*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ResolutionDescription> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ResolutionDescription*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ResolutionDescription*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ResolutionDescription> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ResolutionDescription*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ResolutionDescription*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ResolutionDescription> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ResolutionDescription*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ResolutionDescription*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ResolutionDescription> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ResolutionDescription*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ResolutionDescription*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ResolutionDescription> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ResolutionDescription*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ResolutionDescription*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ResolutionDescription> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ResolutionDescription*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ResolutionDescription*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ResolutionDescription> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ResolutionDescription*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ResolutionDescription*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class PyramidService : virtual public ::IceProxy::omero::api::StatefulServiceInterface
{
public:

    bool requiresPixelsPyramid()
    {
        return requiresPixelsPyramid(0);
    }
    bool requiresPixelsPyramid(const ::Ice::Context& __ctx)
    {
        return requiresPixelsPyramid(&__ctx);
    }
    
private:

    bool requiresPixelsPyramid(const ::Ice::Context*);
    
public:
    bool requiresPixelsPyramid_async(const ::omero::api::AMI_PyramidService_requiresPixelsPyramidPtr&);
    bool requiresPixelsPyramid_async(const ::omero::api::AMI_PyramidService_requiresPixelsPyramidPtr&, const ::Ice::Context&);

    ::Ice::Int getResolutionLevels()
    {
        return getResolutionLevels(0);
    }
    ::Ice::Int getResolutionLevels(const ::Ice::Context& __ctx)
    {
        return getResolutionLevels(&__ctx);
    }
    
private:

    ::Ice::Int getResolutionLevels(const ::Ice::Context*);
    
public:
    bool getResolutionLevels_async(const ::omero::api::AMI_PyramidService_getResolutionLevelsPtr&);
    bool getResolutionLevels_async(const ::omero::api::AMI_PyramidService_getResolutionLevelsPtr&, const ::Ice::Context&);

    ::omero::api::ResolutionDescriptions getResolutionDescriptions()
    {
        return getResolutionDescriptions(0);
    }
    ::omero::api::ResolutionDescriptions getResolutionDescriptions(const ::Ice::Context& __ctx)
    {
        return getResolutionDescriptions(&__ctx);
    }
    
private:

    ::omero::api::ResolutionDescriptions getResolutionDescriptions(const ::Ice::Context*);
    
public:
    bool getResolutionDescriptions_async(const ::omero::api::AMI_PyramidService_getResolutionDescriptionsPtr&);
    bool getResolutionDescriptions_async(const ::omero::api::AMI_PyramidService_getResolutionDescriptionsPtr&, const ::Ice::Context&);

    ::Ice::Int getResolutionLevel()
    {
        return getResolutionLevel(0);
    }
    ::Ice::Int getResolutionLevel(const ::Ice::Context& __ctx)
    {
        return getResolutionLevel(&__ctx);
    }
    
private:

    ::Ice::Int getResolutionLevel(const ::Ice::Context*);
    
public:
    bool getResolutionLevel_async(const ::omero::api::AMI_PyramidService_getResolutionLevelPtr&);
    bool getResolutionLevel_async(const ::omero::api::AMI_PyramidService_getResolutionLevelPtr&, const ::Ice::Context&);

    void setResolutionLevel(::Ice::Int resolutionLevel)
    {
        setResolutionLevel(resolutionLevel, 0);
    }
    void setResolutionLevel(::Ice::Int resolutionLevel, const ::Ice::Context& __ctx)
    {
        setResolutionLevel(resolutionLevel, &__ctx);
    }
    
private:

    void setResolutionLevel(::Ice::Int, const ::Ice::Context*);
    
public:
    bool setResolutionLevel_async(const ::omero::api::AMI_PyramidService_setResolutionLevelPtr&, ::Ice::Int);
    bool setResolutionLevel_async(const ::omero::api::AMI_PyramidService_setResolutionLevelPtr&, ::Ice::Int, const ::Ice::Context&);

    ::Ice::IntSeq getTileSize()
    {
        return getTileSize(0);
    }
    ::Ice::IntSeq getTileSize(const ::Ice::Context& __ctx)
    {
        return getTileSize(&__ctx);
    }
    
private:

    ::Ice::IntSeq getTileSize(const ::Ice::Context*);
    
public:
    bool getTileSize_async(const ::omero::api::AMI_PyramidService_getTileSizePtr&);
    bool getTileSize_async(const ::omero::api::AMI_PyramidService_getTileSizePtr&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<PyramidService> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PyramidService*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<PyramidService*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PyramidService> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PyramidService*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<PyramidService*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PyramidService> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PyramidService*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<PyramidService*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PyramidService> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PyramidService*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<PyramidService*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PyramidService> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PyramidService*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<PyramidService*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PyramidService> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PyramidService*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<PyramidService*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PyramidService> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PyramidService*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<PyramidService*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PyramidService> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PyramidService*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<PyramidService*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PyramidService> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PyramidService*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<PyramidService*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PyramidService> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PyramidService*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<PyramidService*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PyramidService> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PyramidService*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<PyramidService*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PyramidService> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PyramidService*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<PyramidService*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PyramidService> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PyramidService*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<PyramidService*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PyramidService> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PyramidService*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<PyramidService*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PyramidService> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PyramidService*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<PyramidService*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PyramidService> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PyramidService*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<PyramidService*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PyramidService> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PyramidService*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<PyramidService*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PyramidService> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PyramidService*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<PyramidService*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PyramidService> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PyramidService*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<PyramidService*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class ResolutionDescription : virtual public ::IceDelegate::Ice::Object
{
public:
};

class PyramidService : virtual public ::IceDelegate::omero::api::StatefulServiceInterface
{
public:

    virtual bool requiresPixelsPyramid(const ::Ice::Context*) = 0;

    virtual ::Ice::Int getResolutionLevels(const ::Ice::Context*) = 0;

    virtual ::omero::api::ResolutionDescriptions getResolutionDescriptions(const ::Ice::Context*) = 0;

    virtual ::Ice::Int getResolutionLevel(const ::Ice::Context*) = 0;

    virtual void setResolutionLevel(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::IntSeq getTileSize(const ::Ice::Context*) = 0;
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

class ResolutionDescription : virtual public ::IceDelegate::omero::api::ResolutionDescription,
                              virtual public ::IceDelegateM::Ice::Object
{
public:
};

class PyramidService : virtual public ::IceDelegate::omero::api::PyramidService,
                       virtual public ::IceDelegateM::omero::api::StatefulServiceInterface
{
public:

    virtual bool requiresPixelsPyramid(const ::Ice::Context*);

    virtual ::Ice::Int getResolutionLevels(const ::Ice::Context*);

    virtual ::omero::api::ResolutionDescriptions getResolutionDescriptions(const ::Ice::Context*);

    virtual ::Ice::Int getResolutionLevel(const ::Ice::Context*);

    virtual void setResolutionLevel(::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::IntSeq getTileSize(const ::Ice::Context*);
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

class ResolutionDescription : virtual public ::IceDelegate::omero::api::ResolutionDescription,
                              virtual public ::IceDelegateD::Ice::Object
{
public:
};

class PyramidService : virtual public ::IceDelegate::omero::api::PyramidService,
                       virtual public ::IceDelegateD::omero::api::StatefulServiceInterface
{
public:

    virtual bool requiresPixelsPyramid(const ::Ice::Context*);

    virtual ::Ice::Int getResolutionLevels(const ::Ice::Context*);

    virtual ::omero::api::ResolutionDescriptions getResolutionDescriptions(const ::Ice::Context*);

    virtual ::Ice::Int getResolutionLevel(const ::Ice::Context*);

    virtual void setResolutionLevel(::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::IntSeq getTileSize(const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace api
{

class ResolutionDescription : virtual public ::Ice::Object
{
public:

    typedef ResolutionDescriptionPrx ProxyType;
    typedef ResolutionDescriptionPtr PointerType;
    
    ResolutionDescription() {}
    ResolutionDescription(::Ice::Int, ::Ice::Int);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~ResolutionDescription() {}

    friend class ResolutionDescription__staticInit;

public:

    ::Ice::Int sizeX;

    ::Ice::Int sizeY;
};

class ResolutionDescription__staticInit
{
public:

    ::omero::api::ResolutionDescription _init;
};

static ResolutionDescription__staticInit _ResolutionDescription_init;

class PyramidService : virtual public ::omero::api::StatefulServiceInterface
{
public:

    typedef PyramidServicePrx ProxyType;
    typedef PyramidServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void requiresPixelsPyramid_async(const ::omero::api::AMD_PyramidService_requiresPixelsPyramidPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___requiresPixelsPyramid(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getResolutionLevels_async(const ::omero::api::AMD_PyramidService_getResolutionLevelsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getResolutionLevels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getResolutionDescriptions_async(const ::omero::api::AMD_PyramidService_getResolutionDescriptionsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getResolutionDescriptions(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getResolutionLevel_async(const ::omero::api::AMD_PyramidService_getResolutionLevelPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getResolutionLevel(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setResolutionLevel_async(const ::omero::api::AMD_PyramidService_setResolutionLevelPtr&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setResolutionLevel(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getTileSize_async(const ::omero::api::AMD_PyramidService_getTileSizePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getTileSize(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
