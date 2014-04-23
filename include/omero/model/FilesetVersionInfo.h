// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `FilesetVersionInfo.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_FilesetVersionInfo_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_FilesetVersionInfo_h__

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

class FilesetVersionInfo;

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

class FilesetVersionInfo;
bool operator==(const FilesetVersionInfo&, const FilesetVersionInfo&);
bool operator<(const FilesetVersionInfo&, const FilesetVersionInfo&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::FilesetVersionInfo*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::FilesetVersionInfo*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::FilesetVersionInfo> FilesetVersionInfoPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::FilesetVersionInfo> FilesetVersionInfoPrx;

void __read(::IceInternal::BasicStream*, FilesetVersionInfoPrx&);
void __patch__FilesetVersionInfoPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class FilesetVersionInfo : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::RStringPtr getBioformatsReader()
    {
        return getBioformatsReader(0);
    }
    ::omero::RStringPtr getBioformatsReader(const ::Ice::Context& __ctx)
    {
        return getBioformatsReader(&__ctx);
    }
    
private:

    ::omero::RStringPtr getBioformatsReader(const ::Ice::Context*);
    
public:

    void setBioformatsReader(const ::omero::RStringPtr& theBioformatsReader)
    {
        setBioformatsReader(theBioformatsReader, 0);
    }
    void setBioformatsReader(const ::omero::RStringPtr& theBioformatsReader, const ::Ice::Context& __ctx)
    {
        setBioformatsReader(theBioformatsReader, &__ctx);
    }
    
private:

    void setBioformatsReader(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getBioformatsVersion()
    {
        return getBioformatsVersion(0);
    }
    ::omero::RStringPtr getBioformatsVersion(const ::Ice::Context& __ctx)
    {
        return getBioformatsVersion(&__ctx);
    }
    
private:

    ::omero::RStringPtr getBioformatsVersion(const ::Ice::Context*);
    
public:

    void setBioformatsVersion(const ::omero::RStringPtr& theBioformatsVersion)
    {
        setBioformatsVersion(theBioformatsVersion, 0);
    }
    void setBioformatsVersion(const ::omero::RStringPtr& theBioformatsVersion, const ::Ice::Context& __ctx)
    {
        setBioformatsVersion(theBioformatsVersion, &__ctx);
    }
    
private:

    void setBioformatsVersion(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getOmeroVersion()
    {
        return getOmeroVersion(0);
    }
    ::omero::RStringPtr getOmeroVersion(const ::Ice::Context& __ctx)
    {
        return getOmeroVersion(&__ctx);
    }
    
private:

    ::omero::RStringPtr getOmeroVersion(const ::Ice::Context*);
    
public:

    void setOmeroVersion(const ::omero::RStringPtr& theOmeroVersion)
    {
        setOmeroVersion(theOmeroVersion, 0);
    }
    void setOmeroVersion(const ::omero::RStringPtr& theOmeroVersion, const ::Ice::Context& __ctx)
    {
        setOmeroVersion(theOmeroVersion, &__ctx);
    }
    
private:

    void setOmeroVersion(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getOsArchitecture()
    {
        return getOsArchitecture(0);
    }
    ::omero::RStringPtr getOsArchitecture(const ::Ice::Context& __ctx)
    {
        return getOsArchitecture(&__ctx);
    }
    
private:

    ::omero::RStringPtr getOsArchitecture(const ::Ice::Context*);
    
public:

    void setOsArchitecture(const ::omero::RStringPtr& theOsArchitecture)
    {
        setOsArchitecture(theOsArchitecture, 0);
    }
    void setOsArchitecture(const ::omero::RStringPtr& theOsArchitecture, const ::Ice::Context& __ctx)
    {
        setOsArchitecture(theOsArchitecture, &__ctx);
    }
    
private:

    void setOsArchitecture(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getOsName()
    {
        return getOsName(0);
    }
    ::omero::RStringPtr getOsName(const ::Ice::Context& __ctx)
    {
        return getOsName(&__ctx);
    }
    
private:

    ::omero::RStringPtr getOsName(const ::Ice::Context*);
    
public:

    void setOsName(const ::omero::RStringPtr& theOsName)
    {
        setOsName(theOsName, 0);
    }
    void setOsName(const ::omero::RStringPtr& theOsName, const ::Ice::Context& __ctx)
    {
        setOsName(theOsName, &__ctx);
    }
    
private:

    void setOsName(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getOsVersion()
    {
        return getOsVersion(0);
    }
    ::omero::RStringPtr getOsVersion(const ::Ice::Context& __ctx)
    {
        return getOsVersion(&__ctx);
    }
    
private:

    ::omero::RStringPtr getOsVersion(const ::Ice::Context*);
    
public:

    void setOsVersion(const ::omero::RStringPtr& theOsVersion)
    {
        setOsVersion(theOsVersion, 0);
    }
    void setOsVersion(const ::omero::RStringPtr& theOsVersion, const ::Ice::Context& __ctx)
    {
        setOsVersion(theOsVersion, &__ctx);
    }
    
private:

    void setOsVersion(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getLocale()
    {
        return getLocale(0);
    }
    ::omero::RStringPtr getLocale(const ::Ice::Context& __ctx)
    {
        return getLocale(&__ctx);
    }
    
private:

    ::omero::RStringPtr getLocale(const ::Ice::Context*);
    
public:

    void setLocale(const ::omero::RStringPtr& theLocale)
    {
        setLocale(theLocale, 0);
    }
    void setLocale(const ::omero::RStringPtr& theLocale, const ::Ice::Context& __ctx)
    {
        setLocale(theLocale, &__ctx);
    }
    
private:

    void setLocale(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<FilesetVersionInfo> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetVersionInfo*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<FilesetVersionInfo*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetVersionInfo> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetVersionInfo*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<FilesetVersionInfo*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetVersionInfo> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetVersionInfo*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<FilesetVersionInfo*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetVersionInfo> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetVersionInfo*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<FilesetVersionInfo*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetVersionInfo> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetVersionInfo*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<FilesetVersionInfo*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetVersionInfo> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetVersionInfo*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<FilesetVersionInfo*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetVersionInfo> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetVersionInfo*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<FilesetVersionInfo*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetVersionInfo> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetVersionInfo*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<FilesetVersionInfo*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetVersionInfo> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetVersionInfo*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<FilesetVersionInfo*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetVersionInfo> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetVersionInfo*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<FilesetVersionInfo*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetVersionInfo> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetVersionInfo*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<FilesetVersionInfo*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetVersionInfo> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetVersionInfo*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<FilesetVersionInfo*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetVersionInfo> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetVersionInfo*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<FilesetVersionInfo*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetVersionInfo> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetVersionInfo*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<FilesetVersionInfo*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetVersionInfo> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetVersionInfo*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<FilesetVersionInfo*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetVersionInfo> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetVersionInfo*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<FilesetVersionInfo*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetVersionInfo> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetVersionInfo*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<FilesetVersionInfo*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetVersionInfo> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetVersionInfo*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<FilesetVersionInfo*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetVersionInfo> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetVersionInfo*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<FilesetVersionInfo*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class FilesetVersionInfo : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getBioformatsReader(const ::Ice::Context*) = 0;

    virtual void setBioformatsReader(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getBioformatsVersion(const ::Ice::Context*) = 0;

    virtual void setBioformatsVersion(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getOmeroVersion(const ::Ice::Context*) = 0;

    virtual void setOmeroVersion(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getOsArchitecture(const ::Ice::Context*) = 0;

    virtual void setOsArchitecture(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getOsName(const ::Ice::Context*) = 0;

    virtual void setOsName(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getOsVersion(const ::Ice::Context*) = 0;

    virtual void setOsVersion(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getLocale(const ::Ice::Context*) = 0;

    virtual void setLocale(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;
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

class FilesetVersionInfo : virtual public ::IceDelegate::omero::model::FilesetVersionInfo,
                           virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getBioformatsReader(const ::Ice::Context*);

    virtual void setBioformatsReader(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getBioformatsVersion(const ::Ice::Context*);

    virtual void setBioformatsVersion(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getOmeroVersion(const ::Ice::Context*);

    virtual void setOmeroVersion(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getOsArchitecture(const ::Ice::Context*);

    virtual void setOsArchitecture(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getOsName(const ::Ice::Context*);

    virtual void setOsName(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getOsVersion(const ::Ice::Context*);

    virtual void setOsVersion(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getLocale(const ::Ice::Context*);

    virtual void setLocale(const ::omero::RStringPtr&, const ::Ice::Context*);
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

class FilesetVersionInfo : virtual public ::IceDelegate::omero::model::FilesetVersionInfo,
                           virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getBioformatsReader(const ::Ice::Context*);

    virtual void setBioformatsReader(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getBioformatsVersion(const ::Ice::Context*);

    virtual void setBioformatsVersion(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getOmeroVersion(const ::Ice::Context*);

    virtual void setOmeroVersion(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getOsArchitecture(const ::Ice::Context*);

    virtual void setOsArchitecture(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getOsName(const ::Ice::Context*);

    virtual void setOsName(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getOsVersion(const ::Ice::Context*);

    virtual void setOsVersion(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getLocale(const ::Ice::Context*);

    virtual void setLocale(const ::omero::RStringPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class FilesetVersionInfo : virtual public ::omero::model::IObject
{
public:

    typedef FilesetVersionInfoPrx ProxyType;
    typedef FilesetVersionInfoPtr PointerType;
    
    FilesetVersionInfo() {}
    FilesetVersionInfo(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&);
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

    virtual ::omero::RStringPtr getBioformatsReader(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getBioformatsReader(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setBioformatsReader(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setBioformatsReader(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getBioformatsVersion(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getBioformatsVersion(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setBioformatsVersion(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setBioformatsVersion(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getOmeroVersion(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getOmeroVersion(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setOmeroVersion(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setOmeroVersion(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getOsArchitecture(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getOsArchitecture(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setOsArchitecture(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setOsArchitecture(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getOsName(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getOsName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setOsName(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setOsName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getOsVersion(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getOsVersion(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setOsVersion(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setOsVersion(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getLocale(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getLocale(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setLocale(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setLocale(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::RStringPtr bioformatsReader;

    ::omero::RStringPtr bioformatsVersion;

    ::omero::RStringPtr omeroVersion;

    ::omero::RStringPtr osArchitecture;

    ::omero::RStringPtr osName;

    ::omero::RStringPtr osVersion;

    ::omero::RStringPtr locale;
};

}

}

#endif
