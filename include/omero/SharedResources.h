// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `SharedResources.ice'

#ifndef __omero__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_SharedResources_h__
#define __omero__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_SharedResources_h__

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
#include <omero/Repositories.h>
#include <omero/Scripts.h>
#include <omero/Tables.h>
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

namespace grid
{

class SharedResources;

}

}

}

namespace omero
{

namespace grid
{

class SharedResources;
bool operator==(const SharedResources&, const SharedResources&);
bool operator<(const SharedResources&, const SharedResources&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::grid::SharedResources*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::SharedResources*);

}

namespace omero
{

namespace grid
{

typedef ::IceInternal::Handle< ::omero::grid::SharedResources> SharedResourcesPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::SharedResources> SharedResourcesPrx;

void __read(::IceInternal::BasicStream*, SharedResourcesPrx&);
void __patch__SharedResourcesPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace IceAsync
{

}

namespace IceProxy
{

namespace omero
{

namespace grid
{

class SharedResources : virtual public ::IceProxy::Ice::Object
{
public:

    ::omero::grid::InteractiveProcessorPrx acquireProcessor(const ::omero::model::JobPtr& job, ::Ice::Int seconds)
    {
        return acquireProcessor(job, seconds, 0);
    }
    ::omero::grid::InteractiveProcessorPrx acquireProcessor(const ::omero::model::JobPtr& job, ::Ice::Int seconds, const ::Ice::Context& __ctx)
    {
        return acquireProcessor(job, seconds, &__ctx);
    }
    
private:

    ::omero::grid::InteractiveProcessorPrx acquireProcessor(const ::omero::model::JobPtr&, ::Ice::Int, const ::Ice::Context*);
    
public:

    void addProcessor(const ::omero::grid::ProcessorPrx& proc)
    {
        addProcessor(proc, 0);
    }
    void addProcessor(const ::omero::grid::ProcessorPrx& proc, const ::Ice::Context& __ctx)
    {
        addProcessor(proc, &__ctx);
    }
    
private:

    void addProcessor(const ::omero::grid::ProcessorPrx&, const ::Ice::Context*);
    
public:

    void removeProcessor(const ::omero::grid::ProcessorPrx& proc)
    {
        removeProcessor(proc, 0);
    }
    void removeProcessor(const ::omero::grid::ProcessorPrx& proc, const ::Ice::Context& __ctx)
    {
        removeProcessor(proc, &__ctx);
    }
    
private:

    void removeProcessor(const ::omero::grid::ProcessorPrx&, const ::Ice::Context*);
    
public:

    ::omero::grid::RepositoryMap repositories()
    {
        return repositories(0);
    }
    ::omero::grid::RepositoryMap repositories(const ::Ice::Context& __ctx)
    {
        return repositories(&__ctx);
    }
    
private:

    ::omero::grid::RepositoryMap repositories(const ::Ice::Context*);
    
public:

    ::omero::grid::RepositoryPrx getScriptRepository()
    {
        return getScriptRepository(0);
    }
    ::omero::grid::RepositoryPrx getScriptRepository(const ::Ice::Context& __ctx)
    {
        return getScriptRepository(&__ctx);
    }
    
private:

    ::omero::grid::RepositoryPrx getScriptRepository(const ::Ice::Context*);
    
public:

    bool areTablesEnabled()
    {
        return areTablesEnabled(0);
    }
    bool areTablesEnabled(const ::Ice::Context& __ctx)
    {
        return areTablesEnabled(&__ctx);
    }
    
private:

    bool areTablesEnabled(const ::Ice::Context*);
    
public:

    ::omero::grid::TablePrx newTable(::Ice::Long repoId, const ::std::string& path)
    {
        return newTable(repoId, path, 0);
    }
    ::omero::grid::TablePrx newTable(::Ice::Long repoId, const ::std::string& path, const ::Ice::Context& __ctx)
    {
        return newTable(repoId, path, &__ctx);
    }
    
private:

    ::omero::grid::TablePrx newTable(::Ice::Long, const ::std::string&, const ::Ice::Context*);
    
public:

    ::omero::grid::TablePrx openTable(const ::omero::model::OriginalFilePtr& file)
    {
        return openTable(file, 0);
    }
    ::omero::grid::TablePrx openTable(const ::omero::model::OriginalFilePtr& file, const ::Ice::Context& __ctx)
    {
        return openTable(file, &__ctx);
    }
    
private:

