// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `IObject.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_IObject_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_IObject_h__

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
#include <Ice/StreamF.h>
#include <omero/RTypes.h>
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

class IObject;

}

}

}

namespace omero
{

namespace model
{

class IObject;
bool operator==(const IObject&, const IObject&);
bool operator<(const IObject&, const IObject&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::IObject*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::IObject*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::IObject> IObjectPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::IObject> IObjectPrx;

void __read(::IceInternal::BasicStream*, IObjectPrx&);
void __patch__IObjectPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class IObject : virtual public ::IceProxy::Ice::Object
{
public:

    ::omero::RLongPtr getId()
    {
        return getId(0);
    }
    ::omero::RLongPtr getId(const ::Ice::Context& __ctx)
    {
        return getId(&__ctx);
    }
    
private:

    ::omero::RLongPtr getId(const ::Ice::Context*);
    
public:

    void setId(const ::omero::RLongPtr& id)
    {
        setId(id, 0);
    }
    void setId(const ::omero::RLongPtr& id, const ::Ice::Context& __ctx)
    {
        setId(id, &__ctx);
    }
    
private:

    void setId(const ::omero::RLongPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::DetailsPtr getDetails()
    {
        return getDetails(0);
    }
    ::omero::model::DetailsPtr getDetails(const ::Ice::Context& __ctx)
    {
        return getDetails(&__ctx);
    }
    
private:

    ::omero::model::DetailsPtr getDetails(const ::Ice::Context*);
    
public:

    ::omero::model::IObjectPtr proxy()
    {
        return proxy(0);
    }
    ::omero::model::IObjectPtr proxy(const ::Ice::Context& __ctx)
    {
        return proxy(&__ctx);
    }
    
private:

    ::omero::model::IObjectPtr proxy(const ::Ice::Context*);
    
public:

    ::omero::model::IObjectPtr shallowCopy()
    {
        return shallowCopy(0);
    }
    ::omero::model::IObjectPtr shallowCopy(const ::Ice::Context& __ctx)
    {
        return shallowCopy(&__ctx);
    }
    
private:

    ::omero::model::IObjectPtr shallowCopy(const ::Ice::Context*);
    
public:

    void unload()
    {
        unload(0);
    }
    void unload(const ::Ice::Context& __ctx)
    {
        unload(&__ctx);
    }
    
private:

    void unload(const ::Ice::Context*);
    
public:

    void unloadCollections()
    {
        unloadCollections(0);
    }
    void unloadCollections(const ::Ice::Context& __ctx)
    {
        unloadCollections(&__ctx);
    }
    
private:

    void unloadCollections(const ::Ice::Context*);
    
public:

    void unloadDetails()
    {
        unloadDetails(0);
    }
    void unloadDetails(const ::Ice::Context& __ctx)
    {
        unloadDetails(&__ctx);
    }
    
private:

    void unloadDetails(const ::Ice::Context*);
    
public:

    bool isLoaded()
    {
        return isLoaded(0);
    }
    bool isLoaded(const ::Ice::Context& __ctx)
    {
        return isLoaded(&__ctx);
    }
    
private:

    bool isLoaded(const ::Ice::Context*);
    
public:

    bool isGlobal()
    {
        return isGlobal(0);
    }
    bool isGlobal(const ::Ice::Context& __ctx)
    {
        return isGlobal(&__ctx);
    }
    
private:

    bool isGlobal(const ::Ice::Context*);
    
public:

    bool isLink()
    {
        return isLink(0);
    }
    bool isLink(const ::Ice::Context& __ctx)
    {
        return isLink(&__ctx);
    }
    
private:

    bool isLink(const ::Ice::Context*);
    
public:

    bool isMutable()
    {
        return isMutable(0);
    }
    bool isMutable(const ::Ice::Context& __ctx)
    {
        return isMutable(&__ctx);
    }
    
private:

    bool isMutable(const ::Ice::Context*);
    
public:

    bool isAnnotated()
    {
        return isAnnotated(0);
    }
    bool isAnnotated(const ::Ice::Context& __ctx)
    {
        return isAnnotated(&__ctx);
    }
    
private:

    bool isAnnotated(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<IObject> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObject*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<IObject*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObject> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObject*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<IObject*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObject> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObject*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<IObject*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObject> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObject*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<IObject*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObject> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObject*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<IObject*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObject> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObject*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<IObject*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObject> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObject*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<IObject*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObject> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObject*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<IObject*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObject> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObject*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<IObject*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObject> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObject*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<IObject*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObject> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObject*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<IObject*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObject> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObject*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<IObject*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObject> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObject*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<IObject*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObject> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObject*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<IObject*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObject> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObject*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<IObject*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObject> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObject*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<IObject*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObject> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObject*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<IObject*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObject> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObject*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<IObject*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IObject> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IObject*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<IObject*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class IObject : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::omero::RLongPtr getId(const ::Ice::Context*) = 0;

    virtual void setId(const ::omero::RLongPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::DetailsPtr getDetails(const ::Ice::Context*) = 0;

    virtual ::omero::model::IObjectPtr proxy(const ::Ice::Context*) = 0;

    virtual ::omero::model::IObjectPtr shallowCopy(const ::Ice::Context*) = 0;

    virtual void unload(const ::Ice::Context*) = 0;

    virtual void unloadCollections(const ::Ice::Context*) = 0;

    virtual void unloadDetails(const ::Ice::Context*) = 0;

    virtual bool isLoaded(const ::Ice::Context*) = 0;

    virtual bool isGlobal(const ::Ice::Context*) = 0;

    virtual bool isLink(const ::Ice::Context*) = 0;

    virtual bool isMutable(const ::Ice::Context*) = 0;

    virtual bool isAnnotated(const ::Ice::Context*) = 0;
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

class IObject : virtual public ::IceDelegate::omero::model::IObject,
                virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::omero::RLongPtr getId(const ::Ice::Context*);

    virtual void setId(const ::omero::RLongPtr&, const ::Ice::Context*);

    virtual ::omero::model::DetailsPtr getDetails(const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr proxy(const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr shallowCopy(const ::Ice::Context*);

    virtual void unload(const ::Ice::Context*);

    virtual void unloadCollections(const ::Ice::Context*);

    virtual void unloadDetails(const ::Ice::Context*);

    virtual bool isLoaded(const ::Ice::Context*);

    virtual bool isGlobal(const ::Ice::Context*);

    virtual bool isLink(const ::Ice::Context*);

    virtual bool isMutable(const ::Ice::Context*);

    virtual bool isAnnotated(const ::Ice::Context*);
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

class IObject : virtual public ::IceDelegate::omero::model::IObject,
                virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::omero::RLongPtr getId(const ::Ice::Context*);

    virtual void setId(const ::omero::RLongPtr&, const ::Ice::Context*);

    virtual ::omero::model::DetailsPtr getDetails(const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr proxy(const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr shallowCopy(const ::Ice::Context*);

    virtual void unload(const ::Ice::Context*);

    virtual void unloadCollections(const ::Ice::Context*);

    virtual void unloadDetails(const ::Ice::Context*);

    virtual bool isLoaded(const ::Ice::Context*);

    virtual bool isGlobal(const ::Ice::Context*);

    virtual bool isLink(const ::Ice::Context*);

    virtual bool isMutable(const ::Ice::Context*);

    virtual bool isAnnotated(const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class IObject : virtual public ::Ice::Object
{
public:

    typedef IObjectPrx ProxyType;
    typedef IObjectPtr PointerType;
    
    IObject() {}
    IObject(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __incRef();
    virtual void __decRef();
    virtual void __addObject(::IceInternal::GCCountMap&);
    virtual bool __usesClasses();
    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual ::omero::RLongPtr getId(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setId(const ::omero::RLongPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::DetailsPtr getDetails(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getDetails(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::IObjectPtr proxy(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___proxy(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::IObjectPtr shallowCopy(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___shallowCopy(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unload(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unload(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadCollections(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadCollections(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadDetails(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadDetails(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool isLoaded(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isLoaded(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool isGlobal(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isGlobal(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool isLink(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool isMutable(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isMutable(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool isAnnotated(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isAnnotated(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RLongPtr id;

    ::omero::model::DetailsPtr details;

    bool loaded;
};

}

}

#endif
