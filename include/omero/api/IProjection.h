// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `IProjection.ice'

#ifndef __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_IProjection_h__
#define __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_IProjection_h__

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
#include <omero/Constants.h>
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

class IProjection;

}

}

}

namespace omero
{

namespace api
{

class IProjection;
bool operator==(const IProjection&, const IProjection&);
bool operator<(const IProjection&, const IProjection&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::api::IProjection*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::IProjection*);

}

namespace omero
{

namespace api
{

typedef ::IceInternal::Handle< ::omero::api::IProjection> IProjectionPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::IProjection> IProjectionPrx;

void __read(::IceInternal::BasicStream*, IProjectionPrx&);
void __patch__IProjectionPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace api
{

class AMI_IProjection_projectStack : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IProjectionPrx&, ::Ice::Long, const ::omero::model::PixelsTypePtr&, ::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IProjection_projectStack> AMI_IProjection_projectStackPtr;

class AMD_IProjection_projectStack : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IProjection_projectStack> AMD_IProjection_projectStackPtr;

class AMI_IProjection_projectPixels : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IProjectionPrx&, ::Ice::Long, const ::omero::model::PixelsTypePtr&, ::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, const ::omero::sys::IntList&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IProjection_projectPixels> AMI_IProjection_projectPixelsPtr;

class AMD_IProjection_projectPixels : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IProjection_projectPixels> AMD_IProjection_projectPixelsPtr;

}

}

namespace IceAsync
{

namespace omero
{

namespace api
{

class AMD_IProjection_projectStack : public ::omero::api::AMD_IProjection_projectStack, public ::IceInternal::IncomingAsync
{
public:

    AMD_IProjection_projectStack(::IceInternal::Incoming&);

