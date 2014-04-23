// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `FilesetEntry.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_FilesetEntry_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_FilesetEntry_h__

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

class Fileset;

class OriginalFile;

class Details;

class FilesetEntry;

}

}

}

namespace omero
{

namespace model
{

class Fileset;
bool operator==(const Fileset&, const Fileset&);
bool operator<(const Fileset&, const Fileset&);

class OriginalFile;
bool operator==(const OriginalFile&, const OriginalFile&);
bool operator<(const OriginalFile&, const OriginalFile&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class FilesetEntry;
bool operator==(const FilesetEntry&, const FilesetEntry&);
bool operator<(const FilesetEntry&, const FilesetEntry&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Fileset*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Fileset*);

::Ice::Object* upCast(::omero::model::OriginalFile*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::OriginalFile*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::FilesetEntry*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::FilesetEntry*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Fileset> FilesetPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Fileset> FilesetPrx;

void __read(::IceInternal::BasicStream*, FilesetPrx&);
void __patch__FilesetPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::OriginalFile> OriginalFilePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::OriginalFile> OriginalFilePrx;

void __read(::IceInternal::BasicStream*, OriginalFilePrx&);
void __patch__OriginalFilePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::FilesetEntry> FilesetEntryPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::FilesetEntry> FilesetEntryPrx;

void __read(::IceInternal::BasicStream*, FilesetEntryPrx&);
void __patch__FilesetEntryPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class FilesetEntry : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::model::FilesetPtr getFileset()
    {
        return getFileset(0);
    }
    ::omero::model::FilesetPtr getFileset(const ::Ice::Context& __ctx)
    {
        return getFileset(&__ctx);
    }
    
private:

    ::omero::model::FilesetPtr getFileset(const ::Ice::Context*);
    
public:

    void setFileset(const ::omero::model::FilesetPtr& theFileset)
    {
        setFileset(theFileset, 0);
    }
    void setFileset(const ::omero::model::FilesetPtr& theFileset, const ::Ice::Context& __ctx)
    {
        setFileset(theFileset, &__ctx);
    }
    
private:

    void setFileset(const ::omero::model::FilesetPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::OriginalFilePtr getOriginalFile()
    {
        return getOriginalFile(0);
    }
    ::omero::model::OriginalFilePtr getOriginalFile(const ::Ice::Context& __ctx)
    {
        return getOriginalFile(&__ctx);
    }
    
private:

    ::omero::model::OriginalFilePtr getOriginalFile(const ::Ice::Context*);
    
public:

    void setOriginalFile(const ::omero::model::OriginalFilePtr& theOriginalFile)
    {
        setOriginalFile(theOriginalFile, 0);
    }
    void setOriginalFile(const ::omero::model::OriginalFilePtr& theOriginalFile, const ::Ice::Context& __ctx)
    {
        setOriginalFile(theOriginalFile, &__ctx);
    }
    
private:

    void setOriginalFile(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getClientPath()
    {
        return getClientPath(0);
    }
    ::omero::RStringPtr getClientPath(const ::Ice::Context& __ctx)
    {
        return getClientPath(&__ctx);
    }
    
private:

    ::omero::RStringPtr getClientPath(const ::Ice::Context*);
    
public:

    void setClientPath(const ::omero::RStringPtr& theClientPath)
    {
        setClientPath(theClientPath, 0);
    }
    void setClientPath(const ::omero::RStringPtr& theClientPath, const ::Ice::Context& __ctx)
    {
        setClientPath(theClientPath, &__ctx);
    }
    
private:

    void setClientPath(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<FilesetEntry> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetEntry*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<FilesetEntry*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetEntry> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetEntry*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<FilesetEntry*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetEntry> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetEntry*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<FilesetEntry*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetEntry> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetEntry*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<FilesetEntry*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetEntry> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetEntry*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<FilesetEntry*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetEntry> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetEntry*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<FilesetEntry*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetEntry> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetEntry*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<FilesetEntry*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetEntry> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetEntry*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<FilesetEntry*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetEntry> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetEntry*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<FilesetEntry*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetEntry> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetEntry*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<FilesetEntry*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetEntry> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetEntry*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<FilesetEntry*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetEntry> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetEntry*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<FilesetEntry*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetEntry> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetEntry*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<FilesetEntry*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetEntry> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetEntry*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<FilesetEntry*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetEntry> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetEntry*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<FilesetEntry*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetEntry> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetEntry*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<FilesetEntry*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetEntry> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetEntry*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<FilesetEntry*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetEntry> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetEntry*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<FilesetEntry*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetEntry> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetEntry*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<FilesetEntry*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class FilesetEntry : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::FilesetPtr getFileset(const ::Ice::Context*) = 0;

    virtual void setFileset(const ::omero::model::FilesetPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::OriginalFilePtr getOriginalFile(const ::Ice::Context*) = 0;

    virtual void setOriginalFile(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getClientPath(const ::Ice::Context*) = 0;

    virtual void setClientPath(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;
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

class FilesetEntry : virtual public ::IceDelegate::omero::model::FilesetEntry,
                     virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::FilesetPtr getFileset(const ::Ice::Context*);

    virtual void setFileset(const ::omero::model::FilesetPtr&, const ::Ice::Context*);

    virtual ::omero::model::OriginalFilePtr getOriginalFile(const ::Ice::Context*);

    virtual void setOriginalFile(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getClientPath(const ::Ice::Context*);

    virtual void setClientPath(const ::omero::RStringPtr&, const ::Ice::Context*);
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

class FilesetEntry : virtual public ::IceDelegate::omero::model::FilesetEntry,
                     virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::FilesetPtr getFileset(const ::Ice::Context*);

    virtual void setFileset(const ::omero::model::FilesetPtr&, const ::Ice::Context*);

    virtual ::omero::model::OriginalFilePtr getOriginalFile(const ::Ice::Context*);

    virtual void setOriginalFile(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getClientPath(const ::Ice::Context*);

    virtual void setClientPath(const ::omero::RStringPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class FilesetEntry : virtual public ::omero::model::IObject
{
public:

    typedef FilesetEntryPrx ProxyType;
    typedef FilesetEntryPtr PointerType;
    
    FilesetEntry() {}
    FilesetEntry(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::model::FilesetPtr&, const ::omero::model::OriginalFilePtr&, const ::omero::RStringPtr&);
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

    virtual ::omero::model::FilesetPtr getFileset(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFileset(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setFileset(const ::omero::model::FilesetPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setFileset(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::OriginalFilePtr getOriginalFile(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getOriginalFile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setOriginalFile(const ::omero::model::OriginalFilePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setOriginalFile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getClientPath(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getClientPath(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setClientPath(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setClientPath(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::model::FilesetPtr fileset;

    ::omero::model::OriginalFilePtr originalFile;

    ::omero::RStringPtr clientPath;
};

}

}

#endif
