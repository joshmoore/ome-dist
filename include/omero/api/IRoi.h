// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `IRoi.ice'

#ifndef __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_IRoi_h__
#define __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_IRoi_h__

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

class RoiOptions;

class RoiResult;

class ShapePoints;

class ShapeStats;

class RoiStats;

class IRoi;

}

}

}

namespace omero
{

namespace api
{

class RoiOptions;
bool operator==(const RoiOptions&, const RoiOptions&);
bool operator<(const RoiOptions&, const RoiOptions&);

class RoiResult;
bool operator==(const RoiResult&, const RoiResult&);
bool operator<(const RoiResult&, const RoiResult&);

class ShapePoints;
bool operator==(const ShapePoints&, const ShapePoints&);
bool operator<(const ShapePoints&, const ShapePoints&);

class ShapeStats;
bool operator==(const ShapeStats&, const ShapeStats&);
bool operator<(const ShapeStats&, const ShapeStats&);

class RoiStats;
bool operator==(const RoiStats&, const RoiStats&);
bool operator<(const RoiStats&, const RoiStats&);

class IRoi;
bool operator==(const IRoi&, const IRoi&);
bool operator<(const IRoi&, const IRoi&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::api::RoiOptions*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::RoiOptions*);

::Ice::Object* upCast(::omero::api::RoiResult*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::RoiResult*);

::Ice::Object* upCast(::omero::api::ShapePoints*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::ShapePoints*);

::Ice::Object* upCast(::omero::api::ShapeStats*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::ShapeStats*);

::Ice::Object* upCast(::omero::api::RoiStats*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::RoiStats*);

::Ice::Object* upCast(::omero::api::IRoi*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::IRoi*);

}

namespace omero
{

namespace api
{

typedef ::IceInternal::Handle< ::omero::api::RoiOptions> RoiOptionsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::RoiOptions> RoiOptionsPrx;

void __read(::IceInternal::BasicStream*, RoiOptionsPrx&);
void __patch__RoiOptionsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::RoiResult> RoiResultPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::RoiResult> RoiResultPrx;

void __read(::IceInternal::BasicStream*, RoiResultPrx&);
void __patch__RoiResultPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::ShapePoints> ShapePointsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::ShapePoints> ShapePointsPrx;

void __read(::IceInternal::BasicStream*, ShapePointsPrx&);
void __patch__ShapePointsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::ShapeStats> ShapeStatsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::ShapeStats> ShapeStatsPrx;

void __read(::IceInternal::BasicStream*, ShapeStatsPrx&);
void __patch__ShapeStatsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::RoiStats> RoiStatsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::RoiStats> RoiStatsPrx;

void __read(::IceInternal::BasicStream*, RoiStatsPrx&);
void __patch__RoiStatsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::IRoi> IRoiPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::IRoi> IRoiPrx;

void __read(::IceInternal::BasicStream*, IRoiPrx&);
void __patch__IRoiPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace api
{

typedef ::std::vector< ::omero::api::ShapeStatsPtr> ShapeStatsList;
void __writeShapeStatsList(::IceInternal::BasicStream*, const ::omero::api::ShapeStatsPtr*, const ::omero::api::ShapeStatsPtr*);
void __readShapeStatsList(::IceInternal::BasicStream*, ShapeStatsList&);

typedef ::std::map< ::Ice::Long, ::omero::api::RoiResultPtr> LongRoiResultMap;
void __writeLongRoiResultMap(::IceInternal::BasicStream*, const LongRoiResultMap&);
void __readLongRoiResultMap(::IceInternal::BasicStream*, LongRoiResultMap&);

}

}

namespace omero
{

namespace api
{

class AMI_IRoi_findByRoi : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::RoiResultPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRoiPrx&, ::Ice::Long, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRoi_findByRoi> AMI_IRoi_findByRoiPtr;

class AMD_IRoi_findByRoi : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::RoiResultPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRoi_findByRoi> AMD_IRoi_findByRoiPtr;

class AMI_IRoi_findByImage : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::RoiResultPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRoiPrx&, ::Ice::Long, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRoi_findByImage> AMI_IRoi_findByImagePtr;

class AMD_IRoi_findByImage : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::RoiResultPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRoi_findByImage> AMD_IRoi_findByImagePtr;

class AMI_IRoi_findByPlane : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::RoiResultPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRoiPrx&, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRoi_findByPlane> AMI_IRoi_findByPlanePtr;

class AMD_IRoi_findByPlane : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::RoiResultPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRoi_findByPlane> AMD_IRoi_findByPlanePtr;

class AMI_IRoi_getPoints : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::ShapePointsPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRoiPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRoi_getPoints> AMI_IRoi_getPointsPtr;

class AMD_IRoi_getPoints : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::ShapePointsPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRoi_getPoints> AMD_IRoi_getPointsPtr;

class AMI_IRoi_getRoiStats : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::RoiStatsPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRoiPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRoi_getRoiStats> AMI_IRoi_getRoiStatsPtr;

class AMD_IRoi_getRoiStats : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::RoiStatsPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRoi_getRoiStats> AMD_IRoi_getRoiStatsPtr;

class AMI_IRoi_getShapeStats : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::ShapeStatsPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRoiPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRoi_getShapeStats> AMI_IRoi_getShapeStatsPtr;

class AMD_IRoi_getShapeStats : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::ShapeStatsPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRoi_getShapeStats> AMD_IRoi_getShapeStatsPtr;

class AMI_IRoi_getShapeStatsList : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::ShapeStatsList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRoiPrx&, const ::omero::api::LongList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRoi_getShapeStatsList> AMI_IRoi_getShapeStatsListPtr;

class AMD_IRoi_getShapeStatsList : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::ShapeStatsList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRoi_getShapeStatsList> AMD_IRoi_getShapeStatsListPtr;

class AMI_IRoi_getRoiMeasurements : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::AnnotationList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRoiPrx&, ::Ice::Long, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRoi_getRoiMeasurements> AMI_IRoi_getRoiMeasurementsPtr;

class AMD_IRoi_getRoiMeasurements : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::AnnotationList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRoi_getRoiMeasurements> AMD_IRoi_getRoiMeasurementsPtr;

class AMI_IRoi_getMeasuredRois : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::RoiResultPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRoiPrx&, ::Ice::Long, ::Ice::Long, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRoi_getMeasuredRois> AMI_IRoi_getMeasuredRoisPtr;

class AMD_IRoi_getMeasuredRois : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::RoiResultPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRoi_getMeasuredRois> AMD_IRoi_getMeasuredRoisPtr;

class AMI_IRoi_getMeasuredRoisMap : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::LongRoiResultMap&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRoiPrx&, ::Ice::Long, const ::omero::api::LongList&, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRoi_getMeasuredRoisMap> AMI_IRoi_getMeasuredRoisMapPtr;

class AMD_IRoi_getMeasuredRoisMap : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::LongRoiResultMap&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRoi_getMeasuredRoisMap> AMD_IRoi_getMeasuredRoisMapPtr;

class AMI_IRoi_getTable : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::grid::TablePrx&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRoiPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRoi_getTable> AMI_IRoi_getTablePtr;

class AMD_IRoi_getTable : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::grid::TablePrx&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRoi_getTable> AMD_IRoi_getTablePtr;

class AMI_IRoi_uploadMask : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IRoiPrx&, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::ByteSeq&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IRoi_uploadMask> AMI_IRoi_uploadMaskPtr;

class AMD_IRoi_uploadMask : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IRoi_uploadMask> AMD_IRoi_uploadMaskPtr;

}

}

namespace IceAsync
{

namespace omero
{

namespace api
{

class AMD_IRoi_findByRoi : public ::omero::api::AMD_IRoi_findByRoi, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRoi_findByRoi(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::RoiResultPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRoi_findByImage : public ::omero::api::AMD_IRoi_findByImage, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRoi_findByImage(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::RoiResultPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRoi_findByPlane : public ::omero::api::AMD_IRoi_findByPlane, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRoi_findByPlane(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::RoiResultPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRoi_getPoints : public ::omero::api::AMD_IRoi_getPoints, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRoi_getPoints(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::ShapePointsPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRoi_getRoiStats : public ::omero::api::AMD_IRoi_getRoiStats, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRoi_getRoiStats(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::RoiStatsPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRoi_getShapeStats : public ::omero::api::AMD_IRoi_getShapeStats, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRoi_getShapeStats(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::ShapeStatsPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRoi_getShapeStatsList : public ::omero::api::AMD_IRoi_getShapeStatsList, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRoi_getShapeStatsList(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::ShapeStatsList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRoi_getRoiMeasurements : public ::omero::api::AMD_IRoi_getRoiMeasurements, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRoi_getRoiMeasurements(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::AnnotationList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRoi_getMeasuredRois : public ::omero::api::AMD_IRoi_getMeasuredRois, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRoi_getMeasuredRois(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::RoiResultPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRoi_getMeasuredRoisMap : public ::omero::api::AMD_IRoi_getMeasuredRoisMap, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRoi_getMeasuredRoisMap(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::LongRoiResultMap&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRoi_getTable : public ::omero::api::AMD_IRoi_getTable, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRoi_getTable(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::grid::TablePrx&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IRoi_uploadMask : public ::omero::api::AMD_IRoi_uploadMask, public ::IceInternal::IncomingAsync
{
public:

    AMD_IRoi_uploadMask(::IceInternal::Incoming&);

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

class RoiOptions : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<RoiOptions> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiOptions*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RoiOptions*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiOptions> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiOptions*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RoiOptions*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiOptions> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiOptions*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RoiOptions*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiOptions> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiOptions*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RoiOptions*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiOptions> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiOptions*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RoiOptions*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiOptions> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiOptions*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RoiOptions*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiOptions> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiOptions*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RoiOptions*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiOptions> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiOptions*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RoiOptions*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiOptions> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiOptions*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RoiOptions*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiOptions> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiOptions*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RoiOptions*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiOptions> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiOptions*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RoiOptions*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiOptions> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiOptions*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RoiOptions*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiOptions> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiOptions*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RoiOptions*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiOptions> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiOptions*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RoiOptions*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiOptions> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiOptions*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RoiOptions*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiOptions> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiOptions*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RoiOptions*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiOptions> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiOptions*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RoiOptions*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiOptions> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiOptions*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RoiOptions*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiOptions> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiOptions*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RoiOptions*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class RoiResult : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<RoiResult> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiResult*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RoiResult*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiResult> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiResult*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RoiResult*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiResult> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiResult*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RoiResult*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiResult> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiResult*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RoiResult*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiResult> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiResult*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RoiResult*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiResult> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiResult*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RoiResult*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiResult> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiResult*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RoiResult*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiResult> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiResult*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RoiResult*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiResult> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiResult*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RoiResult*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiResult> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiResult*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RoiResult*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiResult> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiResult*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RoiResult*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiResult> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiResult*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RoiResult*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiResult> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiResult*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RoiResult*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiResult> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiResult*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RoiResult*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiResult> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiResult*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RoiResult*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiResult> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiResult*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RoiResult*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiResult> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiResult*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RoiResult*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiResult> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiResult*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RoiResult*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiResult> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiResult*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RoiResult*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class ShapePoints : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<ShapePoints> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapePoints*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ShapePoints*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapePoints> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapePoints*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ShapePoints*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapePoints> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapePoints*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ShapePoints*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapePoints> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapePoints*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ShapePoints*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapePoints> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapePoints*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ShapePoints*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapePoints> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapePoints*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ShapePoints*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapePoints> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapePoints*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ShapePoints*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapePoints> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapePoints*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ShapePoints*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapePoints> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapePoints*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ShapePoints*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapePoints> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapePoints*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ShapePoints*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapePoints> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapePoints*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ShapePoints*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapePoints> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapePoints*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ShapePoints*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapePoints> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapePoints*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ShapePoints*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapePoints> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapePoints*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ShapePoints*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapePoints> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapePoints*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ShapePoints*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapePoints> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapePoints*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ShapePoints*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapePoints> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapePoints*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ShapePoints*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapePoints> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapePoints*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ShapePoints*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapePoints> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapePoints*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ShapePoints*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class ShapeStats : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<ShapeStats> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapeStats*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ShapeStats*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapeStats> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapeStats*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ShapeStats*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapeStats> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapeStats*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ShapeStats*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapeStats> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapeStats*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ShapeStats*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapeStats> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapeStats*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ShapeStats*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapeStats> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapeStats*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ShapeStats*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapeStats> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapeStats*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ShapeStats*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapeStats> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapeStats*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ShapeStats*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapeStats> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapeStats*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ShapeStats*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapeStats> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapeStats*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ShapeStats*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapeStats> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapeStats*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ShapeStats*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapeStats> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapeStats*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ShapeStats*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapeStats> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapeStats*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ShapeStats*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapeStats> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapeStats*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ShapeStats*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapeStats> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapeStats*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ShapeStats*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapeStats> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapeStats*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ShapeStats*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapeStats> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapeStats*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ShapeStats*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapeStats> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapeStats*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ShapeStats*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShapeStats> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShapeStats*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ShapeStats*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class RoiStats : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<RoiStats> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiStats*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RoiStats*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiStats> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiStats*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RoiStats*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiStats> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiStats*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RoiStats*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiStats> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiStats*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RoiStats*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiStats> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiStats*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RoiStats*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiStats> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiStats*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RoiStats*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiStats> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiStats*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RoiStats*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiStats> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiStats*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RoiStats*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiStats> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiStats*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RoiStats*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiStats> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiStats*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RoiStats*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiStats> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiStats*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RoiStats*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiStats> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiStats*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RoiStats*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiStats> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiStats*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RoiStats*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiStats> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiStats*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RoiStats*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiStats> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiStats*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RoiStats*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiStats> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiStats*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RoiStats*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiStats> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiStats*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RoiStats*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiStats> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiStats*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RoiStats*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiStats> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiStats*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RoiStats*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class IRoi : virtual public ::IceProxy::omero::api::ServiceInterface
{
public:

    ::omero::api::RoiResultPtr findByRoi(::Ice::Long roiId, const ::omero::api::RoiOptionsPtr& opts)
    {
        return findByRoi(roiId, opts, 0);
    }
    ::omero::api::RoiResultPtr findByRoi(::Ice::Long roiId, const ::omero::api::RoiOptionsPtr& opts, const ::Ice::Context& __ctx)
    {
        return findByRoi(roiId, opts, &__ctx);
    }
    
private:

    ::omero::api::RoiResultPtr findByRoi(::Ice::Long, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context*);
    
public:
    bool findByRoi_async(const ::omero::api::AMI_IRoi_findByRoiPtr&, ::Ice::Long, const ::omero::api::RoiOptionsPtr&);
    bool findByRoi_async(const ::omero::api::AMI_IRoi_findByRoiPtr&, ::Ice::Long, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context&);

    ::omero::api::RoiResultPtr findByImage(::Ice::Long imageId, const ::omero::api::RoiOptionsPtr& opts)
    {
        return findByImage(imageId, opts, 0);
    }
    ::omero::api::RoiResultPtr findByImage(::Ice::Long imageId, const ::omero::api::RoiOptionsPtr& opts, const ::Ice::Context& __ctx)
    {
        return findByImage(imageId, opts, &__ctx);
    }
    
private:

    ::omero::api::RoiResultPtr findByImage(::Ice::Long, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context*);
    
public:
    bool findByImage_async(const ::omero::api::AMI_IRoi_findByImagePtr&, ::Ice::Long, const ::omero::api::RoiOptionsPtr&);
    bool findByImage_async(const ::omero::api::AMI_IRoi_findByImagePtr&, ::Ice::Long, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context&);

    ::omero::api::RoiResultPtr findByPlane(::Ice::Long imageId, ::Ice::Int z, ::Ice::Int t, const ::omero::api::RoiOptionsPtr& opts)
    {
        return findByPlane(imageId, z, t, opts, 0);
    }
    ::omero::api::RoiResultPtr findByPlane(::Ice::Long imageId, ::Ice::Int z, ::Ice::Int t, const ::omero::api::RoiOptionsPtr& opts, const ::Ice::Context& __ctx)
    {
        return findByPlane(imageId, z, t, opts, &__ctx);
    }
    
private:

    ::omero::api::RoiResultPtr findByPlane(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context*);
    
public:
    bool findByPlane_async(const ::omero::api::AMI_IRoi_findByPlanePtr&, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::omero::api::RoiOptionsPtr&);
    bool findByPlane_async(const ::omero::api::AMI_IRoi_findByPlanePtr&, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context&);

    ::omero::api::ShapePointsPtr getPoints(::Ice::Long shapeId)
    {
        return getPoints(shapeId, 0);
    }
    ::omero::api::ShapePointsPtr getPoints(::Ice::Long shapeId, const ::Ice::Context& __ctx)
    {
        return getPoints(shapeId, &__ctx);
    }
    
private:

    ::omero::api::ShapePointsPtr getPoints(::Ice::Long, const ::Ice::Context*);
    
public:
    bool getPoints_async(const ::omero::api::AMI_IRoi_getPointsPtr&, ::Ice::Long);
    bool getPoints_async(const ::omero::api::AMI_IRoi_getPointsPtr&, ::Ice::Long, const ::Ice::Context&);

    ::omero::api::RoiStatsPtr getRoiStats(::Ice::Long roiId)
    {
        return getRoiStats(roiId, 0);
    }
    ::omero::api::RoiStatsPtr getRoiStats(::Ice::Long roiId, const ::Ice::Context& __ctx)
    {
        return getRoiStats(roiId, &__ctx);
    }
    
private:

    ::omero::api::RoiStatsPtr getRoiStats(::Ice::Long, const ::Ice::Context*);
    
public:
    bool getRoiStats_async(const ::omero::api::AMI_IRoi_getRoiStatsPtr&, ::Ice::Long);
    bool getRoiStats_async(const ::omero::api::AMI_IRoi_getRoiStatsPtr&, ::Ice::Long, const ::Ice::Context&);

    ::omero::api::ShapeStatsPtr getShapeStats(::Ice::Long shapeId)
    {
        return getShapeStats(shapeId, 0);
    }
    ::omero::api::ShapeStatsPtr getShapeStats(::Ice::Long shapeId, const ::Ice::Context& __ctx)
    {
        return getShapeStats(shapeId, &__ctx);
    }
    
private:

    ::omero::api::ShapeStatsPtr getShapeStats(::Ice::Long, const ::Ice::Context*);
    
public:
    bool getShapeStats_async(const ::omero::api::AMI_IRoi_getShapeStatsPtr&, ::Ice::Long);
    bool getShapeStats_async(const ::omero::api::AMI_IRoi_getShapeStatsPtr&, ::Ice::Long, const ::Ice::Context&);

    ::omero::api::ShapeStatsList getShapeStatsList(const ::omero::api::LongList& shapeIdList)
    {
        return getShapeStatsList(shapeIdList, 0);
    }
    ::omero::api::ShapeStatsList getShapeStatsList(const ::omero::api::LongList& shapeIdList, const ::Ice::Context& __ctx)
    {
        return getShapeStatsList(shapeIdList, &__ctx);
    }
    
private:

    ::omero::api::ShapeStatsList getShapeStatsList(const ::omero::api::LongList&, const ::Ice::Context*);
    
public:
    bool getShapeStatsList_async(const ::omero::api::AMI_IRoi_getShapeStatsListPtr&, const ::omero::api::LongList&);
    bool getShapeStatsList_async(const ::omero::api::AMI_IRoi_getShapeStatsListPtr&, const ::omero::api::LongList&, const ::Ice::Context&);

    ::omero::api::AnnotationList getRoiMeasurements(::Ice::Long imageId, const ::omero::api::RoiOptionsPtr& opts)
    {
        return getRoiMeasurements(imageId, opts, 0);
    }
    ::omero::api::AnnotationList getRoiMeasurements(::Ice::Long imageId, const ::omero::api::RoiOptionsPtr& opts, const ::Ice::Context& __ctx)
    {
        return getRoiMeasurements(imageId, opts, &__ctx);
    }
    
private:

    ::omero::api::AnnotationList getRoiMeasurements(::Ice::Long, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context*);
    
public:
    bool getRoiMeasurements_async(const ::omero::api::AMI_IRoi_getRoiMeasurementsPtr&, ::Ice::Long, const ::omero::api::RoiOptionsPtr&);
    bool getRoiMeasurements_async(const ::omero::api::AMI_IRoi_getRoiMeasurementsPtr&, ::Ice::Long, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context&);

    ::omero::api::RoiResultPtr getMeasuredRois(::Ice::Long imageId, ::Ice::Long annotationId, const ::omero::api::RoiOptionsPtr& opts)
    {
        return getMeasuredRois(imageId, annotationId, opts, 0);
    }
    ::omero::api::RoiResultPtr getMeasuredRois(::Ice::Long imageId, ::Ice::Long annotationId, const ::omero::api::RoiOptionsPtr& opts, const ::Ice::Context& __ctx)
    {
        return getMeasuredRois(imageId, annotationId, opts, &__ctx);
    }
    
private:

    ::omero::api::RoiResultPtr getMeasuredRois(::Ice::Long, ::Ice::Long, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context*);
    
public:
    bool getMeasuredRois_async(const ::omero::api::AMI_IRoi_getMeasuredRoisPtr&, ::Ice::Long, ::Ice::Long, const ::omero::api::RoiOptionsPtr&);
    bool getMeasuredRois_async(const ::omero::api::AMI_IRoi_getMeasuredRoisPtr&, ::Ice::Long, ::Ice::Long, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context&);

    ::omero::api::LongRoiResultMap getMeasuredRoisMap(::Ice::Long imageId, const ::omero::api::LongList& annotationIds, const ::omero::api::RoiOptionsPtr& opts)
    {
        return getMeasuredRoisMap(imageId, annotationIds, opts, 0);
    }
    ::omero::api::LongRoiResultMap getMeasuredRoisMap(::Ice::Long imageId, const ::omero::api::LongList& annotationIds, const ::omero::api::RoiOptionsPtr& opts, const ::Ice::Context& __ctx)
    {
        return getMeasuredRoisMap(imageId, annotationIds, opts, &__ctx);
    }
    
private:

    ::omero::api::LongRoiResultMap getMeasuredRoisMap(::Ice::Long, const ::omero::api::LongList&, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context*);
    
public:
    bool getMeasuredRoisMap_async(const ::omero::api::AMI_IRoi_getMeasuredRoisMapPtr&, ::Ice::Long, const ::omero::api::LongList&, const ::omero::api::RoiOptionsPtr&);
    bool getMeasuredRoisMap_async(const ::omero::api::AMI_IRoi_getMeasuredRoisMapPtr&, ::Ice::Long, const ::omero::api::LongList&, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context&);

    ::omero::grid::TablePrx getTable(::Ice::Long annotationId)
    {
        return getTable(annotationId, 0);
    }
    ::omero::grid::TablePrx getTable(::Ice::Long annotationId, const ::Ice::Context& __ctx)
    {
        return getTable(annotationId, &__ctx);
    }
    
private:

    ::omero::grid::TablePrx getTable(::Ice::Long, const ::Ice::Context*);
    
public:
    bool getTable_async(const ::omero::api::AMI_IRoi_getTablePtr&, ::Ice::Long);
    bool getTable_async(const ::omero::api::AMI_IRoi_getTablePtr&, ::Ice::Long, const ::Ice::Context&);

    void uploadMask(::Ice::Long roiId, ::Ice::Int z, ::Ice::Int t, const ::Ice::ByteSeq& bytes)
    {
        uploadMask(roiId, z, t, bytes, 0);
    }
    void uploadMask(::Ice::Long roiId, ::Ice::Int z, ::Ice::Int t, const ::Ice::ByteSeq& bytes, const ::Ice::Context& __ctx)
    {
        uploadMask(roiId, z, t, bytes, &__ctx);
    }
    
private:

    void uploadMask(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::ByteSeq&, const ::Ice::Context*);
    
public:
    bool uploadMask_async(const ::omero::api::AMI_IRoi_uploadMaskPtr&, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::ByteSeq&);
    bool uploadMask_async(const ::omero::api::AMI_IRoi_uploadMaskPtr&, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::ByteSeq&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<IRoi> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRoi*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<IRoi*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRoi> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRoi*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<IRoi*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRoi> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRoi*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<IRoi*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRoi> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRoi*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<IRoi*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRoi> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRoi*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<IRoi*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRoi> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRoi*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<IRoi*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRoi> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRoi*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<IRoi*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRoi> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRoi*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<IRoi*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRoi> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRoi*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<IRoi*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRoi> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRoi*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<IRoi*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRoi> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRoi*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<IRoi*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRoi> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRoi*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<IRoi*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRoi> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRoi*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<IRoi*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRoi> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRoi*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<IRoi*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRoi> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRoi*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<IRoi*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRoi> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRoi*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<IRoi*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRoi> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRoi*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<IRoi*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRoi> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRoi*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<IRoi*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IRoi> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IRoi*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<IRoi*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class RoiOptions : virtual public ::IceDelegate::Ice::Object
{
public:
};

class RoiResult : virtual public ::IceDelegate::Ice::Object
{
public:
};

class ShapePoints : virtual public ::IceDelegate::Ice::Object
{
public:
};

class ShapeStats : virtual public ::IceDelegate::Ice::Object
{
public:
};

class RoiStats : virtual public ::IceDelegate::Ice::Object
{
public:
};

class IRoi : virtual public ::IceDelegate::omero::api::ServiceInterface
{
public:

    virtual ::omero::api::RoiResultPtr findByRoi(::Ice::Long, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::RoiResultPtr findByImage(::Ice::Long, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::RoiResultPtr findByPlane(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::ShapePointsPtr getPoints(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::api::RoiStatsPtr getRoiStats(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::api::ShapeStatsPtr getShapeStats(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::api::ShapeStatsList getShapeStatsList(const ::omero::api::LongList&, const ::Ice::Context*) = 0;

    virtual ::omero::api::AnnotationList getRoiMeasurements(::Ice::Long, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::RoiResultPtr getMeasuredRois(::Ice::Long, ::Ice::Long, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::LongRoiResultMap getMeasuredRoisMap(::Ice::Long, const ::omero::api::LongList&, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::grid::TablePrx getTable(::Ice::Long, const ::Ice::Context*) = 0;

    virtual void uploadMask(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::ByteSeq&, const ::Ice::Context*) = 0;
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

class RoiOptions : virtual public ::IceDelegate::omero::api::RoiOptions,
                   virtual public ::IceDelegateM::Ice::Object
{
public:
};

class RoiResult : virtual public ::IceDelegate::omero::api::RoiResult,
                  virtual public ::IceDelegateM::Ice::Object
{
public:
};

class ShapePoints : virtual public ::IceDelegate::omero::api::ShapePoints,
                    virtual public ::IceDelegateM::Ice::Object
{
public:
};

class ShapeStats : virtual public ::IceDelegate::omero::api::ShapeStats,
                   virtual public ::IceDelegateM::Ice::Object
{
public:
};

class RoiStats : virtual public ::IceDelegate::omero::api::RoiStats,
                 virtual public ::IceDelegateM::Ice::Object
{
public:
};

class IRoi : virtual public ::IceDelegate::omero::api::IRoi,
             virtual public ::IceDelegateM::omero::api::ServiceInterface
{
public:

    virtual ::omero::api::RoiResultPtr findByRoi(::Ice::Long, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context*);

    virtual ::omero::api::RoiResultPtr findByImage(::Ice::Long, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context*);

    virtual ::omero::api::RoiResultPtr findByPlane(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context*);

    virtual ::omero::api::ShapePointsPtr getPoints(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::RoiStatsPtr getRoiStats(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::ShapeStatsPtr getShapeStats(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::ShapeStatsList getShapeStatsList(const ::omero::api::LongList&, const ::Ice::Context*);

    virtual ::omero::api::AnnotationList getRoiMeasurements(::Ice::Long, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context*);

    virtual ::omero::api::RoiResultPtr getMeasuredRois(::Ice::Long, ::Ice::Long, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context*);

    virtual ::omero::api::LongRoiResultMap getMeasuredRoisMap(::Ice::Long, const ::omero::api::LongList&, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context*);

    virtual ::omero::grid::TablePrx getTable(::Ice::Long, const ::Ice::Context*);

    virtual void uploadMask(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::ByteSeq&, const ::Ice::Context*);
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

class RoiOptions : virtual public ::IceDelegate::omero::api::RoiOptions,
                   virtual public ::IceDelegateD::Ice::Object
{
public:
};

class RoiResult : virtual public ::IceDelegate::omero::api::RoiResult,
                  virtual public ::IceDelegateD::Ice::Object
{
public:
};

class ShapePoints : virtual public ::IceDelegate::omero::api::ShapePoints,
                    virtual public ::IceDelegateD::Ice::Object
{
public:
};

class ShapeStats : virtual public ::IceDelegate::omero::api::ShapeStats,
                   virtual public ::IceDelegateD::Ice::Object
{
public:
};

class RoiStats : virtual public ::IceDelegate::omero::api::RoiStats,
                 virtual public ::IceDelegateD::Ice::Object
{
public:
};

class IRoi : virtual public ::IceDelegate::omero::api::IRoi,
             virtual public ::IceDelegateD::omero::api::ServiceInterface
{
public:

    virtual ::omero::api::RoiResultPtr findByRoi(::Ice::Long, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context*);

    virtual ::omero::api::RoiResultPtr findByImage(::Ice::Long, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context*);

    virtual ::omero::api::RoiResultPtr findByPlane(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context*);

    virtual ::omero::api::ShapePointsPtr getPoints(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::RoiStatsPtr getRoiStats(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::ShapeStatsPtr getShapeStats(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::ShapeStatsList getShapeStatsList(const ::omero::api::LongList&, const ::Ice::Context*);

    virtual ::omero::api::AnnotationList getRoiMeasurements(::Ice::Long, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context*);

    virtual ::omero::api::RoiResultPtr getMeasuredRois(::Ice::Long, ::Ice::Long, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context*);

    virtual ::omero::api::LongRoiResultMap getMeasuredRoisMap(::Ice::Long, const ::omero::api::LongList&, const ::omero::api::RoiOptionsPtr&, const ::Ice::Context*);

    virtual ::omero::grid::TablePrx getTable(::Ice::Long, const ::Ice::Context*);

    virtual void uploadMask(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::ByteSeq&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace api
{

class RoiOptions : virtual public ::Ice::Object
{
public:

    typedef RoiOptionsPrx ProxyType;
    typedef RoiOptionsPtr PointerType;
    
    RoiOptions() {}
    RoiOptions(const ::omero::api::StringSet&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RLongPtr&, const ::omero::RLongPtr&, const ::omero::RStringPtr&);
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

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~RoiOptions() {}

    friend class RoiOptions__staticInit;

public:

    ::omero::api::StringSet shapes;

    ::omero::RIntPtr limit;

    ::omero::RIntPtr offset;

    ::omero::RLongPtr userId;

    ::omero::RLongPtr groupId;

    ::omero::RStringPtr _cpp_namespace;
};

class RoiOptions__staticInit
{
public:

    ::omero::api::RoiOptions _init;
};

static RoiOptions__staticInit _RoiOptions_init;

class RoiResult : virtual public ::Ice::Object
{
public:

    typedef RoiResultPrx ProxyType;
    typedef RoiResultPtr PointerType;
    
    RoiResult() {}
    RoiResult(const ::omero::api::RoiOptionsPtr&, const ::omero::api::RoiList&, const ::omero::api::IntShapeListMap&, const ::omero::api::IntShapeListMap&, const ::omero::api::StringShapeListMap&, const ::omero::api::StringStringMap&);
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

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~RoiResult() {}

public:

    ::omero::api::RoiOptionsPtr opts;

    ::omero::api::RoiList rois;

    ::omero::api::IntShapeListMap byZ;

    ::omero::api::IntShapeListMap byT;

    ::omero::api::StringShapeListMap byG;

    ::omero::api::StringStringMap groups;
};

class ShapePoints : virtual public ::Ice::Object
{
public:

    typedef ShapePointsPrx ProxyType;
    typedef ShapePointsPtr PointerType;
    
    ShapePoints() {}
    ShapePoints(const ::omero::api::IntegerArray&, const ::omero::api::IntegerArray&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~ShapePoints() {}

public:

    ::omero::api::IntegerArray x;

    ::omero::api::IntegerArray y;
};

class ShapeStats : virtual public ::Ice::Object
{
public:

    typedef ShapeStatsPrx ProxyType;
    typedef ShapeStatsPtr PointerType;
    
    ShapeStats() {}
    ShapeStats(::Ice::Long, const ::omero::api::LongArray&, const ::omero::api::LongArray&, const ::omero::api::DoubleArray&, const ::omero::api::DoubleArray&, const ::omero::api::DoubleArray&, const ::omero::api::DoubleArray&, const ::omero::api::DoubleArray&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~ShapeStats() {}

public:

    ::Ice::Long shapeId;

    ::omero::api::LongArray channelIds;

    ::omero::api::LongArray pointsCount;

    ::omero::api::DoubleArray min;

    ::omero::api::DoubleArray max;

    ::omero::api::DoubleArray sum;

    ::omero::api::DoubleArray mean;

    ::omero::api::DoubleArray stdDev;
};

class RoiStats : virtual public ::Ice::Object
{
public:

    typedef RoiStatsPrx ProxyType;
    typedef RoiStatsPtr PointerType;
    
    RoiStats() {}
    RoiStats(::Ice::Long, ::Ice::Long, ::Ice::Long, const ::omero::api::ShapeStatsPtr&, const ::omero::api::ShapeStatsList&);
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

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~RoiStats() {}

public:

    ::Ice::Long roiId;

    ::Ice::Long imageId;

    ::Ice::Long pixelsId;

    ::omero::api::ShapeStatsPtr combined;

    ::omero::api::ShapeStatsList perShape;
};

class IRoi : virtual public ::omero::api::ServiceInterface
{
public:

    typedef IRoiPrx ProxyType;
    typedef IRoiPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void findByRoi_async(const ::omero::api::AMD_IRoi_findByRoiPtr&, ::Ice::Long, const ::omero::api::RoiOptionsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findByRoi(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void findByImage_async(const ::omero::api::AMD_IRoi_findByImagePtr&, ::Ice::Long, const ::omero::api::RoiOptionsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findByImage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void findByPlane_async(const ::omero::api::AMD_IRoi_findByPlanePtr&, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::omero::api::RoiOptionsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findByPlane(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getPoints_async(const ::omero::api::AMD_IRoi_getPointsPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPoints(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getRoiStats_async(const ::omero::api::AMD_IRoi_getRoiStatsPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRoiStats(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getShapeStats_async(const ::omero::api::AMD_IRoi_getShapeStatsPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getShapeStats(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getShapeStatsList_async(const ::omero::api::AMD_IRoi_getShapeStatsListPtr&, const ::omero::api::LongList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getShapeStatsList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getRoiMeasurements_async(const ::omero::api::AMD_IRoi_getRoiMeasurementsPtr&, ::Ice::Long, const ::omero::api::RoiOptionsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRoiMeasurements(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getMeasuredRois_async(const ::omero::api::AMD_IRoi_getMeasuredRoisPtr&, ::Ice::Long, ::Ice::Long, const ::omero::api::RoiOptionsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMeasuredRois(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getMeasuredRoisMap_async(const ::omero::api::AMD_IRoi_getMeasuredRoisMapPtr&, ::Ice::Long, const ::omero::api::LongList&, const ::omero::api::RoiOptionsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMeasuredRoisMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getTable_async(const ::omero::api::AMD_IRoi_getTablePtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getTable(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void uploadMask_async(const ::omero::api::AMD_IRoi_uploadMaskPtr&, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::ByteSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___uploadMask(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