    virtual void ice_response(const ::Ice::ByteSeq&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IProjection_projectPixels : public ::omero::api::AMD_IProjection_projectPixels, public ::IceInternal::IncomingAsync
{
public:

    AMD_IProjection_projectPixels(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Long);
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

class IProjection : virtual public ::IceProxy::omero::api::ServiceInterface
{
public:

    ::Ice::ByteSeq projectStack(::Ice::Long pixelsId, const ::omero::model::PixelsTypePtr& pixelsType, ::omero::constants::projection::ProjectionType algorithm, ::Ice::Int timepoint, ::Ice::Int channelIndex, ::Ice::Int stepping, ::Ice::Int start, ::Ice::Int end)
    {
        return projectStack(pixelsId, pixelsType, algorithm, timepoint, channelIndex, stepping, start, end, 0);
    }
    ::Ice::ByteSeq projectStack(::Ice::Long pixelsId, const ::omero::model::PixelsTypePtr& pixelsType, ::omero::constants::projection::ProjectionType algorithm, ::Ice::Int timepoint, ::Ice::Int channelIndex, ::Ice::Int stepping, ::Ice::Int start, ::Ice::Int end, const ::Ice::Context& __ctx)
    {
        return projectStack(pixelsId, pixelsType, algorithm, timepoint, channelIndex, stepping, start, end, &__ctx);
    }
    
private:

    ::Ice::ByteSeq projectStack(::Ice::Long, const ::omero::model::PixelsTypePtr&, ::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    bool projectStack_async(const ::omero::api::AMI_IProjection_projectStackPtr&, ::Ice::Long, const ::omero::model::PixelsTypePtr&, ::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int);
    bool projectStack_async(const ::omero::api::AMI_IProjection_projectStackPtr&, ::Ice::Long, const ::omero::model::PixelsTypePtr&, ::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context&);

    ::Ice::Long projectPixels(::Ice::Long pixelsId, const ::omero::model::PixelsTypePtr& pixelsType, ::omero::constants::projection::ProjectionType algorithm, ::Ice::Int tStart, ::Ice::Int tEnd, const ::omero::sys::IntList& channelList, ::Ice::Int stepping, ::Ice::Int zStart, ::Ice::Int zEnd, const ::std::string& name)
    {
        return projectPixels(pixelsId, pixelsType, algorithm, tStart, tEnd, channelList, stepping, zStart, zEnd, name, 0);
    }
    ::Ice::Long projectPixels(::Ice::Long pixelsId, const ::omero::model::PixelsTypePtr& pixelsType, ::omero::constants::projection::ProjectionType algorithm, ::Ice::Int tStart, ::Ice::Int tEnd, const ::omero::sys::IntList& channelList, ::Ice::Int stepping, ::Ice::Int zStart, ::Ice::Int zEnd, const ::std::string& name, const ::Ice::Context& __ctx)
    {
        return projectPixels(pixelsId, pixelsType, algorithm, tStart, tEnd, channelList, stepping, zStart, zEnd, name, &__ctx);
    }
    
private:

    ::Ice::Long projectPixels(::Ice::Long, const ::omero::model::PixelsTypePtr&, ::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, const ::omero::sys::IntList&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Context*);
    
public:
    bool projectPixels_async(const ::omero::api::AMI_IProjection_projectPixelsPtr&, ::Ice::Long, const ::omero::model::PixelsTypePtr&, ::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, const ::omero::sys::IntList&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::std::string&);
    bool projectPixels_async(const ::omero::api::AMI_IProjection_projectPixelsPtr&, ::Ice::Long, const ::omero::model::PixelsTypePtr&, ::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, const ::omero::sys::IntList&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<IProjection> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IProjection*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<IProjection*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IProjection> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IProjection*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<IProjection*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IProjection> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IProjection*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<IProjection*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IProjection> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IProjection*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<IProjection*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IProjection> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IProjection*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<IProjection*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IProjection> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IProjection*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<IProjection*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IProjection> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IProjection*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<IProjection*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IProjection> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IProjection*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<IProjection*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IProjection> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IProjection*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<IProjection*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IProjection> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IProjection*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<IProjection*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IProjection> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IProjection*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<IProjection*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IProjection> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IProjection*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<IProjection*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IProjection> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IProjection*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<IProjection*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IProjection> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IProjection*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<IProjection*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IProjection> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IProjection*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<IProjection*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IProjection> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IProjection*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<IProjection*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IProjection> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IProjection*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<IProjection*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IProjection> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IProjection*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<IProjection*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IProjection> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IProjection*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<IProjection*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class IProjection : virtual public ::IceDelegate::omero::api::ServiceInterface
{
public:

    virtual ::Ice::ByteSeq projectStack(::Ice::Long, const ::omero::model::PixelsTypePtr&, ::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Long projectPixels(::Ice::Long, const ::omero::model::PixelsTypePtr&, ::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, const ::omero::sys::IntList&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Context*) = 0;
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

class IProjection : virtual public ::IceDelegate::omero::api::IProjection,
                    virtual public ::IceDelegateM::omero::api::ServiceInterface
{
public:

    virtual ::Ice::ByteSeq projectStack(::Ice::Long, const ::omero::model::PixelsTypePtr&, ::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Long projectPixels(::Ice::Long, const ::omero::model::PixelsTypePtr&, ::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, const ::omero::sys::IntList&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Context*);
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

class IProjection : virtual public ::IceDelegate::omero::api::IProjection,
                    virtual public ::IceDelegateD::omero::api::ServiceInterface
{
public:

    virtual ::Ice::ByteSeq projectStack(::Ice::Long, const ::omero::model::PixelsTypePtr&, ::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Long projectPixels(::Ice::Long, const ::omero::model::PixelsTypePtr&, ::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, const ::omero::sys::IntList&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace api
{

class IProjection : virtual public ::omero::api::ServiceInterface
{
public:

    typedef IProjectionPrx ProxyType;
    typedef IProjectionPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void projectStack_async(const ::omero::api::AMD_IProjection_projectStackPtr&, ::Ice::Long, const ::omero::model::PixelsTypePtr&, ::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___projectStack(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void projectPixels_async(const ::omero::api::AMD_IProjection_projectPixelsPtr&, ::Ice::Long, const ::omero::model::PixelsTypePtr&, ::omero::constants::projection::ProjectionType, ::Ice::Int, ::Ice::Int, const ::omero::sys::IntList&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___projectPixels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
