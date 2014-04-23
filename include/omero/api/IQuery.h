// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `IQuery.ice'

#ifndef __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_IQuery_h__
#define __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_IQuery_h__

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

namespace api
{

class IQuery;

}

}

}

namespace omero
{

namespace api
{

class IQuery;
bool operator==(const IQuery&, const IQuery&);
bool operator<(const IQuery&, const IQuery&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::api::IQuery*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::IQuery*);

}

namespace omero
{

namespace api
{

typedef ::IceInternal::Handle< ::omero::api::IQuery> IQueryPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::IQuery> IQueryPrx;

void __read(::IceInternal::BasicStream*, IQueryPrx&);
void __patch__IQueryPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace api
{

class AMI_IQuery_get : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::IObjectPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IQueryPrx&, const ::std::string&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IQuery_get> AMI_IQuery_getPtr;

class AMD_IQuery_get : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::IObjectPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IQuery_get> AMD_IQuery_getPtr;

class AMI_IQuery_find : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::IObjectPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IQueryPrx&, const ::std::string&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IQuery_find> AMI_IQuery_findPtr;

class AMD_IQuery_find : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::IObjectPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IQuery_find> AMD_IQuery_findPtr;

class AMI_IQuery_findAll : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IQueryPrx&, const ::std::string&, const ::omero::sys::FilterPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IQuery_findAll> AMI_IQuery_findAllPtr;

class AMD_IQuery_findAll : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IQuery_findAll> AMD_IQuery_findAllPtr;

class AMI_IQuery_findByExample : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::IObjectPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IQueryPrx&, const ::omero::model::IObjectPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IQuery_findByExample> AMI_IQuery_findByExamplePtr;

class AMD_IQuery_findByExample : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::IObjectPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IQuery_findByExample> AMD_IQuery_findByExamplePtr;

class AMI_IQuery_findAllByExample : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IQueryPrx&, const ::omero::model::IObjectPtr&, const ::omero::sys::FilterPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IQuery_findAllByExample> AMI_IQuery_findAllByExamplePtr;

class AMD_IQuery_findAllByExample : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IQuery_findAllByExample> AMD_IQuery_findAllByExamplePtr;

class AMI_IQuery_findByString : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::IObjectPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IQueryPrx&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IQuery_findByString> AMI_IQuery_findByStringPtr;

class AMD_IQuery_findByString : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::IObjectPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IQuery_findByString> AMD_IQuery_findByStringPtr;

class AMI_IQuery_findAllByString : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IQueryPrx&, const ::std::string&, const ::std::string&, const ::std::string&, bool, const ::omero::sys::FilterPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IQuery_findAllByString> AMI_IQuery_findAllByStringPtr;

class AMD_IQuery_findAllByString : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IQuery_findAllByString> AMD_IQuery_findAllByStringPtr;

class AMI_IQuery_findByQuery : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::IObjectPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IQueryPrx&, const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IQuery_findByQuery> AMI_IQuery_findByQueryPtr;

class AMD_IQuery_findByQuery : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::IObjectPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IQuery_findByQuery> AMD_IQuery_findByQueryPtr;

class AMI_IQuery_findAllByQuery : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IQueryPrx&, const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IQuery_findAllByQuery> AMI_IQuery_findAllByQueryPtr;

class AMD_IQuery_findAllByQuery : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IQuery_findAllByQuery> AMD_IQuery_findAllByQueryPtr;

class AMI_IQuery_findAllByFullText : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IQueryPrx&, const ::std::string&, const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IQuery_findAllByFullText> AMI_IQuery_findAllByFullTextPtr;

class AMD_IQuery_findAllByFullText : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IQuery_findAllByFullText> AMD_IQuery_findAllByFullTextPtr;

class AMI_IQuery_projection : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::RTypeSeqSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IQueryPrx&, const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IQuery_projection> AMI_IQuery_projectionPtr;

class AMD_IQuery_projection : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::RTypeSeqSeq&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IQuery_projection> AMD_IQuery_projectionPtr;

class AMI_IQuery_refresh : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::IObjectPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IQueryPrx&, const ::omero::model::IObjectPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IQuery_refresh> AMI_IQuery_refreshPtr;

class AMD_IQuery_refresh : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::IObjectPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IQuery_refresh> AMD_IQuery_refreshPtr;

}

}

namespace IceAsync
{

namespace omero
{

namespace api
{

class AMD_IQuery_get : public ::omero::api::AMD_IQuery_get, public ::IceInternal::IncomingAsync
{
public:

