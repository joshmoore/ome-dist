// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Permissions.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Permissions_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Permissions_h__

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

class Permissions;

}

}

}

namespace omero
{

namespace model
{

class Permissions;
bool operator==(const Permissions&, const Permissions&);
bool operator<(const Permissions&, const Permissions&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Permissions*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Permissions*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Permissions> PermissionsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Permissions> PermissionsPrx;

void __read(::IceInternal::BasicStream*, PermissionsPrx&);
void __patch__PermissionsPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Permissions : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Long getPerm1()
    {
        return getPerm1(0);
    }
    ::Ice::Long getPerm1(const ::Ice::Context& __ctx)
    {
        return getPerm1(&__ctx);
    }
    
private:

    ::Ice::Long getPerm1(const ::Ice::Context*);
    
public:

    void setPerm1(::Ice::Long value)
    {
        setPerm1(value, 0);
    }
    void setPerm1(::Ice::Long value, const ::Ice::Context& __ctx)
    {
        setPerm1(value, &__ctx);
    }
    
private:

    void setPerm1(::Ice::Long, const ::Ice::Context*);
    
public:

    bool isDisallow(::Ice::Int restriction)
    {
        return isDisallow(restriction, 0);
    }
    bool isDisallow(::Ice::Int restriction, const ::Ice::Context& __ctx)
    {
        return isDisallow(restriction, &__ctx);
    }
    
private:

    bool isDisallow(::Ice::Int, const ::Ice::Context*);
    
public:

    bool canAnnotate()
    {
        return canAnnotate(0);
    }
    bool canAnnotate(const ::Ice::Context& __ctx)
    {
        return canAnnotate(&__ctx);
    }
    
private:

    bool canAnnotate(const ::Ice::Context*);
    
public:

    bool canEdit()
    {
        return canEdit(0);
    }
    bool canEdit(const ::Ice::Context& __ctx)
    {
        return canEdit(&__ctx);
    }
    
private:

    bool canEdit(const ::Ice::Context*);
    
public:

    bool canLink()
    {
        return canLink(0);
    }
    bool canLink(const ::Ice::Context& __ctx)
    {
        return canLink(&__ctx);
    }
    
private:

    bool canLink(const ::Ice::Context*);
    
public:

    bool canDelete()
    {
        return canDelete(0);
    }
    bool canDelete(const ::Ice::Context& __ctx)
    {
        return canDelete(&__ctx);
    }
    
private:

    bool canDelete(const ::Ice::Context*);
    
public:

    bool isUserRead()
    {
        return isUserRead(0);
    }
    bool isUserRead(const ::Ice::Context& __ctx)
    {
        return isUserRead(&__ctx);
    }
    
private:

    bool isUserRead(const ::Ice::Context*);
    
public:

    bool isUserAnnotate()
    {
        return isUserAnnotate(0);
    }
    bool isUserAnnotate(const ::Ice::Context& __ctx)
    {
        return isUserAnnotate(&__ctx);
    }
    
private:

    bool isUserAnnotate(const ::Ice::Context*);
    
public:

    bool isUserWrite()
    {
        return isUserWrite(0);
    }
    bool isUserWrite(const ::Ice::Context& __ctx)
    {
        return isUserWrite(&__ctx);
    }
    
private:

    bool isUserWrite(const ::Ice::Context*);
    
public:

    bool isGroupRead()
    {
        return isGroupRead(0);
    }
    bool isGroupRead(const ::Ice::Context& __ctx)
    {
        return isGroupRead(&__ctx);
    }
    
private:

    bool isGroupRead(const ::Ice::Context*);
    
public:

    bool isGroupAnnotate()
    {
        return isGroupAnnotate(0);
    }
    bool isGroupAnnotate(const ::Ice::Context& __ctx)
    {
        return isGroupAnnotate(&__ctx);
    }
    
private:

    bool isGroupAnnotate(const ::Ice::Context*);
    
public:

    bool isGroupWrite()
    {
        return isGroupWrite(0);
    }
    bool isGroupWrite(const ::Ice::Context& __ctx)
    {
        return isGroupWrite(&__ctx);
    }
    
private:

    bool isGroupWrite(const ::Ice::Context*);
    
public:

    bool isWorldRead()
    {
        return isWorldRead(0);
    }
    bool isWorldRead(const ::Ice::Context& __ctx)
    {
        return isWorldRead(&__ctx);
    }
    
private:

    bool isWorldRead(const ::Ice::Context*);
    
public:

    bool isWorldAnnotate()
    {
        return isWorldAnnotate(0);
    }
    bool isWorldAnnotate(const ::Ice::Context& __ctx)
    {
        return isWorldAnnotate(&__ctx);
    }
    
private:

    bool isWorldAnnotate(const ::Ice::Context*);
    
public:

    bool isWorldWrite()
    {
        return isWorldWrite(0);
    }
    bool isWorldWrite(const ::Ice::Context& __ctx)
    {
        return isWorldWrite(&__ctx);
    }
    
private:

    bool isWorldWrite(const ::Ice::Context*);
    
public:

    void setUserRead(bool value)
    {
        setUserRead(value, 0);
    }
    void setUserRead(bool value, const ::Ice::Context& __ctx)
    {
        setUserRead(value, &__ctx);
    }
    
private:

    void setUserRead(bool, const ::Ice::Context*);
    
public:

    void setUserAnnotate(bool value)
    {
        setUserAnnotate(value, 0);
    }
    void setUserAnnotate(bool value, const ::Ice::Context& __ctx)
    {
        setUserAnnotate(value, &__ctx);
    }
    
private:

    void setUserAnnotate(bool, const ::Ice::Context*);
    
public:

    void setUserWrite(bool value)
    {
        setUserWrite(value, 0);
    }
    void setUserWrite(bool value, const ::Ice::Context& __ctx)
    {
        setUserWrite(value, &__ctx);
    }
    
private:

    void setUserWrite(bool, const ::Ice::Context*);
    
public:

    void setGroupRead(bool value)
    {
        setGroupRead(value, 0);
    }
    void setGroupRead(bool value, const ::Ice::Context& __ctx)
    {
        setGroupRead(value, &__ctx);
    }
    
private:

    void setGroupRead(bool, const ::Ice::Context*);
    
public:

    void setGroupAnnotate(bool value)
    {
        setGroupAnnotate(value, 0);
    }
    void setGroupAnnotate(bool value, const ::Ice::Context& __ctx)
    {
        setGroupAnnotate(value, &__ctx);
    }
    
private:

    void setGroupAnnotate(bool, const ::Ice::Context*);
    
public:

    void setGroupWrite(bool value)
    {
        setGroupWrite(value, 0);
    }
    void setGroupWrite(bool value, const ::Ice::Context& __ctx)
    {
        setGroupWrite(value, &__ctx);
    }
    
private:

    void setGroupWrite(bool, const ::Ice::Context*);
    
public:

    void setWorldRead(bool value)
    {
        setWorldRead(value, 0);
    }
    void setWorldRead(bool value, const ::Ice::Context& __ctx)
    {
        setWorldRead(value, &__ctx);
    }
    
private:

    void setWorldRead(bool, const ::Ice::Context*);
    
public:

    void setWorldAnnotate(bool value)
    {
        setWorldAnnotate(value, 0);
    }
    void setWorldAnnotate(bool value, const ::Ice::Context& __ctx)
    {
        setWorldAnnotate(value, &__ctx);
    }
    
private:

    void setWorldAnnotate(bool, const ::Ice::Context*);
    
public:

    void setWorldWrite(bool value)
    {
        setWorldWrite(value, 0);
    }
    void setWorldWrite(bool value, const ::Ice::Context& __ctx)
    {
        setWorldWrite(value, &__ctx);
    }
    
private:

    void setWorldWrite(bool, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Permissions> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Permissions*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Permissions*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Permissions> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Permissions*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Permissions*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Permissions> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Permissions*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Permissions*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Permissions> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Permissions*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Permissions*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Permissions> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Permissions*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Permissions*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Permissions> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Permissions*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Permissions*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Permissions> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Permissions*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Permissions*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Permissions> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Permissions*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Permissions*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Permissions> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Permissions*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Permissions*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Permissions> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Permissions*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Permissions*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Permissions> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Permissions*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Permissions*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Permissions> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Permissions*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Permissions*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Permissions> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Permissions*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Permissions*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Permissions> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Permissions*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Permissions*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Permissions> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Permissions*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Permissions*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Permissions> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Permissions*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Permissions*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Permissions> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Permissions*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Permissions*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Permissions> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Permissions*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Permissions*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Permissions> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Permissions*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Permissions*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Permissions : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Long getPerm1(const ::Ice::Context*) = 0;

    virtual void setPerm1(::Ice::Long, const ::Ice::Context*) = 0;

    virtual bool isDisallow(::Ice::Int, const ::Ice::Context*) = 0;

    virtual bool canAnnotate(const ::Ice::Context*) = 0;

    virtual bool canEdit(const ::Ice::Context*) = 0;

    virtual bool canLink(const ::Ice::Context*) = 0;

    virtual bool canDelete(const ::Ice::Context*) = 0;

    virtual bool isUserRead(const ::Ice::Context*) = 0;

    virtual bool isUserAnnotate(const ::Ice::Context*) = 0;

    virtual bool isUserWrite(const ::Ice::Context*) = 0;

    virtual bool isGroupRead(const ::Ice::Context*) = 0;

    virtual bool isGroupAnnotate(const ::Ice::Context*) = 0;

    virtual bool isGroupWrite(const ::Ice::Context*) = 0;

    virtual bool isWorldRead(const ::Ice::Context*) = 0;

    virtual bool isWorldAnnotate(const ::Ice::Context*) = 0;

    virtual bool isWorldWrite(const ::Ice::Context*) = 0;

    virtual void setUserRead(bool, const ::Ice::Context*) = 0;

    virtual void setUserAnnotate(bool, const ::Ice::Context*) = 0;

    virtual void setUserWrite(bool, const ::Ice::Context*) = 0;

    virtual void setGroupRead(bool, const ::Ice::Context*) = 0;

    virtual void setGroupAnnotate(bool, const ::Ice::Context*) = 0;

    virtual void setGroupWrite(bool, const ::Ice::Context*) = 0;

    virtual void setWorldRead(bool, const ::Ice::Context*) = 0;

    virtual void setWorldAnnotate(bool, const ::Ice::Context*) = 0;

    virtual void setWorldWrite(bool, const ::Ice::Context*) = 0;
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

class Permissions : virtual public ::IceDelegate::omero::model::Permissions,
                    virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Long getPerm1(const ::Ice::Context*);

    virtual void setPerm1(::Ice::Long, const ::Ice::Context*);

    virtual bool isDisallow(::Ice::Int, const ::Ice::Context*);

    virtual bool canAnnotate(const ::Ice::Context*);

    virtual bool canEdit(const ::Ice::Context*);

    virtual bool canLink(const ::Ice::Context*);

    virtual bool canDelete(const ::Ice::Context*);

    virtual bool isUserRead(const ::Ice::Context*);

    virtual bool isUserAnnotate(const ::Ice::Context*);

    virtual bool isUserWrite(const ::Ice::Context*);

    virtual bool isGroupRead(const ::Ice::Context*);

    virtual bool isGroupAnnotate(const ::Ice::Context*);

    virtual bool isGroupWrite(const ::Ice::Context*);

    virtual bool isWorldRead(const ::Ice::Context*);

    virtual bool isWorldAnnotate(const ::Ice::Context*);

    virtual bool isWorldWrite(const ::Ice::Context*);

    virtual void setUserRead(bool, const ::Ice::Context*);

    virtual void setUserAnnotate(bool, const ::Ice::Context*);

    virtual void setUserWrite(bool, const ::Ice::Context*);

    virtual void setGroupRead(bool, const ::Ice::Context*);

    virtual void setGroupAnnotate(bool, const ::Ice::Context*);

    virtual void setGroupWrite(bool, const ::Ice::Context*);

    virtual void setWorldRead(bool, const ::Ice::Context*);

    virtual void setWorldAnnotate(bool, const ::Ice::Context*);

    virtual void setWorldWrite(bool, const ::Ice::Context*);
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

class Permissions : virtual public ::IceDelegate::omero::model::Permissions,
                    virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Long getPerm1(const ::Ice::Context*);

    virtual void setPerm1(::Ice::Long, const ::Ice::Context*);

    virtual bool isDisallow(::Ice::Int, const ::Ice::Context*);

    virtual bool canAnnotate(const ::Ice::Context*);

    virtual bool canEdit(const ::Ice::Context*);

    virtual bool canLink(const ::Ice::Context*);

    virtual bool canDelete(const ::Ice::Context*);

    virtual bool isUserRead(const ::Ice::Context*);

    virtual bool isUserAnnotate(const ::Ice::Context*);

    virtual bool isUserWrite(const ::Ice::Context*);

    virtual bool isGroupRead(const ::Ice::Context*);

    virtual bool isGroupAnnotate(const ::Ice::Context*);

    virtual bool isGroupWrite(const ::Ice::Context*);

    virtual bool isWorldRead(const ::Ice::Context*);

    virtual bool isWorldAnnotate(const ::Ice::Context*);

    virtual bool isWorldWrite(const ::Ice::Context*);

    virtual void setUserRead(bool, const ::Ice::Context*);

    virtual void setUserAnnotate(bool, const ::Ice::Context*);

    virtual void setUserWrite(bool, const ::Ice::Context*);

    virtual void setGroupRead(bool, const ::Ice::Context*);

    virtual void setGroupAnnotate(bool, const ::Ice::Context*);

    virtual void setGroupWrite(bool, const ::Ice::Context*);

    virtual void setWorldRead(bool, const ::Ice::Context*);

    virtual void setWorldAnnotate(bool, const ::Ice::Context*);

    virtual void setWorldWrite(bool, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class Permissions : virtual public ::Ice::Object
{
public:

    typedef PermissionsPrx ProxyType;
    typedef PermissionsPtr PointerType;
    
    Permissions() {}
    Permissions(const ::omero::api::BoolArray&, ::Ice::Long);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual ::Ice::Long getPerm1(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPerm1(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPerm1(::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPerm1(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool isDisallow(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isDisallow(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool canAnnotate(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___canAnnotate(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool canEdit(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___canEdit(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool canLink(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___canLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool canDelete(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___canDelete(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool isUserRead(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isUserRead(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool isUserAnnotate(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isUserAnnotate(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool isUserWrite(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isUserWrite(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool isGroupRead(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isGroupRead(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool isGroupAnnotate(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isGroupAnnotate(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool isGroupWrite(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isGroupWrite(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool isWorldRead(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isWorldRead(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool isWorldAnnotate(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isWorldAnnotate(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool isWorldWrite(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isWorldWrite(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setUserRead(bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setUserRead(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setUserAnnotate(bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setUserAnnotate(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setUserWrite(bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setUserWrite(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setGroupRead(bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setGroupRead(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setGroupAnnotate(bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setGroupAnnotate(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setGroupWrite(bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setGroupWrite(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setWorldRead(bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setWorldRead(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setWorldAnnotate(bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setWorldAnnotate(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setWorldWrite(bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setWorldWrite(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::api::BoolArray restrictions;

    ::Ice::Long perm1;
};

}

}

#endif
