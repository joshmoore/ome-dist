// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `ITypes.ice'

#ifndef __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_ITypes_h__
#define __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_ITypes_h__

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
#include <omero/ModelF.h>
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

class ITypes;

}

}

}

namespace omero
{

namespace api
{

class ITypes;
bool operator==(const ITypes&, const ITypes&);
bool operator<(const ITypes&, const ITypes&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::api::ITypes*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::ITypes*);

}

namespace omero
{

namespace api
{

typedef ::IceInternal::Handle< ::omero::api::ITypes> ITypesPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::ITypes> ITypesPrx;

void __read(::IceInternal::BasicStream*, ITypesPrx&);
void __patch__ITypesPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace api
{

class AMI_ITypes_createEnumeration : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::IObjectPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ITypesPrx&, const ::omero::model::IObjectPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ITypes_createEnumeration> AMI_ITypes_createEnumerationPtr;

class AMD_ITypes_createEnumeration : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::IObjectPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ITypes_createEnumeration> AMD_ITypes_createEnumerationPtr;

class AMI_ITypes_getEnumeration : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::IObjectPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ITypesPrx&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ITypes_getEnumeration> AMI_ITypes_getEnumerationPtr;

class AMD_ITypes_getEnumeration : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::IObjectPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ITypes_getEnumeration> AMD_ITypes_getEnumerationPtr;

class AMI_ITypes_allEnumerations : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ITypesPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ITypes_allEnumerations> AMI_ITypes_allEnumerationsPtr;

class AMD_ITypes_allEnumerations : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ITypes_allEnumerations> AMD_ITypes_allEnumerationsPtr;

class AMI_ITypes_updateEnumeration : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::IObjectPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ITypesPrx&, const ::omero::model::IObjectPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ITypes_updateEnumeration> AMI_ITypes_updateEnumerationPtr;

class AMD_ITypes_updateEnumeration : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::IObjectPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ITypes_updateEnumeration> AMD_ITypes_updateEnumerationPtr;

class AMI_ITypes_updateEnumerations : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ITypesPrx&, const ::omero::api::IObjectList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ITypes_updateEnumerations> AMI_ITypes_updateEnumerationsPtr;

class AMD_ITypes_updateEnumerations : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ITypes_updateEnumerations> AMD_ITypes_updateEnumerationsPtr;

class AMI_ITypes_deleteEnumeration : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ITypesPrx&, const ::omero::model::IObjectPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ITypes_deleteEnumeration> AMI_ITypes_deleteEnumerationPtr;

class AMD_ITypes_deleteEnumeration : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ITypes_deleteEnumeration> AMD_ITypes_deleteEnumerationPtr;

class AMI_ITypes_getEnumerationTypes : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::StringSet&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ITypesPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ITypes_getEnumerationTypes> AMI_ITypes_getEnumerationTypesPtr;

class AMD_ITypes_getEnumerationTypes : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::StringSet&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ITypes_getEnumerationTypes> AMD_ITypes_getEnumerationTypesPtr;

class AMI_ITypes_getAnnotationTypes : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::StringSet&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ITypesPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ITypes_getAnnotationTypes> AMI_ITypes_getAnnotationTypesPtr;

class AMD_ITypes_getAnnotationTypes : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::StringSet&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ITypes_getAnnotationTypes> AMD_ITypes_getAnnotationTypesPtr;

class AMI_ITypes_getEnumerationsWithEntries : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectListMap&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ITypesPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ITypes_getEnumerationsWithEntries> AMI_ITypes_getEnumerationsWithEntriesPtr;

class AMD_ITypes_getEnumerationsWithEntries : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectListMap&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ITypes_getEnumerationsWithEntries> AMD_ITypes_getEnumerationsWithEntriesPtr;

class AMI_ITypes_getOriginalEnumerations : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ITypesPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ITypes_getOriginalEnumerations> AMI_ITypes_getOriginalEnumerationsPtr;

class AMD_ITypes_getOriginalEnumerations : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ITypes_getOriginalEnumerations> AMD_ITypes_getOriginalEnumerationsPtr;

class AMI_ITypes_resetEnumerations : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ITypesPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ITypes_resetEnumerations> AMI_ITypes_resetEnumerationsPtr;

class AMD_ITypes_resetEnumerations : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ITypes_resetEnumerations> AMD_ITypes_resetEnumerationsPtr;

}

}

namespace IceAsync
{

namespace omero
{

namespace api
{

class AMD_ITypes_createEnumeration : public ::omero::api::AMD_ITypes_createEnumeration, public ::IceInternal::IncomingAsync
{
public:

