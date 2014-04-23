// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Exporter.ice'

#ifndef __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_Exporter_h__
#define __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_Exporter_h__

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
#include <omero/ServerErrors.h>
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

class Exporter;

}

}

}

namespace omero
{

namespace api
{

class Exporter;
bool operator==(const Exporter&, const Exporter&);
bool operator<(const Exporter&, const Exporter&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::api::Exporter*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::Exporter*);

}

namespace omero
{

namespace api
{

typedef ::IceInternal::Handle< ::omero::api::Exporter> ExporterPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::Exporter> ExporterPrx;

void __read(::IceInternal::BasicStream*, ExporterPrx&);
void __patch__ExporterPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace api
{

class AMI_Exporter_addImage : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ExporterPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Exporter_addImage> AMI_Exporter_addImagePtr;

class AMD_Exporter_addImage : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Exporter_addImage> AMD_Exporter_addImagePtr;

class AMI_Exporter_generateXml : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ExporterPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Exporter_generateXml> AMI_Exporter_generateXmlPtr;

class AMD_Exporter_generateXml : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Exporter_generateXml> AMD_Exporter_generateXmlPtr;

class AMI_Exporter_generateTiff : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ExporterPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Exporter_generateTiff> AMI_Exporter_generateTiffPtr;

class AMD_Exporter_generateTiff : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Exporter_generateTiff> AMD_Exporter_generateTiffPtr;

class AMI_Exporter_read : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ExporterPrx&, ::Ice::Long, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Exporter_read> AMI_Exporter_readPtr;

class AMD_Exporter_read : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Exporter_read> AMD_Exporter_readPtr;

}

}

namespace IceAsync
{

namespace omero
{

namespace api
{

class AMD_Exporter_addImage : public ::omero::api::AMD_Exporter_addImage, public ::IceInternal::IncomingAsync
{
public:

    AMD_Exporter_addImage(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Exporter_generateXml : public ::omero::api::AMD_Exporter_generateXml, public ::IceInternal::IncomingAsync
{
public:

    AMD_Exporter_generateXml(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Long);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Exporter_generateTiff : public ::omero::api::AMD_Exporter_generateTiff, public ::IceInternal::IncomingAsync
{
public:

    AMD_Exporter_generateTiff(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Long);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Exporter_read : public ::omero::api::AMD_Exporter_read, public ::IceInternal::IncomingAsync
{
public:

    AMD_Exporter_read(::IceInternal::Incoming&);

    virtual void ice_response(const ::Ice::ByteSeq&);
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

class Exporter : virtual public ::IceProxy::omero::api::StatefulServiceInterface
{
public:

    void addImage(::Ice::Long id)
    {
        addImage(id, 0);
    }
    void addImage(::Ice::Long id, const ::Ice::Context& __ctx)
    {
        addImage(id, &__ctx);
    }
    
private:

    void addImage(::Ice::Long, const ::Ice::Context*);
    
public:
    bool addImage_async(const ::omero::api::AMI_Exporter_addImagePtr&, ::Ice::Long);
    bool addImage_async(const ::omero::api::AMI_Exporter_addImagePtr&, ::Ice::Long, const ::Ice::Context&);

    ::Ice::Long generateXml()
    {
        return generateXml(0);
    }
    ::Ice::Long generateXml(const ::Ice::Context& __ctx)
    {
        return generateXml(&__ctx);
    }
    
private:

    ::Ice::Long generateXml(const ::Ice::Context*);
    
public:
    bool generateXml_async(const ::omero::api::AMI_Exporter_generateXmlPtr&);
    bool generateXml_async(const ::omero::api::AMI_Exporter_generateXmlPtr&, const ::Ice::Context&);

    ::Ice::Long generateTiff()
    {
        return generateTiff(0);
    }
    ::Ice::Long generateTiff(const ::Ice::Context& __ctx)
    {
        return generateTiff(&__ctx);
    }
    
private:

    ::Ice::Long generateTiff(const ::Ice::Context*);
    
public:
    bool generateTiff_async(const ::omero::api::AMI_Exporter_generateTiffPtr&);
    bool generateTiff_async(const ::omero::api::AMI_Exporter_generateTiffPtr&, const ::Ice::Context&);

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
    bool read_async(const ::omero::api::AMI_Exporter_readPtr&, ::Ice::Long, ::Ice::Int);
    bool read_async(const ::omero::api::AMI_Exporter_readPtr&, ::Ice::Long, ::Ice::Int, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<Exporter> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Exporter*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Exporter*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Exporter> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Exporter*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Exporter*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Exporter> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Exporter*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Exporter*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Exporter> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Exporter*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Exporter*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Exporter> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Exporter*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Exporter*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Exporter> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Exporter*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Exporter*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Exporter> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Exporter*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Exporter*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Exporter> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Exporter*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Exporter*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Exporter> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Exporter*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Exporter*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Exporter> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Exporter*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Exporter*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Exporter> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Exporter*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Exporter*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Exporter> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Exporter*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Exporter*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Exporter> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Exporter*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Exporter*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Exporter> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Exporter*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Exporter*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Exporter> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Exporter*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Exporter*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Exporter> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Exporter*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Exporter*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Exporter> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Exporter*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Exporter*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Exporter> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Exporter*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Exporter*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Exporter> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Exporter*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Exporter*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Exporter : virtual public ::IceDelegate::omero::api::StatefulServiceInterface
{
public:

    virtual void addImage(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::Ice::Long generateXml(const ::Ice::Context*) = 0;

    virtual ::Ice::Long generateTiff(const ::Ice::Context*) = 0;

    virtual ::Ice::ByteSeq read(::Ice::Long, ::Ice::Int, const ::Ice::Context*) = 0;
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

class Exporter : virtual public ::IceDelegate::omero::api::Exporter,
                 virtual public ::IceDelegateM::omero::api::StatefulServiceInterface
{
public:

    virtual void addImage(::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::Long generateXml(const ::Ice::Context*);

    virtual ::Ice::Long generateTiff(const ::Ice::Context*);

    virtual ::Ice::ByteSeq read(::Ice::Long, ::Ice::Int, const ::Ice::Context*);
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

class Exporter : virtual public ::IceDelegate::omero::api::Exporter,
                 virtual public ::IceDelegateD::omero::api::StatefulServiceInterface
{
public:

    virtual void addImage(::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::Long generateXml(const ::Ice::Context*);

    virtual ::Ice::Long generateTiff(const ::Ice::Context*);

    virtual ::Ice::ByteSeq read(::Ice::Long, ::Ice::Int, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace api
{

class Exporter : virtual public ::omero::api::StatefulServiceInterface
{
public:

    typedef ExporterPrx ProxyType;
    typedef ExporterPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void addImage_async(const ::omero::api::AMD_Exporter_addImagePtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addImage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void generateXml_async(const ::omero::api::AMD_Exporter_generateXmlPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___generateXml(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void generateTiff_async(const ::omero::api::AMD_Exporter_generateTiffPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___generateTiff(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void read_async(const ::omero::api::AMD_Exporter_readPtr&, ::Ice::Long, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___read(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