    AMD_IQuery_get(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::IObjectPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IQuery_find : public ::omero::api::AMD_IQuery_find, public ::IceInternal::IncomingAsync
{
public:

    AMD_IQuery_find(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::IObjectPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IQuery_findAll : public ::omero::api::AMD_IQuery_findAll, public ::IceInternal::IncomingAsync
{
public:

    AMD_IQuery_findAll(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IQuery_findByExample : public ::omero::api::AMD_IQuery_findByExample, public ::IceInternal::IncomingAsync
{
public:

    AMD_IQuery_findByExample(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::IObjectPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IQuery_findAllByExample : public ::omero::api::AMD_IQuery_findAllByExample, public ::IceInternal::IncomingAsync
{
public:

    AMD_IQuery_findAllByExample(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IQuery_findByString : public ::omero::api::AMD_IQuery_findByString, public ::IceInternal::IncomingAsync
{
public:

    AMD_IQuery_findByString(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::IObjectPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IQuery_findAllByString : public ::omero::api::AMD_IQuery_findAllByString, public ::IceInternal::IncomingAsync
{
public:

    AMD_IQuery_findAllByString(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IQuery_findByQuery : public ::omero::api::AMD_IQuery_findByQuery, public ::IceInternal::IncomingAsync
{
public:

    AMD_IQuery_findByQuery(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::IObjectPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IQuery_findAllByQuery : public ::omero::api::AMD_IQuery_findAllByQuery, public ::IceInternal::IncomingAsync
{
public:

    AMD_IQuery_findAllByQuery(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IQuery_findAllByFullText : public ::omero::api::AMD_IQuery_findAllByFullText, public ::IceInternal::IncomingAsync
{
public:

    AMD_IQuery_findAllByFullText(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IQuery_projection : public ::omero::api::AMD_IQuery_projection, public ::IceInternal::IncomingAsync
{
public:

    AMD_IQuery_projection(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::RTypeSeqSeq&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IQuery_refresh : public ::omero::api::AMD_IQuery_refresh, public ::IceInternal::IncomingAsync
{
public:

    AMD_IQuery_refresh(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::IObjectPtr&);
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

class IQuery : virtual public ::IceProxy::omero::api::ServiceInterface
{
public:

    ::omero::model::IObjectPtr get(const ::std::string& klass, ::Ice::Long id)
    {
        return get(klass, id, 0);
    }
    ::omero::model::IObjectPtr get(const ::std::string& klass, ::Ice::Long id, const ::Ice::Context& __ctx)
    {
        return get(klass, id, &__ctx);
    }
    
private:

    ::omero::model::IObjectPtr get(const ::std::string&, ::Ice::Long, const ::Ice::Context*);
    
public:
    bool get_async(const ::omero::api::AMI_IQuery_getPtr&, const ::std::string&, ::Ice::Long);
    bool get_async(const ::omero::api::AMI_IQuery_getPtr&, const ::std::string&, ::Ice::Long, const ::Ice::Context&);

    ::omero::model::IObjectPtr find(const ::std::string& klass, ::Ice::Long id)
    {
        return find(klass, id, 0);
    }
    ::omero::model::IObjectPtr find(const ::std::string& klass, ::Ice::Long id, const ::Ice::Context& __ctx)
    {
        return find(klass, id, &__ctx);
    }
    
private:

    ::omero::model::IObjectPtr find(const ::std::string&, ::Ice::Long, const ::Ice::Context*);
    
public:
    bool find_async(const ::omero::api::AMI_IQuery_findPtr&, const ::std::string&, ::Ice::Long);
    bool find_async(const ::omero::api::AMI_IQuery_findPtr&, const ::std::string&, ::Ice::Long, const ::Ice::Context&);

    ::omero::api::IObjectList findAll(const ::std::string& klass, const ::omero::sys::FilterPtr& filter)
    {
        return findAll(klass, filter, 0);
    }
    ::omero::api::IObjectList findAll(const ::std::string& klass, const ::omero::sys::FilterPtr& filter, const ::Ice::Context& __ctx)
    {
        return findAll(klass, filter, &__ctx);
    }
    
private:

    ::omero::api::IObjectList findAll(const ::std::string&, const ::omero::sys::FilterPtr&, const ::Ice::Context*);
    
public:
    bool findAll_async(const ::omero::api::AMI_IQuery_findAllPtr&, const ::std::string&, const ::omero::sys::FilterPtr&);
    bool findAll_async(const ::omero::api::AMI_IQuery_findAllPtr&, const ::std::string&, const ::omero::sys::FilterPtr&, const ::Ice::Context&);

    ::omero::model::IObjectPtr findByExample(const ::omero::model::IObjectPtr& example)
    {
        return findByExample(example, 0);
    }
    ::omero::model::IObjectPtr findByExample(const ::omero::model::IObjectPtr& example, const ::Ice::Context& __ctx)
    {
        return findByExample(example, &__ctx);
    }
    
private:

    ::omero::model::IObjectPtr findByExample(const ::omero::model::IObjectPtr&, const ::Ice::Context*);
    
public:
    bool findByExample_async(const ::omero::api::AMI_IQuery_findByExamplePtr&, const ::omero::model::IObjectPtr&);
    bool findByExample_async(const ::omero::api::AMI_IQuery_findByExamplePtr&, const ::omero::model::IObjectPtr&, const ::Ice::Context&);

    ::omero::api::IObjectList findAllByExample(const ::omero::model::IObjectPtr& example, const ::omero::sys::FilterPtr& filter)
    {
        return findAllByExample(example, filter, 0);
    }
    ::omero::api::IObjectList findAllByExample(const ::omero::model::IObjectPtr& example, const ::omero::sys::FilterPtr& filter, const ::Ice::Context& __ctx)
    {
        return findAllByExample(example, filter, &__ctx);
    }
    
private:

    ::omero::api::IObjectList findAllByExample(const ::omero::model::IObjectPtr&, const ::omero::sys::FilterPtr&, const ::Ice::Context*);
    
public:
    bool findAllByExample_async(const ::omero::api::AMI_IQuery_findAllByExamplePtr&, const ::omero::model::IObjectPtr&, const ::omero::sys::FilterPtr&);
    bool findAllByExample_async(const ::omero::api::AMI_IQuery_findAllByExamplePtr&, const ::omero::model::IObjectPtr&, const ::omero::sys::FilterPtr&, const ::Ice::Context&);

    ::omero::model::IObjectPtr findByString(const ::std::string& klass, const ::std::string& field, const ::std::string& value)
    {
        return findByString(klass, field, value, 0);
    }
    ::omero::model::IObjectPtr findByString(const ::std::string& klass, const ::std::string& field, const ::std::string& value, const ::Ice::Context& __ctx)
    {
        return findByString(klass, field, value, &__ctx);
    }
    
private:

    ::omero::model::IObjectPtr findByString(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:
    bool findByString_async(const ::omero::api::AMI_IQuery_findByStringPtr&, const ::std::string&, const ::std::string&, const ::std::string&);
    bool findByString_async(const ::omero::api::AMI_IQuery_findByStringPtr&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context&);

    ::omero::api::IObjectList findAllByString(const ::std::string& klass, const ::std::string& field, const ::std::string& value, bool caseSensitive, const ::omero::sys::FilterPtr& filter)
    {
        return findAllByString(klass, field, value, caseSensitive, filter, 0);
    }
    ::omero::api::IObjectList findAllByString(const ::std::string& klass, const ::std::string& field, const ::std::string& value, bool caseSensitive, const ::omero::sys::FilterPtr& filter, const ::Ice::Context& __ctx)
    {
        return findAllByString(klass, field, value, caseSensitive, filter, &__ctx);
    }
    
private:

    ::omero::api::IObjectList findAllByString(const ::std::string&, const ::std::string&, const ::std::string&, bool, const ::omero::sys::FilterPtr&, const ::Ice::Context*);
    
public:
    bool findAllByString_async(const ::omero::api::AMI_IQuery_findAllByStringPtr&, const ::std::string&, const ::std::string&, const ::std::string&, bool, const ::omero::sys::FilterPtr&);
    bool findAllByString_async(const ::omero::api::AMI_IQuery_findAllByStringPtr&, const ::std::string&, const ::std::string&, const ::std::string&, bool, const ::omero::sys::FilterPtr&, const ::Ice::Context&);

    ::omero::model::IObjectPtr findByQuery(const ::std::string& query, const ::omero::sys::ParametersPtr& params)
    {
        return findByQuery(query, params, 0);
    }
    ::omero::model::IObjectPtr findByQuery(const ::std::string& query, const ::omero::sys::ParametersPtr& params, const ::Ice::Context& __ctx)
    {
        return findByQuery(query, params, &__ctx);
    }
    
private:

    ::omero::model::IObjectPtr findByQuery(const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool findByQuery_async(const ::omero::api::AMI_IQuery_findByQueryPtr&, const ::std::string&, const ::omero::sys::ParametersPtr&);
    bool findByQuery_async(const ::omero::api::AMI_IQuery_findByQueryPtr&, const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);

    ::omero::api::IObjectList findAllByQuery(const ::std::string& query, const ::omero::sys::ParametersPtr& params)
    {
        return findAllByQuery(query, params, 0);
    }
    ::omero::api::IObjectList findAllByQuery(const ::std::string& query, const ::omero::sys::ParametersPtr& params, const ::Ice::Context& __ctx)
    {
        return findAllByQuery(query, params, &__ctx);
    }
    
private:

    ::omero::api::IObjectList findAllByQuery(const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool findAllByQuery_async(const ::omero::api::AMI_IQuery_findAllByQueryPtr&, const ::std::string&, const ::omero::sys::ParametersPtr&);
    bool findAllByQuery_async(const ::omero::api::AMI_IQuery_findAllByQueryPtr&, const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);

    ::omero::api::IObjectList findAllByFullText(const ::std::string& klass, const ::std::string& query, const ::omero::sys::ParametersPtr& params)
    {
        return findAllByFullText(klass, query, params, 0);
    }
    ::omero::api::IObjectList findAllByFullText(const ::std::string& klass, const ::std::string& query, const ::omero::sys::ParametersPtr& params, const ::Ice::Context& __ctx)
    {
        return findAllByFullText(klass, query, params, &__ctx);
    }
    
private:

    ::omero::api::IObjectList findAllByFullText(const ::std::string&, const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool findAllByFullText_async(const ::omero::api::AMI_IQuery_findAllByFullTextPtr&, const ::std::string&, const ::std::string&, const ::omero::sys::ParametersPtr&);
    bool findAllByFullText_async(const ::omero::api::AMI_IQuery_findAllByFullTextPtr&, const ::std::string&, const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);

    ::omero::RTypeSeqSeq projection(const ::std::string& query, const ::omero::sys::ParametersPtr& params)
    {
        return projection(query, params, 0);
    }
    ::omero::RTypeSeqSeq projection(const ::std::string& query, const ::omero::sys::ParametersPtr& params, const ::Ice::Context& __ctx)
    {
        return projection(query, params, &__ctx);
    }
    
private:

    ::omero::RTypeSeqSeq projection(const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool projection_async(const ::omero::api::AMI_IQuery_projectionPtr&, const ::std::string&, const ::omero::sys::ParametersPtr&);
    bool projection_async(const ::omero::api::AMI_IQuery_projectionPtr&, const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);

    ::omero::model::IObjectPtr refresh(const ::omero::model::IObjectPtr& iObject)
    {
        return refresh(iObject, 0);
    }
    ::omero::model::IObjectPtr refresh(const ::omero::model::IObjectPtr& iObject, const ::Ice::Context& __ctx)
    {
        return refresh(iObject, &__ctx);
    }
    
private:

    ::omero::model::IObjectPtr refresh(const ::omero::model::IObjectPtr&, const ::Ice::Context*);
    
public:
    bool refresh_async(const ::omero::api::AMI_IQuery_refreshPtr&, const ::omero::model::IObjectPtr&);
    bool refresh_async(const ::omero::api::AMI_IQuery_refreshPtr&, const ::omero::model::IObjectPtr&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<IQuery> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IQuery*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<IQuery*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IQuery> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IQuery*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<IQuery*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IQuery> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IQuery*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<IQuery*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IQuery> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IQuery*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<IQuery*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IQuery> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IQuery*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<IQuery*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IQuery> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IQuery*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<IQuery*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IQuery> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IQuery*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<IQuery*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IQuery> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IQuery*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<IQuery*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IQuery> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IQuery*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<IQuery*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IQuery> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IQuery*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<IQuery*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IQuery> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IQuery*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<IQuery*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IQuery> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IQuery*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<IQuery*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IQuery> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IQuery*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<IQuery*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IQuery> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IQuery*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<IQuery*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IQuery> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IQuery*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<IQuery*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IQuery> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IQuery*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<IQuery*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IQuery> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IQuery*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<IQuery*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IQuery> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IQuery*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<IQuery*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IQuery> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IQuery*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<IQuery*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class IQuery : virtual public ::IceDelegate::omero::api::ServiceInterface
{
public:

    virtual ::omero::model::IObjectPtr get(const ::std::string&, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::model::IObjectPtr find(const ::std::string&, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::api::IObjectList findAll(const ::std::string&, const ::omero::sys::FilterPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::IObjectPtr findByExample(const ::omero::model::IObjectPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::IObjectList findAllByExample(const ::omero::model::IObjectPtr&, const ::omero::sys::FilterPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::IObjectPtr findByString(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::api::IObjectList findAllByString(const ::std::string&, const ::std::string&, const ::std::string&, bool, const ::omero::sys::FilterPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::IObjectPtr findByQuery(const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::IObjectList findAllByQuery(const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::IObjectList findAllByFullText(const ::std::string&, const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RTypeSeqSeq projection(const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::IObjectPtr refresh(const ::omero::model::IObjectPtr&, const ::Ice::Context*) = 0;
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

class IQuery : virtual public ::IceDelegate::omero::api::IQuery,
               virtual public ::IceDelegateM::omero::api::ServiceInterface
{
public:

    virtual ::omero::model::IObjectPtr get(const ::std::string&, ::Ice::Long, const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr find(const ::std::string&, ::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::IObjectList findAll(const ::std::string&, const ::omero::sys::FilterPtr&, const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr findByExample(const ::omero::model::IObjectPtr&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList findAllByExample(const ::omero::model::IObjectPtr&, const ::omero::sys::FilterPtr&, const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr findByString(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList findAllByString(const ::std::string&, const ::std::string&, const ::std::string&, bool, const ::omero::sys::FilterPtr&, const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr findByQuery(const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList findAllByQuery(const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList findAllByFullText(const ::std::string&, const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::RTypeSeqSeq projection(const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr refresh(const ::omero::model::IObjectPtr&, const ::Ice::Context*);
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

class IQuery : virtual public ::IceDelegate::omero::api::IQuery,
               virtual public ::IceDelegateD::omero::api::ServiceInterface
{
public:

    virtual ::omero::model::IObjectPtr get(const ::std::string&, ::Ice::Long, const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr find(const ::std::string&, ::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::IObjectList findAll(const ::std::string&, const ::omero::sys::FilterPtr&, const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr findByExample(const ::omero::model::IObjectPtr&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList findAllByExample(const ::omero::model::IObjectPtr&, const ::omero::sys::FilterPtr&, const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr findByString(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList findAllByString(const ::std::string&, const ::std::string&, const ::std::string&, bool, const ::omero::sys::FilterPtr&, const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr findByQuery(const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList findAllByQuery(const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList findAllByFullText(const ::std::string&, const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::RTypeSeqSeq projection(const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr refresh(const ::omero::model::IObjectPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace api
{

class IQuery : virtual public ::omero::api::ServiceInterface
{
public:

    typedef IQueryPrx ProxyType;
    typedef IQueryPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void get_async(const ::omero::api::AMD_IQuery_getPtr&, const ::std::string&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___get(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void find_async(const ::omero::api::AMD_IQuery_findPtr&, const ::std::string&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___find(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void findAll_async(const ::omero::api::AMD_IQuery_findAllPtr&, const ::std::string&, const ::omero::sys::FilterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findAll(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void findByExample_async(const ::omero::api::AMD_IQuery_findByExamplePtr&, const ::omero::model::IObjectPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findByExample(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void findAllByExample_async(const ::omero::api::AMD_IQuery_findAllByExamplePtr&, const ::omero::model::IObjectPtr&, const ::omero::sys::FilterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findAllByExample(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void findByString_async(const ::omero::api::AMD_IQuery_findByStringPtr&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findByString(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void findAllByString_async(const ::omero::api::AMD_IQuery_findAllByStringPtr&, const ::std::string&, const ::std::string&, const ::std::string&, bool, const ::omero::sys::FilterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findAllByString(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void findByQuery_async(const ::omero::api::AMD_IQuery_findByQueryPtr&, const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findByQuery(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void findAllByQuery_async(const ::omero::api::AMD_IQuery_findAllByQueryPtr&, const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findAllByQuery(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void findAllByFullText_async(const ::omero::api::AMD_IQuery_findAllByFullTextPtr&, const ::std::string&, const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findAllByFullText(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void projection_async(const ::omero::api::AMD_IQuery_projectionPtr&, const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___projection(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void refresh_async(const ::omero::api::AMD_IQuery_refreshPtr&, const ::omero::model::IObjectPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___refresh(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
