// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `ChecksumAlgorithm.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_ChecksumAlgorithm_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_ChecksumAlgorithm_h__

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

class Details;

class ChecksumAlgorithm;

}

}

}

namespace omero
{

namespace model
{

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class ChecksumAlgorithm;
bool operator==(const ChecksumAlgorithm&, const ChecksumAlgorithm&);
bool operator<(const ChecksumAlgorithm&, const ChecksumAlgorithm&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::ChecksumAlgorithm*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::ChecksumAlgorithm*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::ChecksumAlgorithm> ChecksumAlgorithmPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ChecksumAlgorithm> ChecksumAlgorithmPrx;

void __read(::IceInternal::BasicStream*, ChecksumAlgorithmPrx&);
void __patch__ChecksumAlgorithmPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

namespace enums
{

const ::std::string ChecksumAlgorithmAdler32 = "Adler-32";

const ::std::string ChecksumAlgorithmCRC32 = "CRC-32";

const ::std::string ChecksumAlgorithmMD5128 = "MD5-128";

const ::std::string ChecksumAlgorithmMurmur332 = "Murmur3-32";

const ::std::string ChecksumAlgorithmMurmur3128 = "Murmur3-128";

const ::std::string ChecksumAlgorithmSHA1160 = "SHA1-160";

const ::std::string ChecksumAlgorithmFileSize64 = "File-Size-64";

}

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class ChecksumAlgorithm : virtual public ::IceProxy::omero::model::IObject
{
public:

    ::omero::RStringPtr getValue()
    {
        return getValue(0);
    }
    ::omero::RStringPtr getValue(const ::Ice::Context& __ctx)
    {
        return getValue(&__ctx);
    }
    
private:

    ::omero::RStringPtr getValue(const ::Ice::Context*);
    
public:

    void setValue(const ::omero::RStringPtr& theValue)
    {
        setValue(theValue, 0);
    }
    void setValue(const ::omero::RStringPtr& theValue, const ::Ice::Context& __ctx)
    {
        setValue(theValue, &__ctx);
    }
    
private:

    void setValue(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<ChecksumAlgorithm> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChecksumAlgorithm*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ChecksumAlgorithm*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChecksumAlgorithm> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChecksumAlgorithm*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ChecksumAlgorithm*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChecksumAlgorithm> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChecksumAlgorithm*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ChecksumAlgorithm*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChecksumAlgorithm> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChecksumAlgorithm*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ChecksumAlgorithm*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChecksumAlgorithm> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChecksumAlgorithm*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ChecksumAlgorithm*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChecksumAlgorithm> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChecksumAlgorithm*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ChecksumAlgorithm*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChecksumAlgorithm> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChecksumAlgorithm*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ChecksumAlgorithm*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChecksumAlgorithm> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChecksumAlgorithm*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ChecksumAlgorithm*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChecksumAlgorithm> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChecksumAlgorithm*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ChecksumAlgorithm*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChecksumAlgorithm> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChecksumAlgorithm*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ChecksumAlgorithm*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChecksumAlgorithm> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChecksumAlgorithm*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ChecksumAlgorithm*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChecksumAlgorithm> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChecksumAlgorithm*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ChecksumAlgorithm*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChecksumAlgorithm> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChecksumAlgorithm*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ChecksumAlgorithm*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChecksumAlgorithm> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChecksumAlgorithm*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ChecksumAlgorithm*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChecksumAlgorithm> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChecksumAlgorithm*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ChecksumAlgorithm*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChecksumAlgorithm> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChecksumAlgorithm*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ChecksumAlgorithm*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChecksumAlgorithm> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChecksumAlgorithm*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ChecksumAlgorithm*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChecksumAlgorithm> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChecksumAlgorithm*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ChecksumAlgorithm*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChecksumAlgorithm> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChecksumAlgorithm*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ChecksumAlgorithm*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class ChecksumAlgorithm : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RStringPtr getValue(const ::Ice::Context*) = 0;

    virtual void setValue(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;
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

class ChecksumAlgorithm : virtual public ::IceDelegate::omero::model::ChecksumAlgorithm,
                          virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RStringPtr getValue(const ::Ice::Context*);

    virtual void setValue(const ::omero::RStringPtr&, const ::Ice::Context*);
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

class ChecksumAlgorithm : virtual public ::IceDelegate::omero::model::ChecksumAlgorithm,
                          virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RStringPtr getValue(const ::Ice::Context*);

    virtual void setValue(const ::omero::RStringPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class ChecksumAlgorithm : virtual public ::omero::model::IObject
{
public:

    typedef ChecksumAlgorithmPrx ProxyType;
    typedef ChecksumAlgorithmPtr PointerType;
    
    ChecksumAlgorithm() {}
    ChecksumAlgorithm(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RStringPtr&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual ::omero::RStringPtr getValue(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getValue(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setValue(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setValue(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RStringPtr value;
};

}

}

#endif