    AMD_ITypes_createEnumeration(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::IObjectPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ITypes_getEnumeration : public ::omero::api::AMD_ITypes_getEnumeration, public ::IceInternal::IncomingAsync
{
public:

    AMD_ITypes_getEnumeration(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::IObjectPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ITypes_allEnumerations : public ::omero::api::AMD_ITypes_allEnumerations, public ::IceInternal::IncomingAsync
{
public:

    AMD_ITypes_allEnumerations(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ITypes_updateEnumeration : public ::omero::api::AMD_ITypes_updateEnumeration, public ::IceInternal::IncomingAsync
{
public:

    AMD_ITypes_updateEnumeration(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::IObjectPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ITypes_updateEnumerations : public ::omero::api::AMD_ITypes_updateEnumerations, public ::IceInternal::IncomingAsync
{
public:

    AMD_ITypes_updateEnumerations(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ITypes_deleteEnumeration : public ::omero::api::AMD_ITypes_deleteEnumeration, public ::IceInternal::IncomingAsync
{
public:

    AMD_ITypes_deleteEnumeration(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ITypes_getEnumerationTypes : public ::omero::api::AMD_ITypes_getEnumerationTypes, public ::IceInternal::IncomingAsync
{
public:

    AMD_ITypes_getEnumerationTypes(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::StringSet&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ITypes_getAnnotationTypes : public ::omero::api::AMD_ITypes_getAnnotationTypes, public ::IceInternal::IncomingAsync
{
public:

    AMD_ITypes_getAnnotationTypes(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::StringSet&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ITypes_getEnumerationsWithEntries : public ::omero::api::AMD_ITypes_getEnumerationsWithEntries, public ::IceInternal::IncomingAsync
{
public:

    AMD_ITypes_getEnumerationsWithEntries(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectListMap&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ITypes_getOriginalEnumerations : public ::omero::api::AMD_ITypes_getOriginalEnumerations, public ::IceInternal::IncomingAsync
{
public:

    AMD_ITypes_getOriginalEnumerations(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ITypes_resetEnumerations : public ::omero::api::AMD_ITypes_resetEnumerations, public ::IceInternal::IncomingAsync
{
public:

    AMD_ITypes_resetEnumerations(::IceInternal::Incoming&);

    virtual void ice_response();
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

class ITypes : virtual public ::IceProxy::omero::api::ServiceInterface
{
public:

    ::omero::model::IObjectPtr createEnumeration(const ::omero::model::IObjectPtr& newEnum)
    {
        return createEnumeration(newEnum, 0);
    }
    ::omero::model::IObjectPtr createEnumeration(const ::omero::model::IObjectPtr& newEnum, const ::Ice::Context& __ctx)
    {
        return createEnumeration(newEnum, &__ctx);
    }
    
private:

    ::omero::model::IObjectPtr createEnumeration(const ::omero::model::IObjectPtr&, const ::Ice::Context*);
    
public:
    bool createEnumeration_async(const ::omero::api::AMI_ITypes_createEnumerationPtr&, const ::omero::model::IObjectPtr&);
    bool createEnumeration_async(const ::omero::api::AMI_ITypes_createEnumerationPtr&, const ::omero::model::IObjectPtr&, const ::Ice::Context&);

    ::omero::model::IObjectPtr getEnumeration(const ::std::string& type, const ::std::string& value)
    {
        return getEnumeration(type, value, 0);
    }
    ::omero::model::IObjectPtr getEnumeration(const ::std::string& type, const ::std::string& value, const ::Ice::Context& __ctx)
    {
        return getEnumeration(type, value, &__ctx);
    }
    
private:

    ::omero::model::IObjectPtr getEnumeration(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:
    bool getEnumeration_async(const ::omero::api::AMI_ITypes_getEnumerationPtr&, const ::std::string&, const ::std::string&);
    bool getEnumeration_async(const ::omero::api::AMI_ITypes_getEnumerationPtr&, const ::std::string&, const ::std::string&, const ::Ice::Context&);

    ::omero::api::IObjectList allEnumerations(const ::std::string& type)
    {
        return allEnumerations(type, 0);
    }
    ::omero::api::IObjectList allEnumerations(const ::std::string& type, const ::Ice::Context& __ctx)
    {
        return allEnumerations(type, &__ctx);
    }
    
private:

    ::omero::api::IObjectList allEnumerations(const ::std::string&, const ::Ice::Context*);
    
public:
    bool allEnumerations_async(const ::omero::api::AMI_ITypes_allEnumerationsPtr&, const ::std::string&);
    bool allEnumerations_async(const ::omero::api::AMI_ITypes_allEnumerationsPtr&, const ::std::string&, const ::Ice::Context&);

    ::omero::model::IObjectPtr updateEnumeration(const ::omero::model::IObjectPtr& oldEnum)
    {
        return updateEnumeration(oldEnum, 0);
    }
    ::omero::model::IObjectPtr updateEnumeration(const ::omero::model::IObjectPtr& oldEnum, const ::Ice::Context& __ctx)
    {
        return updateEnumeration(oldEnum, &__ctx);
    }
    
private:

    ::omero::model::IObjectPtr updateEnumeration(const ::omero::model::IObjectPtr&, const ::Ice::Context*);
    
public:
    bool updateEnumeration_async(const ::omero::api::AMI_ITypes_updateEnumerationPtr&, const ::omero::model::IObjectPtr&);
    bool updateEnumeration_async(const ::omero::api::AMI_ITypes_updateEnumerationPtr&, const ::omero::model::IObjectPtr&, const ::Ice::Context&);

    void updateEnumerations(const ::omero::api::IObjectList& oldEnums)
    {
        updateEnumerations(oldEnums, 0);
    }
    void updateEnumerations(const ::omero::api::IObjectList& oldEnums, const ::Ice::Context& __ctx)
    {
        updateEnumerations(oldEnums, &__ctx);
    }
    
private:

    void updateEnumerations(const ::omero::api::IObjectList&, const ::Ice::Context*);
    
public:
    bool updateEnumerations_async(const ::omero::api::AMI_ITypes_updateEnumerationsPtr&, const ::omero::api::IObjectList&);
    bool updateEnumerations_async(const ::omero::api::AMI_ITypes_updateEnumerationsPtr&, const ::omero::api::IObjectList&, const ::Ice::Context&);

    void deleteEnumeration(const ::omero::model::IObjectPtr& oldEnum)
    {
        deleteEnumeration(oldEnum, 0);
    }
    void deleteEnumeration(const ::omero::model::IObjectPtr& oldEnum, const ::Ice::Context& __ctx)
    {
        deleteEnumeration(oldEnum, &__ctx);
    }
    
private:

    void deleteEnumeration(const ::omero::model::IObjectPtr&, const ::Ice::Context*);
    
public:
    bool deleteEnumeration_async(const ::omero::api::AMI_ITypes_deleteEnumerationPtr&, const ::omero::model::IObjectPtr&);
    bool deleteEnumeration_async(const ::omero::api::AMI_ITypes_deleteEnumerationPtr&, const ::omero::model::IObjectPtr&, const ::Ice::Context&);

    ::omero::api::StringSet getEnumerationTypes()
    {
        return getEnumerationTypes(0);
    }
    ::omero::api::StringSet getEnumerationTypes(const ::Ice::Context& __ctx)
    {
        return getEnumerationTypes(&__ctx);
    }
    
private:

    ::omero::api::StringSet getEnumerationTypes(const ::Ice::Context*);
    
public:
    bool getEnumerationTypes_async(const ::omero::api::AMI_ITypes_getEnumerationTypesPtr&);
    bool getEnumerationTypes_async(const ::omero::api::AMI_ITypes_getEnumerationTypesPtr&, const ::Ice::Context&);

    ::omero::api::StringSet getAnnotationTypes()
    {
        return getAnnotationTypes(0);
    }
    ::omero::api::StringSet getAnnotationTypes(const ::Ice::Context& __ctx)
    {
        return getAnnotationTypes(&__ctx);
    }
    
private:

    ::omero::api::StringSet getAnnotationTypes(const ::Ice::Context*);
    
public:
    bool getAnnotationTypes_async(const ::omero::api::AMI_ITypes_getAnnotationTypesPtr&);
    bool getAnnotationTypes_async(const ::omero::api::AMI_ITypes_getAnnotationTypesPtr&, const ::Ice::Context&);

    ::omero::api::IObjectListMap getEnumerationsWithEntries()
    {
        return getEnumerationsWithEntries(0);
    }
    ::omero::api::IObjectListMap getEnumerationsWithEntries(const ::Ice::Context& __ctx)
    {
        return getEnumerationsWithEntries(&__ctx);
    }
    
private:

    ::omero::api::IObjectListMap getEnumerationsWithEntries(const ::Ice::Context*);
    
public:
    bool getEnumerationsWithEntries_async(const ::omero::api::AMI_ITypes_getEnumerationsWithEntriesPtr&);
    bool getEnumerationsWithEntries_async(const ::omero::api::AMI_ITypes_getEnumerationsWithEntriesPtr&, const ::Ice::Context&);

    ::omero::api::IObjectList getOriginalEnumerations()
    {
        return getOriginalEnumerations(0);
    }
    ::omero::api::IObjectList getOriginalEnumerations(const ::Ice::Context& __ctx)
    {
        return getOriginalEnumerations(&__ctx);
    }
    
private:

    ::omero::api::IObjectList getOriginalEnumerations(const ::Ice::Context*);
    
public:
    bool getOriginalEnumerations_async(const ::omero::api::AMI_ITypes_getOriginalEnumerationsPtr&);
    bool getOriginalEnumerations_async(const ::omero::api::AMI_ITypes_getOriginalEnumerationsPtr&, const ::Ice::Context&);

    void resetEnumerations(const ::std::string& enumClass)
    {
        resetEnumerations(enumClass, 0);
    }
    void resetEnumerations(const ::std::string& enumClass, const ::Ice::Context& __ctx)
    {
        resetEnumerations(enumClass, &__ctx);
    }
    
private:

    void resetEnumerations(const ::std::string&, const ::Ice::Context*);
    
public:
    bool resetEnumerations_async(const ::omero::api::AMI_ITypes_resetEnumerationsPtr&, const ::std::string&);
    bool resetEnumerations_async(const ::omero::api::AMI_ITypes_resetEnumerationsPtr&, const ::std::string&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<ITypes> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITypes*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ITypes*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITypes> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITypes*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ITypes*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITypes> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITypes*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ITypes*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITypes> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITypes*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ITypes*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITypes> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITypes*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ITypes*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITypes> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITypes*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ITypes*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITypes> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITypes*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ITypes*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITypes> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITypes*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ITypes*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITypes> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITypes*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ITypes*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITypes> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITypes*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ITypes*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITypes> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITypes*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ITypes*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITypes> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITypes*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ITypes*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITypes> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITypes*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ITypes*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITypes> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITypes*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ITypes*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITypes> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITypes*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ITypes*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITypes> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITypes*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ITypes*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITypes> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITypes*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ITypes*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITypes> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITypes*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ITypes*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ITypes> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ITypes*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ITypes*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class ITypes : virtual public ::IceDelegate::omero::api::ServiceInterface
{
public:

    virtual ::omero::model::IObjectPtr createEnumeration(const ::omero::model::IObjectPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::IObjectPtr getEnumeration(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::api::IObjectList allEnumerations(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::model::IObjectPtr updateEnumeration(const ::omero::model::IObjectPtr&, const ::Ice::Context*) = 0;

    virtual void updateEnumerations(const ::omero::api::IObjectList&, const ::Ice::Context*) = 0;

    virtual void deleteEnumeration(const ::omero::model::IObjectPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::StringSet getEnumerationTypes(const ::Ice::Context*) = 0;

    virtual ::omero::api::StringSet getAnnotationTypes(const ::Ice::Context*) = 0;

    virtual ::omero::api::IObjectListMap getEnumerationsWithEntries(const ::Ice::Context*) = 0;

    virtual ::omero::api::IObjectList getOriginalEnumerations(const ::Ice::Context*) = 0;

    virtual void resetEnumerations(const ::std::string&, const ::Ice::Context*) = 0;
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

class ITypes : virtual public ::IceDelegate::omero::api::ITypes,
               virtual public ::IceDelegateM::omero::api::ServiceInterface
{
public:

    virtual ::omero::model::IObjectPtr createEnumeration(const ::omero::model::IObjectPtr&, const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr getEnumeration(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList allEnumerations(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr updateEnumeration(const ::omero::model::IObjectPtr&, const ::Ice::Context*);

    virtual void updateEnumerations(const ::omero::api::IObjectList&, const ::Ice::Context*);

    virtual void deleteEnumeration(const ::omero::model::IObjectPtr&, const ::Ice::Context*);

    virtual ::omero::api::StringSet getEnumerationTypes(const ::Ice::Context*);

    virtual ::omero::api::StringSet getAnnotationTypes(const ::Ice::Context*);

    virtual ::omero::api::IObjectListMap getEnumerationsWithEntries(const ::Ice::Context*);

    virtual ::omero::api::IObjectList getOriginalEnumerations(const ::Ice::Context*);

    virtual void resetEnumerations(const ::std::string&, const ::Ice::Context*);
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

class ITypes : virtual public ::IceDelegate::omero::api::ITypes,
               virtual public ::IceDelegateD::omero::api::ServiceInterface
{
public:

    virtual ::omero::model::IObjectPtr createEnumeration(const ::omero::model::IObjectPtr&, const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr getEnumeration(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList allEnumerations(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr updateEnumeration(const ::omero::model::IObjectPtr&, const ::Ice::Context*);

    virtual void updateEnumerations(const ::omero::api::IObjectList&, const ::Ice::Context*);

    virtual void deleteEnumeration(const ::omero::model::IObjectPtr&, const ::Ice::Context*);

    virtual ::omero::api::StringSet getEnumerationTypes(const ::Ice::Context*);

    virtual ::omero::api::StringSet getAnnotationTypes(const ::Ice::Context*);

    virtual ::omero::api::IObjectListMap getEnumerationsWithEntries(const ::Ice::Context*);

    virtual ::omero::api::IObjectList getOriginalEnumerations(const ::Ice::Context*);

    virtual void resetEnumerations(const ::std::string&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace api
{

class ITypes : virtual public ::omero::api::ServiceInterface
{
public:

    typedef ITypesPrx ProxyType;
    typedef ITypesPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void createEnumeration_async(const ::omero::api::AMD_ITypes_createEnumerationPtr&, const ::omero::model::IObjectPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createEnumeration(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getEnumeration_async(const ::omero::api::AMD_ITypes_getEnumerationPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getEnumeration(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void allEnumerations_async(const ::omero::api::AMD_ITypes_allEnumerationsPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___allEnumerations(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void updateEnumeration_async(const ::omero::api::AMD_ITypes_updateEnumerationPtr&, const ::omero::model::IObjectPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___updateEnumeration(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void updateEnumerations_async(const ::omero::api::AMD_ITypes_updateEnumerationsPtr&, const ::omero::api::IObjectList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___updateEnumerations(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void deleteEnumeration_async(const ::omero::api::AMD_ITypes_deleteEnumerationPtr&, const ::omero::model::IObjectPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___deleteEnumeration(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getEnumerationTypes_async(const ::omero::api::AMD_ITypes_getEnumerationTypesPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getEnumerationTypes(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getAnnotationTypes_async(const ::omero::api::AMD_ITypes_getAnnotationTypesPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAnnotationTypes(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getEnumerationsWithEntries_async(const ::omero::api::AMD_ITypes_getEnumerationsWithEntriesPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getEnumerationsWithEntries(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getOriginalEnumerations_async(const ::omero::api::AMD_ITypes_getOriginalEnumerationsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getOriginalEnumerations(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void resetEnumerations_async(const ::omero::api::AMD_ITypes_resetEnumerationsPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___resetEnumerations(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
