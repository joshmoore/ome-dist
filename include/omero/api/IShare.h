// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `IShare.ice'

#ifndef __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_IShare_h__
#define __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_IShare_h__

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

class IShare;

}

}

}

namespace omero
{

namespace api
{

class IShare;
bool operator==(const IShare&, const IShare&);
bool operator<(const IShare&, const IShare&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::api::IShare*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::IShare*);

}

namespace omero
{

namespace api
{

typedef ::IceInternal::Handle< ::omero::api::IShare> ISharePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::IShare> ISharePrx;

void __read(::IceInternal::BasicStream*, ISharePrx&);
void __patch__ISharePtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace api
{

class AMI_IShare_activate : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_activate> AMI_IShare_activatePtr;

class AMD_IShare_activate : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_activate> AMD_IShare_activatePtr;

class AMI_IShare_deactivate : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_deactivate> AMI_IShare_deactivatePtr;

class AMD_IShare_deactivate : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_deactivate> AMD_IShare_deactivatePtr;

class AMI_IShare_getShare : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::SharePtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_getShare> AMI_IShare_getSharePtr;

class AMD_IShare_getShare : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::SharePtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_getShare> AMD_IShare_getSharePtr;

class AMI_IShare_getMemberCount : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::sys::CountMap&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, const ::omero::sys::LongList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_getMemberCount> AMI_IShare_getMemberCountPtr;

class AMD_IShare_getMemberCount : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::sys::CountMap&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_getMemberCount> AMD_IShare_getMemberCountPtr;

class AMI_IShare_getOwnShares : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::SessionList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_getOwnShares> AMI_IShare_getOwnSharesPtr;

class AMD_IShare_getOwnShares : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::SessionList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_getOwnShares> AMD_IShare_getOwnSharesPtr;

class AMI_IShare_getMemberShares : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::SessionList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_getMemberShares> AMI_IShare_getMemberSharesPtr;

class AMD_IShare_getMemberShares : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::SessionList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_getMemberShares> AMD_IShare_getMemberSharesPtr;

class AMI_IShare_getSharesOwnedBy : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::SessionList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, const ::omero::model::ExperimenterPtr&, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_getSharesOwnedBy> AMI_IShare_getSharesOwnedByPtr;

class AMD_IShare_getSharesOwnedBy : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::SessionList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_getSharesOwnedBy> AMD_IShare_getSharesOwnedByPtr;

class AMI_IShare_getMemberSharesFor : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::SessionList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, const ::omero::model::ExperimenterPtr&, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_getMemberSharesFor> AMI_IShare_getMemberSharesForPtr;

class AMD_IShare_getMemberSharesFor : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::SessionList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_getMemberSharesFor> AMD_IShare_getMemberSharesForPtr;

class AMI_IShare_getContents : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_getContents> AMI_IShare_getContentsPtr;

class AMD_IShare_getContents : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_getContents> AMD_IShare_getContentsPtr;

class AMI_IShare_getContentSubList : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_getContentSubList> AMI_IShare_getContentSubListPtr;

class AMD_IShare_getContentSubList : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_getContentSubList> AMD_IShare_getContentSubListPtr;

class AMI_IShare_getContentSize : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_getContentSize> AMI_IShare_getContentSizePtr;

class AMD_IShare_getContentSize : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_getContentSize> AMD_IShare_getContentSizePtr;

class AMI_IShare_getContentMap : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IdListMap&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_getContentMap> AMI_IShare_getContentMapPtr;

class AMD_IShare_getContentMap : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IdListMap&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_getContentMap> AMD_IShare_getContentMapPtr;

class AMI_IShare_createShare : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, const ::std::string&, const ::omero::RTimePtr&, const ::omero::api::IObjectList&, const ::omero::api::ExperimenterList&, const ::omero::api::StringSet&, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_createShare> AMI_IShare_createSharePtr;

class AMD_IShare_createShare : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_createShare> AMD_IShare_createSharePtr;

class AMI_IShare_setDescription : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_setDescription> AMI_IShare_setDescriptionPtr;

class AMD_IShare_setDescription : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_setDescription> AMD_IShare_setDescriptionPtr;

class AMI_IShare_setExpiration : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, const ::omero::RTimePtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_setExpiration> AMI_IShare_setExpirationPtr;

class AMD_IShare_setExpiration : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_setExpiration> AMD_IShare_setExpirationPtr;

class AMI_IShare_setActive : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_setActive> AMI_IShare_setActivePtr;

class AMD_IShare_setActive : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_setActive> AMD_IShare_setActivePtr;

class AMI_IShare_closeShare : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_closeShare> AMI_IShare_closeSharePtr;

class AMD_IShare_closeShare : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_closeShare> AMD_IShare_closeSharePtr;

class AMI_IShare_addObjects : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, const ::omero::api::IObjectList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_addObjects> AMI_IShare_addObjectsPtr;

class AMD_IShare_addObjects : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_addObjects> AMD_IShare_addObjectsPtr;

class AMI_IShare_addObject : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, const ::omero::model::IObjectPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_addObject> AMI_IShare_addObjectPtr;

class AMD_IShare_addObject : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_addObject> AMD_IShare_addObjectPtr;

class AMI_IShare_removeObjects : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, const ::omero::api::IObjectList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_removeObjects> AMI_IShare_removeObjectsPtr;

class AMD_IShare_removeObjects : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_removeObjects> AMD_IShare_removeObjectsPtr;

class AMI_IShare_removeObject : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, const ::omero::model::IObjectPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_removeObject> AMI_IShare_removeObjectPtr;

class AMD_IShare_removeObject : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_removeObject> AMD_IShare_removeObjectPtr;

class AMI_IShare_getCommentCount : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::sys::CountMap&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, const ::omero::sys::LongList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_getCommentCount> AMI_IShare_getCommentCountPtr;

class AMD_IShare_getCommentCount : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::sys::CountMap&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_getCommentCount> AMD_IShare_getCommentCountPtr;

class AMI_IShare_getComments : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::AnnotationList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_getComments> AMI_IShare_getCommentsPtr;

class AMD_IShare_getComments : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::AnnotationList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_getComments> AMD_IShare_getCommentsPtr;

class AMI_IShare_addComment : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::TextAnnotationPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_addComment> AMI_IShare_addCommentPtr;

class AMD_IShare_addComment : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::TextAnnotationPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_addComment> AMD_IShare_addCommentPtr;

class AMI_IShare_addReply : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::TextAnnotationPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, const ::std::string&, const ::omero::model::TextAnnotationPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_addReply> AMI_IShare_addReplyPtr;

class AMD_IShare_addReply : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::TextAnnotationPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_addReply> AMD_IShare_addReplyPtr;

class AMI_IShare_deleteComment : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_deleteComment> AMI_IShare_deleteCommentPtr;

class AMD_IShare_deleteComment : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_deleteComment> AMD_IShare_deleteCommentPtr;

class AMI_IShare_getAllMembers : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::ExperimenterList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_getAllMembers> AMI_IShare_getAllMembersPtr;

class AMD_IShare_getAllMembers : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::ExperimenterList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_getAllMembers> AMD_IShare_getAllMembersPtr;

class AMI_IShare_getAllGuests : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::StringSet&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_getAllGuests> AMI_IShare_getAllGuestsPtr;

class AMD_IShare_getAllGuests : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::StringSet&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_getAllGuests> AMD_IShare_getAllGuestsPtr;

class AMI_IShare_getAllUsers : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::StringSet&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_getAllUsers> AMI_IShare_getAllUsersPtr;

class AMD_IShare_getAllUsers : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::StringSet&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_getAllUsers> AMD_IShare_getAllUsersPtr;

class AMI_IShare_addUsers : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, const ::omero::api::ExperimenterList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_addUsers> AMI_IShare_addUsersPtr;

class AMD_IShare_addUsers : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_addUsers> AMD_IShare_addUsersPtr;

class AMI_IShare_addGuests : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, const ::omero::api::StringSet&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_addGuests> AMI_IShare_addGuestsPtr;

class AMD_IShare_addGuests : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_addGuests> AMD_IShare_addGuestsPtr;

class AMI_IShare_removeUsers : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, const ::omero::api::ExperimenterList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_removeUsers> AMI_IShare_removeUsersPtr;

class AMD_IShare_removeUsers : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_removeUsers> AMD_IShare_removeUsersPtr;

class AMI_IShare_removeGuests : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, const ::omero::api::StringSet&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_removeGuests> AMI_IShare_removeGuestsPtr;

class AMD_IShare_removeGuests : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_removeGuests> AMD_IShare_removeGuestsPtr;

class AMI_IShare_addUser : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_addUser> AMI_IShare_addUserPtr;

class AMD_IShare_addUser : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_addUser> AMD_IShare_addUserPtr;

class AMI_IShare_addGuest : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_addGuest> AMI_IShare_addGuestPtr;

class AMD_IShare_addGuest : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_addGuest> AMD_IShare_addGuestPtr;

class AMI_IShare_removeUser : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_removeUser> AMI_IShare_removeUserPtr;

class AMD_IShare_removeUser : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_removeUser> AMD_IShare_removeUserPtr;

class AMI_IShare_removeGuest : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_removeGuest> AMI_IShare_removeGuestPtr;

class AMD_IShare_removeGuest : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_removeGuest> AMD_IShare_removeGuestPtr;

class AMI_IShare_getActiveConnections : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::UserMap&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_getActiveConnections> AMI_IShare_getActiveConnectionsPtr;

class AMD_IShare_getActiveConnections : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::UserMap&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_getActiveConnections> AMD_IShare_getActiveConnectionsPtr;

class AMI_IShare_getPastConnections : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::UserMap&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_getPastConnections> AMI_IShare_getPastConnectionsPtr;

class AMD_IShare_getPastConnections : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::UserMap&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_getPastConnections> AMD_IShare_getPastConnectionsPtr;

class AMI_IShare_invalidateConnection : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_invalidateConnection> AMI_IShare_invalidateConnectionPtr;

class AMD_IShare_invalidateConnection : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_invalidateConnection> AMD_IShare_invalidateConnectionPtr;

class AMI_IShare_getEvents : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ISharePrx&, ::Ice::Long, const ::omero::model::ExperimenterPtr&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IShare_getEvents> AMI_IShare_getEventsPtr;

class AMD_IShare_getEvents : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IShare_getEvents> AMD_IShare_getEventsPtr;

}

}

namespace IceAsync
{

namespace omero
{

namespace api
{

class AMD_IShare_activate : public ::omero::api::AMD_IShare_activate, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_activate(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_deactivate : public ::omero::api::AMD_IShare_deactivate, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_deactivate(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_getShare : public ::omero::api::AMD_IShare_getShare, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_getShare(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::SharePtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_getMemberCount : public ::omero::api::AMD_IShare_getMemberCount, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_getMemberCount(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::sys::CountMap&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_getOwnShares : public ::omero::api::AMD_IShare_getOwnShares, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_getOwnShares(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::SessionList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_getMemberShares : public ::omero::api::AMD_IShare_getMemberShares, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_getMemberShares(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::SessionList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_getSharesOwnedBy : public ::omero::api::AMD_IShare_getSharesOwnedBy, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_getSharesOwnedBy(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::SessionList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_getMemberSharesFor : public ::omero::api::AMD_IShare_getMemberSharesFor, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_getMemberSharesFor(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::SessionList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_getContents : public ::omero::api::AMD_IShare_getContents, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_getContents(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_getContentSubList : public ::omero::api::AMD_IShare_getContentSubList, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_getContentSubList(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_getContentSize : public ::omero::api::AMD_IShare_getContentSize, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_getContentSize(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_getContentMap : public ::omero::api::AMD_IShare_getContentMap, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_getContentMap(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IdListMap&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_createShare : public ::omero::api::AMD_IShare_createShare, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_createShare(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Long);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_setDescription : public ::omero::api::AMD_IShare_setDescription, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_setDescription(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_setExpiration : public ::omero::api::AMD_IShare_setExpiration, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_setExpiration(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_setActive : public ::omero::api::AMD_IShare_setActive, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_setActive(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_closeShare : public ::omero::api::AMD_IShare_closeShare, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_closeShare(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_addObjects : public ::omero::api::AMD_IShare_addObjects, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_addObjects(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_addObject : public ::omero::api::AMD_IShare_addObject, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_addObject(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_removeObjects : public ::omero::api::AMD_IShare_removeObjects, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_removeObjects(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_removeObject : public ::omero::api::AMD_IShare_removeObject, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_removeObject(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_getCommentCount : public ::omero::api::AMD_IShare_getCommentCount, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_getCommentCount(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::sys::CountMap&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_getComments : public ::omero::api::AMD_IShare_getComments, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_getComments(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::AnnotationList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_addComment : public ::omero::api::AMD_IShare_addComment, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_addComment(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::TextAnnotationPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_addReply : public ::omero::api::AMD_IShare_addReply, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_addReply(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::TextAnnotationPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_deleteComment : public ::omero::api::AMD_IShare_deleteComment, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_deleteComment(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_getAllMembers : public ::omero::api::AMD_IShare_getAllMembers, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_getAllMembers(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::ExperimenterList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_getAllGuests : public ::omero::api::AMD_IShare_getAllGuests, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_getAllGuests(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::StringSet&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_getAllUsers : public ::omero::api::AMD_IShare_getAllUsers, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_getAllUsers(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::StringSet&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_addUsers : public ::omero::api::AMD_IShare_addUsers, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_addUsers(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_addGuests : public ::omero::api::AMD_IShare_addGuests, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_addGuests(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_removeUsers : public ::omero::api::AMD_IShare_removeUsers, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_removeUsers(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_removeGuests : public ::omero::api::AMD_IShare_removeGuests, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_removeGuests(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_addUser : public ::omero::api::AMD_IShare_addUser, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_addUser(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_addGuest : public ::omero::api::AMD_IShare_addGuest, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_addGuest(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_removeUser : public ::omero::api::AMD_IShare_removeUser, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_removeUser(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_removeGuest : public ::omero::api::AMD_IShare_removeGuest, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_removeGuest(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_getActiveConnections : public ::omero::api::AMD_IShare_getActiveConnections, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_getActiveConnections(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::UserMap&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_getPastConnections : public ::omero::api::AMD_IShare_getPastConnections, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_getPastConnections(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::UserMap&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_invalidateConnection : public ::omero::api::AMD_IShare_invalidateConnection, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_invalidateConnection(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IShare_getEvents : public ::omero::api::AMD_IShare_getEvents, public ::IceInternal::IncomingAsync
{
public:

    AMD_IShare_getEvents(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectList&);
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

class IShare : virtual public ::IceProxy::omero::api::ServiceInterface
{
public:

    void activate(::Ice::Long shareId)
    {
        activate(shareId, 0);
    }
    void activate(::Ice::Long shareId, const ::Ice::Context& __ctx)
    {
        activate(shareId, &__ctx);
    }
    
private:

    void activate(::Ice::Long, const ::Ice::Context*);
    
public:
    bool activate_async(const ::omero::api::AMI_IShare_activatePtr&, ::Ice::Long);
    bool activate_async(const ::omero::api::AMI_IShare_activatePtr&, ::Ice::Long, const ::Ice::Context&);

    void deactivate()
    {
        deactivate(0);
    }
    void deactivate(const ::Ice::Context& __ctx)
    {
        deactivate(&__ctx);
    }
    
private:

    void deactivate(const ::Ice::Context*);
    
public:
    bool deactivate_async(const ::omero::api::AMI_IShare_deactivatePtr&);
    bool deactivate_async(const ::omero::api::AMI_IShare_deactivatePtr&, const ::Ice::Context&);

    ::omero::model::SharePtr getShare(::Ice::Long shareId)
    {
        return getShare(shareId, 0);
    }
    ::omero::model::SharePtr getShare(::Ice::Long shareId, const ::Ice::Context& __ctx)
    {
        return getShare(shareId, &__ctx);
    }
    
private:

    ::omero::model::SharePtr getShare(::Ice::Long, const ::Ice::Context*);
    
public:
    bool getShare_async(const ::omero::api::AMI_IShare_getSharePtr&, ::Ice::Long);
    bool getShare_async(const ::omero::api::AMI_IShare_getSharePtr&, ::Ice::Long, const ::Ice::Context&);

    ::omero::sys::CountMap getMemberCount(const ::omero::sys::LongList& shareIds)
    {
        return getMemberCount(shareIds, 0);
    }
    ::omero::sys::CountMap getMemberCount(const ::omero::sys::LongList& shareIds, const ::Ice::Context& __ctx)
    {
        return getMemberCount(shareIds, &__ctx);
    }
    
private:

    ::omero::sys::CountMap getMemberCount(const ::omero::sys::LongList&, const ::Ice::Context*);
    
public:
    bool getMemberCount_async(const ::omero::api::AMI_IShare_getMemberCountPtr&, const ::omero::sys::LongList&);
    bool getMemberCount_async(const ::omero::api::AMI_IShare_getMemberCountPtr&, const ::omero::sys::LongList&, const ::Ice::Context&);

    ::omero::api::SessionList getOwnShares(bool active)
    {
        return getOwnShares(active, 0);
    }
    ::omero::api::SessionList getOwnShares(bool active, const ::Ice::Context& __ctx)
    {
        return getOwnShares(active, &__ctx);
    }
    
private:

    ::omero::api::SessionList getOwnShares(bool, const ::Ice::Context*);
    
public:
    bool getOwnShares_async(const ::omero::api::AMI_IShare_getOwnSharesPtr&, bool);
    bool getOwnShares_async(const ::omero::api::AMI_IShare_getOwnSharesPtr&, bool, const ::Ice::Context&);

    ::omero::api::SessionList getMemberShares(bool active)
    {
        return getMemberShares(active, 0);
    }
    ::omero::api::SessionList getMemberShares(bool active, const ::Ice::Context& __ctx)
    {
        return getMemberShares(active, &__ctx);
    }
    
private:

    ::omero::api::SessionList getMemberShares(bool, const ::Ice::Context*);
    
public:
    bool getMemberShares_async(const ::omero::api::AMI_IShare_getMemberSharesPtr&, bool);
    bool getMemberShares_async(const ::omero::api::AMI_IShare_getMemberSharesPtr&, bool, const ::Ice::Context&);

    ::omero::api::SessionList getSharesOwnedBy(const ::omero::model::ExperimenterPtr& user, bool active)
    {
        return getSharesOwnedBy(user, active, 0);
    }
    ::omero::api::SessionList getSharesOwnedBy(const ::omero::model::ExperimenterPtr& user, bool active, const ::Ice::Context& __ctx)
    {
        return getSharesOwnedBy(user, active, &__ctx);
    }
    
private:

    ::omero::api::SessionList getSharesOwnedBy(const ::omero::model::ExperimenterPtr&, bool, const ::Ice::Context*);
    
public:
    bool getSharesOwnedBy_async(const ::omero::api::AMI_IShare_getSharesOwnedByPtr&, const ::omero::model::ExperimenterPtr&, bool);
    bool getSharesOwnedBy_async(const ::omero::api::AMI_IShare_getSharesOwnedByPtr&, const ::omero::model::ExperimenterPtr&, bool, const ::Ice::Context&);

    ::omero::api::SessionList getMemberSharesFor(const ::omero::model::ExperimenterPtr& user, bool active)
    {
        return getMemberSharesFor(user, active, 0);
    }
    ::omero::api::SessionList getMemberSharesFor(const ::omero::model::ExperimenterPtr& user, bool active, const ::Ice::Context& __ctx)
    {
        return getMemberSharesFor(user, active, &__ctx);
    }
    
private:

    ::omero::api::SessionList getMemberSharesFor(const ::omero::model::ExperimenterPtr&, bool, const ::Ice::Context*);
    
public:
    bool getMemberSharesFor_async(const ::omero::api::AMI_IShare_getMemberSharesForPtr&, const ::omero::model::ExperimenterPtr&, bool);
    bool getMemberSharesFor_async(const ::omero::api::AMI_IShare_getMemberSharesForPtr&, const ::omero::model::ExperimenterPtr&, bool, const ::Ice::Context&);

    ::omero::api::IObjectList getContents(::Ice::Long shareId)
    {
        return getContents(shareId, 0);
    }
    ::omero::api::IObjectList getContents(::Ice::Long shareId, const ::Ice::Context& __ctx)
    {
        return getContents(shareId, &__ctx);
    }
    
private:

    ::omero::api::IObjectList getContents(::Ice::Long, const ::Ice::Context*);
    
public:
    bool getContents_async(const ::omero::api::AMI_IShare_getContentsPtr&, ::Ice::Long);
    bool getContents_async(const ::omero::api::AMI_IShare_getContentsPtr&, ::Ice::Long, const ::Ice::Context&);

    ::omero::api::IObjectList getContentSubList(::Ice::Long shareId, ::Ice::Int start, ::Ice::Int finish)
    {
        return getContentSubList(shareId, start, finish, 0);
    }
    ::omero::api::IObjectList getContentSubList(::Ice::Long shareId, ::Ice::Int start, ::Ice::Int finish, const ::Ice::Context& __ctx)
    {
        return getContentSubList(shareId, start, finish, &__ctx);
    }
    
private:

    ::omero::api::IObjectList getContentSubList(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    bool getContentSubList_async(const ::omero::api::AMI_IShare_getContentSubListPtr&, ::Ice::Long, ::Ice::Int, ::Ice::Int);
    bool getContentSubList_async(const ::omero::api::AMI_IShare_getContentSubListPtr&, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context&);

    ::Ice::Int getContentSize(::Ice::Long shareId)
    {
        return getContentSize(shareId, 0);
    }
    ::Ice::Int getContentSize(::Ice::Long shareId, const ::Ice::Context& __ctx)
    {
        return getContentSize(shareId, &__ctx);
    }
    
private:

    ::Ice::Int getContentSize(::Ice::Long, const ::Ice::Context*);
    
public:
    bool getContentSize_async(const ::omero::api::AMI_IShare_getContentSizePtr&, ::Ice::Long);
    bool getContentSize_async(const ::omero::api::AMI_IShare_getContentSizePtr&, ::Ice::Long, const ::Ice::Context&);

    ::omero::api::IdListMap getContentMap(::Ice::Long shareId)
    {
        return getContentMap(shareId, 0);
    }
    ::omero::api::IdListMap getContentMap(::Ice::Long shareId, const ::Ice::Context& __ctx)
    {
        return getContentMap(shareId, &__ctx);
    }
    
private:

    ::omero::api::IdListMap getContentMap(::Ice::Long, const ::Ice::Context*);
    
public:
    bool getContentMap_async(const ::omero::api::AMI_IShare_getContentMapPtr&, ::Ice::Long);
    bool getContentMap_async(const ::omero::api::AMI_IShare_getContentMapPtr&, ::Ice::Long, const ::Ice::Context&);

    ::Ice::Long createShare(const ::std::string& description, const ::omero::RTimePtr& expiration, const ::omero::api::IObjectList& items, const ::omero::api::ExperimenterList& exps, const ::omero::api::StringSet& guests, bool enabled)
    {
        return createShare(description, expiration, items, exps, guests, enabled, 0);
    }
    ::Ice::Long createShare(const ::std::string& description, const ::omero::RTimePtr& expiration, const ::omero::api::IObjectList& items, const ::omero::api::ExperimenterList& exps, const ::omero::api::StringSet& guests, bool enabled, const ::Ice::Context& __ctx)
    {
        return createShare(description, expiration, items, exps, guests, enabled, &__ctx);
    }
    
private:

    ::Ice::Long createShare(const ::std::string&, const ::omero::RTimePtr&, const ::omero::api::IObjectList&, const ::omero::api::ExperimenterList&, const ::omero::api::StringSet&, bool, const ::Ice::Context*);
    
public:
    bool createShare_async(const ::omero::api::AMI_IShare_createSharePtr&, const ::std::string&, const ::omero::RTimePtr&, const ::omero::api::IObjectList&, const ::omero::api::ExperimenterList&, const ::omero::api::StringSet&, bool);
    bool createShare_async(const ::omero::api::AMI_IShare_createSharePtr&, const ::std::string&, const ::omero::RTimePtr&, const ::omero::api::IObjectList&, const ::omero::api::ExperimenterList&, const ::omero::api::StringSet&, bool, const ::Ice::Context&);

    void setDescription(::Ice::Long shareId, const ::std::string& description)
    {
        setDescription(shareId, description, 0);
    }
    void setDescription(::Ice::Long shareId, const ::std::string& description, const ::Ice::Context& __ctx)
    {
        setDescription(shareId, description, &__ctx);
    }
    
private:

    void setDescription(::Ice::Long, const ::std::string&, const ::Ice::Context*);
    
public:
    bool setDescription_async(const ::omero::api::AMI_IShare_setDescriptionPtr&, ::Ice::Long, const ::std::string&);
    bool setDescription_async(const ::omero::api::AMI_IShare_setDescriptionPtr&, ::Ice::Long, const ::std::string&, const ::Ice::Context&);

    void setExpiration(::Ice::Long shareId, const ::omero::RTimePtr& expiration)
    {
        setExpiration(shareId, expiration, 0);
    }
    void setExpiration(::Ice::Long shareId, const ::omero::RTimePtr& expiration, const ::Ice::Context& __ctx)
    {
        setExpiration(shareId, expiration, &__ctx);
    }
    
private:

    void setExpiration(::Ice::Long, const ::omero::RTimePtr&, const ::Ice::Context*);
    
public:
    bool setExpiration_async(const ::omero::api::AMI_IShare_setExpirationPtr&, ::Ice::Long, const ::omero::RTimePtr&);
    bool setExpiration_async(const ::omero::api::AMI_IShare_setExpirationPtr&, ::Ice::Long, const ::omero::RTimePtr&, const ::Ice::Context&);

    void setActive(::Ice::Long shareId, bool active)
    {
        setActive(shareId, active, 0);
    }
    void setActive(::Ice::Long shareId, bool active, const ::Ice::Context& __ctx)
    {
        setActive(shareId, active, &__ctx);
    }
    
private:

    void setActive(::Ice::Long, bool, const ::Ice::Context*);
    
public:
    bool setActive_async(const ::omero::api::AMI_IShare_setActivePtr&, ::Ice::Long, bool);
    bool setActive_async(const ::omero::api::AMI_IShare_setActivePtr&, ::Ice::Long, bool, const ::Ice::Context&);

    void closeShare(::Ice::Long shareId)
    {
        closeShare(shareId, 0);
    }
    void closeShare(::Ice::Long shareId, const ::Ice::Context& __ctx)
    {
        closeShare(shareId, &__ctx);
    }
    
private:

    void closeShare(::Ice::Long, const ::Ice::Context*);
    
public:
    bool closeShare_async(const ::omero::api::AMI_IShare_closeSharePtr&, ::Ice::Long);
    bool closeShare_async(const ::omero::api::AMI_IShare_closeSharePtr&, ::Ice::Long, const ::Ice::Context&);

    void addObjects(::Ice::Long shareId, const ::omero::api::IObjectList& iobjects)
    {
        addObjects(shareId, iobjects, 0);
    }
    void addObjects(::Ice::Long shareId, const ::omero::api::IObjectList& iobjects, const ::Ice::Context& __ctx)
    {
        addObjects(shareId, iobjects, &__ctx);
    }
    
private:

    void addObjects(::Ice::Long, const ::omero::api::IObjectList&, const ::Ice::Context*);
    
public:
    bool addObjects_async(const ::omero::api::AMI_IShare_addObjectsPtr&, ::Ice::Long, const ::omero::api::IObjectList&);
    bool addObjects_async(const ::omero::api::AMI_IShare_addObjectsPtr&, ::Ice::Long, const ::omero::api::IObjectList&, const ::Ice::Context&);

    void addObject(::Ice::Long shareId, const ::omero::model::IObjectPtr& iobject)
    {
        addObject(shareId, iobject, 0);
    }
    void addObject(::Ice::Long shareId, const ::omero::model::IObjectPtr& iobject, const ::Ice::Context& __ctx)
    {
        addObject(shareId, iobject, &__ctx);
    }
    
private:

    void addObject(::Ice::Long, const ::omero::model::IObjectPtr&, const ::Ice::Context*);
    
public:
    bool addObject_async(const ::omero::api::AMI_IShare_addObjectPtr&, ::Ice::Long, const ::omero::model::IObjectPtr&);
    bool addObject_async(const ::omero::api::AMI_IShare_addObjectPtr&, ::Ice::Long, const ::omero::model::IObjectPtr&, const ::Ice::Context&);

    void removeObjects(::Ice::Long shareId, const ::omero::api::IObjectList& iobjects)
    {
        removeObjects(shareId, iobjects, 0);
    }
    void removeObjects(::Ice::Long shareId, const ::omero::api::IObjectList& iobjects, const ::Ice::Context& __ctx)
    {
        removeObjects(shareId, iobjects, &__ctx);
    }
    
private:

    void removeObjects(::Ice::Long, const ::omero::api::IObjectList&, const ::Ice::Context*);
    
public:
    bool removeObjects_async(const ::omero::api::AMI_IShare_removeObjectsPtr&, ::Ice::Long, const ::omero::api::IObjectList&);
    bool removeObjects_async(const ::omero::api::AMI_IShare_removeObjectsPtr&, ::Ice::Long, const ::omero::api::IObjectList&, const ::Ice::Context&);

    void removeObject(::Ice::Long shareId, const ::omero::model::IObjectPtr& iobject)
    {
        removeObject(shareId, iobject, 0);
    }
    void removeObject(::Ice::Long shareId, const ::omero::model::IObjectPtr& iobject, const ::Ice::Context& __ctx)
    {
        removeObject(shareId, iobject, &__ctx);
    }
    
private:

    void removeObject(::Ice::Long, const ::omero::model::IObjectPtr&, const ::Ice::Context*);
    
public:
    bool removeObject_async(const ::omero::api::AMI_IShare_removeObjectPtr&, ::Ice::Long, const ::omero::model::IObjectPtr&);
    bool removeObject_async(const ::omero::api::AMI_IShare_removeObjectPtr&, ::Ice::Long, const ::omero::model::IObjectPtr&, const ::Ice::Context&);

    ::omero::sys::CountMap getCommentCount(const ::omero::sys::LongList& shareIds)
    {
        return getCommentCount(shareIds, 0);
    }
    ::omero::sys::CountMap getCommentCount(const ::omero::sys::LongList& shareIds, const ::Ice::Context& __ctx)
    {
        return getCommentCount(shareIds, &__ctx);
    }
    
private:

    ::omero::sys::CountMap getCommentCount(const ::omero::sys::LongList&, const ::Ice::Context*);
    
public:
    bool getCommentCount_async(const ::omero::api::AMI_IShare_getCommentCountPtr&, const ::omero::sys::LongList&);
    bool getCommentCount_async(const ::omero::api::AMI_IShare_getCommentCountPtr&, const ::omero::sys::LongList&, const ::Ice::Context&);

    ::omero::api::AnnotationList getComments(::Ice::Long shareId)
    {
        return getComments(shareId, 0);
    }
    ::omero::api::AnnotationList getComments(::Ice::Long shareId, const ::Ice::Context& __ctx)
    {
        return getComments(shareId, &__ctx);
    }
    
private:

    ::omero::api::AnnotationList getComments(::Ice::Long, const ::Ice::Context*);
    
public:
    bool getComments_async(const ::omero::api::AMI_IShare_getCommentsPtr&, ::Ice::Long);
    bool getComments_async(const ::omero::api::AMI_IShare_getCommentsPtr&, ::Ice::Long, const ::Ice::Context&);

    ::omero::model::TextAnnotationPtr addComment(::Ice::Long shareId, const ::std::string& comment)
    {
        return addComment(shareId, comment, 0);
    }
    ::omero::model::TextAnnotationPtr addComment(::Ice::Long shareId, const ::std::string& comment, const ::Ice::Context& __ctx)
    {
        return addComment(shareId, comment, &__ctx);
    }
    
private:

    ::omero::model::TextAnnotationPtr addComment(::Ice::Long, const ::std::string&, const ::Ice::Context*);
    
public:
    bool addComment_async(const ::omero::api::AMI_IShare_addCommentPtr&, ::Ice::Long, const ::std::string&);
    bool addComment_async(const ::omero::api::AMI_IShare_addCommentPtr&, ::Ice::Long, const ::std::string&, const ::Ice::Context&);

    ::omero::model::TextAnnotationPtr addReply(::Ice::Long shareId, const ::std::string& comment, const ::omero::model::TextAnnotationPtr& replyTo)
    {
        return addReply(shareId, comment, replyTo, 0);
    }
    ::omero::model::TextAnnotationPtr addReply(::Ice::Long shareId, const ::std::string& comment, const ::omero::model::TextAnnotationPtr& replyTo, const ::Ice::Context& __ctx)
    {
        return addReply(shareId, comment, replyTo, &__ctx);
    }
    
private:

    ::omero::model::TextAnnotationPtr addReply(::Ice::Long, const ::std::string&, const ::omero::model::TextAnnotationPtr&, const ::Ice::Context*);
    
public:
    bool addReply_async(const ::omero::api::AMI_IShare_addReplyPtr&, ::Ice::Long, const ::std::string&, const ::omero::model::TextAnnotationPtr&);
    bool addReply_async(const ::omero::api::AMI_IShare_addReplyPtr&, ::Ice::Long, const ::std::string&, const ::omero::model::TextAnnotationPtr&, const ::Ice::Context&);

    void deleteComment(const ::omero::model::AnnotationPtr& comment)
    {
        deleteComment(comment, 0);
    }
    void deleteComment(const ::omero::model::AnnotationPtr& comment, const ::Ice::Context& __ctx)
    {
        deleteComment(comment, &__ctx);
    }
    
private:

    void deleteComment(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
public:
    bool deleteComment_async(const ::omero::api::AMI_IShare_deleteCommentPtr&, const ::omero::model::AnnotationPtr&);
    bool deleteComment_async(const ::omero::api::AMI_IShare_deleteCommentPtr&, const ::omero::model::AnnotationPtr&, const ::Ice::Context&);

    ::omero::api::ExperimenterList getAllMembers(::Ice::Long shareId)
    {
        return getAllMembers(shareId, 0);
    }
    ::omero::api::ExperimenterList getAllMembers(::Ice::Long shareId, const ::Ice::Context& __ctx)
    {
        return getAllMembers(shareId, &__ctx);
    }
    
private:

    ::omero::api::ExperimenterList getAllMembers(::Ice::Long, const ::Ice::Context*);
    
public:
    bool getAllMembers_async(const ::omero::api::AMI_IShare_getAllMembersPtr&, ::Ice::Long);
    bool getAllMembers_async(const ::omero::api::AMI_IShare_getAllMembersPtr&, ::Ice::Long, const ::Ice::Context&);

    ::omero::api::StringSet getAllGuests(::Ice::Long shareId)
    {
        return getAllGuests(shareId, 0);
    }
    ::omero::api::StringSet getAllGuests(::Ice::Long shareId, const ::Ice::Context& __ctx)
    {
        return getAllGuests(shareId, &__ctx);
    }
    
private:

    ::omero::api::StringSet getAllGuests(::Ice::Long, const ::Ice::Context*);
    
public:
    bool getAllGuests_async(const ::omero::api::AMI_IShare_getAllGuestsPtr&, ::Ice::Long);
    bool getAllGuests_async(const ::omero::api::AMI_IShare_getAllGuestsPtr&, ::Ice::Long, const ::Ice::Context&);

    ::omero::api::StringSet getAllUsers(::Ice::Long shareId)
    {
        return getAllUsers(shareId, 0);
    }
    ::omero::api::StringSet getAllUsers(::Ice::Long shareId, const ::Ice::Context& __ctx)
    {
        return getAllUsers(shareId, &__ctx);
    }
    
private:

    ::omero::api::StringSet getAllUsers(::Ice::Long, const ::Ice::Context*);
    
public:
    bool getAllUsers_async(const ::omero::api::AMI_IShare_getAllUsersPtr&, ::Ice::Long);
    bool getAllUsers_async(const ::omero::api::AMI_IShare_getAllUsersPtr&, ::Ice::Long, const ::Ice::Context&);

    void addUsers(::Ice::Long shareId, const ::omero::api::ExperimenterList& exps)
    {
        addUsers(shareId, exps, 0);
    }
    void addUsers(::Ice::Long shareId, const ::omero::api::ExperimenterList& exps, const ::Ice::Context& __ctx)
    {
        addUsers(shareId, exps, &__ctx);
    }
    
private:

    void addUsers(::Ice::Long, const ::omero::api::ExperimenterList&, const ::Ice::Context*);
    
public:
    bool addUsers_async(const ::omero::api::AMI_IShare_addUsersPtr&, ::Ice::Long, const ::omero::api::ExperimenterList&);
    bool addUsers_async(const ::omero::api::AMI_IShare_addUsersPtr&, ::Ice::Long, const ::omero::api::ExperimenterList&, const ::Ice::Context&);

    void addGuests(::Ice::Long shareId, const ::omero::api::StringSet& emailAddresses)
    {
        addGuests(shareId, emailAddresses, 0);
    }
    void addGuests(::Ice::Long shareId, const ::omero::api::StringSet& emailAddresses, const ::Ice::Context& __ctx)
    {
        addGuests(shareId, emailAddresses, &__ctx);
    }
    
private:

    void addGuests(::Ice::Long, const ::omero::api::StringSet&, const ::Ice::Context*);
    
public:
    bool addGuests_async(const ::omero::api::AMI_IShare_addGuestsPtr&, ::Ice::Long, const ::omero::api::StringSet&);
    bool addGuests_async(const ::omero::api::AMI_IShare_addGuestsPtr&, ::Ice::Long, const ::omero::api::StringSet&, const ::Ice::Context&);

    void removeUsers(::Ice::Long shareId, const ::omero::api::ExperimenterList& exps)
    {
        removeUsers(shareId, exps, 0);
    }
    void removeUsers(::Ice::Long shareId, const ::omero::api::ExperimenterList& exps, const ::Ice::Context& __ctx)
    {
        removeUsers(shareId, exps, &__ctx);
    }
    
private:

    void removeUsers(::Ice::Long, const ::omero::api::ExperimenterList&, const ::Ice::Context*);
    
public:
    bool removeUsers_async(const ::omero::api::AMI_IShare_removeUsersPtr&, ::Ice::Long, const ::omero::api::ExperimenterList&);
    bool removeUsers_async(const ::omero::api::AMI_IShare_removeUsersPtr&, ::Ice::Long, const ::omero::api::ExperimenterList&, const ::Ice::Context&);

    void removeGuests(::Ice::Long shareId, const ::omero::api::StringSet& emailAddresses)
    {
        removeGuests(shareId, emailAddresses, 0);
    }
    void removeGuests(::Ice::Long shareId, const ::omero::api::StringSet& emailAddresses, const ::Ice::Context& __ctx)
    {
        removeGuests(shareId, emailAddresses, &__ctx);
    }
    
private:

    void removeGuests(::Ice::Long, const ::omero::api::StringSet&, const ::Ice::Context*);
    
public:
    bool removeGuests_async(const ::omero::api::AMI_IShare_removeGuestsPtr&, ::Ice::Long, const ::omero::api::StringSet&);
    bool removeGuests_async(const ::omero::api::AMI_IShare_removeGuestsPtr&, ::Ice::Long, const ::omero::api::StringSet&, const ::Ice::Context&);

    void addUser(::Ice::Long shareId, const ::omero::model::ExperimenterPtr& exp)
    {
        addUser(shareId, exp, 0);
    }
    void addUser(::Ice::Long shareId, const ::omero::model::ExperimenterPtr& exp, const ::Ice::Context& __ctx)
    {
        addUser(shareId, exp, &__ctx);
    }
    
private:

    void addUser(::Ice::Long, const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);
    
public:
    bool addUser_async(const ::omero::api::AMI_IShare_addUserPtr&, ::Ice::Long, const ::omero::model::ExperimenterPtr&);
    bool addUser_async(const ::omero::api::AMI_IShare_addUserPtr&, ::Ice::Long, const ::omero::model::ExperimenterPtr&, const ::Ice::Context&);

    void addGuest(::Ice::Long shareId, const ::std::string& emailAddress)
    {
        addGuest(shareId, emailAddress, 0);
    }
    void addGuest(::Ice::Long shareId, const ::std::string& emailAddress, const ::Ice::Context& __ctx)
    {
        addGuest(shareId, emailAddress, &__ctx);
    }
    
private:

    void addGuest(::Ice::Long, const ::std::string&, const ::Ice::Context*);
    
public:
    bool addGuest_async(const ::omero::api::AMI_IShare_addGuestPtr&, ::Ice::Long, const ::std::string&);
    bool addGuest_async(const ::omero::api::AMI_IShare_addGuestPtr&, ::Ice::Long, const ::std::string&, const ::Ice::Context&);

    void removeUser(::Ice::Long shareId, const ::omero::model::ExperimenterPtr& exp)
    {
        removeUser(shareId, exp, 0);
    }
    void removeUser(::Ice::Long shareId, const ::omero::model::ExperimenterPtr& exp, const ::Ice::Context& __ctx)
    {
        removeUser(shareId, exp, &__ctx);
    }
    
private:

    void removeUser(::Ice::Long, const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);
    
public:
    bool removeUser_async(const ::omero::api::AMI_IShare_removeUserPtr&, ::Ice::Long, const ::omero::model::ExperimenterPtr&);
    bool removeUser_async(const ::omero::api::AMI_IShare_removeUserPtr&, ::Ice::Long, const ::omero::model::ExperimenterPtr&, const ::Ice::Context&);

    void removeGuest(::Ice::Long shareId, const ::std::string& emailAddress)
    {
        removeGuest(shareId, emailAddress, 0);
    }
    void removeGuest(::Ice::Long shareId, const ::std::string& emailAddress, const ::Ice::Context& __ctx)
    {
        removeGuest(shareId, emailAddress, &__ctx);
    }
    
private:

    void removeGuest(::Ice::Long, const ::std::string&, const ::Ice::Context*);
    
public:
    bool removeGuest_async(const ::omero::api::AMI_IShare_removeGuestPtr&, ::Ice::Long, const ::std::string&);
    bool removeGuest_async(const ::omero::api::AMI_IShare_removeGuestPtr&, ::Ice::Long, const ::std::string&, const ::Ice::Context&);

    ::omero::api::UserMap getActiveConnections(::Ice::Long shareId)
    {
        return getActiveConnections(shareId, 0);
    }
    ::omero::api::UserMap getActiveConnections(::Ice::Long shareId, const ::Ice::Context& __ctx)
    {
        return getActiveConnections(shareId, &__ctx);
    }
    
private:

    ::omero::api::UserMap getActiveConnections(::Ice::Long, const ::Ice::Context*);
    
public:
    bool getActiveConnections_async(const ::omero::api::AMI_IShare_getActiveConnectionsPtr&, ::Ice::Long);
    bool getActiveConnections_async(const ::omero::api::AMI_IShare_getActiveConnectionsPtr&, ::Ice::Long, const ::Ice::Context&);

    ::omero::api::UserMap getPastConnections(::Ice::Long shareId)
    {
        return getPastConnections(shareId, 0);
    }
    ::omero::api::UserMap getPastConnections(::Ice::Long shareId, const ::Ice::Context& __ctx)
    {
        return getPastConnections(shareId, &__ctx);
    }
    
private:

    ::omero::api::UserMap getPastConnections(::Ice::Long, const ::Ice::Context*);
    
public:
    bool getPastConnections_async(const ::omero::api::AMI_IShare_getPastConnectionsPtr&, ::Ice::Long);
    bool getPastConnections_async(const ::omero::api::AMI_IShare_getPastConnectionsPtr&, ::Ice::Long, const ::Ice::Context&);

    void invalidateConnection(::Ice::Long shareId, const ::omero::model::ExperimenterPtr& exp)
    {
        invalidateConnection(shareId, exp, 0);
    }
    void invalidateConnection(::Ice::Long shareId, const ::omero::model::ExperimenterPtr& exp, const ::Ice::Context& __ctx)
    {
        invalidateConnection(shareId, exp, &__ctx);
    }
    
private:

    void invalidateConnection(::Ice::Long, const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);
    
public:
    bool invalidateConnection_async(const ::omero::api::AMI_IShare_invalidateConnectionPtr&, ::Ice::Long, const ::omero::model::ExperimenterPtr&);
    bool invalidateConnection_async(const ::omero::api::AMI_IShare_invalidateConnectionPtr&, ::Ice::Long, const ::omero::model::ExperimenterPtr&, const ::Ice::Context&);

    ::omero::api::IObjectList getEvents(::Ice::Long shareId, const ::omero::model::ExperimenterPtr& exp, const ::omero::RTimePtr& from, const ::omero::RTimePtr& to)
    {
        return getEvents(shareId, exp, from, to, 0);
    }
    ::omero::api::IObjectList getEvents(::Ice::Long shareId, const ::omero::model::ExperimenterPtr& exp, const ::omero::RTimePtr& from, const ::omero::RTimePtr& to, const ::Ice::Context& __ctx)
    {
        return getEvents(shareId, exp, from, to, &__ctx);
    }
    
private:

    ::omero::api::IObjectList getEvents(::Ice::Long, const ::omero::model::ExperimenterPtr&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::Ice::Context*);
    
public:
    bool getEvents_async(const ::omero::api::AMI_IShare_getEventsPtr&, ::Ice::Long, const ::omero::model::ExperimenterPtr&, const ::omero::RTimePtr&, const ::omero::RTimePtr&);
    bool getEvents_async(const ::omero::api::AMI_IShare_getEventsPtr&, ::Ice::Long, const ::omero::model::ExperimenterPtr&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<IShare> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IShare*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<IShare*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IShare> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IShare*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<IShare*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IShare> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IShare*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<IShare*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IShare> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IShare*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<IShare*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IShare> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IShare*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<IShare*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IShare> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IShare*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<IShare*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IShare> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IShare*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<IShare*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IShare> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IShare*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<IShare*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IShare> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IShare*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<IShare*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IShare> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IShare*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<IShare*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IShare> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IShare*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<IShare*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IShare> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IShare*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<IShare*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IShare> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IShare*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<IShare*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IShare> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IShare*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<IShare*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IShare> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IShare*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<IShare*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IShare> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IShare*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<IShare*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IShare> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IShare*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<IShare*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IShare> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IShare*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<IShare*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IShare> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IShare*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<IShare*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class IShare : virtual public ::IceDelegate::omero::api::ServiceInterface
{
public:

    virtual void activate(::Ice::Long, const ::Ice::Context*) = 0;

    virtual void deactivate(const ::Ice::Context*) = 0;

    virtual ::omero::model::SharePtr getShare(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getMemberCount(const ::omero::sys::LongList&, const ::Ice::Context*) = 0;

    virtual ::omero::api::SessionList getOwnShares(bool, const ::Ice::Context*) = 0;

    virtual ::omero::api::SessionList getMemberShares(bool, const ::Ice::Context*) = 0;

    virtual ::omero::api::SessionList getSharesOwnedBy(const ::omero::model::ExperimenterPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::api::SessionList getMemberSharesFor(const ::omero::model::ExperimenterPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::api::IObjectList getContents(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::api::IObjectList getContentSubList(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getContentSize(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::api::IdListMap getContentMap(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::Ice::Long createShare(const ::std::string&, const ::omero::RTimePtr&, const ::omero::api::IObjectList&, const ::omero::api::ExperimenterList&, const ::omero::api::StringSet&, bool, const ::Ice::Context*) = 0;

    virtual void setDescription(::Ice::Long, const ::std::string&, const ::Ice::Context*) = 0;

    virtual void setExpiration(::Ice::Long, const ::omero::RTimePtr&, const ::Ice::Context*) = 0;

    virtual void setActive(::Ice::Long, bool, const ::Ice::Context*) = 0;

    virtual void closeShare(::Ice::Long, const ::Ice::Context*) = 0;

    virtual void addObjects(::Ice::Long, const ::omero::api::IObjectList&, const ::Ice::Context*) = 0;

    virtual void addObject(::Ice::Long, const ::omero::model::IObjectPtr&, const ::Ice::Context*) = 0;

    virtual void removeObjects(::Ice::Long, const ::omero::api::IObjectList&, const ::Ice::Context*) = 0;

    virtual void removeObject(::Ice::Long, const ::omero::model::IObjectPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getCommentCount(const ::omero::sys::LongList&, const ::Ice::Context*) = 0;

    virtual ::omero::api::AnnotationList getComments(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::model::TextAnnotationPtr addComment(::Ice::Long, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::model::TextAnnotationPtr addReply(::Ice::Long, const ::std::string&, const ::omero::model::TextAnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void deleteComment(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::ExperimenterList getAllMembers(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::api::StringSet getAllGuests(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::api::StringSet getAllUsers(::Ice::Long, const ::Ice::Context*) = 0;

    virtual void addUsers(::Ice::Long, const ::omero::api::ExperimenterList&, const ::Ice::Context*) = 0;

    virtual void addGuests(::Ice::Long, const ::omero::api::StringSet&, const ::Ice::Context*) = 0;

    virtual void removeUsers(::Ice::Long, const ::omero::api::ExperimenterList&, const ::Ice::Context*) = 0;

    virtual void removeGuests(::Ice::Long, const ::omero::api::StringSet&, const ::Ice::Context*) = 0;

    virtual void addUser(::Ice::Long, const ::omero::model::ExperimenterPtr&, const ::Ice::Context*) = 0;

    virtual void addGuest(::Ice::Long, const ::std::string&, const ::Ice::Context*) = 0;

    virtual void removeUser(::Ice::Long, const ::omero::model::ExperimenterPtr&, const ::Ice::Context*) = 0;

    virtual void removeGuest(::Ice::Long, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::api::UserMap getActiveConnections(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::api::UserMap getPastConnections(::Ice::Long, const ::Ice::Context*) = 0;

    virtual void invalidateConnection(::Ice::Long, const ::omero::model::ExperimenterPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::IObjectList getEvents(::Ice::Long, const ::omero::model::ExperimenterPtr&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::Ice::Context*) = 0;
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

class IShare : virtual public ::IceDelegate::omero::api::IShare,
               virtual public ::IceDelegateM::omero::api::ServiceInterface
{
public:

    virtual void activate(::Ice::Long, const ::Ice::Context*);

    virtual void deactivate(const ::Ice::Context*);

    virtual ::omero::model::SharePtr getShare(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getMemberCount(const ::omero::sys::LongList&, const ::Ice::Context*);

    virtual ::omero::api::SessionList getOwnShares(bool, const ::Ice::Context*);

    virtual ::omero::api::SessionList getMemberShares(bool, const ::Ice::Context*);

    virtual ::omero::api::SessionList getSharesOwnedBy(const ::omero::model::ExperimenterPtr&, bool, const ::Ice::Context*);

    virtual ::omero::api::SessionList getMemberSharesFor(const ::omero::model::ExperimenterPtr&, bool, const ::Ice::Context*);

    virtual ::omero::api::IObjectList getContents(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::IObjectList getContentSubList(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int getContentSize(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::IdListMap getContentMap(::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::Long createShare(const ::std::string&, const ::omero::RTimePtr&, const ::omero::api::IObjectList&, const ::omero::api::ExperimenterList&, const ::omero::api::StringSet&, bool, const ::Ice::Context*);

    virtual void setDescription(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual void setExpiration(::Ice::Long, const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual void setActive(::Ice::Long, bool, const ::Ice::Context*);

    virtual void closeShare(::Ice::Long, const ::Ice::Context*);

    virtual void addObjects(::Ice::Long, const ::omero::api::IObjectList&, const ::Ice::Context*);

    virtual void addObject(::Ice::Long, const ::omero::model::IObjectPtr&, const ::Ice::Context*);

    virtual void removeObjects(::Ice::Long, const ::omero::api::IObjectList&, const ::Ice::Context*);

    virtual void removeObject(::Ice::Long, const ::omero::model::IObjectPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getCommentCount(const ::omero::sys::LongList&, const ::Ice::Context*);

    virtual ::omero::api::AnnotationList getComments(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::model::TextAnnotationPtr addComment(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::model::TextAnnotationPtr addReply(::Ice::Long, const ::std::string&, const ::omero::model::TextAnnotationPtr&, const ::Ice::Context*);

    virtual void deleteComment(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual ::omero::api::ExperimenterList getAllMembers(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::StringSet getAllGuests(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::StringSet getAllUsers(::Ice::Long, const ::Ice::Context*);

    virtual void addUsers(::Ice::Long, const ::omero::api::ExperimenterList&, const ::Ice::Context*);

    virtual void addGuests(::Ice::Long, const ::omero::api::StringSet&, const ::Ice::Context*);

    virtual void removeUsers(::Ice::Long, const ::omero::api::ExperimenterList&, const ::Ice::Context*);

    virtual void removeGuests(::Ice::Long, const ::omero::api::StringSet&, const ::Ice::Context*);

    virtual void addUser(::Ice::Long, const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual void addGuest(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual void removeUser(::Ice::Long, const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual void removeGuest(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::UserMap getActiveConnections(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::UserMap getPastConnections(::Ice::Long, const ::Ice::Context*);

    virtual void invalidateConnection(::Ice::Long, const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList getEvents(::Ice::Long, const ::omero::model::ExperimenterPtr&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::Ice::Context*);
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

class IShare : virtual public ::IceDelegate::omero::api::IShare,
               virtual public ::IceDelegateD::omero::api::ServiceInterface
{
public:

    virtual void activate(::Ice::Long, const ::Ice::Context*);

    virtual void deactivate(const ::Ice::Context*);

    virtual ::omero::model::SharePtr getShare(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getMemberCount(const ::omero::sys::LongList&, const ::Ice::Context*);

    virtual ::omero::api::SessionList getOwnShares(bool, const ::Ice::Context*);

    virtual ::omero::api::SessionList getMemberShares(bool, const ::Ice::Context*);

    virtual ::omero::api::SessionList getSharesOwnedBy(const ::omero::model::ExperimenterPtr&, bool, const ::Ice::Context*);

    virtual ::omero::api::SessionList getMemberSharesFor(const ::omero::model::ExperimenterPtr&, bool, const ::Ice::Context*);

    virtual ::omero::api::IObjectList getContents(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::IObjectList getContentSubList(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int getContentSize(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::IdListMap getContentMap(::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::Long createShare(const ::std::string&, const ::omero::RTimePtr&, const ::omero::api::IObjectList&, const ::omero::api::ExperimenterList&, const ::omero::api::StringSet&, bool, const ::Ice::Context*);

    virtual void setDescription(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual void setExpiration(::Ice::Long, const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual void setActive(::Ice::Long, bool, const ::Ice::Context*);

    virtual void closeShare(::Ice::Long, const ::Ice::Context*);

    virtual void addObjects(::Ice::Long, const ::omero::api::IObjectList&, const ::Ice::Context*);

    virtual void addObject(::Ice::Long, const ::omero::model::IObjectPtr&, const ::Ice::Context*);

    virtual void removeObjects(::Ice::Long, const ::omero::api::IObjectList&, const ::Ice::Context*);

    virtual void removeObject(::Ice::Long, const ::omero::model::IObjectPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getCommentCount(const ::omero::sys::LongList&, const ::Ice::Context*);

    virtual ::omero::api::AnnotationList getComments(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::model::TextAnnotationPtr addComment(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::model::TextAnnotationPtr addReply(::Ice::Long, const ::std::string&, const ::omero::model::TextAnnotationPtr&, const ::Ice::Context*);

    virtual void deleteComment(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual ::omero::api::ExperimenterList getAllMembers(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::StringSet getAllGuests(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::StringSet getAllUsers(::Ice::Long, const ::Ice::Context*);

    virtual void addUsers(::Ice::Long, const ::omero::api::ExperimenterList&, const ::Ice::Context*);

    virtual void addGuests(::Ice::Long, const ::omero::api::StringSet&, const ::Ice::Context*);

    virtual void removeUsers(::Ice::Long, const ::omero::api::ExperimenterList&, const ::Ice::Context*);

    virtual void removeGuests(::Ice::Long, const ::omero::api::StringSet&, const ::Ice::Context*);

    virtual void addUser(::Ice::Long, const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual void addGuest(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual void removeUser(::Ice::Long, const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual void removeGuest(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::UserMap getActiveConnections(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::UserMap getPastConnections(::Ice::Long, const ::Ice::Context*);

    virtual void invalidateConnection(::Ice::Long, const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList getEvents(::Ice::Long, const ::omero::model::ExperimenterPtr&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace api
{

class IShare : virtual public ::omero::api::ServiceInterface
{
public:

    typedef ISharePrx ProxyType;
    typedef ISharePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void activate_async(const ::omero::api::AMD_IShare_activatePtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___activate(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void deactivate_async(const ::omero::api::AMD_IShare_deactivatePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___deactivate(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getShare_async(const ::omero::api::AMD_IShare_getSharePtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getShare(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getMemberCount_async(const ::omero::api::AMD_IShare_getMemberCountPtr&, const ::omero::sys::LongList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMemberCount(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getOwnShares_async(const ::omero::api::AMD_IShare_getOwnSharesPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getOwnShares(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getMemberShares_async(const ::omero::api::AMD_IShare_getMemberSharesPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMemberShares(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getSharesOwnedBy_async(const ::omero::api::AMD_IShare_getSharesOwnedByPtr&, const ::omero::model::ExperimenterPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getSharesOwnedBy(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getMemberSharesFor_async(const ::omero::api::AMD_IShare_getMemberSharesForPtr&, const ::omero::model::ExperimenterPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMemberSharesFor(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getContents_async(const ::omero::api::AMD_IShare_getContentsPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getContents(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getContentSubList_async(const ::omero::api::AMD_IShare_getContentSubListPtr&, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getContentSubList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getContentSize_async(const ::omero::api::AMD_IShare_getContentSizePtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getContentSize(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getContentMap_async(const ::omero::api::AMD_IShare_getContentMapPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getContentMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void createShare_async(const ::omero::api::AMD_IShare_createSharePtr&, const ::std::string&, const ::omero::RTimePtr&, const ::omero::api::IObjectList&, const ::omero::api::ExperimenterList&, const ::omero::api::StringSet&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createShare(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setDescription_async(const ::omero::api::AMD_IShare_setDescriptionPtr&, ::Ice::Long, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setDescription(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setExpiration_async(const ::omero::api::AMD_IShare_setExpirationPtr&, ::Ice::Long, const ::omero::RTimePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setExpiration(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setActive_async(const ::omero::api::AMD_IShare_setActivePtr&, ::Ice::Long, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setActive(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void closeShare_async(const ::omero::api::AMD_IShare_closeSharePtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___closeShare(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addObjects_async(const ::omero::api::AMD_IShare_addObjectsPtr&, ::Ice::Long, const ::omero::api::IObjectList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addObjects(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addObject_async(const ::omero::api::AMD_IShare_addObjectPtr&, ::Ice::Long, const ::omero::model::IObjectPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addObject(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeObjects_async(const ::omero::api::AMD_IShare_removeObjectsPtr&, ::Ice::Long, const ::omero::api::IObjectList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeObjects(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeObject_async(const ::omero::api::AMD_IShare_removeObjectPtr&, ::Ice::Long, const ::omero::model::IObjectPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeObject(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getCommentCount_async(const ::omero::api::AMD_IShare_getCommentCountPtr&, const ::omero::sys::LongList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getCommentCount(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getComments_async(const ::omero::api::AMD_IShare_getCommentsPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getComments(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addComment_async(const ::omero::api::AMD_IShare_addCommentPtr&, ::Ice::Long, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addComment(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addReply_async(const ::omero::api::AMD_IShare_addReplyPtr&, ::Ice::Long, const ::std::string&, const ::omero::model::TextAnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addReply(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void deleteComment_async(const ::omero::api::AMD_IShare_deleteCommentPtr&, const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___deleteComment(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getAllMembers_async(const ::omero::api::AMD_IShare_getAllMembersPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAllMembers(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getAllGuests_async(const ::omero::api::AMD_IShare_getAllGuestsPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAllGuests(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getAllUsers_async(const ::omero::api::AMD_IShare_getAllUsersPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAllUsers(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addUsers_async(const ::omero::api::AMD_IShare_addUsersPtr&, ::Ice::Long, const ::omero::api::ExperimenterList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addUsers(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addGuests_async(const ::omero::api::AMD_IShare_addGuestsPtr&, ::Ice::Long, const ::omero::api::StringSet&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addGuests(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeUsers_async(const ::omero::api::AMD_IShare_removeUsersPtr&, ::Ice::Long, const ::omero::api::ExperimenterList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeUsers(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeGuests_async(const ::omero::api::AMD_IShare_removeGuestsPtr&, ::Ice::Long, const ::omero::api::StringSet&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeGuests(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addUser_async(const ::omero::api::AMD_IShare_addUserPtr&, ::Ice::Long, const ::omero::model::ExperimenterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addGuest_async(const ::omero::api::AMD_IShare_addGuestPtr&, ::Ice::Long, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addGuest(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeUser_async(const ::omero::api::AMD_IShare_removeUserPtr&, ::Ice::Long, const ::omero::model::ExperimenterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeGuest_async(const ::omero::api::AMD_IShare_removeGuestPtr&, ::Ice::Long, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeGuest(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getActiveConnections_async(const ::omero::api::AMD_IShare_getActiveConnectionsPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getActiveConnections(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getPastConnections_async(const ::omero::api::AMD_IShare_getPastConnectionsPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPastConnections(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void invalidateConnection_async(const ::omero::api::AMD_IShare_invalidateConnectionPtr&, ::Ice::Long, const ::omero::model::ExperimenterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___invalidateConnection(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getEvents_async(const ::omero::api::AMD_IShare_getEventsPtr&, ::Ice::Long, const ::omero::model::ExperimenterPtr&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getEvents(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