    ::omero::grid::TablePrx openTable(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<SharedResources> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SharedResources*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<SharedResources*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SharedResources> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SharedResources*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<SharedResources*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SharedResources> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SharedResources*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<SharedResources*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SharedResources> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SharedResources*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<SharedResources*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SharedResources> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SharedResources*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<SharedResources*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SharedResources> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SharedResources*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<SharedResources*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SharedResources> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SharedResources*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<SharedResources*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SharedResources> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SharedResources*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<SharedResources*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SharedResources> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SharedResources*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<SharedResources*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SharedResources> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SharedResources*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<SharedResources*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SharedResources> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SharedResources*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<SharedResources*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SharedResources> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SharedResources*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<SharedResources*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SharedResources> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SharedResources*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<SharedResources*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SharedResources> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SharedResources*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<SharedResources*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SharedResources> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SharedResources*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<SharedResources*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SharedResources> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SharedResources*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<SharedResources*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SharedResources> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SharedResources*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<SharedResources*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SharedResources> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SharedResources*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<SharedResources*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SharedResources> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SharedResources*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<SharedResources*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace grid
{

class SharedResources : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::omero::grid::InteractiveProcessorPrx acquireProcessor(const ::omero::model::JobPtr&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void addProcessor(const ::omero::grid::ProcessorPrx&, const ::Ice::Context*) = 0;

    virtual void removeProcessor(const ::omero::grid::ProcessorPrx&, const ::Ice::Context*) = 0;

    virtual ::omero::grid::RepositoryMap repositories(const ::Ice::Context*) = 0;

    virtual ::omero::grid::RepositoryPrx getScriptRepository(const ::Ice::Context*) = 0;

    virtual bool areTablesEnabled(const ::Ice::Context*) = 0;

    virtual ::omero::grid::TablePrx newTable(::Ice::Long, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::grid::TablePrx openTable(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*) = 0;
};

}

}

}

namespace IceDelegateM
{

namespace omero
{

namespace grid
{

class SharedResources : virtual public ::IceDelegate::omero::grid::SharedResources,
                        virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::omero::grid::InteractiveProcessorPrx acquireProcessor(const ::omero::model::JobPtr&, ::Ice::Int, const ::Ice::Context*);

    virtual void addProcessor(const ::omero::grid::ProcessorPrx&, const ::Ice::Context*);

    virtual void removeProcessor(const ::omero::grid::ProcessorPrx&, const ::Ice::Context*);

    virtual ::omero::grid::RepositoryMap repositories(const ::Ice::Context*);

    virtual ::omero::grid::RepositoryPrx getScriptRepository(const ::Ice::Context*);

    virtual bool areTablesEnabled(const ::Ice::Context*);

    virtual ::omero::grid::TablePrx newTable(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::grid::TablePrx openTable(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);
};

}

}

}

namespace IceDelegateD
{

namespace omero
{

namespace grid
{

class SharedResources : virtual public ::IceDelegate::omero::grid::SharedResources,
                        virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::omero::grid::InteractiveProcessorPrx acquireProcessor(const ::omero::model::JobPtr&, ::Ice::Int, const ::Ice::Context*);

    virtual void addProcessor(const ::omero::grid::ProcessorPrx&, const ::Ice::Context*);

    virtual void removeProcessor(const ::omero::grid::ProcessorPrx&, const ::Ice::Context*);

    virtual ::omero::grid::RepositoryMap repositories(const ::Ice::Context*);

    virtual ::omero::grid::RepositoryPrx getScriptRepository(const ::Ice::Context*);

    virtual bool areTablesEnabled(const ::Ice::Context*);

    virtual ::omero::grid::TablePrx newTable(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::grid::TablePrx openTable(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace grid
{

class SharedResources : virtual public ::Ice::Object
{
public:

    typedef SharedResourcesPrx ProxyType;
    typedef SharedResourcesPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::omero::grid::InteractiveProcessorPrx acquireProcessor(const ::omero::model::JobPtr&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___acquireProcessor(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addProcessor(const ::omero::grid::ProcessorPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addProcessor(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeProcessor(const ::omero::grid::ProcessorPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeProcessor(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::grid::RepositoryMap repositories(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___repositories(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::grid::RepositoryPrx getScriptRepository(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getScriptRepository(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool areTablesEnabled(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___areTablesEnabled(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::grid::TablePrx newTable(::Ice::Long, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___newTable(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::grid::TablePrx openTable(const ::omero::model::OriginalFilePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___openTable(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
