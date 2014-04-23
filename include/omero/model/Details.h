// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Details.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Details_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Details_h__

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
#include <omero/System.h>
#include <Ice/Current.h>
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

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Details : virtual public ::IceProxy::Ice::Object
{
public:

    ::omero::model::ExperimenterPtr getOwner()
    {
        return getOwner(0);
    }
    ::omero::model::ExperimenterPtr getOwner(const ::Ice::Context& __ctx)
    {
        return getOwner(&__ctx);
    }
    
private:

    ::omero::model::ExperimenterPtr getOwner(const ::Ice::Context*);
    
public:

    void setOwner(const ::omero::model::ExperimenterPtr& theOwner)
    {
        setOwner(theOwner, 0);
    }
    void setOwner(const ::omero::model::ExperimenterPtr& theOwner, const ::Ice::Context& __ctx)
    {
        setOwner(theOwner, &__ctx);
    }
    
private:

    void setOwner(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::ExperimenterGroupPtr getGroup()
    {
        return getGroup(0);
    }
    ::omero::model::ExperimenterGroupPtr getGroup(const ::Ice::Context& __ctx)
    {
        return getGroup(&__ctx);
    }
    
private:

    ::omero::model::ExperimenterGroupPtr getGroup(const ::Ice::Context*);
    
public:

    void setGroup(const ::omero::model::ExperimenterGroupPtr& theGroup)
    {
        setGroup(theGroup, 0);
    }
    void setGroup(const ::omero::model::ExperimenterGroupPtr& theGroup, const ::Ice::Context& __ctx)
    {
        setGroup(theGroup, &__ctx);
    }
    
private:

    void setGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::EventPtr getCreationEvent()
    {
        return getCreationEvent(0);
    }
    ::omero::model::EventPtr getCreationEvent(const ::Ice::Context& __ctx)
    {
        return getCreationEvent(&__ctx);
    }
    
private:

    ::omero::model::EventPtr getCreationEvent(const ::Ice::Context*);
    
public:

    void setCreationEvent(const ::omero::model::EventPtr& theCreationEvent)
    {
        setCreationEvent(theCreationEvent, 0);
    }
    void setCreationEvent(const ::omero::model::EventPtr& theCreationEvent, const ::Ice::Context& __ctx)
    {
        setCreationEvent(theCreationEvent, &__ctx);
    }
    
private:

    void setCreationEvent(const ::omero::model::EventPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::EventPtr getUpdateEvent()
    {
        return getUpdateEvent(0);
    }
    ::omero::model::EventPtr getUpdateEvent(const ::Ice::Context& __ctx)
    {
        return getUpdateEvent(&__ctx);
    }
    
private:

    ::omero::model::EventPtr getUpdateEvent(const ::Ice::Context*);
    
public:

    void setUpdateEvent(const ::omero::model::EventPtr& theUpdateEvent)
    {
        setUpdateEvent(theUpdateEvent, 0);
    }
    void setUpdateEvent(const ::omero::model::EventPtr& theUpdateEvent, const ::Ice::Context& __ctx)
    {
        setUpdateEvent(theUpdateEvent, &__ctx);
    }
    
private:

    void setUpdateEvent(const ::omero::model::EventPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::PermissionsPtr getPermissions()
    {
        return getPermissions(0);
    }
    ::omero::model::PermissionsPtr getPermissions(const ::Ice::Context& __ctx)
    {
        return getPermissions(&__ctx);
    }
    
private:

    ::omero::model::PermissionsPtr getPermissions(const ::Ice::Context*);
    
public:

    void setPermissions(const ::omero::model::PermissionsPtr& thePermissions)
    {
        setPermissions(thePermissions, 0);
    }
    void setPermissions(const ::omero::model::PermissionsPtr& thePermissions, const ::Ice::Context& __ctx)
    {
        setPermissions(thePermissions, &__ctx);
    }
    
private:

    void setPermissions(const ::omero::model::PermissionsPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::ExternalInfoPtr getExternalInfo()
    {
        return getExternalInfo(0);
    }
    ::omero::model::ExternalInfoPtr getExternalInfo(const ::Ice::Context& __ctx)
    {
        return getExternalInfo(&__ctx);
    }
    
private:

    ::omero::model::ExternalInfoPtr getExternalInfo(const ::Ice::Context*);
    
public:

    void setExternalInfo(const ::omero::model::ExternalInfoPtr& theExternalInfo)
    {
        setExternalInfo(theExternalInfo, 0);
    }
    void setExternalInfo(const ::omero::model::ExternalInfoPtr& theExternalInfo, const ::Ice::Context& __ctx)
    {
        setExternalInfo(theExternalInfo, &__ctx);
    }
    
private:

    void setExternalInfo(const ::omero::model::ExternalInfoPtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Details> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Details*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Details*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Details> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Details*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Details*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Details> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Details*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Details*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Details> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Details*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Details*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Details> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Details*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Details*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Details> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Details*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Details*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Details> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Details*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Details*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Details> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Details*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Details*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Details> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Details*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Details*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Details> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Details*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Details*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Details> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Details*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Details*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Details> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Details*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Details*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Details> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Details*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Details*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Details> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Details*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Details*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Details> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Details*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Details*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Details> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Details*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Details*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Details> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Details*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Details*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Details> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Details*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Details*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Details> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Details*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Details*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Details : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::omero::model::ExperimenterPtr getOwner(const ::Ice::Context*) = 0;

    virtual void setOwner(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::ExperimenterGroupPtr getGroup(const ::Ice::Context*) = 0;

    virtual void setGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::EventPtr getCreationEvent(const ::Ice::Context*) = 0;

    virtual void setCreationEvent(const ::omero::model::EventPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::EventPtr getUpdateEvent(const ::Ice::Context*) = 0;

    virtual void setUpdateEvent(const ::omero::model::EventPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::PermissionsPtr getPermissions(const ::Ice::Context*) = 0;

    virtual void setPermissions(const ::omero::model::PermissionsPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::ExternalInfoPtr getExternalInfo(const ::Ice::Context*) = 0;

    virtual void setExternalInfo(const ::omero::model::ExternalInfoPtr&, const ::Ice::Context*) = 0;
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

class Details : virtual public ::IceDelegate::omero::model::Details,
                virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::omero::model::ExperimenterPtr getOwner(const ::Ice::Context*);

    virtual void setOwner(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterGroupPtr getGroup(const ::Ice::Context*);

    virtual void setGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);

    virtual ::omero::model::EventPtr getCreationEvent(const ::Ice::Context*);

    virtual void setCreationEvent(const ::omero::model::EventPtr&, const ::Ice::Context*);

    virtual ::omero::model::EventPtr getUpdateEvent(const ::Ice::Context*);

    virtual void setUpdateEvent(const ::omero::model::EventPtr&, const ::Ice::Context*);

    virtual ::omero::model::PermissionsPtr getPermissions(const ::Ice::Context*);

    virtual void setPermissions(const ::omero::model::PermissionsPtr&, const ::Ice::Context*);

    virtual ::omero::model::ExternalInfoPtr getExternalInfo(const ::Ice::Context*);

    virtual void setExternalInfo(const ::omero::model::ExternalInfoPtr&, const ::Ice::Context*);
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

class Details : virtual public ::IceDelegate::omero::model::Details,
                virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::omero::model::ExperimenterPtr getOwner(const ::Ice::Context*);

    virtual void setOwner(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterGroupPtr getGroup(const ::Ice::Context*);

    virtual void setGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);

    virtual ::omero::model::EventPtr getCreationEvent(const ::Ice::Context*);

    virtual void setCreationEvent(const ::omero::model::EventPtr&, const ::Ice::Context*);

    virtual ::omero::model::EventPtr getUpdateEvent(const ::Ice::Context*);

    virtual void setUpdateEvent(const ::omero::model::EventPtr&, const ::Ice::Context*);

    virtual ::omero::model::PermissionsPtr getPermissions(const ::Ice::Context*);

    virtual void setPermissions(const ::omero::model::PermissionsPtr&, const ::Ice::Context*);

    virtual ::omero::model::ExternalInfoPtr getExternalInfo(const ::Ice::Context*);

    virtual void setExternalInfo(const ::omero::model::ExternalInfoPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class Details : virtual public ::Ice::Object
{
public:

    typedef DetailsPrx ProxyType;
    typedef DetailsPtr PointerType;
    
    Details() {}
    Details(const ::omero::model::ExperimenterPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::model::EventPtr&, const ::omero::model::EventPtr&, const ::omero::model::PermissionsPtr&, const ::omero::model::ExternalInfoPtr&, const ::Ice::Context&, const ::omero::sys::EventContextPtr&);
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

    virtual ::omero::model::ExperimenterPtr getOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setOwner(const ::omero::model::ExperimenterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ExperimenterGroupPtr getGroup(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::EventPtr getCreationEvent(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getCreationEvent(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setCreationEvent(const ::omero::model::EventPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setCreationEvent(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::EventPtr getUpdateEvent(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getUpdateEvent(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setUpdateEvent(const ::omero::model::EventPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setUpdateEvent(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PermissionsPtr getPermissions(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPermissions(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPermissions(const ::omero::model::PermissionsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPermissions(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ExternalInfoPtr getExternalInfo(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getExternalInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setExternalInfo(const ::omero::model::ExternalInfoPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setExternalInfo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::model::ExperimenterPtr owner;

    ::omero::model::ExperimenterGroupPtr group;

    ::omero::model::EventPtr creationEvent;

    ::omero::model::EventPtr updateEvent;

    ::omero::model::PermissionsPtr permissions;

    ::omero::model::ExternalInfoPtr externalInfo;

    ::Ice::Context call;

    ::omero::sys::EventContextPtr event;
};

}

}

#endif
