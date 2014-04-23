// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `FilesetJobLink.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_FilesetJobLink_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_FilesetJobLink_h__

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

class Job;

class Details;

class FilesetJobLink;

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

class Job;
bool operator==(const Job&, const Job&);
bool operator<(const Job&, const Job&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class FilesetJobLink;
bool operator==(const FilesetJobLink&, const FilesetJobLink&);
bool operator<(const FilesetJobLink&, const FilesetJobLink&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Fileset*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Fileset*);

::Ice::Object* upCast(::omero::model::Job*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Job*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::FilesetJobLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::FilesetJobLink*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Fileset> FilesetPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Fileset> FilesetPrx;

void __read(::IceInternal::BasicStream*, FilesetPrx&);
void __patch__FilesetPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Job> JobPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Job> JobPrx;

void __read(::IceInternal::BasicStream*, JobPrx&);
void __patch__JobPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::FilesetJobLink> FilesetJobLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::FilesetJobLink> FilesetJobLinkPrx;

void __read(::IceInternal::BasicStream*, FilesetJobLinkPrx&);
void __patch__FilesetJobLinkPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class FilesetJobLink : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::model::FilesetPtr getParent()
    {
        return getParent(0);
    }
    ::omero::model::FilesetPtr getParent(const ::Ice::Context& __ctx)
    {
        return getParent(&__ctx);
    }
    
private:

    ::omero::model::FilesetPtr getParent(const ::Ice::Context*);
    
public:

    void setParent(const ::omero::model::FilesetPtr& theParent)
    {
        setParent(theParent, 0);
    }
    void setParent(const ::omero::model::FilesetPtr& theParent, const ::Ice::Context& __ctx)
    {
        setParent(theParent, &__ctx);
    }
    
private:

    void setParent(const ::omero::model::FilesetPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::JobPtr getChild()
    {
        return getChild(0);
    }
    ::omero::model::JobPtr getChild(const ::Ice::Context& __ctx)
    {
        return getChild(&__ctx);
    }
    
private:

    ::omero::model::JobPtr getChild(const ::Ice::Context*);
    
public:

    void setChild(const ::omero::model::JobPtr& theChild)
    {
        setChild(theChild, 0);
    }
    void setChild(const ::omero::model::JobPtr& theChild, const ::Ice::Context& __ctx)
    {
        setChild(theChild, &__ctx);
    }
    
private:

    void setChild(const ::omero::model::JobPtr&, const ::Ice::Context*);
    
public:

    void link(const ::omero::model::FilesetPtr& theParent, const ::omero::model::JobPtr& theChild)
    {
        link(theParent, theChild, 0);
    }
    void link(const ::omero::model::FilesetPtr& theParent, const ::omero::model::JobPtr& theChild, const ::Ice::Context& __ctx)
    {
        link(theParent, theChild, &__ctx);
    }
    
private:

    void link(const ::omero::model::FilesetPtr&, const ::omero::model::JobPtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<FilesetJobLink> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetJobLink*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<FilesetJobLink*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetJobLink> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetJobLink*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<FilesetJobLink*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetJobLink> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetJobLink*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<FilesetJobLink*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetJobLink> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetJobLink*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<FilesetJobLink*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetJobLink> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetJobLink*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<FilesetJobLink*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetJobLink> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetJobLink*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<FilesetJobLink*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetJobLink> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetJobLink*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<FilesetJobLink*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetJobLink> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetJobLink*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<FilesetJobLink*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetJobLink> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetJobLink*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<FilesetJobLink*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetJobLink> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetJobLink*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<FilesetJobLink*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetJobLink> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetJobLink*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<FilesetJobLink*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetJobLink> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetJobLink*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<FilesetJobLink*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetJobLink> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetJobLink*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<FilesetJobLink*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetJobLink> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetJobLink*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<FilesetJobLink*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetJobLink> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetJobLink*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<FilesetJobLink*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetJobLink> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetJobLink*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<FilesetJobLink*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetJobLink> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetJobLink*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<FilesetJobLink*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetJobLink> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetJobLink*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<FilesetJobLink*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FilesetJobLink> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FilesetJobLink*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<FilesetJobLink*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class FilesetJobLink : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::FilesetPtr getParent(const ::Ice::Context*) = 0;

    virtual void setParent(const ::omero::model::FilesetPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::JobPtr getChild(const ::Ice::Context*) = 0;

    virtual void setChild(const ::omero::model::JobPtr&, const ::Ice::Context*) = 0;

    virtual void link(const ::omero::model::FilesetPtr&, const ::omero::model::JobPtr&, const ::Ice::Context*) = 0;
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

class FilesetJobLink : virtual public ::IceDelegate::omero::model::FilesetJobLink,
                       virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::FilesetPtr getParent(const ::Ice::Context*);

    virtual void setParent(const ::omero::model::FilesetPtr&, const ::Ice::Context*);

    virtual ::omero::model::JobPtr getChild(const ::Ice::Context*);

    virtual void setChild(const ::omero::model::JobPtr&, const ::Ice::Context*);

    virtual void link(const ::omero::model::FilesetPtr&, const ::omero::model::JobPtr&, const ::Ice::Context*);
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

class FilesetJobLink : virtual public ::IceDelegate::omero::model::FilesetJobLink,
                       virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::FilesetPtr getParent(const ::Ice::Context*);

    virtual void setParent(const ::omero::model::FilesetPtr&, const ::Ice::Context*);

    virtual ::omero::model::JobPtr getChild(const ::Ice::Context*);

    virtual void setChild(const ::omero::model::JobPtr&, const ::Ice::Context*);

    virtual void link(const ::omero::model::FilesetPtr&, const ::omero::model::JobPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class FilesetJobLink : virtual public ::omero::model::IObject
{
public:

    typedef FilesetJobLinkPrx ProxyType;
    typedef FilesetJobLinkPtr PointerType;
    
    FilesetJobLink() {}
    FilesetJobLink(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::model::FilesetPtr&, const ::omero::model::JobPtr&);
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

    virtual ::omero::model::FilesetPtr getParent(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getParent(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setParent(const ::omero::model::FilesetPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setParent(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::JobPtr getChild(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getChild(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setChild(const ::omero::model::JobPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setChild(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void link(const ::omero::model::FilesetPtr&, const ::omero::model::JobPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___link(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::model::FilesetPtr parent;

    ::omero::model::JobPtr child;
};

}

}

#endif
