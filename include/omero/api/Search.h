// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Search.ice'

#ifndef __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_Search_h__
#define __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_Search_h__

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

class Search;

}

}

}

namespace omero
{

namespace api
{

class Search;
bool operator==(const Search&, const Search&);
bool operator<(const Search&, const Search&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::api::Search*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::Search*);

}

namespace omero
{

namespace api
{

typedef ::IceInternal::Handle< ::omero::api::Search> SearchPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::Search> SearchPrx;

void __read(::IceInternal::BasicStream*, SearchPrx&);
void __patch__SearchPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace api
{

class AMI_Search_activeQueries : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_activeQueries> AMI_Search_activeQueriesPtr;

class AMD_Search_activeQueries : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_activeQueries> AMD_Search_activeQueriesPtr;

class AMI_Search_setBatchSize : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_setBatchSize> AMI_Search_setBatchSizePtr;

class AMD_Search_setBatchSize : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_setBatchSize> AMD_Search_setBatchSizePtr;

class AMI_Search_getBatchSize : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_getBatchSize> AMI_Search_getBatchSizePtr;

class AMD_Search_getBatchSize : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_getBatchSize> AMD_Search_getBatchSizePtr;

class AMI_Search_setMergedBatches : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_setMergedBatches> AMI_Search_setMergedBatchesPtr;

class AMD_Search_setMergedBatches : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_setMergedBatches> AMD_Search_setMergedBatchesPtr;

class AMI_Search_isMergedBatches : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_isMergedBatches> AMI_Search_isMergedBatchesPtr;

class AMD_Search_isMergedBatches : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_isMergedBatches> AMD_Search_isMergedBatchesPtr;

class AMI_Search_setCaseSentivice : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_setCaseSentivice> AMI_Search_setCaseSentivicePtr;

class AMD_Search_setCaseSentivice : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_setCaseSentivice> AMD_Search_setCaseSentivicePtr;

class AMI_Search_isCaseSensitive : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_isCaseSensitive> AMI_Search_isCaseSensitivePtr;

class AMD_Search_isCaseSensitive : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_isCaseSensitive> AMD_Search_isCaseSensitivePtr;

class AMI_Search_setUseProjections : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_setUseProjections> AMI_Search_setUseProjectionsPtr;

class AMD_Search_setUseProjections : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_setUseProjections> AMD_Search_setUseProjectionsPtr;

class AMI_Search_isUseProjections : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_isUseProjections> AMI_Search_isUseProjectionsPtr;

class AMD_Search_isUseProjections : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_isUseProjections> AMD_Search_isUseProjectionsPtr;

class AMI_Search_setReturnUnloaded : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_setReturnUnloaded> AMI_Search_setReturnUnloadedPtr;

class AMD_Search_setReturnUnloaded : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_setReturnUnloaded> AMD_Search_setReturnUnloadedPtr;

class AMI_Search_isReturnUnloaded : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_isReturnUnloaded> AMI_Search_isReturnUnloadedPtr;

class AMD_Search_isReturnUnloaded : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_isReturnUnloaded> AMD_Search_isReturnUnloadedPtr;

class AMI_Search_setAllowLeadingWildcard : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_setAllowLeadingWildcard> AMI_Search_setAllowLeadingWildcardPtr;

class AMD_Search_setAllowLeadingWildcard : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_setAllowLeadingWildcard> AMD_Search_setAllowLeadingWildcardPtr;

class AMI_Search_isAllowLeadingWildcard : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_isAllowLeadingWildcard> AMI_Search_isAllowLeadingWildcardPtr;

class AMD_Search_isAllowLeadingWildcard : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_isAllowLeadingWildcard> AMD_Search_isAllowLeadingWildcardPtr;

class AMI_Search_onlyType : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_onlyType> AMI_Search_onlyTypePtr;

class AMD_Search_onlyType : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_onlyType> AMD_Search_onlyTypePtr;

class AMI_Search_onlyTypes : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::omero::api::StringSet&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_onlyTypes> AMI_Search_onlyTypesPtr;

class AMD_Search_onlyTypes : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_onlyTypes> AMD_Search_onlyTypesPtr;

class AMI_Search_allTypes : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_allTypes> AMI_Search_allTypesPtr;

class AMD_Search_allTypes : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_allTypes> AMD_Search_allTypesPtr;

class AMI_Search_onlyIds : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::omero::sys::LongList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_onlyIds> AMI_Search_onlyIdsPtr;

class AMD_Search_onlyIds : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_onlyIds> AMD_Search_onlyIdsPtr;

class AMI_Search_onlyOwnedBy : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::omero::model::DetailsPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_onlyOwnedBy> AMI_Search_onlyOwnedByPtr;

class AMD_Search_onlyOwnedBy : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_onlyOwnedBy> AMD_Search_onlyOwnedByPtr;

class AMI_Search_notOwnedBy : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::omero::model::DetailsPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_notOwnedBy> AMI_Search_notOwnedByPtr;

class AMD_Search_notOwnedBy : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_notOwnedBy> AMD_Search_notOwnedByPtr;

class AMI_Search_onlyCreatedBetween : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_onlyCreatedBetween> AMI_Search_onlyCreatedBetweenPtr;

class AMD_Search_onlyCreatedBetween : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_onlyCreatedBetween> AMD_Search_onlyCreatedBetweenPtr;

class AMI_Search_onlyModifiedBetween : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_onlyModifiedBetween> AMI_Search_onlyModifiedBetweenPtr;

class AMD_Search_onlyModifiedBetween : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_onlyModifiedBetween> AMD_Search_onlyModifiedBetweenPtr;

class AMI_Search_onlyAnnotatedBetween : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_onlyAnnotatedBetween> AMI_Search_onlyAnnotatedBetweenPtr;

class AMD_Search_onlyAnnotatedBetween : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_onlyAnnotatedBetween> AMD_Search_onlyAnnotatedBetweenPtr;

class AMI_Search_onlyAnnotatedBy : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::omero::model::DetailsPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_onlyAnnotatedBy> AMI_Search_onlyAnnotatedByPtr;

class AMD_Search_onlyAnnotatedBy : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_onlyAnnotatedBy> AMD_Search_onlyAnnotatedByPtr;

class AMI_Search_notAnnotatedBy : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::omero::model::DetailsPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_notAnnotatedBy> AMI_Search_notAnnotatedByPtr;

class AMD_Search_notAnnotatedBy : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_notAnnotatedBy> AMD_Search_notAnnotatedByPtr;

class AMI_Search_onlyAnnotatedWith : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::omero::api::StringSet&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_onlyAnnotatedWith> AMI_Search_onlyAnnotatedWithPtr;

class AMD_Search_onlyAnnotatedWith : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_onlyAnnotatedWith> AMD_Search_onlyAnnotatedWithPtr;

class AMI_Search_addOrderByAsc : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_addOrderByAsc> AMI_Search_addOrderByAscPtr;

class AMD_Search_addOrderByAsc : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_addOrderByAsc> AMD_Search_addOrderByAscPtr;

class AMI_Search_addOrderByDesc : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_addOrderByDesc> AMI_Search_addOrderByDescPtr;

class AMD_Search_addOrderByDesc : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_addOrderByDesc> AMD_Search_addOrderByDescPtr;

class AMI_Search_unordered : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_unordered> AMI_Search_unorderedPtr;

class AMD_Search_unordered : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_unordered> AMD_Search_unorderedPtr;

class AMI_Search_fetchAnnotations : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::omero::api::StringSet&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_fetchAnnotations> AMI_Search_fetchAnnotationsPtr;

class AMD_Search_fetchAnnotations : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_fetchAnnotations> AMD_Search_fetchAnnotationsPtr;

class AMI_Search_fetchAlso : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::omero::api::StringSet&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_fetchAlso> AMI_Search_fetchAlsoPtr;

class AMD_Search_fetchAlso : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_fetchAlso> AMD_Search_fetchAlsoPtr;

class AMI_Search_resetDefaults : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_resetDefaults> AMI_Search_resetDefaultsPtr;

class AMD_Search_resetDefaults : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_resetDefaults> AMD_Search_resetDefaultsPtr;

class AMI_Search_byGroupForTags : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_byGroupForTags> AMI_Search_byGroupForTagsPtr;

class AMD_Search_byGroupForTags : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_byGroupForTags> AMD_Search_byGroupForTagsPtr;

class AMI_Search_byTagForGroups : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_byTagForGroups> AMI_Search_byTagForGroupsPtr;

class AMD_Search_byTagForGroups : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_byTagForGroups> AMD_Search_byTagForGroupsPtr;

class AMI_Search_byFullText : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_byFullText> AMI_Search_byFullTextPtr;

class AMD_Search_byFullText : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_byFullText> AMD_Search_byFullTextPtr;

class AMI_Search_byLuceneQueryBuilder : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_byLuceneQueryBuilder> AMI_Search_byLuceneQueryBuilderPtr;

class AMD_Search_byLuceneQueryBuilder : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_byLuceneQueryBuilder> AMD_Search_byLuceneQueryBuilderPtr;

class AMI_Search_bySimilarTerms : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::omero::api::StringSet&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_bySimilarTerms> AMI_Search_bySimilarTermsPtr;

class AMD_Search_bySimilarTerms : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_bySimilarTerms> AMD_Search_bySimilarTermsPtr;

class AMI_Search_byHqlQuery : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_byHqlQuery> AMI_Search_byHqlQueryPtr;

class AMD_Search_byHqlQuery : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_byHqlQuery> AMD_Search_byHqlQueryPtr;

class AMI_Search_bySomeMustNone : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_bySomeMustNone> AMI_Search_bySomeMustNonePtr;

class AMD_Search_bySomeMustNone : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_bySomeMustNone> AMD_Search_bySomeMustNonePtr;

class AMI_Search_byAnnotatedWith : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::omero::api::AnnotationList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_byAnnotatedWith> AMI_Search_byAnnotatedWithPtr;

class AMD_Search_byAnnotatedWith : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_byAnnotatedWith> AMD_Search_byAnnotatedWithPtr;

class AMI_Search_clearQueries : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_clearQueries> AMI_Search_clearQueriesPtr;

class AMD_Search_clearQueries : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_clearQueries> AMD_Search_clearQueriesPtr;

class AMI_Search_and : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_and> AMI_Search_andPtr;

class AMD_Search_and : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_and> AMD_Search_andPtr;

class AMI_Search_or : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_or> AMI_Search_orPtr;

class AMD_Search_or : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_or> AMD_Search_orPtr;

class AMI_Search_not : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_not> AMI_Search_notPtr;

class AMD_Search_not : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_not> AMD_Search_notPtr;

class AMI_Search_hasNext : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_hasNext> AMI_Search_hasNextPtr;

class AMD_Search_hasNext : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_hasNext> AMD_Search_hasNextPtr;

class AMI_Search_next : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::IObjectPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_next> AMI_Search_nextPtr;

class AMD_Search_next : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::IObjectPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_next> AMD_Search_nextPtr;

class AMI_Search_results : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_results> AMI_Search_resultsPtr;

class AMD_Search_results : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_results> AMD_Search_resultsPtr;

class AMI_Search_currentMetadata : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::SearchMetadata&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_currentMetadata> AMI_Search_currentMetadataPtr;

class AMD_Search_currentMetadata : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::SearchMetadata&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_currentMetadata> AMD_Search_currentMetadataPtr;

class AMI_Search_currentMetadataList : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::SearchMetadataList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_currentMetadataList> AMI_Search_currentMetadataListPtr;

class AMD_Search_currentMetadataList : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::SearchMetadataList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_currentMetadataList> AMD_Search_currentMetadataListPtr;

class AMI_Search_remove : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::SearchPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_Search_remove> AMI_Search_removePtr;

class AMD_Search_remove : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_Search_remove> AMD_Search_removePtr;

}

}

namespace IceAsync
{

namespace omero
{

namespace api
{

class AMD_Search_activeQueries : public ::omero::api::AMD_Search_activeQueries, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_activeQueries(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_setBatchSize : public ::omero::api::AMD_Search_setBatchSize, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_setBatchSize(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_getBatchSize : public ::omero::api::AMD_Search_getBatchSize, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_getBatchSize(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_setMergedBatches : public ::omero::api::AMD_Search_setMergedBatches, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_setMergedBatches(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_isMergedBatches : public ::omero::api::AMD_Search_isMergedBatches, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_isMergedBatches(::IceInternal::Incoming&);

    virtual void ice_response(bool);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_setCaseSentivice : public ::omero::api::AMD_Search_setCaseSentivice, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_setCaseSentivice(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_isCaseSensitive : public ::omero::api::AMD_Search_isCaseSensitive, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_isCaseSensitive(::IceInternal::Incoming&);

    virtual void ice_response(bool);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_setUseProjections : public ::omero::api::AMD_Search_setUseProjections, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_setUseProjections(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_isUseProjections : public ::omero::api::AMD_Search_isUseProjections, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_isUseProjections(::IceInternal::Incoming&);

    virtual void ice_response(bool);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_setReturnUnloaded : public ::omero::api::AMD_Search_setReturnUnloaded, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_setReturnUnloaded(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_isReturnUnloaded : public ::omero::api::AMD_Search_isReturnUnloaded, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_isReturnUnloaded(::IceInternal::Incoming&);

    virtual void ice_response(bool);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_setAllowLeadingWildcard : public ::omero::api::AMD_Search_setAllowLeadingWildcard, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_setAllowLeadingWildcard(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_isAllowLeadingWildcard : public ::omero::api::AMD_Search_isAllowLeadingWildcard, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_isAllowLeadingWildcard(::IceInternal::Incoming&);

    virtual void ice_response(bool);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_onlyType : public ::omero::api::AMD_Search_onlyType, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_onlyType(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_onlyTypes : public ::omero::api::AMD_Search_onlyTypes, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_onlyTypes(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_allTypes : public ::omero::api::AMD_Search_allTypes, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_allTypes(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_onlyIds : public ::omero::api::AMD_Search_onlyIds, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_onlyIds(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_onlyOwnedBy : public ::omero::api::AMD_Search_onlyOwnedBy, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_onlyOwnedBy(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_notOwnedBy : public ::omero::api::AMD_Search_notOwnedBy, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_notOwnedBy(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_onlyCreatedBetween : public ::omero::api::AMD_Search_onlyCreatedBetween, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_onlyCreatedBetween(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_onlyModifiedBetween : public ::omero::api::AMD_Search_onlyModifiedBetween, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_onlyModifiedBetween(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_onlyAnnotatedBetween : public ::omero::api::AMD_Search_onlyAnnotatedBetween, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_onlyAnnotatedBetween(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_onlyAnnotatedBy : public ::omero::api::AMD_Search_onlyAnnotatedBy, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_onlyAnnotatedBy(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_notAnnotatedBy : public ::omero::api::AMD_Search_notAnnotatedBy, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_notAnnotatedBy(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_onlyAnnotatedWith : public ::omero::api::AMD_Search_onlyAnnotatedWith, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_onlyAnnotatedWith(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_addOrderByAsc : public ::omero::api::AMD_Search_addOrderByAsc, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_addOrderByAsc(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_addOrderByDesc : public ::omero::api::AMD_Search_addOrderByDesc, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_addOrderByDesc(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_unordered : public ::omero::api::AMD_Search_unordered, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_unordered(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_fetchAnnotations : public ::omero::api::AMD_Search_fetchAnnotations, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_fetchAnnotations(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_fetchAlso : public ::omero::api::AMD_Search_fetchAlso, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_fetchAlso(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_resetDefaults : public ::omero::api::AMD_Search_resetDefaults, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_resetDefaults(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_byGroupForTags : public ::omero::api::AMD_Search_byGroupForTags, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_byGroupForTags(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_byTagForGroups : public ::omero::api::AMD_Search_byTagForGroups, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_byTagForGroups(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_byFullText : public ::omero::api::AMD_Search_byFullText, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_byFullText(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_byLuceneQueryBuilder : public ::omero::api::AMD_Search_byLuceneQueryBuilder, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_byLuceneQueryBuilder(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_bySimilarTerms : public ::omero::api::AMD_Search_bySimilarTerms, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_bySimilarTerms(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_byHqlQuery : public ::omero::api::AMD_Search_byHqlQuery, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_byHqlQuery(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_bySomeMustNone : public ::omero::api::AMD_Search_bySomeMustNone, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_bySomeMustNone(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_byAnnotatedWith : public ::omero::api::AMD_Search_byAnnotatedWith, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_byAnnotatedWith(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_clearQueries : public ::omero::api::AMD_Search_clearQueries, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_clearQueries(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_and : public ::omero::api::AMD_Search_and, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_and(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_or : public ::omero::api::AMD_Search_or, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_or(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_not : public ::omero::api::AMD_Search_not, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_not(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_hasNext : public ::omero::api::AMD_Search_hasNext, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_hasNext(::IceInternal::Incoming&);

    virtual void ice_response(bool);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_next : public ::omero::api::AMD_Search_next, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_next(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::IObjectPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_results : public ::omero::api::AMD_Search_results, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_results(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_currentMetadata : public ::omero::api::AMD_Search_currentMetadata, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_currentMetadata(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::SearchMetadata&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_currentMetadataList : public ::omero::api::AMD_Search_currentMetadataList, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_currentMetadataList(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::SearchMetadataList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Search_remove : public ::omero::api::AMD_Search_remove, public ::IceInternal::IncomingAsync
{
public:

    AMD_Search_remove(::IceInternal::Incoming&);

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

class Search : virtual public ::IceProxy::omero::api::StatefulServiceInterface
{
public:

    ::Ice::Int activeQueries()
    {
        return activeQueries(0);
    }
    ::Ice::Int activeQueries(const ::Ice::Context& __ctx)
    {
        return activeQueries(&__ctx);
    }
    
private:

    ::Ice::Int activeQueries(const ::Ice::Context*);
    
public:
    bool activeQueries_async(const ::omero::api::AMI_Search_activeQueriesPtr&);
    bool activeQueries_async(const ::omero::api::AMI_Search_activeQueriesPtr&, const ::Ice::Context&);

    void setBatchSize(::Ice::Int size)
    {
        setBatchSize(size, 0);
    }
    void setBatchSize(::Ice::Int size, const ::Ice::Context& __ctx)
    {
        setBatchSize(size, &__ctx);
    }
    
private:

    void setBatchSize(::Ice::Int, const ::Ice::Context*);
    
public:
    bool setBatchSize_async(const ::omero::api::AMI_Search_setBatchSizePtr&, ::Ice::Int);
    bool setBatchSize_async(const ::omero::api::AMI_Search_setBatchSizePtr&, ::Ice::Int, const ::Ice::Context&);

    ::Ice::Int getBatchSize()
    {
        return getBatchSize(0);
    }
    ::Ice::Int getBatchSize(const ::Ice::Context& __ctx)
    {
        return getBatchSize(&__ctx);
    }
    
private:

    ::Ice::Int getBatchSize(const ::Ice::Context*);
    
public:
    bool getBatchSize_async(const ::omero::api::AMI_Search_getBatchSizePtr&);
    bool getBatchSize_async(const ::omero::api::AMI_Search_getBatchSizePtr&, const ::Ice::Context&);

    void setMergedBatches(bool merge)
    {
        setMergedBatches(merge, 0);
    }
    void setMergedBatches(bool merge, const ::Ice::Context& __ctx)
    {
        setMergedBatches(merge, &__ctx);
    }
    
private:

    void setMergedBatches(bool, const ::Ice::Context*);
    
public:
    bool setMergedBatches_async(const ::omero::api::AMI_Search_setMergedBatchesPtr&, bool);
    bool setMergedBatches_async(const ::omero::api::AMI_Search_setMergedBatchesPtr&, bool, const ::Ice::Context&);

    bool isMergedBatches()
    {
        return isMergedBatches(0);
    }
    bool isMergedBatches(const ::Ice::Context& __ctx)
    {
        return isMergedBatches(&__ctx);
    }
    
private:

    bool isMergedBatches(const ::Ice::Context*);
    
public:
    bool isMergedBatches_async(const ::omero::api::AMI_Search_isMergedBatchesPtr&);
    bool isMergedBatches_async(const ::omero::api::AMI_Search_isMergedBatchesPtr&, const ::Ice::Context&);

    void setCaseSentivice(bool caseSensitive)
    {
        setCaseSentivice(caseSensitive, 0);
    }
    void setCaseSentivice(bool caseSensitive, const ::Ice::Context& __ctx)
    {
        setCaseSentivice(caseSensitive, &__ctx);
    }
    
private:

    void setCaseSentivice(bool, const ::Ice::Context*);
    
public:
    bool setCaseSentivice_async(const ::omero::api::AMI_Search_setCaseSentivicePtr&, bool);
    bool setCaseSentivice_async(const ::omero::api::AMI_Search_setCaseSentivicePtr&, bool, const ::Ice::Context&);

    bool isCaseSensitive()
    {
        return isCaseSensitive(0);
    }
    bool isCaseSensitive(const ::Ice::Context& __ctx)
    {
        return isCaseSensitive(&__ctx);
    }
    
private:

    bool isCaseSensitive(const ::Ice::Context*);
    
public:
    bool isCaseSensitive_async(const ::omero::api::AMI_Search_isCaseSensitivePtr&);
    bool isCaseSensitive_async(const ::omero::api::AMI_Search_isCaseSensitivePtr&, const ::Ice::Context&);

    void setUseProjections(bool useProjections)
    {
        setUseProjections(useProjections, 0);
    }
    void setUseProjections(bool useProjections, const ::Ice::Context& __ctx)
    {
        setUseProjections(useProjections, &__ctx);
    }
    
private:

    void setUseProjections(bool, const ::Ice::Context*);
    
public:
    bool setUseProjections_async(const ::omero::api::AMI_Search_setUseProjectionsPtr&, bool);
    bool setUseProjections_async(const ::omero::api::AMI_Search_setUseProjectionsPtr&, bool, const ::Ice::Context&);

    bool isUseProjections()
    {
        return isUseProjections(0);
    }
    bool isUseProjections(const ::Ice::Context& __ctx)
    {
        return isUseProjections(&__ctx);
    }
    
private:

    bool isUseProjections(const ::Ice::Context*);
    
public:
    bool isUseProjections_async(const ::omero::api::AMI_Search_isUseProjectionsPtr&);
    bool isUseProjections_async(const ::omero::api::AMI_Search_isUseProjectionsPtr&, const ::Ice::Context&);

    void setReturnUnloaded(bool returnUnloaded)
    {
        setReturnUnloaded(returnUnloaded, 0);
    }
    void setReturnUnloaded(bool returnUnloaded, const ::Ice::Context& __ctx)
    {
        setReturnUnloaded(returnUnloaded, &__ctx);
    }
    
private:

    void setReturnUnloaded(bool, const ::Ice::Context*);
    
public:
    bool setReturnUnloaded_async(const ::omero::api::AMI_Search_setReturnUnloadedPtr&, bool);
    bool setReturnUnloaded_async(const ::omero::api::AMI_Search_setReturnUnloadedPtr&, bool, const ::Ice::Context&);

    bool isReturnUnloaded()
    {
        return isReturnUnloaded(0);
    }
    bool isReturnUnloaded(const ::Ice::Context& __ctx)
    {
        return isReturnUnloaded(&__ctx);
    }
    
private:

    bool isReturnUnloaded(const ::Ice::Context*);
    
public:
    bool isReturnUnloaded_async(const ::omero::api::AMI_Search_isReturnUnloadedPtr&);
    bool isReturnUnloaded_async(const ::omero::api::AMI_Search_isReturnUnloadedPtr&, const ::Ice::Context&);

    void setAllowLeadingWildcard(bool allowLeadingWildcard)
    {
        setAllowLeadingWildcard(allowLeadingWildcard, 0);
    }
    void setAllowLeadingWildcard(bool allowLeadingWildcard, const ::Ice::Context& __ctx)
    {
        setAllowLeadingWildcard(allowLeadingWildcard, &__ctx);
    }
    
private:

    void setAllowLeadingWildcard(bool, const ::Ice::Context*);
    
public:
    bool setAllowLeadingWildcard_async(const ::omero::api::AMI_Search_setAllowLeadingWildcardPtr&, bool);
    bool setAllowLeadingWildcard_async(const ::omero::api::AMI_Search_setAllowLeadingWildcardPtr&, bool, const ::Ice::Context&);

    bool isAllowLeadingWildcard()
    {
        return isAllowLeadingWildcard(0);
    }
    bool isAllowLeadingWildcard(const ::Ice::Context& __ctx)
    {
        return isAllowLeadingWildcard(&__ctx);
    }
    
private:

    bool isAllowLeadingWildcard(const ::Ice::Context*);
    
public:
    bool isAllowLeadingWildcard_async(const ::omero::api::AMI_Search_isAllowLeadingWildcardPtr&);
    bool isAllowLeadingWildcard_async(const ::omero::api::AMI_Search_isAllowLeadingWildcardPtr&, const ::Ice::Context&);

    void onlyType(const ::std::string& klass)
    {
        onlyType(klass, 0);
    }
    void onlyType(const ::std::string& klass, const ::Ice::Context& __ctx)
    {
        onlyType(klass, &__ctx);
    }
    
private:

    void onlyType(const ::std::string&, const ::Ice::Context*);
    
public:
    bool onlyType_async(const ::omero::api::AMI_Search_onlyTypePtr&, const ::std::string&);
    bool onlyType_async(const ::omero::api::AMI_Search_onlyTypePtr&, const ::std::string&, const ::Ice::Context&);

    void onlyTypes(const ::omero::api::StringSet& classes)
    {
        onlyTypes(classes, 0);
    }
    void onlyTypes(const ::omero::api::StringSet& classes, const ::Ice::Context& __ctx)
    {
        onlyTypes(classes, &__ctx);
    }
    
private:

    void onlyTypes(const ::omero::api::StringSet&, const ::Ice::Context*);
    
public:
    bool onlyTypes_async(const ::omero::api::AMI_Search_onlyTypesPtr&, const ::omero::api::StringSet&);
    bool onlyTypes_async(const ::omero::api::AMI_Search_onlyTypesPtr&, const ::omero::api::StringSet&, const ::Ice::Context&);

    void allTypes()
    {
        allTypes(0);
    }
    void allTypes(const ::Ice::Context& __ctx)
    {
        allTypes(&__ctx);
    }
    
private:

    void allTypes(const ::Ice::Context*);
    
public:
    bool allTypes_async(const ::omero::api::AMI_Search_allTypesPtr&);
    bool allTypes_async(const ::omero::api::AMI_Search_allTypesPtr&, const ::Ice::Context&);

    void onlyIds(const ::omero::sys::LongList& ids)
    {
        onlyIds(ids, 0);
    }
    void onlyIds(const ::omero::sys::LongList& ids, const ::Ice::Context& __ctx)
    {
        onlyIds(ids, &__ctx);
    }
    
private:

    void onlyIds(const ::omero::sys::LongList&, const ::Ice::Context*);
    
public:
    bool onlyIds_async(const ::omero::api::AMI_Search_onlyIdsPtr&, const ::omero::sys::LongList&);
    bool onlyIds_async(const ::omero::api::AMI_Search_onlyIdsPtr&, const ::omero::sys::LongList&, const ::Ice::Context&);

    void onlyOwnedBy(const ::omero::model::DetailsPtr& d)
    {
        onlyOwnedBy(d, 0);
    }
    void onlyOwnedBy(const ::omero::model::DetailsPtr& d, const ::Ice::Context& __ctx)
    {
        onlyOwnedBy(d, &__ctx);
    }
    
private:

    void onlyOwnedBy(const ::omero::model::DetailsPtr&, const ::Ice::Context*);
    
public:
    bool onlyOwnedBy_async(const ::omero::api::AMI_Search_onlyOwnedByPtr&, const ::omero::model::DetailsPtr&);
    bool onlyOwnedBy_async(const ::omero::api::AMI_Search_onlyOwnedByPtr&, const ::omero::model::DetailsPtr&, const ::Ice::Context&);

    void notOwnedBy(const ::omero::model::DetailsPtr& d)
    {
        notOwnedBy(d, 0);
    }
    void notOwnedBy(const ::omero::model::DetailsPtr& d, const ::Ice::Context& __ctx)
    {
        notOwnedBy(d, &__ctx);
    }
    
private:

    void notOwnedBy(const ::omero::model::DetailsPtr&, const ::Ice::Context*);
    
public:
    bool notOwnedBy_async(const ::omero::api::AMI_Search_notOwnedByPtr&, const ::omero::model::DetailsPtr&);
    bool notOwnedBy_async(const ::omero::api::AMI_Search_notOwnedByPtr&, const ::omero::model::DetailsPtr&, const ::Ice::Context&);

    void onlyCreatedBetween(const ::omero::RTimePtr& start, const ::omero::RTimePtr& stop)
    {
        onlyCreatedBetween(start, stop, 0);
    }
    void onlyCreatedBetween(const ::omero::RTimePtr& start, const ::omero::RTimePtr& stop, const ::Ice::Context& __ctx)
    {
        onlyCreatedBetween(start, stop, &__ctx);
    }
    
private:

    void onlyCreatedBetween(const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::Ice::Context*);
    
public:
    bool onlyCreatedBetween_async(const ::omero::api::AMI_Search_onlyCreatedBetweenPtr&, const ::omero::RTimePtr&, const ::omero::RTimePtr&);
    bool onlyCreatedBetween_async(const ::omero::api::AMI_Search_onlyCreatedBetweenPtr&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::Ice::Context&);

    void onlyModifiedBetween(const ::omero::RTimePtr& start, const ::omero::RTimePtr& stop)
    {
        onlyModifiedBetween(start, stop, 0);
    }
    void onlyModifiedBetween(const ::omero::RTimePtr& start, const ::omero::RTimePtr& stop, const ::Ice::Context& __ctx)
    {
        onlyModifiedBetween(start, stop, &__ctx);
    }
    
private:

    void onlyModifiedBetween(const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::Ice::Context*);
    
public:
    bool onlyModifiedBetween_async(const ::omero::api::AMI_Search_onlyModifiedBetweenPtr&, const ::omero::RTimePtr&, const ::omero::RTimePtr&);
    bool onlyModifiedBetween_async(const ::omero::api::AMI_Search_onlyModifiedBetweenPtr&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::Ice::Context&);

    void onlyAnnotatedBetween(const ::omero::RTimePtr& start, const ::omero::RTimePtr& stop)
    {
        onlyAnnotatedBetween(start, stop, 0);
    }
    void onlyAnnotatedBetween(const ::omero::RTimePtr& start, const ::omero::RTimePtr& stop, const ::Ice::Context& __ctx)
    {
        onlyAnnotatedBetween(start, stop, &__ctx);
    }
    
private:

    void onlyAnnotatedBetween(const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::Ice::Context*);
    
public:
    bool onlyAnnotatedBetween_async(const ::omero::api::AMI_Search_onlyAnnotatedBetweenPtr&, const ::omero::RTimePtr&, const ::omero::RTimePtr&);
    bool onlyAnnotatedBetween_async(const ::omero::api::AMI_Search_onlyAnnotatedBetweenPtr&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::Ice::Context&);

    void onlyAnnotatedBy(const ::omero::model::DetailsPtr& d)
    {
        onlyAnnotatedBy(d, 0);
    }
    void onlyAnnotatedBy(const ::omero::model::DetailsPtr& d, const ::Ice::Context& __ctx)
    {
        onlyAnnotatedBy(d, &__ctx);
    }
    
private:

    void onlyAnnotatedBy(const ::omero::model::DetailsPtr&, const ::Ice::Context*);
    
public:
    bool onlyAnnotatedBy_async(const ::omero::api::AMI_Search_onlyAnnotatedByPtr&, const ::omero::model::DetailsPtr&);
    bool onlyAnnotatedBy_async(const ::omero::api::AMI_Search_onlyAnnotatedByPtr&, const ::omero::model::DetailsPtr&, const ::Ice::Context&);

    void notAnnotatedBy(const ::omero::model::DetailsPtr& d)
    {
        notAnnotatedBy(d, 0);
    }
    void notAnnotatedBy(const ::omero::model::DetailsPtr& d, const ::Ice::Context& __ctx)
    {
        notAnnotatedBy(d, &__ctx);
    }
    
private:

    void notAnnotatedBy(const ::omero::model::DetailsPtr&, const ::Ice::Context*);
    
public:
    bool notAnnotatedBy_async(const ::omero::api::AMI_Search_notAnnotatedByPtr&, const ::omero::model::DetailsPtr&);
    bool notAnnotatedBy_async(const ::omero::api::AMI_Search_notAnnotatedByPtr&, const ::omero::model::DetailsPtr&, const ::Ice::Context&);

    void onlyAnnotatedWith(const ::omero::api::StringSet& classes)
    {
        onlyAnnotatedWith(classes, 0);
    }
    void onlyAnnotatedWith(const ::omero::api::StringSet& classes, const ::Ice::Context& __ctx)
    {
        onlyAnnotatedWith(classes, &__ctx);
    }
    
private:

    void onlyAnnotatedWith(const ::omero::api::StringSet&, const ::Ice::Context*);
    
public:
    bool onlyAnnotatedWith_async(const ::omero::api::AMI_Search_onlyAnnotatedWithPtr&, const ::omero::api::StringSet&);
    bool onlyAnnotatedWith_async(const ::omero::api::AMI_Search_onlyAnnotatedWithPtr&, const ::omero::api::StringSet&, const ::Ice::Context&);

    void addOrderByAsc(const ::std::string& path)
    {
        addOrderByAsc(path, 0);
    }
    void addOrderByAsc(const ::std::string& path, const ::Ice::Context& __ctx)
    {
        addOrderByAsc(path, &__ctx);
    }
    
private:

    void addOrderByAsc(const ::std::string&, const ::Ice::Context*);
    
public:
    bool addOrderByAsc_async(const ::omero::api::AMI_Search_addOrderByAscPtr&, const ::std::string&);
    bool addOrderByAsc_async(const ::omero::api::AMI_Search_addOrderByAscPtr&, const ::std::string&, const ::Ice::Context&);

    void addOrderByDesc(const ::std::string& path)
    {
        addOrderByDesc(path, 0);
    }
    void addOrderByDesc(const ::std::string& path, const ::Ice::Context& __ctx)
    {
        addOrderByDesc(path, &__ctx);
    }
    
private:

    void addOrderByDesc(const ::std::string&, const ::Ice::Context*);
    
public:
    bool addOrderByDesc_async(const ::omero::api::AMI_Search_addOrderByDescPtr&, const ::std::string&);
    bool addOrderByDesc_async(const ::omero::api::AMI_Search_addOrderByDescPtr&, const ::std::string&, const ::Ice::Context&);

    void unordered()
    {
        unordered(0);
    }
    void unordered(const ::Ice::Context& __ctx)
    {
        unordered(&__ctx);
    }
    
private:

    void unordered(const ::Ice::Context*);
    
public:
    bool unordered_async(const ::omero::api::AMI_Search_unorderedPtr&);
    bool unordered_async(const ::omero::api::AMI_Search_unorderedPtr&, const ::Ice::Context&);

    void fetchAnnotations(const ::omero::api::StringSet& classes)
    {
        fetchAnnotations(classes, 0);
    }
    void fetchAnnotations(const ::omero::api::StringSet& classes, const ::Ice::Context& __ctx)
    {
        fetchAnnotations(classes, &__ctx);
    }
    
private:

    void fetchAnnotations(const ::omero::api::StringSet&, const ::Ice::Context*);
    
public:
    bool fetchAnnotations_async(const ::omero::api::AMI_Search_fetchAnnotationsPtr&, const ::omero::api::StringSet&);
    bool fetchAnnotations_async(const ::omero::api::AMI_Search_fetchAnnotationsPtr&, const ::omero::api::StringSet&, const ::Ice::Context&);

    void fetchAlso(const ::omero::api::StringSet& fetches)
    {
        fetchAlso(fetches, 0);
    }
    void fetchAlso(const ::omero::api::StringSet& fetches, const ::Ice::Context& __ctx)
    {
        fetchAlso(fetches, &__ctx);
    }
    
private:

    void fetchAlso(const ::omero::api::StringSet&, const ::Ice::Context*);
    
public:
    bool fetchAlso_async(const ::omero::api::AMI_Search_fetchAlsoPtr&, const ::omero::api::StringSet&);
    bool fetchAlso_async(const ::omero::api::AMI_Search_fetchAlsoPtr&, const ::omero::api::StringSet&, const ::Ice::Context&);

    void resetDefaults()
    {
        resetDefaults(0);
    }
    void resetDefaults(const ::Ice::Context& __ctx)
    {
        resetDefaults(&__ctx);
    }
    
private:

    void resetDefaults(const ::Ice::Context*);
    
public:
    bool resetDefaults_async(const ::omero::api::AMI_Search_resetDefaultsPtr&);
    bool resetDefaults_async(const ::omero::api::AMI_Search_resetDefaultsPtr&, const ::Ice::Context&);

    void byGroupForTags(const ::std::string& group)
    {
        byGroupForTags(group, 0);
    }
    void byGroupForTags(const ::std::string& group, const ::Ice::Context& __ctx)
    {
        byGroupForTags(group, &__ctx);
    }
    
private:

    void byGroupForTags(const ::std::string&, const ::Ice::Context*);
    
public:
    bool byGroupForTags_async(const ::omero::api::AMI_Search_byGroupForTagsPtr&, const ::std::string&);
    bool byGroupForTags_async(const ::omero::api::AMI_Search_byGroupForTagsPtr&, const ::std::string&, const ::Ice::Context&);

    void byTagForGroups(const ::std::string& tag)
    {
        byTagForGroups(tag, 0);
    }
    void byTagForGroups(const ::std::string& tag, const ::Ice::Context& __ctx)
    {
        byTagForGroups(tag, &__ctx);
    }
    
private:

    void byTagForGroups(const ::std::string&, const ::Ice::Context*);
    
public:
    bool byTagForGroups_async(const ::omero::api::AMI_Search_byTagForGroupsPtr&, const ::std::string&);
    bool byTagForGroups_async(const ::omero::api::AMI_Search_byTagForGroupsPtr&, const ::std::string&, const ::Ice::Context&);

    void byFullText(const ::std::string& query)
    {
        byFullText(query, 0);
    }
    void byFullText(const ::std::string& query, const ::Ice::Context& __ctx)
    {
        byFullText(query, &__ctx);
    }
    
private:

    void byFullText(const ::std::string&, const ::Ice::Context*);
    
public:
    bool byFullText_async(const ::omero::api::AMI_Search_byFullTextPtr&, const ::std::string&);
    bool byFullText_async(const ::omero::api::AMI_Search_byFullTextPtr&, const ::std::string&, const ::Ice::Context&);

    void byLuceneQueryBuilder(const ::std::string& fields, const ::std::string& from, const ::std::string& to, const ::std::string& dateType, const ::std::string& query)
    {
        byLuceneQueryBuilder(fields, from, to, dateType, query, 0);
    }
    void byLuceneQueryBuilder(const ::std::string& fields, const ::std::string& from, const ::std::string& to, const ::std::string& dateType, const ::std::string& query, const ::Ice::Context& __ctx)
    {
        byLuceneQueryBuilder(fields, from, to, dateType, query, &__ctx);
    }
    
private:

    void byLuceneQueryBuilder(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:
    bool byLuceneQueryBuilder_async(const ::omero::api::AMI_Search_byLuceneQueryBuilderPtr&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&);
    bool byLuceneQueryBuilder_async(const ::omero::api::AMI_Search_byLuceneQueryBuilderPtr&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context&);

    void bySimilarTerms(const ::omero::api::StringSet& terms)
    {
        bySimilarTerms(terms, 0);
    }
    void bySimilarTerms(const ::omero::api::StringSet& terms, const ::Ice::Context& __ctx)
    {
        bySimilarTerms(terms, &__ctx);
    }
    
private:

    void bySimilarTerms(const ::omero::api::StringSet&, const ::Ice::Context*);
    
public:
    bool bySimilarTerms_async(const ::omero::api::AMI_Search_bySimilarTermsPtr&, const ::omero::api::StringSet&);
    bool bySimilarTerms_async(const ::omero::api::AMI_Search_bySimilarTermsPtr&, const ::omero::api::StringSet&, const ::Ice::Context&);

    void byHqlQuery(const ::std::string& query, const ::omero::sys::ParametersPtr& params)
    {
        byHqlQuery(query, params, 0);
    }
    void byHqlQuery(const ::std::string& query, const ::omero::sys::ParametersPtr& params, const ::Ice::Context& __ctx)
    {
        byHqlQuery(query, params, &__ctx);
    }
    
private:

    void byHqlQuery(const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool byHqlQuery_async(const ::omero::api::AMI_Search_byHqlQueryPtr&, const ::std::string&, const ::omero::sys::ParametersPtr&);
    bool byHqlQuery_async(const ::omero::api::AMI_Search_byHqlQueryPtr&, const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);

    void bySomeMustNone(const ::omero::api::StringSet& some, const ::omero::api::StringSet& must, const ::omero::api::StringSet& none)
    {
        bySomeMustNone(some, must, none, 0);
    }
    void bySomeMustNone(const ::omero::api::StringSet& some, const ::omero::api::StringSet& must, const ::omero::api::StringSet& none, const ::Ice::Context& __ctx)
    {
        bySomeMustNone(some, must, none, &__ctx);
    }
    
private:

    void bySomeMustNone(const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::Ice::Context*);
    
public:
    bool bySomeMustNone_async(const ::omero::api::AMI_Search_bySomeMustNonePtr&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::api::StringSet&);
    bool bySomeMustNone_async(const ::omero::api::AMI_Search_bySomeMustNonePtr&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::Ice::Context&);

    void byAnnotatedWith(const ::omero::api::AnnotationList& examples)
    {
        byAnnotatedWith(examples, 0);
    }
    void byAnnotatedWith(const ::omero::api::AnnotationList& examples, const ::Ice::Context& __ctx)
    {
        byAnnotatedWith(examples, &__ctx);
    }
    
private:

    void byAnnotatedWith(const ::omero::api::AnnotationList&, const ::Ice::Context*);
    
public:
    bool byAnnotatedWith_async(const ::omero::api::AMI_Search_byAnnotatedWithPtr&, const ::omero::api::AnnotationList&);
    bool byAnnotatedWith_async(const ::omero::api::AMI_Search_byAnnotatedWithPtr&, const ::omero::api::AnnotationList&, const ::Ice::Context&);

    void clearQueries()
    {
        clearQueries(0);
    }
    void clearQueries(const ::Ice::Context& __ctx)
    {
        clearQueries(&__ctx);
    }
    
private:

    void clearQueries(const ::Ice::Context*);
    
public:
    bool clearQueries_async(const ::omero::api::AMI_Search_clearQueriesPtr&);
    bool clearQueries_async(const ::omero::api::AMI_Search_clearQueriesPtr&, const ::Ice::Context&);

    void _cpp_and()
    {
        _cpp_and(0);
    }
    void _cpp_and(const ::Ice::Context& __ctx)
    {
        _cpp_and(&__ctx);
    }
    
private:

    void _cpp_and(const ::Ice::Context*);
    
public:
    bool and_async(const ::omero::api::AMI_Search_andPtr&);
    bool and_async(const ::omero::api::AMI_Search_andPtr&, const ::Ice::Context&);

    void _cpp_or()
    {
        _cpp_or(0);
    }
    void _cpp_or(const ::Ice::Context& __ctx)
    {
        _cpp_or(&__ctx);
    }
    
private:

    void _cpp_or(const ::Ice::Context*);
    
public:
    bool or_async(const ::omero::api::AMI_Search_orPtr&);
    bool or_async(const ::omero::api::AMI_Search_orPtr&, const ::Ice::Context&);

    void _cpp_not()
    {
        _cpp_not(0);
    }
    void _cpp_not(const ::Ice::Context& __ctx)
    {
        _cpp_not(&__ctx);
    }
    
private:

    void _cpp_not(const ::Ice::Context*);
    
public:
    bool not_async(const ::omero::api::AMI_Search_notPtr&);
    bool not_async(const ::omero::api::AMI_Search_notPtr&, const ::Ice::Context&);

    bool hasNext()
    {
        return hasNext(0);
    }
    bool hasNext(const ::Ice::Context& __ctx)
    {
        return hasNext(&__ctx);
    }
    
private:

    bool hasNext(const ::Ice::Context*);
    
public:
    bool hasNext_async(const ::omero::api::AMI_Search_hasNextPtr&);
    bool hasNext_async(const ::omero::api::AMI_Search_hasNextPtr&, const ::Ice::Context&);

    ::omero::model::IObjectPtr next()
    {
        return next(0);
    }
    ::omero::model::IObjectPtr next(const ::Ice::Context& __ctx)
    {
        return next(&__ctx);
    }
    
private:

    ::omero::model::IObjectPtr next(const ::Ice::Context*);
    
public:
    bool next_async(const ::omero::api::AMI_Search_nextPtr&);
    bool next_async(const ::omero::api::AMI_Search_nextPtr&, const ::Ice::Context&);

    ::omero::api::IObjectList results()
    {
        return results(0);
    }
    ::omero::api::IObjectList results(const ::Ice::Context& __ctx)
    {
        return results(&__ctx);
    }
    
private:

    ::omero::api::IObjectList results(const ::Ice::Context*);
    
public:
    bool results_async(const ::omero::api::AMI_Search_resultsPtr&);
    bool results_async(const ::omero::api::AMI_Search_resultsPtr&, const ::Ice::Context&);

    ::omero::api::SearchMetadata currentMetadata()
    {
        return currentMetadata(0);
    }
    ::omero::api::SearchMetadata currentMetadata(const ::Ice::Context& __ctx)
    {
        return currentMetadata(&__ctx);
    }
    
private:

    ::omero::api::SearchMetadata currentMetadata(const ::Ice::Context*);
    
public:
    bool currentMetadata_async(const ::omero::api::AMI_Search_currentMetadataPtr&);
    bool currentMetadata_async(const ::omero::api::AMI_Search_currentMetadataPtr&, const ::Ice::Context&);

    ::omero::api::SearchMetadataList currentMetadataList()
    {
        return currentMetadataList(0);
    }
    ::omero::api::SearchMetadataList currentMetadataList(const ::Ice::Context& __ctx)
    {
        return currentMetadataList(&__ctx);
    }
    
private:

    ::omero::api::SearchMetadataList currentMetadataList(const ::Ice::Context*);
    
public:
    bool currentMetadataList_async(const ::omero::api::AMI_Search_currentMetadataListPtr&);
    bool currentMetadataList_async(const ::omero::api::AMI_Search_currentMetadataListPtr&, const ::Ice::Context&);

    void remove()
    {
        remove(0);
    }
    void remove(const ::Ice::Context& __ctx)
    {
        remove(&__ctx);
    }
    
private:

    void remove(const ::Ice::Context*);
    
public:
    bool remove_async(const ::omero::api::AMI_Search_removePtr&);
    bool remove_async(const ::omero::api::AMI_Search_removePtr&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<Search> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Search*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Search*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Search> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Search*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Search*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Search> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Search*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Search*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Search> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Search*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Search*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Search> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Search*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Search*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Search> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Search*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Search*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Search> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Search*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Search*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Search> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Search*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Search*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Search> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Search*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Search*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Search> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Search*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Search*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Search> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Search*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Search*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Search> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Search*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Search*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Search> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Search*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Search*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Search> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Search*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Search*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Search> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Search*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Search*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Search> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Search*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Search*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Search> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Search*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Search*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Search> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Search*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Search*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Search> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Search*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Search*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Search : virtual public ::IceDelegate::omero::api::StatefulServiceInterface
{
public:

    virtual ::Ice::Int activeQueries(const ::Ice::Context*) = 0;

    virtual void setBatchSize(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getBatchSize(const ::Ice::Context*) = 0;

    virtual void setMergedBatches(bool, const ::Ice::Context*) = 0;

    virtual bool isMergedBatches(const ::Ice::Context*) = 0;

    virtual void setCaseSentivice(bool, const ::Ice::Context*) = 0;

    virtual bool isCaseSensitive(const ::Ice::Context*) = 0;

    virtual void setUseProjections(bool, const ::Ice::Context*) = 0;

    virtual bool isUseProjections(const ::Ice::Context*) = 0;

    virtual void setReturnUnloaded(bool, const ::Ice::Context*) = 0;

    virtual bool isReturnUnloaded(const ::Ice::Context*) = 0;

    virtual void setAllowLeadingWildcard(bool, const ::Ice::Context*) = 0;

    virtual bool isAllowLeadingWildcard(const ::Ice::Context*) = 0;

    virtual void onlyType(const ::std::string&, const ::Ice::Context*) = 0;

    virtual void onlyTypes(const ::omero::api::StringSet&, const ::Ice::Context*) = 0;

    virtual void allTypes(const ::Ice::Context*) = 0;

    virtual void onlyIds(const ::omero::sys::LongList&, const ::Ice::Context*) = 0;

    virtual void onlyOwnedBy(const ::omero::model::DetailsPtr&, const ::Ice::Context*) = 0;

    virtual void notOwnedBy(const ::omero::model::DetailsPtr&, const ::Ice::Context*) = 0;

    virtual void onlyCreatedBetween(const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::Ice::Context*) = 0;

    virtual void onlyModifiedBetween(const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::Ice::Context*) = 0;

    virtual void onlyAnnotatedBetween(const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::Ice::Context*) = 0;

    virtual void onlyAnnotatedBy(const ::omero::model::DetailsPtr&, const ::Ice::Context*) = 0;

    virtual void notAnnotatedBy(const ::omero::model::DetailsPtr&, const ::Ice::Context*) = 0;

    virtual void onlyAnnotatedWith(const ::omero::api::StringSet&, const ::Ice::Context*) = 0;

    virtual void addOrderByAsc(const ::std::string&, const ::Ice::Context*) = 0;

    virtual void addOrderByDesc(const ::std::string&, const ::Ice::Context*) = 0;

    virtual void unordered(const ::Ice::Context*) = 0;

    virtual void fetchAnnotations(const ::omero::api::StringSet&, const ::Ice::Context*) = 0;

    virtual void fetchAlso(const ::omero::api::StringSet&, const ::Ice::Context*) = 0;

    virtual void resetDefaults(const ::Ice::Context*) = 0;

    virtual void byGroupForTags(const ::std::string&, const ::Ice::Context*) = 0;

    virtual void byTagForGroups(const ::std::string&, const ::Ice::Context*) = 0;

    virtual void byFullText(const ::std::string&, const ::Ice::Context*) = 0;

    virtual void byLuceneQueryBuilder(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual void bySimilarTerms(const ::omero::api::StringSet&, const ::Ice::Context*) = 0;

    virtual void byHqlQuery(const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;

    virtual void bySomeMustNone(const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::Ice::Context*) = 0;

    virtual void byAnnotatedWith(const ::omero::api::AnnotationList&, const ::Ice::Context*) = 0;

    virtual void clearQueries(const ::Ice::Context*) = 0;

    virtual void _cpp_and(const ::Ice::Context*) = 0;

    virtual void _cpp_or(const ::Ice::Context*) = 0;

    virtual void _cpp_not(const ::Ice::Context*) = 0;

    virtual bool hasNext(const ::Ice::Context*) = 0;

    virtual ::omero::model::IObjectPtr next(const ::Ice::Context*) = 0;

    virtual ::omero::api::IObjectList results(const ::Ice::Context*) = 0;

    virtual ::omero::api::SearchMetadata currentMetadata(const ::Ice::Context*) = 0;

    virtual ::omero::api::SearchMetadataList currentMetadataList(const ::Ice::Context*) = 0;

    virtual void remove(const ::Ice::Context*) = 0;
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

class Search : virtual public ::IceDelegate::omero::api::Search,
               virtual public ::IceDelegateM::omero::api::StatefulServiceInterface
{
public:

    virtual ::Ice::Int activeQueries(const ::Ice::Context*);

    virtual void setBatchSize(::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int getBatchSize(const ::Ice::Context*);

    virtual void setMergedBatches(bool, const ::Ice::Context*);

    virtual bool isMergedBatches(const ::Ice::Context*);

    virtual void setCaseSentivice(bool, const ::Ice::Context*);

    virtual bool isCaseSensitive(const ::Ice::Context*);

    virtual void setUseProjections(bool, const ::Ice::Context*);

    virtual bool isUseProjections(const ::Ice::Context*);

    virtual void setReturnUnloaded(bool, const ::Ice::Context*);

    virtual bool isReturnUnloaded(const ::Ice::Context*);

    virtual void setAllowLeadingWildcard(bool, const ::Ice::Context*);

    virtual bool isAllowLeadingWildcard(const ::Ice::Context*);

    virtual void onlyType(const ::std::string&, const ::Ice::Context*);

    virtual void onlyTypes(const ::omero::api::StringSet&, const ::Ice::Context*);

    virtual void allTypes(const ::Ice::Context*);

    virtual void onlyIds(const ::omero::sys::LongList&, const ::Ice::Context*);

    virtual void onlyOwnedBy(const ::omero::model::DetailsPtr&, const ::Ice::Context*);

    virtual void notOwnedBy(const ::omero::model::DetailsPtr&, const ::Ice::Context*);

    virtual void onlyCreatedBetween(const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual void onlyModifiedBetween(const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual void onlyAnnotatedBetween(const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual void onlyAnnotatedBy(const ::omero::model::DetailsPtr&, const ::Ice::Context*);

    virtual void notAnnotatedBy(const ::omero::model::DetailsPtr&, const ::Ice::Context*);

    virtual void onlyAnnotatedWith(const ::omero::api::StringSet&, const ::Ice::Context*);

    virtual void addOrderByAsc(const ::std::string&, const ::Ice::Context*);

    virtual void addOrderByDesc(const ::std::string&, const ::Ice::Context*);

    virtual void unordered(const ::Ice::Context*);

    virtual void fetchAnnotations(const ::omero::api::StringSet&, const ::Ice::Context*);

    virtual void fetchAlso(const ::omero::api::StringSet&, const ::Ice::Context*);

    virtual void resetDefaults(const ::Ice::Context*);

    virtual void byGroupForTags(const ::std::string&, const ::Ice::Context*);

    virtual void byTagForGroups(const ::std::string&, const ::Ice::Context*);

    virtual void byFullText(const ::std::string&, const ::Ice::Context*);

    virtual void byLuceneQueryBuilder(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual void bySimilarTerms(const ::omero::api::StringSet&, const ::Ice::Context*);

    virtual void byHqlQuery(const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual void bySomeMustNone(const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::Ice::Context*);

    virtual void byAnnotatedWith(const ::omero::api::AnnotationList&, const ::Ice::Context*);

    virtual void clearQueries(const ::Ice::Context*);

    virtual void _cpp_and(const ::Ice::Context*);

    virtual void _cpp_or(const ::Ice::Context*);

    virtual void _cpp_not(const ::Ice::Context*);

    virtual bool hasNext(const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr next(const ::Ice::Context*);

    virtual ::omero::api::IObjectList results(const ::Ice::Context*);

    virtual ::omero::api::SearchMetadata currentMetadata(const ::Ice::Context*);

    virtual ::omero::api::SearchMetadataList currentMetadataList(const ::Ice::Context*);

    virtual void remove(const ::Ice::Context*);
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

class Search : virtual public ::IceDelegate::omero::api::Search,
               virtual public ::IceDelegateD::omero::api::StatefulServiceInterface
{
public:

    virtual ::Ice::Int activeQueries(const ::Ice::Context*);

    virtual void setBatchSize(::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int getBatchSize(const ::Ice::Context*);

    virtual void setMergedBatches(bool, const ::Ice::Context*);

    virtual bool isMergedBatches(const ::Ice::Context*);

    virtual void setCaseSentivice(bool, const ::Ice::Context*);

    virtual bool isCaseSensitive(const ::Ice::Context*);

    virtual void setUseProjections(bool, const ::Ice::Context*);

    virtual bool isUseProjections(const ::Ice::Context*);

    virtual void setReturnUnloaded(bool, const ::Ice::Context*);

    virtual bool isReturnUnloaded(const ::Ice::Context*);

    virtual void setAllowLeadingWildcard(bool, const ::Ice::Context*);

    virtual bool isAllowLeadingWildcard(const ::Ice::Context*);

    virtual void onlyType(const ::std::string&, const ::Ice::Context*);

    virtual void onlyTypes(const ::omero::api::StringSet&, const ::Ice::Context*);

    virtual void allTypes(const ::Ice::Context*);

    virtual void onlyIds(const ::omero::sys::LongList&, const ::Ice::Context*);

    virtual void onlyOwnedBy(const ::omero::model::DetailsPtr&, const ::Ice::Context*);

    virtual void notOwnedBy(const ::omero::model::DetailsPtr&, const ::Ice::Context*);

    virtual void onlyCreatedBetween(const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual void onlyModifiedBetween(const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual void onlyAnnotatedBetween(const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual void onlyAnnotatedBy(const ::omero::model::DetailsPtr&, const ::Ice::Context*);

    virtual void notAnnotatedBy(const ::omero::model::DetailsPtr&, const ::Ice::Context*);

    virtual void onlyAnnotatedWith(const ::omero::api::StringSet&, const ::Ice::Context*);

    virtual void addOrderByAsc(const ::std::string&, const ::Ice::Context*);

    virtual void addOrderByDesc(const ::std::string&, const ::Ice::Context*);

    virtual void unordered(const ::Ice::Context*);

    virtual void fetchAnnotations(const ::omero::api::StringSet&, const ::Ice::Context*);

    virtual void fetchAlso(const ::omero::api::StringSet&, const ::Ice::Context*);

    virtual void resetDefaults(const ::Ice::Context*);

    virtual void byGroupForTags(const ::std::string&, const ::Ice::Context*);

    virtual void byTagForGroups(const ::std::string&, const ::Ice::Context*);

    virtual void byFullText(const ::std::string&, const ::Ice::Context*);

    virtual void byLuceneQueryBuilder(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual void bySimilarTerms(const ::omero::api::StringSet&, const ::Ice::Context*);

    virtual void byHqlQuery(const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual void bySomeMustNone(const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::Ice::Context*);

    virtual void byAnnotatedWith(const ::omero::api::AnnotationList&, const ::Ice::Context*);

    virtual void clearQueries(const ::Ice::Context*);

    virtual void _cpp_and(const ::Ice::Context*);

    virtual void _cpp_or(const ::Ice::Context*);

    virtual void _cpp_not(const ::Ice::Context*);

    virtual bool hasNext(const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr next(const ::Ice::Context*);

    virtual ::omero::api::IObjectList results(const ::Ice::Context*);

    virtual ::omero::api::SearchMetadata currentMetadata(const ::Ice::Context*);

    virtual ::omero::api::SearchMetadataList currentMetadataList(const ::Ice::Context*);

    virtual void remove(const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace api
{

class Search : virtual public ::omero::api::StatefulServiceInterface
{
public:

    typedef SearchPrx ProxyType;
    typedef SearchPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void activeQueries_async(const ::omero::api::AMD_Search_activeQueriesPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___activeQueries(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setBatchSize_async(const ::omero::api::AMD_Search_setBatchSizePtr&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setBatchSize(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getBatchSize_async(const ::omero::api::AMD_Search_getBatchSizePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getBatchSize(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setMergedBatches_async(const ::omero::api::AMD_Search_setMergedBatchesPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setMergedBatches(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void isMergedBatches_async(const ::omero::api::AMD_Search_isMergedBatchesPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isMergedBatches(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setCaseSentivice_async(const ::omero::api::AMD_Search_setCaseSentivicePtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setCaseSentivice(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void isCaseSensitive_async(const ::omero::api::AMD_Search_isCaseSensitivePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isCaseSensitive(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setUseProjections_async(const ::omero::api::AMD_Search_setUseProjectionsPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setUseProjections(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void isUseProjections_async(const ::omero::api::AMD_Search_isUseProjectionsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isUseProjections(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setReturnUnloaded_async(const ::omero::api::AMD_Search_setReturnUnloadedPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setReturnUnloaded(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void isReturnUnloaded_async(const ::omero::api::AMD_Search_isReturnUnloadedPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isReturnUnloaded(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setAllowLeadingWildcard_async(const ::omero::api::AMD_Search_setAllowLeadingWildcardPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setAllowLeadingWildcard(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void isAllowLeadingWildcard_async(const ::omero::api::AMD_Search_isAllowLeadingWildcardPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isAllowLeadingWildcard(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void onlyType_async(const ::omero::api::AMD_Search_onlyTypePtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___onlyType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void onlyTypes_async(const ::omero::api::AMD_Search_onlyTypesPtr&, const ::omero::api::StringSet&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___onlyTypes(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void allTypes_async(const ::omero::api::AMD_Search_allTypesPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___allTypes(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void onlyIds_async(const ::omero::api::AMD_Search_onlyIdsPtr&, const ::omero::sys::LongList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___onlyIds(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void onlyOwnedBy_async(const ::omero::api::AMD_Search_onlyOwnedByPtr&, const ::omero::model::DetailsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___onlyOwnedBy(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void notOwnedBy_async(const ::omero::api::AMD_Search_notOwnedByPtr&, const ::omero::model::DetailsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___notOwnedBy(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void onlyCreatedBetween_async(const ::omero::api::AMD_Search_onlyCreatedBetweenPtr&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___onlyCreatedBetween(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void onlyModifiedBetween_async(const ::omero::api::AMD_Search_onlyModifiedBetweenPtr&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___onlyModifiedBetween(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void onlyAnnotatedBetween_async(const ::omero::api::AMD_Search_onlyAnnotatedBetweenPtr&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___onlyAnnotatedBetween(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void onlyAnnotatedBy_async(const ::omero::api::AMD_Search_onlyAnnotatedByPtr&, const ::omero::model::DetailsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___onlyAnnotatedBy(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void notAnnotatedBy_async(const ::omero::api::AMD_Search_notAnnotatedByPtr&, const ::omero::model::DetailsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___notAnnotatedBy(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void onlyAnnotatedWith_async(const ::omero::api::AMD_Search_onlyAnnotatedWithPtr&, const ::omero::api::StringSet&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___onlyAnnotatedWith(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addOrderByAsc_async(const ::omero::api::AMD_Search_addOrderByAscPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addOrderByAsc(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addOrderByDesc_async(const ::omero::api::AMD_Search_addOrderByDescPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addOrderByDesc(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unordered_async(const ::omero::api::AMD_Search_unorderedPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unordered(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void fetchAnnotations_async(const ::omero::api::AMD_Search_fetchAnnotationsPtr&, const ::omero::api::StringSet&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___fetchAnnotations(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void fetchAlso_async(const ::omero::api::AMD_Search_fetchAlsoPtr&, const ::omero::api::StringSet&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___fetchAlso(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void resetDefaults_async(const ::omero::api::AMD_Search_resetDefaultsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___resetDefaults(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void byGroupForTags_async(const ::omero::api::AMD_Search_byGroupForTagsPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___byGroupForTags(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void byTagForGroups_async(const ::omero::api::AMD_Search_byTagForGroupsPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___byTagForGroups(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void byFullText_async(const ::omero::api::AMD_Search_byFullTextPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___byFullText(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void byLuceneQueryBuilder_async(const ::omero::api::AMD_Search_byLuceneQueryBuilderPtr&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___byLuceneQueryBuilder(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void bySimilarTerms_async(const ::omero::api::AMD_Search_bySimilarTermsPtr&, const ::omero::api::StringSet&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___bySimilarTerms(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void byHqlQuery_async(const ::omero::api::AMD_Search_byHqlQueryPtr&, const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___byHqlQuery(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void bySomeMustNone_async(const ::omero::api::AMD_Search_bySomeMustNonePtr&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___bySomeMustNone(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void byAnnotatedWith_async(const ::omero::api::AMD_Search_byAnnotatedWithPtr&, const ::omero::api::AnnotationList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___byAnnotatedWith(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearQueries_async(const ::omero::api::AMD_Search_clearQueriesPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearQueries(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void and_async(const ::omero::api::AMD_Search_andPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___and(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void or_async(const ::omero::api::AMD_Search_orPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___or(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void not_async(const ::omero::api::AMD_Search_notPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___not(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void hasNext_async(const ::omero::api::AMD_Search_hasNextPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___hasNext(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void next_async(const ::omero::api::AMD_Search_nextPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___next(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void results_async(const ::omero::api::AMD_Search_resultsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___results(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void currentMetadata_async(const ::omero::api::AMD_Search_currentMetadataPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___currentMetadata(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void currentMetadataList_async(const ::omero::api::AMD_Search_currentMetadataListPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___currentMetadataList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void remove_async(const ::omero::api::AMD_Search_removePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___remove(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
