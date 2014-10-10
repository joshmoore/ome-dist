// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `ILdap.ice'

#ifndef __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_ILdap_h__
#define __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_ILdap_h__

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
#include <omero/ServicesF.h>
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

namespace api
{

class ILdap;

}

}

}

namespace omero
{

namespace api
{

class ILdap;
bool operator==(const ILdap&, const ILdap&);
bool operator<(const ILdap&, const ILdap&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::api::ILdap*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::ILdap*);

}

namespace omero
{

namespace api
{

typedef ::IceInternal::Handle< ::omero::api::ILdap> ILdapPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::ILdap> ILdapPrx;

void __read(::IceInternal::BasicStream*, ILdapPrx&);
void __patch__ILdapPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace api
{

class AMI_ILdap_searchAll : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::ExperimenterList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ILdapPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ILdap_searchAll> AMI_ILdap_searchAllPtr;

class AMD_ILdap_searchAll : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::ExperimenterList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ILdap_searchAll> AMD_ILdap_searchAllPtr;

class AMI_ILdap_searchDnInGroups : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::StringSet&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ILdapPrx&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ILdap_searchDnInGroups> AMI_ILdap_searchDnInGroupsPtr;

class AMD_ILdap_searchDnInGroups : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::StringSet&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ILdap_searchDnInGroups> AMD_ILdap_searchDnInGroupsPtr;

class AMI_ILdap_searchByAttribute : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::ExperimenterList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ILdapPrx&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ILdap_searchByAttribute> AMI_ILdap_searchByAttributePtr;

class AMD_ILdap_searchByAttribute : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::ExperimenterList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ILdap_searchByAttribute> AMD_ILdap_searchByAttributePtr;

class AMI_ILdap_searchByAttributes : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::ExperimenterList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ILdapPrx&, const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ILdap_searchByAttributes> AMI_ILdap_searchByAttributesPtr;

class AMD_ILdap_searchByAttributes : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::ExperimenterList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ILdap_searchByAttributes> AMD_ILdap_searchByAttributesPtr;

class AMI_ILdap_searchByDN : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::ExperimenterPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ILdapPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ILdap_searchByDN> AMI_ILdap_searchByDNPtr;

class AMD_ILdap_searchByDN : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::ExperimenterPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ILdap_searchByDN> AMD_ILdap_searchByDNPtr;

class AMI_ILdap_findDN : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ILdapPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ILdap_findDN> AMI_ILdap_findDNPtr;

class AMD_ILdap_findDN : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::std::string&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ILdap_findDN> AMD_ILdap_findDNPtr;

class AMI_ILdap_findExperimenter : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::ExperimenterPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ILdapPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ILdap_findExperimenter> AMI_ILdap_findExperimenterPtr;

class AMD_ILdap_findExperimenter : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::ExperimenterPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ILdap_findExperimenter> AMD_ILdap_findExperimenterPtr;

class AMI_ILdap_setDN : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ILdapPrx&, const ::omero::RLongPtr&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ILdap_setDN> AMI_ILdap_setDNPtr;

class AMD_ILdap_setDN : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ILdap_setDN> AMD_ILdap_setDNPtr;

class AMI_ILdap_getSetting : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ILdapPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ILdap_getSetting> AMI_ILdap_getSettingPtr;

class AMD_ILdap_getSetting : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ILdap_getSetting> AMD_ILdap_getSettingPtr;

class AMI_ILdap_createUser : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::ExperimenterPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ILdapPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ILdap_createUser> AMI_ILdap_createUserPtr;

class AMD_ILdap_createUser : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::ExperimenterPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ILdap_createUser> AMD_ILdap_createUserPtr;

}

}

namespace IceAsync
{

namespace omero
{

namespace api
{

class AMD_ILdap_searchAll : public ::omero::api::AMD_ILdap_searchAll, public ::IceInternal::IncomingAsync
{
public:

