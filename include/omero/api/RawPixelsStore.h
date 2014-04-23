// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `RawPixelsStore.ice'

#ifndef __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_RawPixelsStore_h__
#define __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_RawPixelsStore_h__

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
#include <omero/Collections.h>
#include <omero/api/PyramidService.h>
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

class RawPixelsStore;

}

}

}

namespace omero
{

namespace api
{

class RawPixelsStore;
bool operator==(const RawPixelsStore&, const RawPixelsStore&);
bool operator<(const RawPixelsStore&, const RawPixelsStore&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::api::RawPixelsStore*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::RawPixelsStore*);

}

namespace omero
{

namespace api
{

typedef ::IceInternal::Handle< ::omero::api::RawPixelsStore> RawPixelsStorePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::RawPixelsStore> RawPixelsStorePrx;

void __read(::IceInternal::BasicStream*, RawPixelsStorePrx&);
void __patch__RawPixelsStorePtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace api
{

class AMI_RawPixelsStore_setPixelsId : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, ::Ice::Long, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_setPixelsId> AMI_RawPixelsStore_setPixelsIdPtr;

class AMD_RawPixelsStore_setPixelsId : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_setPixelsId> AMD_RawPixelsStore_setPixelsIdPtr;

class AMI_RawPixelsStore_getPixelsId : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_getPixelsId> AMI_RawPixelsStore_getPixelsIdPtr;

class AMD_RawPixelsStore_getPixelsId : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_getPixelsId> AMD_RawPixelsStore_getPixelsIdPtr;

class AMI_RawPixelsStore_getPixelsPath : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_getPixelsPath> AMI_RawPixelsStore_getPixelsPathPtr;

class AMD_RawPixelsStore_getPixelsPath : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::std::string&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_getPixelsPath> AMD_RawPixelsStore_getPixelsPathPtr;

class AMI_RawPixelsStore_prepare : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, const ::omero::sys::LongList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_prepare> AMI_RawPixelsStore_preparePtr;

class AMD_RawPixelsStore_prepare : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_prepare> AMD_RawPixelsStore_preparePtr;

class AMI_RawPixelsStore_getPlaneSize : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_getPlaneSize> AMI_RawPixelsStore_getPlaneSizePtr;

class AMD_RawPixelsStore_getPlaneSize : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_getPlaneSize> AMD_RawPixelsStore_getPlaneSizePtr;

class AMI_RawPixelsStore_getRowSize : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_getRowSize> AMI_RawPixelsStore_getRowSizePtr;

class AMD_RawPixelsStore_getRowSize : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_getRowSize> AMD_RawPixelsStore_getRowSizePtr;

class AMI_RawPixelsStore_getStackSize : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_getStackSize> AMI_RawPixelsStore_getStackSizePtr;

class AMD_RawPixelsStore_getStackSize : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_getStackSize> AMD_RawPixelsStore_getStackSizePtr;

class AMI_RawPixelsStore_getTimepointSize : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_getTimepointSize> AMI_RawPixelsStore_getTimepointSizePtr;

class AMD_RawPixelsStore_getTimepointSize : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_getTimepointSize> AMD_RawPixelsStore_getTimepointSizePtr;

class AMI_RawPixelsStore_getTotalSize : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_getTotalSize> AMI_RawPixelsStore_getTotalSizePtr;

class AMD_RawPixelsStore_getTotalSize : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_getTotalSize> AMD_RawPixelsStore_getTotalSizePtr;

class AMI_RawPixelsStore_getRowOffset : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_getRowOffset> AMI_RawPixelsStore_getRowOffsetPtr;

class AMD_RawPixelsStore_getRowOffset : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_getRowOffset> AMD_RawPixelsStore_getRowOffsetPtr;

class AMI_RawPixelsStore_getPlaneOffset : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_getPlaneOffset> AMI_RawPixelsStore_getPlaneOffsetPtr;

class AMD_RawPixelsStore_getPlaneOffset : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_getPlaneOffset> AMD_RawPixelsStore_getPlaneOffsetPtr;

class AMI_RawPixelsStore_getStackOffset : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_getStackOffset> AMI_RawPixelsStore_getStackOffsetPtr;

class AMD_RawPixelsStore_getStackOffset : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_getStackOffset> AMD_RawPixelsStore_getStackOffsetPtr;

class AMI_RawPixelsStore_getTimepointOffset : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_getTimepointOffset> AMI_RawPixelsStore_getTimepointOffsetPtr;

class AMD_RawPixelsStore_getTimepointOffset : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_getTimepointOffset> AMD_RawPixelsStore_getTimepointOffsetPtr;

class AMI_RawPixelsStore_getTile : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_getTile> AMI_RawPixelsStore_getTilePtr;

class AMD_RawPixelsStore_getTile : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_getTile> AMD_RawPixelsStore_getTilePtr;

class AMI_RawPixelsStore_getHypercube : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, const ::omero::sys::IntList&, const ::omero::sys::IntList&, const ::omero::sys::IntList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_getHypercube> AMI_RawPixelsStore_getHypercubePtr;

class AMD_RawPixelsStore_getHypercube : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_getHypercube> AMD_RawPixelsStore_getHypercubePtr;

class AMI_RawPixelsStore_getRegion : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, ::Ice::Int, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_getRegion> AMI_RawPixelsStore_getRegionPtr;

class AMD_RawPixelsStore_getRegion : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_getRegion> AMD_RawPixelsStore_getRegionPtr;

class AMI_RawPixelsStore_getRow : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_getRow> AMI_RawPixelsStore_getRowPtr;

class AMD_RawPixelsStore_getRow : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_getRow> AMD_RawPixelsStore_getRowPtr;

class AMI_RawPixelsStore_getCol : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_getCol> AMI_RawPixelsStore_getColPtr;

class AMD_RawPixelsStore_getCol : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_getCol> AMD_RawPixelsStore_getColPtr;

class AMI_RawPixelsStore_getPlane : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_getPlane> AMI_RawPixelsStore_getPlanePtr;

class AMD_RawPixelsStore_getPlane : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_getPlane> AMD_RawPixelsStore_getPlanePtr;

class AMI_RawPixelsStore_getPlaneRegion : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_getPlaneRegion> AMI_RawPixelsStore_getPlaneRegionPtr;

class AMD_RawPixelsStore_getPlaneRegion : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_getPlaneRegion> AMD_RawPixelsStore_getPlaneRegionPtr;

class AMI_RawPixelsStore_getStack : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_getStack> AMI_RawPixelsStore_getStackPtr;

class AMD_RawPixelsStore_getStack : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_getStack> AMD_RawPixelsStore_getStackPtr;

class AMI_RawPixelsStore_getTimepoint : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_getTimepoint> AMI_RawPixelsStore_getTimepointPtr;

class AMD_RawPixelsStore_getTimepoint : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_getTimepoint> AMD_RawPixelsStore_getTimepointPtr;

class AMI_RawPixelsStore_setTile : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_setTile> AMI_RawPixelsStore_setTilePtr;

class AMD_RawPixelsStore_setTile : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_setTile> AMD_RawPixelsStore_setTilePtr;

class AMI_RawPixelsStore_setRegion : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, ::Ice::Int, ::Ice::Long, const ::Ice::ByteSeq&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_setRegion> AMI_RawPixelsStore_setRegionPtr;

class AMD_RawPixelsStore_setRegion : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_setRegion> AMD_RawPixelsStore_setRegionPtr;

class AMI_RawPixelsStore_setRow : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_setRow> AMI_RawPixelsStore_setRowPtr;

class AMD_RawPixelsStore_setRow : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_setRow> AMD_RawPixelsStore_setRowPtr;

class AMI_RawPixelsStore_setPlane : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_setPlane> AMI_RawPixelsStore_setPlanePtr;

class AMD_RawPixelsStore_setPlane : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_setPlane> AMD_RawPixelsStore_setPlanePtr;

class AMI_RawPixelsStore_setStack : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_setStack> AMI_RawPixelsStore_setStackPtr;

class AMD_RawPixelsStore_setStack : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_setStack> AMD_RawPixelsStore_setStackPtr;

class AMI_RawPixelsStore_setTimepoint : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, const ::Ice::ByteSeq&, ::Ice::Int, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_setTimepoint> AMI_RawPixelsStore_setTimepointPtr;

class AMD_RawPixelsStore_setTimepoint : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_setTimepoint> AMD_RawPixelsStore_setTimepointPtr;

class AMI_RawPixelsStore_getByteWidth : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_getByteWidth> AMI_RawPixelsStore_getByteWidthPtr;

class AMD_RawPixelsStore_getByteWidth : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_getByteWidth> AMD_RawPixelsStore_getByteWidthPtr;

class AMI_RawPixelsStore_isSigned : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_isSigned> AMI_RawPixelsStore_isSignedPtr;

class AMD_RawPixelsStore_isSigned : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_isSigned> AMD_RawPixelsStore_isSignedPtr;

class AMI_RawPixelsStore_isFloat : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_isFloat> AMI_RawPixelsStore_isFloatPtr;

class AMD_RawPixelsStore_isFloat : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_isFloat> AMD_RawPixelsStore_isFloatPtr;

class AMI_RawPixelsStore_calculateMessageDigest : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_calculateMessageDigest> AMI_RawPixelsStore_calculateMessageDigestPtr;

class AMD_RawPixelsStore_calculateMessageDigest : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::Ice::ByteSeq&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_calculateMessageDigest> AMD_RawPixelsStore_calculateMessageDigestPtr;

class AMI_RawPixelsStore_save : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::PixelsPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::RawPixelsStorePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_RawPixelsStore_save> AMI_RawPixelsStore_savePtr;

class AMD_RawPixelsStore_save : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::PixelsPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_RawPixelsStore_save> AMD_RawPixelsStore_savePtr;

}

}

namespace IceAsync
{

namespace omero
{

namespace api
{

class AMD_RawPixelsStore_setPixelsId : public ::omero::api::AMD_RawPixelsStore_setPixelsId, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_setPixelsId(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_getPixelsId : public ::omero::api::AMD_RawPixelsStore_getPixelsId, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_getPixelsId(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Long);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_getPixelsPath : public ::omero::api::AMD_RawPixelsStore_getPixelsPath, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_getPixelsPath(::IceInternal::Incoming&);

    virtual void ice_response(const ::std::string&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_prepare : public ::omero::api::AMD_RawPixelsStore_prepare, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_prepare(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_getPlaneSize : public ::omero::api::AMD_RawPixelsStore_getPlaneSize, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_getPlaneSize(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Long);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_getRowSize : public ::omero::api::AMD_RawPixelsStore_getRowSize, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_getRowSize(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_getStackSize : public ::omero::api::AMD_RawPixelsStore_getStackSize, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_getStackSize(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Long);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_getTimepointSize : public ::omero::api::AMD_RawPixelsStore_getTimepointSize, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_getTimepointSize(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Long);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_getTotalSize : public ::omero::api::AMD_RawPixelsStore_getTotalSize, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_getTotalSize(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Long);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_getRowOffset : public ::omero::api::AMD_RawPixelsStore_getRowOffset, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_getRowOffset(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Long);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_getPlaneOffset : public ::omero::api::AMD_RawPixelsStore_getPlaneOffset, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_getPlaneOffset(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Long);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_getStackOffset : public ::omero::api::AMD_RawPixelsStore_getStackOffset, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_getStackOffset(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Long);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_getTimepointOffset : public ::omero::api::AMD_RawPixelsStore_getTimepointOffset, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_getTimepointOffset(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Long);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_getTile : public ::omero::api::AMD_RawPixelsStore_getTile, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_getTile(::IceInternal::Incoming&);

    virtual void ice_response(const ::Ice::ByteSeq&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_getHypercube : public ::omero::api::AMD_RawPixelsStore_getHypercube, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_getHypercube(::IceInternal::Incoming&);

    virtual void ice_response(const ::Ice::ByteSeq&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_getRegion : public ::omero::api::AMD_RawPixelsStore_getRegion, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_getRegion(::IceInternal::Incoming&);

    virtual void ice_response(const ::Ice::ByteSeq&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_getRow : public ::omero::api::AMD_RawPixelsStore_getRow, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_getRow(::IceInternal::Incoming&);

    virtual void ice_response(const ::Ice::ByteSeq&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_getCol : public ::omero::api::AMD_RawPixelsStore_getCol, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_getCol(::IceInternal::Incoming&);

    virtual void ice_response(const ::Ice::ByteSeq&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_getPlane : public ::omero::api::AMD_RawPixelsStore_getPlane, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_getPlane(::IceInternal::Incoming&);

    virtual void ice_response(const ::Ice::ByteSeq&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_getPlaneRegion : public ::omero::api::AMD_RawPixelsStore_getPlaneRegion, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_getPlaneRegion(::IceInternal::Incoming&);

    virtual void ice_response(const ::Ice::ByteSeq&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_getStack : public ::omero::api::AMD_RawPixelsStore_getStack, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_getStack(::IceInternal::Incoming&);

    virtual void ice_response(const ::Ice::ByteSeq&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_getTimepoint : public ::omero::api::AMD_RawPixelsStore_getTimepoint, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_getTimepoint(::IceInternal::Incoming&);

    virtual void ice_response(const ::Ice::ByteSeq&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_setTile : public ::omero::api::AMD_RawPixelsStore_setTile, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_setTile(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_setRegion : public ::omero::api::AMD_RawPixelsStore_setRegion, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_setRegion(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_setRow : public ::omero::api::AMD_RawPixelsStore_setRow, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_setRow(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_setPlane : public ::omero::api::AMD_RawPixelsStore_setPlane, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_setPlane(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_setStack : public ::omero::api::AMD_RawPixelsStore_setStack, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_setStack(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_setTimepoint : public ::omero::api::AMD_RawPixelsStore_setTimepoint, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_setTimepoint(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_getByteWidth : public ::omero::api::AMD_RawPixelsStore_getByteWidth, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_getByteWidth(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_isSigned : public ::omero::api::AMD_RawPixelsStore_isSigned, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_isSigned(::IceInternal::Incoming&);

    virtual void ice_response(bool);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_isFloat : public ::omero::api::AMD_RawPixelsStore_isFloat, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_isFloat(::IceInternal::Incoming&);

    virtual void ice_response(bool);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_calculateMessageDigest : public ::omero::api::AMD_RawPixelsStore_calculateMessageDigest, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_calculateMessageDigest(::IceInternal::Incoming&);

    virtual void ice_response(const ::Ice::ByteSeq&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_RawPixelsStore_save : public ::omero::api::AMD_RawPixelsStore_save, public ::IceInternal::IncomingAsync
{
public:

    AMD_RawPixelsStore_save(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::PixelsPtr&);
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

class RawPixelsStore : virtual public ::IceProxy::omero::api::PyramidService
{
public:

    void setPixelsId(::Ice::Long pixelsId, bool bypassOriginalFile)
    {
        setPixelsId(pixelsId, bypassOriginalFile, 0);
    }
    void setPixelsId(::Ice::Long pixelsId, bool bypassOriginalFile, const ::Ice::Context& __ctx)
    {
        setPixelsId(pixelsId, bypassOriginalFile, &__ctx);
    }
    
private:

    void setPixelsId(::Ice::Long, bool, const ::Ice::Context*);
    
public:
    bool setPixelsId_async(const ::omero::api::AMI_RawPixelsStore_setPixelsIdPtr&, ::Ice::Long, bool);
    bool setPixelsId_async(const ::omero::api::AMI_RawPixelsStore_setPixelsIdPtr&, ::Ice::Long, bool, const ::Ice::Context&);

    ::Ice::Long getPixelsId()
    {
        return getPixelsId(0);
    }
    ::Ice::Long getPixelsId(const ::Ice::Context& __ctx)
    {
        return getPixelsId(&__ctx);
    }
    
private:

    ::Ice::Long getPixelsId(const ::Ice::Context*);
    
public:
    bool getPixelsId_async(const ::omero::api::AMI_RawPixelsStore_getPixelsIdPtr&);
    bool getPixelsId_async(const ::omero::api::AMI_RawPixelsStore_getPixelsIdPtr&, const ::Ice::Context&);

    ::std::string getPixelsPath()
    {
        return getPixelsPath(0);
    }
    ::std::string getPixelsPath(const ::Ice::Context& __ctx)
    {
        return getPixelsPath(&__ctx);
    }
    
private:

    ::std::string getPixelsPath(const ::Ice::Context*);
    
public:
    bool getPixelsPath_async(const ::omero::api::AMI_RawPixelsStore_getPixelsPathPtr&);
    bool getPixelsPath_async(const ::omero::api::AMI_RawPixelsStore_getPixelsPathPtr&, const ::Ice::Context&);

    void prepare(const ::omero::sys::LongList& pixelsIds)
    {
        prepare(pixelsIds, 0);
    }
    void prepare(const ::omero::sys::LongList& pixelsIds, const ::Ice::Context& __ctx)
    {
        prepare(pixelsIds, &__ctx);
    }
    
private:

    void prepare(const ::omero::sys::LongList&, const ::Ice::Context*);
    
public:
    bool prepare_async(const ::omero::api::AMI_RawPixelsStore_preparePtr&, const ::omero::sys::LongList&);
    bool prepare_async(const ::omero::api::AMI_RawPixelsStore_preparePtr&, const ::omero::sys::LongList&, const ::Ice::Context&);

    ::Ice::Long getPlaneSize()
    {
        return getPlaneSize(0);
    }
    ::Ice::Long getPlaneSize(const ::Ice::Context& __ctx)
    {
        return getPlaneSize(&__ctx);
    }
    
private:

    ::Ice::Long getPlaneSize(const ::Ice::Context*);
    
public:
    bool getPlaneSize_async(const ::omero::api::AMI_RawPixelsStore_getPlaneSizePtr&);
    bool getPlaneSize_async(const ::omero::api::AMI_RawPixelsStore_getPlaneSizePtr&, const ::Ice::Context&);

    ::Ice::Int getRowSize()
    {
        return getRowSize(0);
    }
    ::Ice::Int getRowSize(const ::Ice::Context& __ctx)
    {
        return getRowSize(&__ctx);
    }
    
private:

    ::Ice::Int getRowSize(const ::Ice::Context*);
    
public:
    bool getRowSize_async(const ::omero::api::AMI_RawPixelsStore_getRowSizePtr&);
    bool getRowSize_async(const ::omero::api::AMI_RawPixelsStore_getRowSizePtr&, const ::Ice::Context&);

    ::Ice::Long getStackSize()
    {
        return getStackSize(0);
    }
    ::Ice::Long getStackSize(const ::Ice::Context& __ctx)
    {
        return getStackSize(&__ctx);
    }
    
private:

    ::Ice::Long getStackSize(const ::Ice::Context*);
    
public:
    bool getStackSize_async(const ::omero::api::AMI_RawPixelsStore_getStackSizePtr&);
    bool getStackSize_async(const ::omero::api::AMI_RawPixelsStore_getStackSizePtr&, const ::Ice::Context&);

    ::Ice::Long getTimepointSize()
    {
        return getTimepointSize(0);
    }
    ::Ice::Long getTimepointSize(const ::Ice::Context& __ctx)
    {
        return getTimepointSize(&__ctx);
    }
    
private:

    ::Ice::Long getTimepointSize(const ::Ice::Context*);
    
public:
    bool getTimepointSize_async(const ::omero::api::AMI_RawPixelsStore_getTimepointSizePtr&);
    bool getTimepointSize_async(const ::omero::api::AMI_RawPixelsStore_getTimepointSizePtr&, const ::Ice::Context&);

    ::Ice::Long getTotalSize()
    {
        return getTotalSize(0);
    }
    ::Ice::Long getTotalSize(const ::Ice::Context& __ctx)
    {
        return getTotalSize(&__ctx);
    }
    
private:

    ::Ice::Long getTotalSize(const ::Ice::Context*);
    
public:
    bool getTotalSize_async(const ::omero::api::AMI_RawPixelsStore_getTotalSizePtr&);
    bool getTotalSize_async(const ::omero::api::AMI_RawPixelsStore_getTotalSizePtr&, const ::Ice::Context&);

    ::Ice::Long getRowOffset(::Ice::Int y, ::Ice::Int z, ::Ice::Int c, ::Ice::Int t)
    {
        return getRowOffset(y, z, c, t, 0);
    }
    ::Ice::Long getRowOffset(::Ice::Int y, ::Ice::Int z, ::Ice::Int c, ::Ice::Int t, const ::Ice::Context& __ctx)
    {
        return getRowOffset(y, z, c, t, &__ctx);
    }
    
private:

    ::Ice::Long getRowOffset(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    bool getRowOffset_async(const ::omero::api::AMI_RawPixelsStore_getRowOffsetPtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int);
    bool getRowOffset_async(const ::omero::api::AMI_RawPixelsStore_getRowOffsetPtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context&);

    ::Ice::Long getPlaneOffset(::Ice::Int z, ::Ice::Int c, ::Ice::Int t)
    {
        return getPlaneOffset(z, c, t, 0);
    }
    ::Ice::Long getPlaneOffset(::Ice::Int z, ::Ice::Int c, ::Ice::Int t, const ::Ice::Context& __ctx)
    {
        return getPlaneOffset(z, c, t, &__ctx);
    }
    
private:

    ::Ice::Long getPlaneOffset(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    bool getPlaneOffset_async(const ::omero::api::AMI_RawPixelsStore_getPlaneOffsetPtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int);
    bool getPlaneOffset_async(const ::omero::api::AMI_RawPixelsStore_getPlaneOffsetPtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context&);

    ::Ice::Long getStackOffset(::Ice::Int c, ::Ice::Int t)
    {
        return getStackOffset(c, t, 0);
    }
    ::Ice::Long getStackOffset(::Ice::Int c, ::Ice::Int t, const ::Ice::Context& __ctx)
    {
        return getStackOffset(c, t, &__ctx);
    }
    
private:

    ::Ice::Long getStackOffset(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    bool getStackOffset_async(const ::omero::api::AMI_RawPixelsStore_getStackOffsetPtr&, ::Ice::Int, ::Ice::Int);
    bool getStackOffset_async(const ::omero::api::AMI_RawPixelsStore_getStackOffsetPtr&, ::Ice::Int, ::Ice::Int, const ::Ice::Context&);

    ::Ice::Long getTimepointOffset(::Ice::Int t)
    {
        return getTimepointOffset(t, 0);
    }
    ::Ice::Long getTimepointOffset(::Ice::Int t, const ::Ice::Context& __ctx)
    {
        return getTimepointOffset(t, &__ctx);
    }
    
private:

    ::Ice::Long getTimepointOffset(::Ice::Int, const ::Ice::Context*);
    
public:
    bool getTimepointOffset_async(const ::omero::api::AMI_RawPixelsStore_getTimepointOffsetPtr&, ::Ice::Int);
    bool getTimepointOffset_async(const ::omero::api::AMI_RawPixelsStore_getTimepointOffsetPtr&, ::Ice::Int, const ::Ice::Context&);

    ::Ice::ByteSeq getTile(::Ice::Int z, ::Ice::Int c, ::Ice::Int t, ::Ice::Int x, ::Ice::Int y, ::Ice::Int w, ::Ice::Int h)
    {
        return getTile(z, c, t, x, y, w, h, 0);
    }
    ::Ice::ByteSeq getTile(::Ice::Int z, ::Ice::Int c, ::Ice::Int t, ::Ice::Int x, ::Ice::Int y, ::Ice::Int w, ::Ice::Int h, const ::Ice::Context& __ctx)
    {
        return getTile(z, c, t, x, y, w, h, &__ctx);
    }
    
private:

    ::Ice::ByteSeq getTile(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    bool getTile_async(const ::omero::api::AMI_RawPixelsStore_getTilePtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int);
    bool getTile_async(const ::omero::api::AMI_RawPixelsStore_getTilePtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context&);

    ::Ice::ByteSeq getHypercube(const ::omero::sys::IntList& offset, const ::omero::sys::IntList& size, const ::omero::sys::IntList& step)
    {
        return getHypercube(offset, size, step, 0);
    }
    ::Ice::ByteSeq getHypercube(const ::omero::sys::IntList& offset, const ::omero::sys::IntList& size, const ::omero::sys::IntList& step, const ::Ice::Context& __ctx)
    {
        return getHypercube(offset, size, step, &__ctx);
    }
    
private:

    ::Ice::ByteSeq getHypercube(const ::omero::sys::IntList&, const ::omero::sys::IntList&, const ::omero::sys::IntList&, const ::Ice::Context*);
    
public:
    bool getHypercube_async(const ::omero::api::AMI_RawPixelsStore_getHypercubePtr&, const ::omero::sys::IntList&, const ::omero::sys::IntList&, const ::omero::sys::IntList&);
    bool getHypercube_async(const ::omero::api::AMI_RawPixelsStore_getHypercubePtr&, const ::omero::sys::IntList&, const ::omero::sys::IntList&, const ::omero::sys::IntList&, const ::Ice::Context&);

    ::Ice::ByteSeq getRegion(::Ice::Int size, ::Ice::Long offset)
    {
        return getRegion(size, offset, 0);
    }
    ::Ice::ByteSeq getRegion(::Ice::Int size, ::Ice::Long offset, const ::Ice::Context& __ctx)
    {
        return getRegion(size, offset, &__ctx);
    }
    
private:

    ::Ice::ByteSeq getRegion(::Ice::Int, ::Ice::Long, const ::Ice::Context*);
    
public:
    bool getRegion_async(const ::omero::api::AMI_RawPixelsStore_getRegionPtr&, ::Ice::Int, ::Ice::Long);
    bool getRegion_async(const ::omero::api::AMI_RawPixelsStore_getRegionPtr&, ::Ice::Int, ::Ice::Long, const ::Ice::Context&);

    ::Ice::ByteSeq getRow(::Ice::Int y, ::Ice::Int z, ::Ice::Int c, ::Ice::Int t)
    {
        return getRow(y, z, c, t, 0);
    }
    ::Ice::ByteSeq getRow(::Ice::Int y, ::Ice::Int z, ::Ice::Int c, ::Ice::Int t, const ::Ice::Context& __ctx)
    {
        return getRow(y, z, c, t, &__ctx);
    }
    
private:

    ::Ice::ByteSeq getRow(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    bool getRow_async(const ::omero::api::AMI_RawPixelsStore_getRowPtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int);
    bool getRow_async(const ::omero::api::AMI_RawPixelsStore_getRowPtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context&);

    ::Ice::ByteSeq getCol(::Ice::Int x, ::Ice::Int z, ::Ice::Int c, ::Ice::Int t)
    {
        return getCol(x, z, c, t, 0);
    }
    ::Ice::ByteSeq getCol(::Ice::Int x, ::Ice::Int z, ::Ice::Int c, ::Ice::Int t, const ::Ice::Context& __ctx)
    {
        return getCol(x, z, c, t, &__ctx);
    }
    
private:

    ::Ice::ByteSeq getCol(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    bool getCol_async(const ::omero::api::AMI_RawPixelsStore_getColPtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int);
    bool getCol_async(const ::omero::api::AMI_RawPixelsStore_getColPtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context&);

    ::Ice::ByteSeq getPlane(::Ice::Int z, ::Ice::Int c, ::Ice::Int t)
    {
        return getPlane(z, c, t, 0);
    }
    ::Ice::ByteSeq getPlane(::Ice::Int z, ::Ice::Int c, ::Ice::Int t, const ::Ice::Context& __ctx)
    {
        return getPlane(z, c, t, &__ctx);
    }
    
private:

    ::Ice::ByteSeq getPlane(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    bool getPlane_async(const ::omero::api::AMI_RawPixelsStore_getPlanePtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int);
    bool getPlane_async(const ::omero::api::AMI_RawPixelsStore_getPlanePtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context&);

    ::Ice::ByteSeq getPlaneRegion(::Ice::Int z, ::Ice::Int c, ::Ice::Int t, ::Ice::Int size, ::Ice::Int offset)
    {
        return getPlaneRegion(z, c, t, size, offset, 0);
    }
    ::Ice::ByteSeq getPlaneRegion(::Ice::Int z, ::Ice::Int c, ::Ice::Int t, ::Ice::Int size, ::Ice::Int offset, const ::Ice::Context& __ctx)
    {
        return getPlaneRegion(z, c, t, size, offset, &__ctx);
    }
    
private:

    ::Ice::ByteSeq getPlaneRegion(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    bool getPlaneRegion_async(const ::omero::api::AMI_RawPixelsStore_getPlaneRegionPtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int);
    bool getPlaneRegion_async(const ::omero::api::AMI_RawPixelsStore_getPlaneRegionPtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context&);

    ::Ice::ByteSeq getStack(::Ice::Int c, ::Ice::Int t)
    {
        return getStack(c, t, 0);
    }
    ::Ice::ByteSeq getStack(::Ice::Int c, ::Ice::Int t, const ::Ice::Context& __ctx)
    {
        return getStack(c, t, &__ctx);
    }
    
private:

    ::Ice::ByteSeq getStack(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    bool getStack_async(const ::omero::api::AMI_RawPixelsStore_getStackPtr&, ::Ice::Int, ::Ice::Int);
    bool getStack_async(const ::omero::api::AMI_RawPixelsStore_getStackPtr&, ::Ice::Int, ::Ice::Int, const ::Ice::Context&);

    ::Ice::ByteSeq getTimepoint(::Ice::Int t)
    {
        return getTimepoint(t, 0);
    }
    ::Ice::ByteSeq getTimepoint(::Ice::Int t, const ::Ice::Context& __ctx)
    {
        return getTimepoint(t, &__ctx);
    }
    
private:

    ::Ice::ByteSeq getTimepoint(::Ice::Int, const ::Ice::Context*);
    
public:
    bool getTimepoint_async(const ::omero::api::AMI_RawPixelsStore_getTimepointPtr&, ::Ice::Int);
    bool getTimepoint_async(const ::omero::api::AMI_RawPixelsStore_getTimepointPtr&, ::Ice::Int, const ::Ice::Context&);

    void setTile(const ::Ice::ByteSeq& buf, ::Ice::Int z, ::Ice::Int c, ::Ice::Int t, ::Ice::Int x, ::Ice::Int y, ::Ice::Int w, ::Ice::Int h)
    {
        setTile(buf, z, c, t, x, y, w, h, 0);
    }
    void setTile(const ::Ice::ByteSeq& buf, ::Ice::Int z, ::Ice::Int c, ::Ice::Int t, ::Ice::Int x, ::Ice::Int y, ::Ice::Int w, ::Ice::Int h, const ::Ice::Context& __ctx)
    {
        setTile(buf, z, c, t, x, y, w, h, &__ctx);
    }
    
private:

    void setTile(const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    bool setTile_async(const ::omero::api::AMI_RawPixelsStore_setTilePtr&, const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int);
    bool setTile_async(const ::omero::api::AMI_RawPixelsStore_setTilePtr&, const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context&);

    void setRegion(::Ice::Int size, ::Ice::Long offset, const ::Ice::ByteSeq& buf)
    {
        setRegion(size, offset, buf, 0);
    }
    void setRegion(::Ice::Int size, ::Ice::Long offset, const ::Ice::ByteSeq& buf, const ::Ice::Context& __ctx)
    {
        setRegion(size, offset, buf, &__ctx);
    }
    
private:

    void setRegion(::Ice::Int, ::Ice::Long, const ::Ice::ByteSeq&, const ::Ice::Context*);
    
public:
    bool setRegion_async(const ::omero::api::AMI_RawPixelsStore_setRegionPtr&, ::Ice::Int, ::Ice::Long, const ::Ice::ByteSeq&);
    bool setRegion_async(const ::omero::api::AMI_RawPixelsStore_setRegionPtr&, ::Ice::Int, ::Ice::Long, const ::Ice::ByteSeq&, const ::Ice::Context&);

    void setRow(const ::Ice::ByteSeq& buf, ::Ice::Int y, ::Ice::Int z, ::Ice::Int c, ::Ice::Int t)
    {
        setRow(buf, y, z, c, t, 0);
    }
    void setRow(const ::Ice::ByteSeq& buf, ::Ice::Int y, ::Ice::Int z, ::Ice::Int c, ::Ice::Int t, const ::Ice::Context& __ctx)
    {
        setRow(buf, y, z, c, t, &__ctx);
    }
    
private:

    void setRow(const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    bool setRow_async(const ::omero::api::AMI_RawPixelsStore_setRowPtr&, const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int);
    bool setRow_async(const ::omero::api::AMI_RawPixelsStore_setRowPtr&, const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context&);

    void setPlane(const ::Ice::ByteSeq& buf, ::Ice::Int z, ::Ice::Int c, ::Ice::Int t)
    {
        setPlane(buf, z, c, t, 0);
    }
    void setPlane(const ::Ice::ByteSeq& buf, ::Ice::Int z, ::Ice::Int c, ::Ice::Int t, const ::Ice::Context& __ctx)
    {
        setPlane(buf, z, c, t, &__ctx);
    }
    
private:

    void setPlane(const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    bool setPlane_async(const ::omero::api::AMI_RawPixelsStore_setPlanePtr&, const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int);
    bool setPlane_async(const ::omero::api::AMI_RawPixelsStore_setPlanePtr&, const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context&);

    void setStack(const ::Ice::ByteSeq& buf, ::Ice::Int z, ::Ice::Int c, ::Ice::Int t)
    {
        setStack(buf, z, c, t, 0);
    }
    void setStack(const ::Ice::ByteSeq& buf, ::Ice::Int z, ::Ice::Int c, ::Ice::Int t, const ::Ice::Context& __ctx)
    {
        setStack(buf, z, c, t, &__ctx);
    }
    
private:

    void setStack(const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    bool setStack_async(const ::omero::api::AMI_RawPixelsStore_setStackPtr&, const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int);
    bool setStack_async(const ::omero::api::AMI_RawPixelsStore_setStackPtr&, const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context&);

    void setTimepoint(const ::Ice::ByteSeq& buf, ::Ice::Int t)
    {
        setTimepoint(buf, t, 0);
    }
    void setTimepoint(const ::Ice::ByteSeq& buf, ::Ice::Int t, const ::Ice::Context& __ctx)
    {
        setTimepoint(buf, t, &__ctx);
    }
    
private:

    void setTimepoint(const ::Ice::ByteSeq&, ::Ice::Int, const ::Ice::Context*);
    
public:
    bool setTimepoint_async(const ::omero::api::AMI_RawPixelsStore_setTimepointPtr&, const ::Ice::ByteSeq&, ::Ice::Int);
    bool setTimepoint_async(const ::omero::api::AMI_RawPixelsStore_setTimepointPtr&, const ::Ice::ByteSeq&, ::Ice::Int, const ::Ice::Context&);

    ::Ice::Int getByteWidth()
    {
        return getByteWidth(0);
    }
    ::Ice::Int getByteWidth(const ::Ice::Context& __ctx)
    {
        return getByteWidth(&__ctx);
    }
    
private:

    ::Ice::Int getByteWidth(const ::Ice::Context*);
    
public:
    bool getByteWidth_async(const ::omero::api::AMI_RawPixelsStore_getByteWidthPtr&);
    bool getByteWidth_async(const ::omero::api::AMI_RawPixelsStore_getByteWidthPtr&, const ::Ice::Context&);

    bool isSigned()
    {
        return isSigned(0);
    }
    bool isSigned(const ::Ice::Context& __ctx)
    {
        return isSigned(&__ctx);
    }
    
private:

    bool isSigned(const ::Ice::Context*);
    
public:
    bool isSigned_async(const ::omero::api::AMI_RawPixelsStore_isSignedPtr&);
    bool isSigned_async(const ::omero::api::AMI_RawPixelsStore_isSignedPtr&, const ::Ice::Context&);

    bool isFloat()
    {
        return isFloat(0);
    }
    bool isFloat(const ::Ice::Context& __ctx)
    {
        return isFloat(&__ctx);
    }
    
private:

    bool isFloat(const ::Ice::Context*);
    
public:
    bool isFloat_async(const ::omero::api::AMI_RawPixelsStore_isFloatPtr&);
    bool isFloat_async(const ::omero::api::AMI_RawPixelsStore_isFloatPtr&, const ::Ice::Context&);

    ::Ice::ByteSeq calculateMessageDigest()
    {
        return calculateMessageDigest(0);
    }
    ::Ice::ByteSeq calculateMessageDigest(const ::Ice::Context& __ctx)
    {
        return calculateMessageDigest(&__ctx);
    }
    
private:

    ::Ice::ByteSeq calculateMessageDigest(const ::Ice::Context*);
    
public:
    bool calculateMessageDigest_async(const ::omero::api::AMI_RawPixelsStore_calculateMessageDigestPtr&);
    bool calculateMessageDigest_async(const ::omero::api::AMI_RawPixelsStore_calculateMessageDigestPtr&, const ::Ice::Context&);

    ::omero::model::PixelsPtr save()
    {
        return save(0);
    }
    ::omero::model::PixelsPtr save(const ::Ice::Context& __ctx)
    {
        return save(&__ctx);
    }
    
private:

    ::omero::model::PixelsPtr save(const ::Ice::Context*);
    
public:
    bool save_async(const ::omero::api::AMI_RawPixelsStore_savePtr&);
    bool save_async(const ::omero::api::AMI_RawPixelsStore_savePtr&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<RawPixelsStore> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawPixelsStore*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RawPixelsStore*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawPixelsStore> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawPixelsStore*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RawPixelsStore*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawPixelsStore> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawPixelsStore*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RawPixelsStore*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawPixelsStore> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawPixelsStore*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RawPixelsStore*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawPixelsStore> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawPixelsStore*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RawPixelsStore*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawPixelsStore> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawPixelsStore*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RawPixelsStore*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawPixelsStore> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawPixelsStore*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RawPixelsStore*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawPixelsStore> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawPixelsStore*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RawPixelsStore*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawPixelsStore> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawPixelsStore*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RawPixelsStore*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawPixelsStore> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawPixelsStore*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RawPixelsStore*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawPixelsStore> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawPixelsStore*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RawPixelsStore*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawPixelsStore> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawPixelsStore*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RawPixelsStore*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawPixelsStore> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawPixelsStore*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RawPixelsStore*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawPixelsStore> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawPixelsStore*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RawPixelsStore*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawPixelsStore> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawPixelsStore*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RawPixelsStore*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawPixelsStore> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawPixelsStore*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RawPixelsStore*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawPixelsStore> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawPixelsStore*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RawPixelsStore*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawPixelsStore> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawPixelsStore*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RawPixelsStore*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawPixelsStore> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawPixelsStore*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RawPixelsStore*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class RawPixelsStore : virtual public ::IceDelegate::omero::api::PyramidService
{
public:

    virtual void setPixelsId(::Ice::Long, bool, const ::Ice::Context*) = 0;

    virtual ::Ice::Long getPixelsId(const ::Ice::Context*) = 0;

    virtual ::std::string getPixelsPath(const ::Ice::Context*) = 0;

    virtual void prepare(const ::omero::sys::LongList&, const ::Ice::Context*) = 0;

    virtual ::Ice::Long getPlaneSize(const ::Ice::Context*) = 0;

    virtual ::Ice::Int getRowSize(const ::Ice::Context*) = 0;

    virtual ::Ice::Long getStackSize(const ::Ice::Context*) = 0;

    virtual ::Ice::Long getTimepointSize(const ::Ice::Context*) = 0;

    virtual ::Ice::Long getTotalSize(const ::Ice::Context*) = 0;

    virtual ::Ice::Long getRowOffset(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Long getPlaneOffset(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Long getStackOffset(::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Long getTimepointOffset(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::ByteSeq getTile(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::ByteSeq getHypercube(const ::omero::sys::IntList&, const ::omero::sys::IntList&, const ::omero::sys::IntList&, const ::Ice::Context*) = 0;

    virtual ::Ice::ByteSeq getRegion(::Ice::Int, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::Ice::ByteSeq getRow(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::ByteSeq getCol(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::ByteSeq getPlane(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::ByteSeq getPlaneRegion(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::ByteSeq getStack(::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::ByteSeq getTimepoint(::Ice::Int, const ::Ice::Context*) = 0;

    virtual void setTile(const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void setRegion(::Ice::Int, ::Ice::Long, const ::Ice::ByteSeq&, const ::Ice::Context*) = 0;

    virtual void setRow(const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void setPlane(const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void setStack(const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void setTimepoint(const ::Ice::ByteSeq&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getByteWidth(const ::Ice::Context*) = 0;

    virtual bool isSigned(const ::Ice::Context*) = 0;

    virtual bool isFloat(const ::Ice::Context*) = 0;

    virtual ::Ice::ByteSeq calculateMessageDigest(const ::Ice::Context*) = 0;

    virtual ::omero::model::PixelsPtr save(const ::Ice::Context*) = 0;
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

class RawPixelsStore : virtual public ::IceDelegate::omero::api::RawPixelsStore,
                       virtual public ::IceDelegateM::omero::api::PyramidService
{
public:

    virtual void setPixelsId(::Ice::Long, bool, const ::Ice::Context*);

    virtual ::Ice::Long getPixelsId(const ::Ice::Context*);

    virtual ::std::string getPixelsPath(const ::Ice::Context*);

    virtual void prepare(const ::omero::sys::LongList&, const ::Ice::Context*);

    virtual ::Ice::Long getPlaneSize(const ::Ice::Context*);

    virtual ::Ice::Int getRowSize(const ::Ice::Context*);

    virtual ::Ice::Long getStackSize(const ::Ice::Context*);

    virtual ::Ice::Long getTimepointSize(const ::Ice::Context*);

    virtual ::Ice::Long getTotalSize(const ::Ice::Context*);

    virtual ::Ice::Long getRowOffset(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Long getPlaneOffset(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Long getStackOffset(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Long getTimepointOffset(::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getTile(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getHypercube(const ::omero::sys::IntList&, const ::omero::sys::IntList&, const ::omero::sys::IntList&, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getRegion(::Ice::Int, ::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getRow(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getCol(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getPlane(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getPlaneRegion(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getStack(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getTimepoint(::Ice::Int, const ::Ice::Context*);

    virtual void setTile(const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void setRegion(::Ice::Int, ::Ice::Long, const ::Ice::ByteSeq&, const ::Ice::Context*);

    virtual void setRow(const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void setPlane(const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void setStack(const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void setTimepoint(const ::Ice::ByteSeq&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int getByteWidth(const ::Ice::Context*);

    virtual bool isSigned(const ::Ice::Context*);

    virtual bool isFloat(const ::Ice::Context*);

    virtual ::Ice::ByteSeq calculateMessageDigest(const ::Ice::Context*);

    virtual ::omero::model::PixelsPtr save(const ::Ice::Context*);
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

class RawPixelsStore : virtual public ::IceDelegate::omero::api::RawPixelsStore,
                       virtual public ::IceDelegateD::omero::api::PyramidService
{
public:

    virtual void setPixelsId(::Ice::Long, bool, const ::Ice::Context*);

    virtual ::Ice::Long getPixelsId(const ::Ice::Context*);

    virtual ::std::string getPixelsPath(const ::Ice::Context*);

    virtual void prepare(const ::omero::sys::LongList&, const ::Ice::Context*);

    virtual ::Ice::Long getPlaneSize(const ::Ice::Context*);

    virtual ::Ice::Int getRowSize(const ::Ice::Context*);

    virtual ::Ice::Long getStackSize(const ::Ice::Context*);

    virtual ::Ice::Long getTimepointSize(const ::Ice::Context*);

    virtual ::Ice::Long getTotalSize(const ::Ice::Context*);

    virtual ::Ice::Long getRowOffset(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Long getPlaneOffset(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Long getStackOffset(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Long getTimepointOffset(::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getTile(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getHypercube(const ::omero::sys::IntList&, const ::omero::sys::IntList&, const ::omero::sys::IntList&, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getRegion(::Ice::Int, ::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getRow(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getCol(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getPlane(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getPlaneRegion(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getStack(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getTimepoint(::Ice::Int, const ::Ice::Context*);

    virtual void setTile(const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void setRegion(::Ice::Int, ::Ice::Long, const ::Ice::ByteSeq&, const ::Ice::Context*);

    virtual void setRow(const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void setPlane(const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void setStack(const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void setTimepoint(const ::Ice::ByteSeq&, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int getByteWidth(const ::Ice::Context*);

    virtual bool isSigned(const ::Ice::Context*);

    virtual bool isFloat(const ::Ice::Context*);

    virtual ::Ice::ByteSeq calculateMessageDigest(const ::Ice::Context*);

    virtual ::omero::model::PixelsPtr save(const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace api
{

class RawPixelsStore : virtual public ::omero::api::PyramidService
{
public:

    typedef RawPixelsStorePrx ProxyType;
    typedef RawPixelsStorePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void setPixelsId_async(const ::omero::api::AMD_RawPixelsStore_setPixelsIdPtr&, ::Ice::Long, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPixelsId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getPixelsId_async(const ::omero::api::AMD_RawPixelsStore_getPixelsIdPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPixelsId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getPixelsPath_async(const ::omero::api::AMD_RawPixelsStore_getPixelsPathPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPixelsPath(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void prepare_async(const ::omero::api::AMD_RawPixelsStore_preparePtr&, const ::omero::sys::LongList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___prepare(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getPlaneSize_async(const ::omero::api::AMD_RawPixelsStore_getPlaneSizePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPlaneSize(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getRowSize_async(const ::omero::api::AMD_RawPixelsStore_getRowSizePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRowSize(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getStackSize_async(const ::omero::api::AMD_RawPixelsStore_getStackSizePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getStackSize(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getTimepointSize_async(const ::omero::api::AMD_RawPixelsStore_getTimepointSizePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getTimepointSize(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getTotalSize_async(const ::omero::api::AMD_RawPixelsStore_getTotalSizePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getTotalSize(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getRowOffset_async(const ::omero::api::AMD_RawPixelsStore_getRowOffsetPtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRowOffset(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getPlaneOffset_async(const ::omero::api::AMD_RawPixelsStore_getPlaneOffsetPtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPlaneOffset(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getStackOffset_async(const ::omero::api::AMD_RawPixelsStore_getStackOffsetPtr&, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getStackOffset(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getTimepointOffset_async(const ::omero::api::AMD_RawPixelsStore_getTimepointOffsetPtr&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getTimepointOffset(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getTile_async(const ::omero::api::AMD_RawPixelsStore_getTilePtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getTile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getHypercube_async(const ::omero::api::AMD_RawPixelsStore_getHypercubePtr&, const ::omero::sys::IntList&, const ::omero::sys::IntList&, const ::omero::sys::IntList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getHypercube(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getRegion_async(const ::omero::api::AMD_RawPixelsStore_getRegionPtr&, ::Ice::Int, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRegion(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getRow_async(const ::omero::api::AMD_RawPixelsStore_getRowPtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRow(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getCol_async(const ::omero::api::AMD_RawPixelsStore_getColPtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getCol(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getPlane_async(const ::omero::api::AMD_RawPixelsStore_getPlanePtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPlane(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getPlaneRegion_async(const ::omero::api::AMD_RawPixelsStore_getPlaneRegionPtr&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPlaneRegion(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getStack_async(const ::omero::api::AMD_RawPixelsStore_getStackPtr&, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getStack(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getTimepoint_async(const ::omero::api::AMD_RawPixelsStore_getTimepointPtr&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getTimepoint(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setTile_async(const ::omero::api::AMD_RawPixelsStore_setTilePtr&, const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setTile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setRegion_async(const ::omero::api::AMD_RawPixelsStore_setRegionPtr&, ::Ice::Int, ::Ice::Long, const ::Ice::ByteSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setRegion(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setRow_async(const ::omero::api::AMD_RawPixelsStore_setRowPtr&, const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setRow(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPlane_async(const ::omero::api::AMD_RawPixelsStore_setPlanePtr&, const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPlane(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setStack_async(const ::omero::api::AMD_RawPixelsStore_setStackPtr&, const ::Ice::ByteSeq&, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setStack(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setTimepoint_async(const ::omero::api::AMD_RawPixelsStore_setTimepointPtr&, const ::Ice::ByteSeq&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setTimepoint(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getByteWidth_async(const ::omero::api::AMD_RawPixelsStore_getByteWidthPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getByteWidth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void isSigned_async(const ::omero::api::AMD_RawPixelsStore_isSignedPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isSigned(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void isFloat_async(const ::omero::api::AMD_RawPixelsStore_isFloatPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isFloat(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void calculateMessageDigest_async(const ::omero::api::AMD_RawPixelsStore_calculateMessageDigestPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___calculateMessageDigest(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void save_async(const ::omero::api::AMD_RawPixelsStore_savePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___save(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
