// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `ThumbnailStore.ice'

#ifndef __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_ThumbnailStore_h__
#define __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_ThumbnailStore_h__

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

class ThumbnailStore;

}

}

}

namespace omero
{

namespace api
{

class ThumbnailStore;
bool operator==(const ThumbnailStore&, const ThumbnailStore&);
bool operator<(const ThumbnailStore&, const ThumbnailStore&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::api::ThumbnailStore*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::ThumbnailStore*);

}

namespace omero
{

namespace api
{

typedef ::IceInternal::Handle< ::omero::api::ThumbnailStore> ThumbnailStorePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::ThumbnailStore> ThumbnailStorePrx;

void __read(::IceInternal::BasicStream*, ThumbnailStorePrx&);
void __patch__ThumbnailStorePtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace api
{

class AMI_ThumbnailStore_setPixelsId : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ThumbnailStorePrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ThumbnailStore_setPixelsId> AMI_ThumbnailStore_setPixelsIdPtr;

class AMD_ThumbnailStore_setPixelsId : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ThumbnailStore_setPixelsId> AMD_ThumbnailStore_setPixelsIdPtr;

class AMI_ThumbnailStore_isInProgress : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ThumbnailStorePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ThumbnailStore_isInProgress> AMI_ThumbnailStore_isInProgressPtr;

class AMD_ThumbnailStore_isInProgress : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ThumbnailStore_isInProgress> AMD_ThumbnailStore_isInProgressPtr;

class AMI_ThumbnailStore_setRenderingDefId : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ThumbnailStorePrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ThumbnailStore_setRenderingDefId> AMI_ThumbnailStore_setRenderingDefIdPtr;

class AMD_ThumbnailStore_setRenderingDefId : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ThumbnailStore_setRenderingDefId> AMD_ThumbnailStore_setRenderingDefIdPtr;

class AMI_ThumbnailStore_getRenderingDefId : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ThumbnailStorePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ThumbnailStore_getRenderingDefId> AMI_ThumbnailStore_getRenderingDefIdPtr;

class AMD_ThumbnailStore_getRenderingDefId : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ThumbnailStore_getRenderingDefId> AMD_ThumbnailStore_getRenderingDefIdPtr;

class AMI_ThumbnailStore_getThumbnail : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ThumbnailStorePrx&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ThumbnailStore_getThumbnail> AMI_ThumbnailStore_getThumbnailPtr;

class AMD_ThumbnailStore_getThumbnail : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ThumbnailStore_getThumbnail> AMD_ThumbnailStore_getThumbnailPtr;

class AMI_ThumbnailStore_getThumbnailSet : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::sys::IdByteMap&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ThumbnailStorePrx&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::sys::LongList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ThumbnailStore_getThumbnailSet> AMI_ThumbnailStore_getThumbnailSetPtr;

class AMD_ThumbnailStore_getThumbnailSet : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::sys::IdByteMap&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ThumbnailStore_getThumbnailSet> AMD_ThumbnailStore_getThumbnailSetPtr;

class AMI_ThumbnailStore_getThumbnailByLongestSideSet : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::sys::IdByteMap&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ThumbnailStorePrx&, const ::omero::RIntPtr&, const ::omero::sys::LongList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ThumbnailStore_getThumbnailByLongestSideSet> AMI_ThumbnailStore_getThumbnailByLongestSideSetPtr;

class AMD_ThumbnailStore_getThumbnailByLongestSideSet : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::sys::IdByteMap&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ThumbnailStore_getThumbnailByLongestSideSet> AMD_ThumbnailStore_getThumbnailByLongestSideSetPtr;

class AMI_ThumbnailStore_getThumbnailByLongestSide : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ThumbnailStorePrx&, const ::omero::RIntPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ThumbnailStore_getThumbnailByLongestSide> AMI_ThumbnailStore_getThumbnailByLongestSidePtr;

class AMD_ThumbnailStore_getThumbnailByLongestSide : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ThumbnailStore_getThumbnailByLongestSide> AMD_ThumbnailStore_getThumbnailByLongestSidePtr;

class AMI_ThumbnailStore_getThumbnailByLongestSideDirect : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ThumbnailStorePrx&, const ::omero::RIntPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ThumbnailStore_getThumbnailByLongestSideDirect> AMI_ThumbnailStore_getThumbnailByLongestSideDirectPtr;

class AMD_ThumbnailStore_getThumbnailByLongestSideDirect : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ThumbnailStore_getThumbnailByLongestSideDirect> AMD_ThumbnailStore_getThumbnailByLongestSideDirectPtr;

class AMI_ThumbnailStore_getThumbnailDirect : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ThumbnailStorePrx&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ThumbnailStore_getThumbnailDirect> AMI_ThumbnailStore_getThumbnailDirectPtr;

class AMD_ThumbnailStore_getThumbnailDirect : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ThumbnailStore_getThumbnailDirect> AMD_ThumbnailStore_getThumbnailDirectPtr;

class AMI_ThumbnailStore_getThumbnailForSectionDirect : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ThumbnailStorePrx&, ::Ice::Int, ::Ice::Int, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ThumbnailStore_getThumbnailForSectionDirect> AMI_ThumbnailStore_getThumbnailForSectionDirectPtr;

class AMD_ThumbnailStore_getThumbnailForSectionDirect : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ThumbnailStore_getThumbnailForSectionDirect> AMD_ThumbnailStore_getThumbnailForSectionDirectPtr;

class AMI_ThumbnailStore_getThumbnailForSectionByLongestSideDirect : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ThumbnailStorePrx&, ::Ice::Int, ::Ice::Int, const ::omero::RIntPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ThumbnailStore_getThumbnailForSectionByLongestSideDirect> AMI_ThumbnailStore_getThumbnailForSectionByLongestSideDirectPtr;

class AMD_ThumbnailStore_getThumbnailForSectionByLongestSideDirect : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ThumbnailStore_getThumbnailForSectionByLongestSideDirect> AMD_ThumbnailStore_getThumbnailForSectionByLongestSideDirectPtr;

class AMI_ThumbnailStore_createThumbnails : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ThumbnailStorePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ThumbnailStore_createThumbnails> AMI_ThumbnailStore_createThumbnailsPtr;

class AMD_ThumbnailStore_createThumbnails : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ThumbnailStore_createThumbnails> AMD_ThumbnailStore_createThumbnailsPtr;

class AMI_ThumbnailStore_createThumbnail : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ThumbnailStorePrx&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ThumbnailStore_createThumbnail> AMI_ThumbnailStore_createThumbnailPtr;

class AMD_ThumbnailStore_createThumbnail : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ThumbnailStore_createThumbnail> AMD_ThumbnailStore_createThumbnailPtr;

class AMI_ThumbnailStore_createThumbnailsByLongestSideSet : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ThumbnailStorePrx&, const ::omero::RIntPtr&, const ::omero::sys::LongList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ThumbnailStore_createThumbnailsByLongestSideSet> AMI_ThumbnailStore_createThumbnailsByLongestSideSetPtr;

class AMD_ThumbnailStore_createThumbnailsByLongestSideSet : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ThumbnailStore_createThumbnailsByLongestSideSet> AMD_ThumbnailStore_createThumbnailsByLongestSideSetPtr;

class AMI_ThumbnailStore_thumbnailExists : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ThumbnailStorePrx&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ThumbnailStore_thumbnailExists> AMI_ThumbnailStore_thumbnailExistsPtr;

class AMD_ThumbnailStore_thumbnailExists : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ThumbnailStore_thumbnailExists> AMD_ThumbnailStore_thumbnailExistsPtr;

class AMI_ThumbnailStore_resetDefaults : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::ThumbnailStorePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_ThumbnailStore_resetDefaults> AMI_ThumbnailStore_resetDefaultsPtr;

class AMD_ThumbnailStore_resetDefaults : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_ThumbnailStore_resetDefaults> AMD_ThumbnailStore_resetDefaultsPtr;

}

}

namespace IceAsync
{

namespace omero
{

namespace api
{

class AMD_ThumbnailStore_setPixelsId : public ::omero::api::AMD_ThumbnailStore_setPixelsId, public ::IceInternal::IncomingAsync
{
public:

    AMD_ThumbnailStore_setPixelsId(::IceInternal::Incoming&);

    virtual void ice_response(bool);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ThumbnailStore_isInProgress : public ::omero::api::AMD_ThumbnailStore_isInProgress, public ::IceInternal::IncomingAsync
{
public:

    AMD_ThumbnailStore_isInProgress(::IceInternal::Incoming&);

    virtual void ice_response(bool);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ThumbnailStore_setRenderingDefId : public ::omero::api::AMD_ThumbnailStore_setRenderingDefId, public ::IceInternal::IncomingAsync
{
public:

    AMD_ThumbnailStore_setRenderingDefId(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ThumbnailStore_getRenderingDefId : public ::omero::api::AMD_ThumbnailStore_getRenderingDefId, public ::IceInternal::IncomingAsync
{
public:

    AMD_ThumbnailStore_getRenderingDefId(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Long);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ThumbnailStore_getThumbnail : public ::omero::api::AMD_ThumbnailStore_getThumbnail, public ::IceInternal::IncomingAsync
{
public:

    AMD_ThumbnailStore_getThumbnail(::IceInternal::Incoming&);

    virtual void ice_response(const ::Ice::ByteSeq&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ThumbnailStore_getThumbnailSet : public ::omero::api::AMD_ThumbnailStore_getThumbnailSet, public ::IceInternal::IncomingAsync
{
public:

    AMD_ThumbnailStore_getThumbnailSet(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::sys::IdByteMap&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ThumbnailStore_getThumbnailByLongestSideSet : public ::omero::api::AMD_ThumbnailStore_getThumbnailByLongestSideSet, public ::IceInternal::IncomingAsync
{
public:

    AMD_ThumbnailStore_getThumbnailByLongestSideSet(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::sys::IdByteMap&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ThumbnailStore_getThumbnailByLongestSide : public ::omero::api::AMD_ThumbnailStore_getThumbnailByLongestSide, public ::IceInternal::IncomingAsync
{
public:

    AMD_ThumbnailStore_getThumbnailByLongestSide(::IceInternal::Incoming&);

    virtual void ice_response(const ::Ice::ByteSeq&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ThumbnailStore_getThumbnailByLongestSideDirect : public ::omero::api::AMD_ThumbnailStore_getThumbnailByLongestSideDirect, public ::IceInternal::IncomingAsync
{
public:

    AMD_ThumbnailStore_getThumbnailByLongestSideDirect(::IceInternal::Incoming&);

    virtual void ice_response(const ::Ice::ByteSeq&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ThumbnailStore_getThumbnailDirect : public ::omero::api::AMD_ThumbnailStore_getThumbnailDirect, public ::IceInternal::IncomingAsync
{
public:

    AMD_ThumbnailStore_getThumbnailDirect(::IceInternal::Incoming&);

    virtual void ice_response(const ::Ice::ByteSeq&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ThumbnailStore_getThumbnailForSectionDirect : public ::omero::api::AMD_ThumbnailStore_getThumbnailForSectionDirect, public ::IceInternal::IncomingAsync
{
public:

    AMD_ThumbnailStore_getThumbnailForSectionDirect(::IceInternal::Incoming&);

    virtual void ice_response(const ::Ice::ByteSeq&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ThumbnailStore_getThumbnailForSectionByLongestSideDirect : public ::omero::api::AMD_ThumbnailStore_getThumbnailForSectionByLongestSideDirect, public ::IceInternal::IncomingAsync
{
public:

    AMD_ThumbnailStore_getThumbnailForSectionByLongestSideDirect(::IceInternal::Incoming&);

    virtual void ice_response(const ::Ice::ByteSeq&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ThumbnailStore_createThumbnails : public ::omero::api::AMD_ThumbnailStore_createThumbnails, public ::IceInternal::IncomingAsync
{
public:

    AMD_ThumbnailStore_createThumbnails(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ThumbnailStore_createThumbnail : public ::omero::api::AMD_ThumbnailStore_createThumbnail, public ::IceInternal::IncomingAsync
{
public:

    AMD_ThumbnailStore_createThumbnail(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ThumbnailStore_createThumbnailsByLongestSideSet : public ::omero::api::AMD_ThumbnailStore_createThumbnailsByLongestSideSet, public ::IceInternal::IncomingAsync
{
public:

    AMD_ThumbnailStore_createThumbnailsByLongestSideSet(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ThumbnailStore_thumbnailExists : public ::omero::api::AMD_ThumbnailStore_thumbnailExists, public ::IceInternal::IncomingAsync
{
public:

    AMD_ThumbnailStore_thumbnailExists(::IceInternal::Incoming&);

    virtual void ice_response(bool);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_ThumbnailStore_resetDefaults : public ::omero::api::AMD_ThumbnailStore_resetDefaults, public ::IceInternal::IncomingAsync
{
public:

    AMD_ThumbnailStore_resetDefaults(::IceInternal::Incoming&);

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

class ThumbnailStore : virtual public ::IceProxy::omero::api::StatefulServiceInterface
{
public:

    bool setPixelsId(::Ice::Long pixelsId)
    {
        return setPixelsId(pixelsId, 0);
    }
    bool setPixelsId(::Ice::Long pixelsId, const ::Ice::Context& __ctx)
    {
        return setPixelsId(pixelsId, &__ctx);
    }
    
private:

    bool setPixelsId(::Ice::Long, const ::Ice::Context*);
    
public:
    bool setPixelsId_async(const ::omero::api::AMI_ThumbnailStore_setPixelsIdPtr&, ::Ice::Long);
    bool setPixelsId_async(const ::omero::api::AMI_ThumbnailStore_setPixelsIdPtr&, ::Ice::Long, const ::Ice::Context&);

    bool isInProgress()
    {
        return isInProgress(0);
    }
    bool isInProgress(const ::Ice::Context& __ctx)
    {
        return isInProgress(&__ctx);
    }
    
private:

    bool isInProgress(const ::Ice::Context*);
    
public:
    bool isInProgress_async(const ::omero::api::AMI_ThumbnailStore_isInProgressPtr&);
    bool isInProgress_async(const ::omero::api::AMI_ThumbnailStore_isInProgressPtr&, const ::Ice::Context&);

    void setRenderingDefId(::Ice::Long renderingDefId)
    {
        setRenderingDefId(renderingDefId, 0);
    }
    void setRenderingDefId(::Ice::Long renderingDefId, const ::Ice::Context& __ctx)
    {
        setRenderingDefId(renderingDefId, &__ctx);
    }
    
private:

    void setRenderingDefId(::Ice::Long, const ::Ice::Context*);
    
public:
    bool setRenderingDefId_async(const ::omero::api::AMI_ThumbnailStore_setRenderingDefIdPtr&, ::Ice::Long);
    bool setRenderingDefId_async(const ::omero::api::AMI_ThumbnailStore_setRenderingDefIdPtr&, ::Ice::Long, const ::Ice::Context&);

    ::Ice::Long getRenderingDefId()
    {
        return getRenderingDefId(0);
    }
    ::Ice::Long getRenderingDefId(const ::Ice::Context& __ctx)
    {
        return getRenderingDefId(&__ctx);
    }
    
private:

    ::Ice::Long getRenderingDefId(const ::Ice::Context*);
    
public:
    bool getRenderingDefId_async(const ::omero::api::AMI_ThumbnailStore_getRenderingDefIdPtr&);
    bool getRenderingDefId_async(const ::omero::api::AMI_ThumbnailStore_getRenderingDefIdPtr&, const ::Ice::Context&);

    ::Ice::ByteSeq getThumbnail(const ::omero::RIntPtr& sizeX, const ::omero::RIntPtr& sizeY)
    {
        return getThumbnail(sizeX, sizeY, 0);
    }
    ::Ice::ByteSeq getThumbnail(const ::omero::RIntPtr& sizeX, const ::omero::RIntPtr& sizeY, const ::Ice::Context& __ctx)
    {
        return getThumbnail(sizeX, sizeY, &__ctx);
    }
    
private:

    ::Ice::ByteSeq getThumbnail(const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:
    bool getThumbnail_async(const ::omero::api::AMI_ThumbnailStore_getThumbnailPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&);
    bool getThumbnail_async(const ::omero::api::AMI_ThumbnailStore_getThumbnailPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context&);

    ::omero::sys::IdByteMap getThumbnailSet(const ::omero::RIntPtr& sizeX, const ::omero::RIntPtr& sizeY, const ::omero::sys::LongList& pixelsIds)
    {
        return getThumbnailSet(sizeX, sizeY, pixelsIds, 0);
    }
    ::omero::sys::IdByteMap getThumbnailSet(const ::omero::RIntPtr& sizeX, const ::omero::RIntPtr& sizeY, const ::omero::sys::LongList& pixelsIds, const ::Ice::Context& __ctx)
    {
        return getThumbnailSet(sizeX, sizeY, pixelsIds, &__ctx);
    }
    
private:

    ::omero::sys::IdByteMap getThumbnailSet(const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::sys::LongList&, const ::Ice::Context*);
    
public:
    bool getThumbnailSet_async(const ::omero::api::AMI_ThumbnailStore_getThumbnailSetPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::sys::LongList&);
    bool getThumbnailSet_async(const ::omero::api::AMI_ThumbnailStore_getThumbnailSetPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::sys::LongList&, const ::Ice::Context&);

    ::omero::sys::IdByteMap getThumbnailByLongestSideSet(const ::omero::RIntPtr& size, const ::omero::sys::LongList& pixelsIds)
    {
        return getThumbnailByLongestSideSet(size, pixelsIds, 0);
    }
    ::omero::sys::IdByteMap getThumbnailByLongestSideSet(const ::omero::RIntPtr& size, const ::omero::sys::LongList& pixelsIds, const ::Ice::Context& __ctx)
    {
        return getThumbnailByLongestSideSet(size, pixelsIds, &__ctx);
    }
    
private:

    ::omero::sys::IdByteMap getThumbnailByLongestSideSet(const ::omero::RIntPtr&, const ::omero::sys::LongList&, const ::Ice::Context*);
    
public:
    bool getThumbnailByLongestSideSet_async(const ::omero::api::AMI_ThumbnailStore_getThumbnailByLongestSideSetPtr&, const ::omero::RIntPtr&, const ::omero::sys::LongList&);
    bool getThumbnailByLongestSideSet_async(const ::omero::api::AMI_ThumbnailStore_getThumbnailByLongestSideSetPtr&, const ::omero::RIntPtr&, const ::omero::sys::LongList&, const ::Ice::Context&);

    ::Ice::ByteSeq getThumbnailByLongestSide(const ::omero::RIntPtr& size)
    {
        return getThumbnailByLongestSide(size, 0);
    }
    ::Ice::ByteSeq getThumbnailByLongestSide(const ::omero::RIntPtr& size, const ::Ice::Context& __ctx)
    {
        return getThumbnailByLongestSide(size, &__ctx);
    }
    
private:

    ::Ice::ByteSeq getThumbnailByLongestSide(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:
    bool getThumbnailByLongestSide_async(const ::omero::api::AMI_ThumbnailStore_getThumbnailByLongestSidePtr&, const ::omero::RIntPtr&);
    bool getThumbnailByLongestSide_async(const ::omero::api::AMI_ThumbnailStore_getThumbnailByLongestSidePtr&, const ::omero::RIntPtr&, const ::Ice::Context&);

    ::Ice::ByteSeq getThumbnailByLongestSideDirect(const ::omero::RIntPtr& size)
    {
        return getThumbnailByLongestSideDirect(size, 0);
    }
    ::Ice::ByteSeq getThumbnailByLongestSideDirect(const ::omero::RIntPtr& size, const ::Ice::Context& __ctx)
    {
        return getThumbnailByLongestSideDirect(size, &__ctx);
    }
    
private:

    ::Ice::ByteSeq getThumbnailByLongestSideDirect(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:
    bool getThumbnailByLongestSideDirect_async(const ::omero::api::AMI_ThumbnailStore_getThumbnailByLongestSideDirectPtr&, const ::omero::RIntPtr&);
    bool getThumbnailByLongestSideDirect_async(const ::omero::api::AMI_ThumbnailStore_getThumbnailByLongestSideDirectPtr&, const ::omero::RIntPtr&, const ::Ice::Context&);

    ::Ice::ByteSeq getThumbnailDirect(const ::omero::RIntPtr& sizeX, const ::omero::RIntPtr& sizeY)
    {
        return getThumbnailDirect(sizeX, sizeY, 0);
    }
    ::Ice::ByteSeq getThumbnailDirect(const ::omero::RIntPtr& sizeX, const ::omero::RIntPtr& sizeY, const ::Ice::Context& __ctx)
    {
        return getThumbnailDirect(sizeX, sizeY, &__ctx);
    }
    
private:

    ::Ice::ByteSeq getThumbnailDirect(const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:
    bool getThumbnailDirect_async(const ::omero::api::AMI_ThumbnailStore_getThumbnailDirectPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&);
    bool getThumbnailDirect_async(const ::omero::api::AMI_ThumbnailStore_getThumbnailDirectPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context&);

    ::Ice::ByteSeq getThumbnailForSectionDirect(::Ice::Int theZ, ::Ice::Int theT, const ::omero::RIntPtr& sizeX, const ::omero::RIntPtr& sizeY)
    {
        return getThumbnailForSectionDirect(theZ, theT, sizeX, sizeY, 0);
    }
    ::Ice::ByteSeq getThumbnailForSectionDirect(::Ice::Int theZ, ::Ice::Int theT, const ::omero::RIntPtr& sizeX, const ::omero::RIntPtr& sizeY, const ::Ice::Context& __ctx)
    {
        return getThumbnailForSectionDirect(theZ, theT, sizeX, sizeY, &__ctx);
    }
    
private:

    ::Ice::ByteSeq getThumbnailForSectionDirect(::Ice::Int, ::Ice::Int, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:
    bool getThumbnailForSectionDirect_async(const ::omero::api::AMI_ThumbnailStore_getThumbnailForSectionDirectPtr&, ::Ice::Int, ::Ice::Int, const ::omero::RIntPtr&, const ::omero::RIntPtr&);
    bool getThumbnailForSectionDirect_async(const ::omero::api::AMI_ThumbnailStore_getThumbnailForSectionDirectPtr&, ::Ice::Int, ::Ice::Int, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context&);

    ::Ice::ByteSeq getThumbnailForSectionByLongestSideDirect(::Ice::Int theZ, ::Ice::Int theT, const ::omero::RIntPtr& size)
    {
        return getThumbnailForSectionByLongestSideDirect(theZ, theT, size, 0);
    }
    ::Ice::ByteSeq getThumbnailForSectionByLongestSideDirect(::Ice::Int theZ, ::Ice::Int theT, const ::omero::RIntPtr& size, const ::Ice::Context& __ctx)
    {
        return getThumbnailForSectionByLongestSideDirect(theZ, theT, size, &__ctx);
    }
    
private:

    ::Ice::ByteSeq getThumbnailForSectionByLongestSideDirect(::Ice::Int, ::Ice::Int, const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:
    bool getThumbnailForSectionByLongestSideDirect_async(const ::omero::api::AMI_ThumbnailStore_getThumbnailForSectionByLongestSideDirectPtr&, ::Ice::Int, ::Ice::Int, const ::omero::RIntPtr&);
    bool getThumbnailForSectionByLongestSideDirect_async(const ::omero::api::AMI_ThumbnailStore_getThumbnailForSectionByLongestSideDirectPtr&, ::Ice::Int, ::Ice::Int, const ::omero::RIntPtr&, const ::Ice::Context&);

    void createThumbnails()
    {
        createThumbnails(0);
    }
    void createThumbnails(const ::Ice::Context& __ctx)
    {
        createThumbnails(&__ctx);
    }
    
private:

    void createThumbnails(const ::Ice::Context*);
    
public:
    bool createThumbnails_async(const ::omero::api::AMI_ThumbnailStore_createThumbnailsPtr&);
    bool createThumbnails_async(const ::omero::api::AMI_ThumbnailStore_createThumbnailsPtr&, const ::Ice::Context&);

    void createThumbnail(const ::omero::RIntPtr& sizeX, const ::omero::RIntPtr& sizeY)
    {
        createThumbnail(sizeX, sizeY, 0);
    }
    void createThumbnail(const ::omero::RIntPtr& sizeX, const ::omero::RIntPtr& sizeY, const ::Ice::Context& __ctx)
    {
        createThumbnail(sizeX, sizeY, &__ctx);
    }
    
private:

    void createThumbnail(const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:
    bool createThumbnail_async(const ::omero::api::AMI_ThumbnailStore_createThumbnailPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&);
    bool createThumbnail_async(const ::omero::api::AMI_ThumbnailStore_createThumbnailPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context&);

    void createThumbnailsByLongestSideSet(const ::omero::RIntPtr& size, const ::omero::sys::LongList& pixelsIds)
    {
        createThumbnailsByLongestSideSet(size, pixelsIds, 0);
    }
    void createThumbnailsByLongestSideSet(const ::omero::RIntPtr& size, const ::omero::sys::LongList& pixelsIds, const ::Ice::Context& __ctx)
    {
        createThumbnailsByLongestSideSet(size, pixelsIds, &__ctx);
    }
    
private:

    void createThumbnailsByLongestSideSet(const ::omero::RIntPtr&, const ::omero::sys::LongList&, const ::Ice::Context*);
    
public:
    bool createThumbnailsByLongestSideSet_async(const ::omero::api::AMI_ThumbnailStore_createThumbnailsByLongestSideSetPtr&, const ::omero::RIntPtr&, const ::omero::sys::LongList&);
    bool createThumbnailsByLongestSideSet_async(const ::omero::api::AMI_ThumbnailStore_createThumbnailsByLongestSideSetPtr&, const ::omero::RIntPtr&, const ::omero::sys::LongList&, const ::Ice::Context&);

    bool thumbnailExists(const ::omero::RIntPtr& sizeX, const ::omero::RIntPtr& sizeY)
    {
        return thumbnailExists(sizeX, sizeY, 0);
    }
    bool thumbnailExists(const ::omero::RIntPtr& sizeX, const ::omero::RIntPtr& sizeY, const ::Ice::Context& __ctx)
    {
        return thumbnailExists(sizeX, sizeY, &__ctx);
    }
    
private:

    bool thumbnailExists(const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:
    bool thumbnailExists_async(const ::omero::api::AMI_ThumbnailStore_thumbnailExistsPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&);
    bool thumbnailExists_async(const ::omero::api::AMI_ThumbnailStore_thumbnailExistsPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context&);

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
    bool resetDefaults_async(const ::omero::api::AMI_ThumbnailStore_resetDefaultsPtr&);
    bool resetDefaults_async(const ::omero::api::AMI_ThumbnailStore_resetDefaultsPtr&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<ThumbnailStore> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ThumbnailStore*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ThumbnailStore*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ThumbnailStore> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ThumbnailStore*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ThumbnailStore*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ThumbnailStore> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ThumbnailStore*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ThumbnailStore*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ThumbnailStore> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ThumbnailStore*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ThumbnailStore*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ThumbnailStore> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ThumbnailStore*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ThumbnailStore*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ThumbnailStore> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ThumbnailStore*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ThumbnailStore*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ThumbnailStore> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ThumbnailStore*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ThumbnailStore*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ThumbnailStore> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ThumbnailStore*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ThumbnailStore*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ThumbnailStore> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ThumbnailStore*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ThumbnailStore*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ThumbnailStore> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ThumbnailStore*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ThumbnailStore*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ThumbnailStore> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ThumbnailStore*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ThumbnailStore*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ThumbnailStore> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ThumbnailStore*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ThumbnailStore*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ThumbnailStore> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ThumbnailStore*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ThumbnailStore*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ThumbnailStore> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ThumbnailStore*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ThumbnailStore*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ThumbnailStore> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ThumbnailStore*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ThumbnailStore*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ThumbnailStore> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ThumbnailStore*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ThumbnailStore*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ThumbnailStore> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ThumbnailStore*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ThumbnailStore*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ThumbnailStore> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ThumbnailStore*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ThumbnailStore*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ThumbnailStore> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ThumbnailStore*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ThumbnailStore*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class ThumbnailStore : virtual public ::IceDelegate::omero::api::StatefulServiceInterface
{
public:

    virtual bool setPixelsId(::Ice::Long, const ::Ice::Context*) = 0;

    virtual bool isInProgress(const ::Ice::Context*) = 0;

    virtual void setRenderingDefId(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::Ice::Long getRenderingDefId(const ::Ice::Context*) = 0;

    virtual ::Ice::ByteSeq getThumbnail(const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::IdByteMap getThumbnailSet(const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::sys::LongList&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::IdByteMap getThumbnailByLongestSideSet(const ::omero::RIntPtr&, const ::omero::sys::LongList&, const ::Ice::Context*) = 0;

    virtual ::Ice::ByteSeq getThumbnailByLongestSide(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::Ice::ByteSeq getThumbnailByLongestSideDirect(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::Ice::ByteSeq getThumbnailDirect(const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::Ice::ByteSeq getThumbnailForSectionDirect(::Ice::Int, ::Ice::Int, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::Ice::ByteSeq getThumbnailForSectionByLongestSideDirect(::Ice::Int, ::Ice::Int, const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual void createThumbnails(const ::Ice::Context*) = 0;

    virtual void createThumbnail(const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual void createThumbnailsByLongestSideSet(const ::omero::RIntPtr&, const ::omero::sys::LongList&, const ::Ice::Context*) = 0;

    virtual bool thumbnailExists(const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual void resetDefaults(const ::Ice::Context*) = 0;
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

class ThumbnailStore : virtual public ::IceDelegate::omero::api::ThumbnailStore,
                       virtual public ::IceDelegateM::omero::api::StatefulServiceInterface
{
public:

    virtual bool setPixelsId(::Ice::Long, const ::Ice::Context*);

    virtual bool isInProgress(const ::Ice::Context*);

    virtual void setRenderingDefId(::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::Long getRenderingDefId(const ::Ice::Context*);

    virtual ::Ice::ByteSeq getThumbnail(const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::sys::IdByteMap getThumbnailSet(const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::sys::LongList&, const ::Ice::Context*);

    virtual ::omero::sys::IdByteMap getThumbnailByLongestSideSet(const ::omero::RIntPtr&, const ::omero::sys::LongList&, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getThumbnailByLongestSide(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getThumbnailByLongestSideDirect(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getThumbnailDirect(const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getThumbnailForSectionDirect(::Ice::Int, ::Ice::Int, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getThumbnailForSectionByLongestSideDirect(::Ice::Int, ::Ice::Int, const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual void createThumbnails(const ::Ice::Context*);

    virtual void createThumbnail(const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual void createThumbnailsByLongestSideSet(const ::omero::RIntPtr&, const ::omero::sys::LongList&, const ::Ice::Context*);

    virtual bool thumbnailExists(const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual void resetDefaults(const ::Ice::Context*);
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

class ThumbnailStore : virtual public ::IceDelegate::omero::api::ThumbnailStore,
                       virtual public ::IceDelegateD::omero::api::StatefulServiceInterface
{
public:

    virtual bool setPixelsId(::Ice::Long, const ::Ice::Context*);

    virtual bool isInProgress(const ::Ice::Context*);

    virtual void setRenderingDefId(::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::Long getRenderingDefId(const ::Ice::Context*);

    virtual ::Ice::ByteSeq getThumbnail(const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::sys::IdByteMap getThumbnailSet(const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::sys::LongList&, const ::Ice::Context*);

    virtual ::omero::sys::IdByteMap getThumbnailByLongestSideSet(const ::omero::RIntPtr&, const ::omero::sys::LongList&, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getThumbnailByLongestSide(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getThumbnailByLongestSideDirect(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getThumbnailDirect(const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getThumbnailForSectionDirect(::Ice::Int, ::Ice::Int, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getThumbnailForSectionByLongestSideDirect(::Ice::Int, ::Ice::Int, const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual void createThumbnails(const ::Ice::Context*);

    virtual void createThumbnail(const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual void createThumbnailsByLongestSideSet(const ::omero::RIntPtr&, const ::omero::sys::LongList&, const ::Ice::Context*);

    virtual bool thumbnailExists(const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual void resetDefaults(const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace api
{

class ThumbnailStore : virtual public ::omero::api::StatefulServiceInterface
{
public:

    typedef ThumbnailStorePrx ProxyType;
    typedef ThumbnailStorePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void setPixelsId_async(const ::omero::api::AMD_ThumbnailStore_setPixelsIdPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPixelsId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void isInProgress_async(const ::omero::api::AMD_ThumbnailStore_isInProgressPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isInProgress(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setRenderingDefId_async(const ::omero::api::AMD_ThumbnailStore_setRenderingDefIdPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setRenderingDefId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getRenderingDefId_async(const ::omero::api::AMD_ThumbnailStore_getRenderingDefIdPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRenderingDefId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getThumbnail_async(const ::omero::api::AMD_ThumbnailStore_getThumbnailPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getThumbnail(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getThumbnailSet_async(const ::omero::api::AMD_ThumbnailStore_getThumbnailSetPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::sys::LongList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getThumbnailSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getThumbnailByLongestSideSet_async(const ::omero::api::AMD_ThumbnailStore_getThumbnailByLongestSideSetPtr&, const ::omero::RIntPtr&, const ::omero::sys::LongList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getThumbnailByLongestSideSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getThumbnailByLongestSide_async(const ::omero::api::AMD_ThumbnailStore_getThumbnailByLongestSidePtr&, const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getThumbnailByLongestSide(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getThumbnailByLongestSideDirect_async(const ::omero::api::AMD_ThumbnailStore_getThumbnailByLongestSideDirectPtr&, const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getThumbnailByLongestSideDirect(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getThumbnailDirect_async(const ::omero::api::AMD_ThumbnailStore_getThumbnailDirectPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getThumbnailDirect(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getThumbnailForSectionDirect_async(const ::omero::api::AMD_ThumbnailStore_getThumbnailForSectionDirectPtr&, ::Ice::Int, ::Ice::Int, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getThumbnailForSectionDirect(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getThumbnailForSectionByLongestSideDirect_async(const ::omero::api::AMD_ThumbnailStore_getThumbnailForSectionByLongestSideDirectPtr&, ::Ice::Int, ::Ice::Int, const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getThumbnailForSectionByLongestSideDirect(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void createThumbnails_async(const ::omero::api::AMD_ThumbnailStore_createThumbnailsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createThumbnails(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void createThumbnail_async(const ::omero::api::AMD_ThumbnailStore_createThumbnailPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createThumbnail(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void createThumbnailsByLongestSideSet_async(const ::omero::api::AMD_ThumbnailStore_createThumbnailsByLongestSideSetPtr&, const ::omero::RIntPtr&, const ::omero::sys::LongList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createThumbnailsByLongestSideSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void thumbnailExists_async(const ::omero::api::AMD_ThumbnailStore_thumbnailExistsPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___thumbnailExists(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void resetDefaults_async(const ::omero::api::AMD_ThumbnailStore_resetDefaultsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___resetDefaults(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