    AMD_ILdap_searchAll(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::ExperimenterList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ILdap_searchDnInGroups : public ::omero::api::AMD_ILdap_searchDnInGroups, public ::IceInternal::IncomingAsync
{
public:

    AMD_ILdap_searchDnInGroups(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::StringSet&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ILdap_searchByAttribute : public ::omero::api::AMD_ILdap_searchByAttribute, public ::IceInternal::IncomingAsync
{
public:

    AMD_ILdap_searchByAttribute(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::ExperimenterList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ILdap_searchByAttributes : public ::omero::api::AMD_ILdap_searchByAttributes, public ::IceInternal::IncomingAsync
{
public:

    AMD_ILdap_searchByAttributes(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::ExperimenterList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ILdap_searchByDN : public ::omero::api::AMD_ILdap_searchByDN, public ::IceInternal::IncomingAsync
{
public:

    AMD_ILdap_searchByDN(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::ExperimenterPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ILdap_findDN : public ::omero::api::AMD_ILdap_findDN, public ::IceInternal::IncomingAsync
{
public:

    AMD_ILdap_findDN(::IceInternal::Incoming&);

    virtual void ice_response(const ::std::string&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ILdap_findExperimenter : public ::omero::api::AMD_ILdap_findExperimenter, public ::IceInternal::IncomingAsync
{
public:

    AMD_ILdap_findExperimenter(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::ExperimenterPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ILdap_setDN : public ::omero::api::AMD_ILdap_setDN, public ::IceInternal::IncomingAsync
{
public:

    AMD_ILdap_setDN(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ILdap_getSetting : public ::omero::api::AMD_ILdap_getSetting, public ::IceInternal::IncomingAsync
{
public:

    AMD_ILdap_getSetting(::IceInternal::Incoming&);

    virtual void ice_response(bool);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ILdap_createUser : public ::omero::api::AMD_ILdap_createUser, public ::IceInternal::IncomingAsync
{
public:

    AMD_ILdap_createUser(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::ExperimenterPtr&);
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

class ILdap : virtual public ::IceProxy::omero::api::ServiceInterface
{
public:

    ::omero::api::ExperimenterList searchAll()
    {
        return searchAll(0);
    }
    ::omero::api::ExperimenterList searchAll(const ::Ice::Context& __ctx)
    {
        return searchAll(&__ctx);
    }
    
private:

    ::omero::api::ExperimenterList searchAll(const ::Ice::Context*);
    
public:
    bool searchAll_async(const ::omero::api::AMI_ILdap_searchAllPtr&);
    bool searchAll_async(const ::omero::api::AMI_ILdap_searchAllPtr&, const ::Ice::Context&);

    ::omero::api::StringSet searchDnInGroups(const ::std::string& attr, const ::std::string& value)
    {
        return searchDnInGroups(attr, value, 0);
    }
    ::omero::api::StringSet searchDnInGroups(const ::std::string& attr, const ::std::string& value, const ::Ice::Context& __ctx)
    {
        return searchDnInGroups(attr, value, &__ctx);
    }
    
private:

    ::omero::api::StringSet searchDnInGroups(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:
    bool searchDnInGroups_async(const ::omero::api::AMI_ILdap_searchDnInGroupsPtr&, const ::std::string&, const ::std::string&);
    bool searchDnInGroups_async(const ::omero::api::AMI_ILdap_searchDnInGroupsPtr&, const ::std::string&, const ::std::string&, const ::Ice::Context&);

    ::omero::api::ExperimenterList searchByAttribute(const ::std::string& dn, const ::std::string& attribute, const ::std::string& value)
    {
        return searchByAttribute(dn, attribute, value, 0);
    }
    ::omero::api::ExperimenterList searchByAttribute(const ::std::string& dn, const ::std::string& attribute, const ::std::string& value, const ::Ice::Context& __ctx)
    {
        return searchByAttribute(dn, attribute, value, &__ctx);
    }
    
private:

    ::omero::api::ExperimenterList searchByAttribute(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:
    bool searchByAttribute_async(const ::omero::api::AMI_ILdap_searchByAttributePtr&, const ::std::string&, const ::std::string&, const ::std::string&);
    bool searchByAttribute_async(const ::omero::api::AMI_ILdap_searchByAttributePtr&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context&);

    ::omero::api::ExperimenterList searchByAttributes(const ::std::string& dn, const ::omero::api::StringSet& attributes, const ::omero::api::StringSet& values)
    {
        return searchByAttributes(dn, attributes, values, 0);
    }
    ::omero::api::ExperimenterList searchByAttributes(const ::std::string& dn, const ::omero::api::StringSet& attributes, const ::omero::api::StringSet& values, const ::Ice::Context& __ctx)
    {
        return searchByAttributes(dn, attributes, values, &__ctx);
    }
    
private:

    ::omero::api::ExperimenterList searchByAttributes(const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::Ice::Context*);
    
public:
    bool searchByAttributes_async(const ::omero::api::AMI_ILdap_searchByAttributesPtr&, const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&);
    bool searchByAttributes_async(const ::omero::api::AMI_ILdap_searchByAttributesPtr&, const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::Ice::Context&);

    ::omero::model::ExperimenterPtr searchByDN(const ::std::string& userdn)
    {
        return searchByDN(userdn, 0);
    }
    ::omero::model::ExperimenterPtr searchByDN(const ::std::string& userdn, const ::Ice::Context& __ctx)
    {
        return searchByDN(userdn, &__ctx);
    }
    
private:

    ::omero::model::ExperimenterPtr searchByDN(const ::std::string&, const ::Ice::Context*);
    
public:
    bool searchByDN_async(const ::omero::api::AMI_ILdap_searchByDNPtr&, const ::std::string&);
    bool searchByDN_async(const ::omero::api::AMI_ILdap_searchByDNPtr&, const ::std::string&, const ::Ice::Context&);

    ::std::string findDN(const ::std::string& username)
    {
        return findDN(username, 0);
    }
    ::std::string findDN(const ::std::string& username, const ::Ice::Context& __ctx)
    {
        return findDN(username, &__ctx);
    }
    
private:

    ::std::string findDN(const ::std::string&, const ::Ice::Context*);
    
public:
    bool findDN_async(const ::omero::api::AMI_ILdap_findDNPtr&, const ::std::string&);
    bool findDN_async(const ::omero::api::AMI_ILdap_findDNPtr&, const ::std::string&, const ::Ice::Context&);

    ::omero::model::ExperimenterPtr findExperimenter(const ::std::string& username)
    {
        return findExperimenter(username, 0);
    }
    ::omero::model::ExperimenterPtr findExperimenter(const ::std::string& username, const ::Ice::Context& __ctx)
    {
        return findExperimenter(username, &__ctx);
    }
    
private:

    ::omero::model::ExperimenterPtr findExperimenter(const ::std::string&, const ::Ice::Context*);
    
public:
    bool findExperimenter_async(const ::omero::api::AMI_ILdap_findExperimenterPtr&, const ::std::string&);
    bool findExperimenter_async(const ::omero::api::AMI_ILdap_findExperimenterPtr&, const ::std::string&, const ::Ice::Context&);

    void setDN(const ::omero::RLongPtr& experimenterID, const ::std::string& dn)
    {
        setDN(experimenterID, dn, 0);
    }
    void setDN(const ::omero::RLongPtr& experimenterID, const ::std::string& dn, const ::Ice::Context& __ctx)
    {
        setDN(experimenterID, dn, &__ctx);
    }
    
private:

    void setDN(const ::omero::RLongPtr&, const ::std::string&, const ::Ice::Context*);
    
public:
    bool setDN_async(const ::omero::api::AMI_ILdap_setDNPtr&, const ::omero::RLongPtr&, const ::std::string&);
    bool setDN_async(const ::omero::api::AMI_ILdap_setDNPtr&, const ::omero::RLongPtr&, const ::std::string&, const ::Ice::Context&);

    bool getSetting()
    {
        return getSetting(0);
    }
    bool getSetting(const ::Ice::Context& __ctx)
    {
        return getSetting(&__ctx);
    }
    
private:

    bool getSetting(const ::Ice::Context*);
    
public:
    bool getSetting_async(const ::omero::api::AMI_ILdap_getSettingPtr&);
    bool getSetting_async(const ::omero::api::AMI_ILdap_getSettingPtr&, const ::Ice::Context&);

    ::omero::model::ExperimenterPtr createUser(const ::std::string& username)
    {
        return createUser(username, 0);
    }
    ::omero::model::ExperimenterPtr createUser(const ::std::string& username, const ::Ice::Context& __ctx)
    {
        return createUser(username, &__ctx);
    }
    
private:

    ::omero::model::ExperimenterPtr createUser(const ::std::string&, const ::Ice::Context*);
    
public:
    bool createUser_async(const ::omero::api::AMI_ILdap_createUserPtr&, const ::std::string&);
    bool createUser_async(const ::omero::api::AMI_ILdap_createUserPtr&, const ::std::string&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<ILdap> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ILdap*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ILdap*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ILdap> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ILdap*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ILdap*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ILdap> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ILdap*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ILdap*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ILdap> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ILdap*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ILdap*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ILdap> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ILdap*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ILdap*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ILdap> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ILdap*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ILdap*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ILdap> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ILdap*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ILdap*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ILdap> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ILdap*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ILdap*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ILdap> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ILdap*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ILdap*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ILdap> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ILdap*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ILdap*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ILdap> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ILdap*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ILdap*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ILdap> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ILdap*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ILdap*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ILdap> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ILdap*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ILdap*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ILdap> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ILdap*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ILdap*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ILdap> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ILdap*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ILdap*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ILdap> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ILdap*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ILdap*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ILdap> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ILdap*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ILdap*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ILdap> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ILdap*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ILdap*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ILdap> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ILdap*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ILdap*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class ILdap : virtual public ::IceDelegate::omero::api::ServiceInterface
{
public:

    virtual ::omero::api::ExperimenterList searchAll(const ::Ice::Context*) = 0;

    virtual ::omero::api::StringSet searchDnInGroups(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::api::ExperimenterList searchByAttribute(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::api::ExperimenterList searchByAttributes(const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::Ice::Context*) = 0;

    virtual ::omero::model::ExperimenterPtr searchByDN(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::std::string findDN(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::model::ExperimenterPtr findExperimenter(const ::std::string&, const ::Ice::Context*) = 0;

    virtual void setDN(const ::omero::RLongPtr&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual bool getSetting(const ::Ice::Context*) = 0;

    virtual ::omero::model::ExperimenterPtr createUser(const ::std::string&, const ::Ice::Context*) = 0;
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

class ILdap : virtual public ::IceDelegate::omero::api::ILdap,
              virtual public ::IceDelegateM::omero::api::ServiceInterface
{
public:

    virtual ::omero::api::ExperimenterList searchAll(const ::Ice::Context*);

    virtual ::omero::api::StringSet searchDnInGroups(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::ExperimenterList searchByAttribute(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::ExperimenterList searchByAttributes(const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterPtr searchByDN(const ::std::string&, const ::Ice::Context*);

    virtual ::std::string findDN(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterPtr findExperimenter(const ::std::string&, const ::Ice::Context*);

    virtual void setDN(const ::omero::RLongPtr&, const ::std::string&, const ::Ice::Context*);

    virtual bool getSetting(const ::Ice::Context*);

    virtual ::omero::model::ExperimenterPtr createUser(const ::std::string&, const ::Ice::Context*);
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

class ILdap : virtual public ::IceDelegate::omero::api::ILdap,
              virtual public ::IceDelegateD::omero::api::ServiceInterface
{
public:

    virtual ::omero::api::ExperimenterList searchAll(const ::Ice::Context*);

    virtual ::omero::api::StringSet searchDnInGroups(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::ExperimenterList searchByAttribute(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::ExperimenterList searchByAttributes(const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterPtr searchByDN(const ::std::string&, const ::Ice::Context*);

    virtual ::std::string findDN(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterPtr findExperimenter(const ::std::string&, const ::Ice::Context*);

    virtual void setDN(const ::omero::RLongPtr&, const ::std::string&, const ::Ice::Context*);

    virtual bool getSetting(const ::Ice::Context*);

    virtual ::omero::model::ExperimenterPtr createUser(const ::std::string&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace api
{

class ILdap : virtual public ::omero::api::ServiceInterface
{
public:

    typedef ILdapPrx ProxyType;
    typedef ILdapPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void searchAll_async(const ::omero::api::AMD_ILdap_searchAllPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___searchAll(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void searchDnInGroups_async(const ::omero::api::AMD_ILdap_searchDnInGroupsPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___searchDnInGroups(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void searchByAttribute_async(const ::omero::api::AMD_ILdap_searchByAttributePtr&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___searchByAttribute(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void searchByAttributes_async(const ::omero::api::AMD_ILdap_searchByAttributesPtr&, const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___searchByAttributes(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void searchByDN_async(const ::omero::api::AMD_ILdap_searchByDNPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___searchByDN(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void findDN_async(const ::omero::api::AMD_ILdap_findDNPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findDN(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void findExperimenter_async(const ::omero::api::AMD_ILdap_findExperimenterPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findExperimenter(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setDN_async(const ::omero::api::AMD_ILdap_setDNPtr&, const ::omero::RLongPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setDN(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getSetting_async(const ::omero::api::AMD_ILdap_getSettingPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getSetting(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void createUser_async(const ::omero::api::AMD_ILdap_createUserPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
