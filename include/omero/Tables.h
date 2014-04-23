// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Tables.ice'

#ifndef __omero__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_Tables_h__
#define __omero__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_Tables_h__

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
#include <omero/RTypes.h>
#include <omero/System.h>
#include <omero/Collections.h>
#include <omero/Repositories.h>
#include <omero/ServerErrors.h>
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

class ServiceFactory;

}

namespace grid
{

class Column;

class FileColumn;

class ImageColumn;

class RoiColumn;

class WellColumn;

class PlateColumn;

class BoolColumn;

class DoubleColumn;

class LongColumn;

class StringColumn;

class FloatArrayColumn;

class DoubleArrayColumn;

class LongArrayColumn;

class MaskColumn;

class Data;

class Table;

class Tables;

}

}

}

namespace omero
{

namespace api
{

class ServiceFactory;
bool operator==(const ServiceFactory&, const ServiceFactory&);
bool operator<(const ServiceFactory&, const ServiceFactory&);

}

namespace grid
{

class Column;
bool operator==(const Column&, const Column&);
bool operator<(const Column&, const Column&);

class FileColumn;
bool operator==(const FileColumn&, const FileColumn&);
bool operator<(const FileColumn&, const FileColumn&);

class ImageColumn;
bool operator==(const ImageColumn&, const ImageColumn&);
bool operator<(const ImageColumn&, const ImageColumn&);

class RoiColumn;
bool operator==(const RoiColumn&, const RoiColumn&);
bool operator<(const RoiColumn&, const RoiColumn&);

class WellColumn;
bool operator==(const WellColumn&, const WellColumn&);
bool operator<(const WellColumn&, const WellColumn&);

class PlateColumn;
bool operator==(const PlateColumn&, const PlateColumn&);
bool operator<(const PlateColumn&, const PlateColumn&);

class BoolColumn;
bool operator==(const BoolColumn&, const BoolColumn&);
bool operator<(const BoolColumn&, const BoolColumn&);

class DoubleColumn;
bool operator==(const DoubleColumn&, const DoubleColumn&);
bool operator<(const DoubleColumn&, const DoubleColumn&);

class LongColumn;
bool operator==(const LongColumn&, const LongColumn&);
bool operator<(const LongColumn&, const LongColumn&);

class StringColumn;
bool operator==(const StringColumn&, const StringColumn&);
bool operator<(const StringColumn&, const StringColumn&);

class FloatArrayColumn;
bool operator==(const FloatArrayColumn&, const FloatArrayColumn&);
bool operator<(const FloatArrayColumn&, const FloatArrayColumn&);

class DoubleArrayColumn;
bool operator==(const DoubleArrayColumn&, const DoubleArrayColumn&);
bool operator<(const DoubleArrayColumn&, const DoubleArrayColumn&);

class LongArrayColumn;
bool operator==(const LongArrayColumn&, const LongArrayColumn&);
bool operator<(const LongArrayColumn&, const LongArrayColumn&);

class MaskColumn;
bool operator==(const MaskColumn&, const MaskColumn&);
bool operator<(const MaskColumn&, const MaskColumn&);

class Data;
bool operator==(const Data&, const Data&);
bool operator<(const Data&, const Data&);

class Table;
bool operator==(const Table&, const Table&);
bool operator<(const Table&, const Table&);

class Tables;
bool operator==(const Tables&, const Tables&);
bool operator<(const Tables&, const Tables&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::api::ServiceFactory*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::ServiceFactory*);

::Ice::Object* upCast(::omero::grid::Column*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::Column*);

::Ice::Object* upCast(::omero::grid::FileColumn*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::FileColumn*);

::Ice::Object* upCast(::omero::grid::ImageColumn*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::ImageColumn*);

::Ice::Object* upCast(::omero::grid::RoiColumn*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::RoiColumn*);

::Ice::Object* upCast(::omero::grid::WellColumn*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::WellColumn*);

::Ice::Object* upCast(::omero::grid::PlateColumn*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::PlateColumn*);

::Ice::Object* upCast(::omero::grid::BoolColumn*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::BoolColumn*);

::Ice::Object* upCast(::omero::grid::DoubleColumn*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::DoubleColumn*);

::Ice::Object* upCast(::omero::grid::LongColumn*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::LongColumn*);

::Ice::Object* upCast(::omero::grid::StringColumn*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::StringColumn*);

::Ice::Object* upCast(::omero::grid::FloatArrayColumn*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::FloatArrayColumn*);

::Ice::Object* upCast(::omero::grid::DoubleArrayColumn*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::DoubleArrayColumn*);

::Ice::Object* upCast(::omero::grid::LongArrayColumn*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::LongArrayColumn*);

::Ice::Object* upCast(::omero::grid::MaskColumn*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::MaskColumn*);

::Ice::Object* upCast(::omero::grid::Data*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::Data*);

::Ice::Object* upCast(::omero::grid::Table*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::Table*);

::Ice::Object* upCast(::omero::grid::Tables*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::Tables*);

}

namespace omero
{

namespace api
{

typedef ::IceInternal::Handle< ::omero::api::ServiceFactory> ServiceFactoryPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::ServiceFactory> ServiceFactoryPrx;

void __read(::IceInternal::BasicStream*, ServiceFactoryPrx&);
void __patch__ServiceFactoryPtr(void*, ::Ice::ObjectPtr&);

}

namespace grid
{

typedef ::IceInternal::Handle< ::omero::grid::Column> ColumnPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::Column> ColumnPrx;

void __read(::IceInternal::BasicStream*, ColumnPrx&);
void __patch__ColumnPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::FileColumn> FileColumnPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::FileColumn> FileColumnPrx;

void __read(::IceInternal::BasicStream*, FileColumnPrx&);
void __patch__FileColumnPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::ImageColumn> ImageColumnPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::ImageColumn> ImageColumnPrx;

void __read(::IceInternal::BasicStream*, ImageColumnPrx&);
void __patch__ImageColumnPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::RoiColumn> RoiColumnPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::RoiColumn> RoiColumnPrx;

void __read(::IceInternal::BasicStream*, RoiColumnPrx&);
void __patch__RoiColumnPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::WellColumn> WellColumnPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::WellColumn> WellColumnPrx;

void __read(::IceInternal::BasicStream*, WellColumnPrx&);
void __patch__WellColumnPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::PlateColumn> PlateColumnPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::PlateColumn> PlateColumnPrx;

void __read(::IceInternal::BasicStream*, PlateColumnPrx&);
void __patch__PlateColumnPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::BoolColumn> BoolColumnPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::BoolColumn> BoolColumnPrx;

void __read(::IceInternal::BasicStream*, BoolColumnPrx&);
void __patch__BoolColumnPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::DoubleColumn> DoubleColumnPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::DoubleColumn> DoubleColumnPrx;

void __read(::IceInternal::BasicStream*, DoubleColumnPrx&);
void __patch__DoubleColumnPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::LongColumn> LongColumnPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::LongColumn> LongColumnPrx;

void __read(::IceInternal::BasicStream*, LongColumnPrx&);
void __patch__LongColumnPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::StringColumn> StringColumnPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::StringColumn> StringColumnPrx;

void __read(::IceInternal::BasicStream*, StringColumnPrx&);
void __patch__StringColumnPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::FloatArrayColumn> FloatArrayColumnPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::FloatArrayColumn> FloatArrayColumnPrx;

void __read(::IceInternal::BasicStream*, FloatArrayColumnPrx&);
void __patch__FloatArrayColumnPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::DoubleArrayColumn> DoubleArrayColumnPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::DoubleArrayColumn> DoubleArrayColumnPrx;

void __read(::IceInternal::BasicStream*, DoubleArrayColumnPrx&);
void __patch__DoubleArrayColumnPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::LongArrayColumn> LongArrayColumnPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::LongArrayColumn> LongArrayColumnPrx;

void __read(::IceInternal::BasicStream*, LongArrayColumnPrx&);
void __patch__LongArrayColumnPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::MaskColumn> MaskColumnPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::MaskColumn> MaskColumnPrx;

void __read(::IceInternal::BasicStream*, MaskColumnPrx&);
void __patch__MaskColumnPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::Data> DataPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::Data> DataPrx;

void __read(::IceInternal::BasicStream*, DataPrx&);
void __patch__DataPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::Table> TablePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::Table> TablePrx;

void __read(::IceInternal::BasicStream*, TablePrx&);
void __patch__TablePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::Tables> TablesPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::Tables> TablesPrx;

void __read(::IceInternal::BasicStream*, TablesPrx&);
void __patch__TablesPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace grid
{

typedef ::std::vector< ::omero::grid::ColumnPtr> ColumnArray;
void __writeColumnArray(::IceInternal::BasicStream*, const ::omero::grid::ColumnPtr*, const ::omero::grid::ColumnPtr*);
void __readColumnArray(::IceInternal::BasicStream*, ColumnArray&);

}

}

namespace omero
{

namespace grid
{

class AMI_Table_getOriginalFile : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::OriginalFilePtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::TablePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Table_getOriginalFile> AMI_Table_getOriginalFilePtr;

class AMI_Table_getHeaders : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::grid::ColumnArray&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::TablePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Table_getHeaders> AMI_Table_getHeadersPtr;

class AMI_Table_getNumberOfRows : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::TablePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Table_getNumberOfRows> AMI_Table_getNumberOfRowsPtr;

class AMI_Table_getWhereList : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::LongArray&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::TablePrx&, const ::std::string&, const ::omero::RTypeDict&, ::Ice::Long, ::Ice::Long, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Table_getWhereList> AMI_Table_getWhereListPtr;

class AMI_Table_readCoordinates : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::grid::DataPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::TablePrx&, const ::omero::api::LongArray&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Table_readCoordinates> AMI_Table_readCoordinatesPtr;

class AMI_Table_read : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::grid::DataPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::TablePrx&, const ::omero::api::LongArray&, ::Ice::Long, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Table_read> AMI_Table_readPtr;

class AMI_Table_slice : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::grid::DataPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::TablePrx&, const ::omero::api::LongArray&, const ::omero::api::LongArray&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Table_slice> AMI_Table_slicePtr;

class AMI_Table_addData : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::TablePrx&, const ::omero::grid::ColumnArray&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Table_addData> AMI_Table_addDataPtr;

class AMI_Table_update : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::TablePrx&, const ::omero::grid::DataPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Table_update> AMI_Table_updatePtr;

class AMI_Table_getAllMetadata : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::RTypeDict&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::TablePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Table_getAllMetadata> AMI_Table_getAllMetadataPtr;

class AMI_Table_getMetadata : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::RTypePtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::TablePrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Table_getMetadata> AMI_Table_getMetadataPtr;

class AMI_Table_setAllMetadata : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::TablePrx&, const ::omero::RTypeDict&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Table_setAllMetadata> AMI_Table_setAllMetadataPtr;

class AMI_Table_setMetadata : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::TablePrx&, const ::std::string&, const ::omero::RTypePtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Table_setMetadata> AMI_Table_setMetadataPtr;

class AMI_Table_initialize : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::TablePrx&, const ::omero::grid::ColumnArray&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Table_initialize> AMI_Table_initializePtr;

class AMI_Table_addColumn : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::TablePrx&, const ::omero::grid::ColumnPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Table_addColumn> AMI_Table_addColumnPtr;

class AMI_Table_delete : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::TablePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Table_delete> AMI_Table_deletePtr;

class AMI_Table_close : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::TablePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Table_close> AMI_Table_closePtr;

class AMI_Tables_getRepository : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::grid::RepositoryPrx&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::TablesPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Tables_getRepository> AMI_Tables_getRepositoryPtr;

class AMI_Tables_getTable : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::grid::TablePrx&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::TablesPrx&, const ::omero::model::OriginalFilePtr&, const ::omero::api::ServiceFactoryPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Tables_getTable> AMI_Tables_getTablePtr;

}

}

namespace IceAsync
{

}

namespace IceProxy
{

namespace omero
{

namespace grid
{

class Column : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<Column> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Column*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Column*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Column> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Column*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Column*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Column> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Column*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Column*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Column> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Column*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Column*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Column> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Column*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Column*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Column> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Column*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Column*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Column> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Column*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Column*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Column> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Column*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Column*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Column> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Column*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Column*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Column> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Column*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Column*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Column> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Column*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Column*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Column> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Column*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Column*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Column> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Column*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Column*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Column> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Column*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Column*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Column> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Column*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Column*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Column> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Column*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Column*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Column> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Column*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Column*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Column> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Column*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Column*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Column> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Column*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Column*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class FileColumn : virtual public ::IceProxy::omero::grid::Column
{
public:
    
    ::IceInternal::ProxyHandle<FileColumn> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileColumn*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<FileColumn*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileColumn> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileColumn*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<FileColumn*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileColumn> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileColumn*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<FileColumn*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileColumn> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileColumn*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<FileColumn*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileColumn> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileColumn*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<FileColumn*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileColumn> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileColumn*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<FileColumn*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileColumn> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileColumn*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<FileColumn*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileColumn> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileColumn*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<FileColumn*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileColumn> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileColumn*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<FileColumn*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileColumn> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileColumn*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<FileColumn*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileColumn> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileColumn*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<FileColumn*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileColumn> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileColumn*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<FileColumn*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileColumn> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileColumn*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<FileColumn*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileColumn> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileColumn*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<FileColumn*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileColumn> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileColumn*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<FileColumn*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileColumn> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileColumn*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<FileColumn*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileColumn> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileColumn*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<FileColumn*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileColumn> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileColumn*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<FileColumn*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileColumn> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileColumn*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<FileColumn*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class ImageColumn : virtual public ::IceProxy::omero::grid::Column
{
public:
    
    ::IceInternal::ProxyHandle<ImageColumn> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImageColumn*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ImageColumn*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImageColumn> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImageColumn*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ImageColumn*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImageColumn> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImageColumn*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ImageColumn*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImageColumn> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImageColumn*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ImageColumn*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImageColumn> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImageColumn*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ImageColumn*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImageColumn> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImageColumn*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ImageColumn*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImageColumn> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImageColumn*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ImageColumn*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImageColumn> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImageColumn*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ImageColumn*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImageColumn> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImageColumn*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ImageColumn*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImageColumn> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImageColumn*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ImageColumn*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImageColumn> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImageColumn*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ImageColumn*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImageColumn> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImageColumn*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ImageColumn*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImageColumn> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImageColumn*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ImageColumn*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImageColumn> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImageColumn*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ImageColumn*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImageColumn> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImageColumn*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ImageColumn*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImageColumn> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImageColumn*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ImageColumn*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImageColumn> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImageColumn*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ImageColumn*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImageColumn> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImageColumn*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ImageColumn*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImageColumn> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImageColumn*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ImageColumn*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class RoiColumn : virtual public ::IceProxy::omero::grid::Column
{
public:
    
    ::IceInternal::ProxyHandle<RoiColumn> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiColumn*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RoiColumn*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiColumn> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiColumn*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RoiColumn*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiColumn> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiColumn*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RoiColumn*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiColumn> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiColumn*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RoiColumn*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiColumn> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiColumn*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RoiColumn*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiColumn> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiColumn*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RoiColumn*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiColumn> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiColumn*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RoiColumn*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiColumn> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiColumn*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RoiColumn*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiColumn> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiColumn*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RoiColumn*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiColumn> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiColumn*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RoiColumn*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiColumn> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiColumn*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RoiColumn*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiColumn> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiColumn*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RoiColumn*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiColumn> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiColumn*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RoiColumn*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiColumn> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiColumn*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RoiColumn*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiColumn> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiColumn*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RoiColumn*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiColumn> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiColumn*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RoiColumn*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiColumn> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiColumn*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RoiColumn*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiColumn> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiColumn*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RoiColumn*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoiColumn> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoiColumn*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RoiColumn*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class WellColumn : virtual public ::IceProxy::omero::grid::Column
{
public:
    
    ::IceInternal::ProxyHandle<WellColumn> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellColumn*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<WellColumn*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellColumn> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellColumn*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<WellColumn*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellColumn> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellColumn*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<WellColumn*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellColumn> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellColumn*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<WellColumn*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellColumn> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellColumn*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<WellColumn*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellColumn> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellColumn*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<WellColumn*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellColumn> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellColumn*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<WellColumn*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellColumn> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellColumn*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<WellColumn*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellColumn> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellColumn*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<WellColumn*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellColumn> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellColumn*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<WellColumn*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellColumn> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellColumn*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<WellColumn*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellColumn> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellColumn*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<WellColumn*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellColumn> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellColumn*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<WellColumn*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellColumn> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellColumn*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<WellColumn*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellColumn> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellColumn*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<WellColumn*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellColumn> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellColumn*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<WellColumn*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellColumn> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellColumn*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<WellColumn*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellColumn> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellColumn*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<WellColumn*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<WellColumn> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<WellColumn*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<WellColumn*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class PlateColumn : virtual public ::IceProxy::omero::grid::Column
{
public:
    
    ::IceInternal::ProxyHandle<PlateColumn> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateColumn*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<PlateColumn*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateColumn> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateColumn*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<PlateColumn*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateColumn> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateColumn*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<PlateColumn*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateColumn> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateColumn*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<PlateColumn*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateColumn> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateColumn*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<PlateColumn*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateColumn> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateColumn*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<PlateColumn*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateColumn> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateColumn*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<PlateColumn*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateColumn> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateColumn*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<PlateColumn*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateColumn> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateColumn*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<PlateColumn*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateColumn> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateColumn*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<PlateColumn*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateColumn> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateColumn*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<PlateColumn*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateColumn> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateColumn*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<PlateColumn*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateColumn> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateColumn*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<PlateColumn*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateColumn> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateColumn*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<PlateColumn*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateColumn> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateColumn*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<PlateColumn*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateColumn> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateColumn*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<PlateColumn*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateColumn> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateColumn*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<PlateColumn*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateColumn> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateColumn*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<PlateColumn*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PlateColumn> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PlateColumn*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<PlateColumn*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class BoolColumn : virtual public ::IceProxy::omero::grid::Column
{
public:
    
    ::IceInternal::ProxyHandle<BoolColumn> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoolColumn*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<BoolColumn*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoolColumn> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoolColumn*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<BoolColumn*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoolColumn> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoolColumn*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<BoolColumn*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoolColumn> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoolColumn*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<BoolColumn*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoolColumn> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoolColumn*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<BoolColumn*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoolColumn> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoolColumn*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<BoolColumn*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoolColumn> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoolColumn*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<BoolColumn*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoolColumn> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoolColumn*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<BoolColumn*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoolColumn> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoolColumn*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<BoolColumn*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoolColumn> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoolColumn*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<BoolColumn*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoolColumn> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoolColumn*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<BoolColumn*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoolColumn> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoolColumn*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<BoolColumn*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoolColumn> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoolColumn*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<BoolColumn*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoolColumn> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoolColumn*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<BoolColumn*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoolColumn> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoolColumn*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<BoolColumn*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoolColumn> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoolColumn*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<BoolColumn*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoolColumn> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoolColumn*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<BoolColumn*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoolColumn> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoolColumn*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<BoolColumn*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoolColumn> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoolColumn*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<BoolColumn*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class DoubleColumn : virtual public ::IceProxy::omero::grid::Column
{
public:
    
    ::IceInternal::ProxyHandle<DoubleColumn> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleColumn*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<DoubleColumn*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleColumn> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleColumn*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<DoubleColumn*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleColumn> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleColumn*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<DoubleColumn*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleColumn> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleColumn*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<DoubleColumn*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleColumn> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleColumn*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<DoubleColumn*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleColumn> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleColumn*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<DoubleColumn*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleColumn> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleColumn*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<DoubleColumn*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleColumn> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleColumn*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<DoubleColumn*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleColumn> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleColumn*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<DoubleColumn*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleColumn> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleColumn*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<DoubleColumn*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleColumn> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleColumn*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<DoubleColumn*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleColumn> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleColumn*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<DoubleColumn*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleColumn> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleColumn*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<DoubleColumn*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleColumn> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleColumn*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<DoubleColumn*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleColumn> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleColumn*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<DoubleColumn*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleColumn> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleColumn*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<DoubleColumn*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleColumn> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleColumn*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<DoubleColumn*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleColumn> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleColumn*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<DoubleColumn*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleColumn> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleColumn*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<DoubleColumn*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class LongColumn : virtual public ::IceProxy::omero::grid::Column
{
public:
    
    ::IceInternal::ProxyHandle<LongColumn> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongColumn*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<LongColumn*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongColumn> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongColumn*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<LongColumn*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongColumn> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongColumn*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<LongColumn*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongColumn> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongColumn*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<LongColumn*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongColumn> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongColumn*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<LongColumn*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongColumn> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongColumn*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<LongColumn*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongColumn> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongColumn*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<LongColumn*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongColumn> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongColumn*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<LongColumn*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongColumn> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongColumn*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<LongColumn*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongColumn> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongColumn*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<LongColumn*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongColumn> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongColumn*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<LongColumn*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongColumn> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongColumn*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<LongColumn*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongColumn> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongColumn*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<LongColumn*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongColumn> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongColumn*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<LongColumn*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongColumn> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongColumn*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<LongColumn*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongColumn> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongColumn*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<LongColumn*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongColumn> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongColumn*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<LongColumn*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongColumn> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongColumn*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<LongColumn*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongColumn> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongColumn*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<LongColumn*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class StringColumn : virtual public ::IceProxy::omero::grid::Column
{
public:
    
    ::IceInternal::ProxyHandle<StringColumn> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StringColumn*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<StringColumn*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StringColumn> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StringColumn*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<StringColumn*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StringColumn> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StringColumn*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<StringColumn*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StringColumn> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StringColumn*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<StringColumn*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StringColumn> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StringColumn*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<StringColumn*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StringColumn> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StringColumn*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<StringColumn*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StringColumn> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StringColumn*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<StringColumn*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StringColumn> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StringColumn*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<StringColumn*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StringColumn> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StringColumn*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<StringColumn*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StringColumn> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StringColumn*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<StringColumn*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StringColumn> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StringColumn*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<StringColumn*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StringColumn> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StringColumn*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<StringColumn*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StringColumn> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StringColumn*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<StringColumn*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StringColumn> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StringColumn*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<StringColumn*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StringColumn> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StringColumn*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<StringColumn*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StringColumn> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StringColumn*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<StringColumn*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StringColumn> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StringColumn*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<StringColumn*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StringColumn> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StringColumn*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<StringColumn*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StringColumn> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StringColumn*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<StringColumn*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class FloatArrayColumn : virtual public ::IceProxy::omero::grid::Column
{
public:
    
    ::IceInternal::ProxyHandle<FloatArrayColumn> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FloatArrayColumn*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<FloatArrayColumn*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FloatArrayColumn> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FloatArrayColumn*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<FloatArrayColumn*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FloatArrayColumn> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FloatArrayColumn*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<FloatArrayColumn*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FloatArrayColumn> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FloatArrayColumn*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<FloatArrayColumn*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FloatArrayColumn> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FloatArrayColumn*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<FloatArrayColumn*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FloatArrayColumn> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FloatArrayColumn*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<FloatArrayColumn*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FloatArrayColumn> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FloatArrayColumn*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<FloatArrayColumn*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FloatArrayColumn> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FloatArrayColumn*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<FloatArrayColumn*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FloatArrayColumn> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FloatArrayColumn*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<FloatArrayColumn*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FloatArrayColumn> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FloatArrayColumn*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<FloatArrayColumn*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FloatArrayColumn> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FloatArrayColumn*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<FloatArrayColumn*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FloatArrayColumn> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FloatArrayColumn*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<FloatArrayColumn*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FloatArrayColumn> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FloatArrayColumn*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<FloatArrayColumn*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FloatArrayColumn> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FloatArrayColumn*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<FloatArrayColumn*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FloatArrayColumn> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FloatArrayColumn*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<FloatArrayColumn*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FloatArrayColumn> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FloatArrayColumn*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<FloatArrayColumn*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FloatArrayColumn> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FloatArrayColumn*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<FloatArrayColumn*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FloatArrayColumn> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FloatArrayColumn*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<FloatArrayColumn*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FloatArrayColumn> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FloatArrayColumn*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<FloatArrayColumn*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class DoubleArrayColumn : virtual public ::IceProxy::omero::grid::Column
{
public:
    
    ::IceInternal::ProxyHandle<DoubleArrayColumn> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleArrayColumn*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<DoubleArrayColumn*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleArrayColumn> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleArrayColumn*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<DoubleArrayColumn*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleArrayColumn> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleArrayColumn*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<DoubleArrayColumn*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleArrayColumn> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleArrayColumn*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<DoubleArrayColumn*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleArrayColumn> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleArrayColumn*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<DoubleArrayColumn*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleArrayColumn> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleArrayColumn*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<DoubleArrayColumn*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleArrayColumn> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleArrayColumn*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<DoubleArrayColumn*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleArrayColumn> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleArrayColumn*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<DoubleArrayColumn*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleArrayColumn> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleArrayColumn*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<DoubleArrayColumn*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleArrayColumn> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleArrayColumn*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<DoubleArrayColumn*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleArrayColumn> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleArrayColumn*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<DoubleArrayColumn*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleArrayColumn> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleArrayColumn*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<DoubleArrayColumn*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleArrayColumn> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleArrayColumn*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<DoubleArrayColumn*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleArrayColumn> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleArrayColumn*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<DoubleArrayColumn*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleArrayColumn> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleArrayColumn*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<DoubleArrayColumn*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleArrayColumn> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleArrayColumn*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<DoubleArrayColumn*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleArrayColumn> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleArrayColumn*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<DoubleArrayColumn*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleArrayColumn> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleArrayColumn*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<DoubleArrayColumn*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoubleArrayColumn> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoubleArrayColumn*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<DoubleArrayColumn*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class LongArrayColumn : virtual public ::IceProxy::omero::grid::Column
{
public:
    
    ::IceInternal::ProxyHandle<LongArrayColumn> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongArrayColumn*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<LongArrayColumn*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongArrayColumn> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongArrayColumn*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<LongArrayColumn*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongArrayColumn> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongArrayColumn*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<LongArrayColumn*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongArrayColumn> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongArrayColumn*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<LongArrayColumn*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongArrayColumn> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongArrayColumn*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<LongArrayColumn*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongArrayColumn> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongArrayColumn*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<LongArrayColumn*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongArrayColumn> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongArrayColumn*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<LongArrayColumn*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongArrayColumn> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongArrayColumn*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<LongArrayColumn*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongArrayColumn> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongArrayColumn*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<LongArrayColumn*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongArrayColumn> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongArrayColumn*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<LongArrayColumn*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongArrayColumn> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongArrayColumn*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<LongArrayColumn*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongArrayColumn> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongArrayColumn*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<LongArrayColumn*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongArrayColumn> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongArrayColumn*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<LongArrayColumn*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongArrayColumn> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongArrayColumn*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<LongArrayColumn*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongArrayColumn> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongArrayColumn*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<LongArrayColumn*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongArrayColumn> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongArrayColumn*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<LongArrayColumn*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongArrayColumn> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongArrayColumn*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<LongArrayColumn*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongArrayColumn> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongArrayColumn*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<LongArrayColumn*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LongArrayColumn> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LongArrayColumn*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<LongArrayColumn*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class MaskColumn : virtual public ::IceProxy::omero::grid::Column
{
public:
    
    ::IceInternal::ProxyHandle<MaskColumn> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MaskColumn*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<MaskColumn*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MaskColumn> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MaskColumn*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<MaskColumn*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MaskColumn> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MaskColumn*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<MaskColumn*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MaskColumn> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MaskColumn*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<MaskColumn*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MaskColumn> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MaskColumn*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<MaskColumn*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MaskColumn> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MaskColumn*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<MaskColumn*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MaskColumn> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MaskColumn*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<MaskColumn*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MaskColumn> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MaskColumn*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<MaskColumn*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MaskColumn> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MaskColumn*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<MaskColumn*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MaskColumn> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MaskColumn*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<MaskColumn*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MaskColumn> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MaskColumn*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<MaskColumn*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MaskColumn> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MaskColumn*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<MaskColumn*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MaskColumn> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MaskColumn*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<MaskColumn*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MaskColumn> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MaskColumn*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<MaskColumn*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MaskColumn> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MaskColumn*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<MaskColumn*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MaskColumn> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MaskColumn*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<MaskColumn*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MaskColumn> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MaskColumn*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<MaskColumn*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MaskColumn> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MaskColumn*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<MaskColumn*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MaskColumn> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MaskColumn*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<MaskColumn*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Data : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<Data> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Data*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Data*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Data> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Data*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Data*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Data> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Data*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Data*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Data> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Data*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Data*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Data> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Data*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Data*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Data> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Data*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Data*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Data> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Data*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Data*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Data> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Data*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Data*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Data> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Data*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Data*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Data> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Data*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Data*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Data> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Data*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Data*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Data> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Data*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Data*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Data> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Data*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Data*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Data> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Data*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Data*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Data> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Data*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Data*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Data> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Data*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Data*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Data> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Data*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Data*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Data> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Data*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Data*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Data> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Data*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Data*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Table : virtual public ::IceProxy::Ice::Object
{
public:

    ::omero::model::OriginalFilePtr getOriginalFile()
    {
        return getOriginalFile(0);
    }
    ::omero::model::OriginalFilePtr getOriginalFile(const ::Ice::Context& __ctx)
    {
        return getOriginalFile(&__ctx);
    }
    
private:

    ::omero::model::OriginalFilePtr getOriginalFile(const ::Ice::Context*);
    
public:
    bool getOriginalFile_async(const ::omero::grid::AMI_Table_getOriginalFilePtr&);
    bool getOriginalFile_async(const ::omero::grid::AMI_Table_getOriginalFilePtr&, const ::Ice::Context&);

    ::omero::grid::ColumnArray getHeaders()
    {
        return getHeaders(0);
    }
    ::omero::grid::ColumnArray getHeaders(const ::Ice::Context& __ctx)
    {
        return getHeaders(&__ctx);
    }
    
private:

    ::omero::grid::ColumnArray getHeaders(const ::Ice::Context*);
    
public:
    bool getHeaders_async(const ::omero::grid::AMI_Table_getHeadersPtr&);
    bool getHeaders_async(const ::omero::grid::AMI_Table_getHeadersPtr&, const ::Ice::Context&);

    ::Ice::Long getNumberOfRows()
    {
        return getNumberOfRows(0);
    }
    ::Ice::Long getNumberOfRows(const ::Ice::Context& __ctx)
    {
        return getNumberOfRows(&__ctx);
    }
    
private:

    ::Ice::Long getNumberOfRows(const ::Ice::Context*);
    
public:
    bool getNumberOfRows_async(const ::omero::grid::AMI_Table_getNumberOfRowsPtr&);
    bool getNumberOfRows_async(const ::omero::grid::AMI_Table_getNumberOfRowsPtr&, const ::Ice::Context&);

    ::omero::api::LongArray getWhereList(const ::std::string& condition, const ::omero::RTypeDict& variables, ::Ice::Long start, ::Ice::Long stop, ::Ice::Long step)
    {
        return getWhereList(condition, variables, start, stop, step, 0);
    }
    ::omero::api::LongArray getWhereList(const ::std::string& condition, const ::omero::RTypeDict& variables, ::Ice::Long start, ::Ice::Long stop, ::Ice::Long step, const ::Ice::Context& __ctx)
    {
        return getWhereList(condition, variables, start, stop, step, &__ctx);
    }
    
private:

    ::omero::api::LongArray getWhereList(const ::std::string&, const ::omero::RTypeDict&, ::Ice::Long, ::Ice::Long, ::Ice::Long, const ::Ice::Context*);
    
public:
    bool getWhereList_async(const ::omero::grid::AMI_Table_getWhereListPtr&, const ::std::string&, const ::omero::RTypeDict&, ::Ice::Long, ::Ice::Long, ::Ice::Long);
    bool getWhereList_async(const ::omero::grid::AMI_Table_getWhereListPtr&, const ::std::string&, const ::omero::RTypeDict&, ::Ice::Long, ::Ice::Long, ::Ice::Long, const ::Ice::Context&);

    ::omero::grid::DataPtr readCoordinates(const ::omero::api::LongArray& rowNumbers)
    {
        return readCoordinates(rowNumbers, 0);
    }
    ::omero::grid::DataPtr readCoordinates(const ::omero::api::LongArray& rowNumbers, const ::Ice::Context& __ctx)
    {
        return readCoordinates(rowNumbers, &__ctx);
    }
    
private:

    ::omero::grid::DataPtr readCoordinates(const ::omero::api::LongArray&, const ::Ice::Context*);
    
public:
    bool readCoordinates_async(const ::omero::grid::AMI_Table_readCoordinatesPtr&, const ::omero::api::LongArray&);
    bool readCoordinates_async(const ::omero::grid::AMI_Table_readCoordinatesPtr&, const ::omero::api::LongArray&, const ::Ice::Context&);

    ::omero::grid::DataPtr read(const ::omero::api::LongArray& colNumbers, ::Ice::Long start, ::Ice::Long stop)
    {
        return read(colNumbers, start, stop, 0);
    }
    ::omero::grid::DataPtr read(const ::omero::api::LongArray& colNumbers, ::Ice::Long start, ::Ice::Long stop, const ::Ice::Context& __ctx)
    {
        return read(colNumbers, start, stop, &__ctx);
    }
    
private:

    ::omero::grid::DataPtr read(const ::omero::api::LongArray&, ::Ice::Long, ::Ice::Long, const ::Ice::Context*);
    
public:
    bool read_async(const ::omero::grid::AMI_Table_readPtr&, const ::omero::api::LongArray&, ::Ice::Long, ::Ice::Long);
    bool read_async(const ::omero::grid::AMI_Table_readPtr&, const ::omero::api::LongArray&, ::Ice::Long, ::Ice::Long, const ::Ice::Context&);

    ::omero::grid::DataPtr slice(const ::omero::api::LongArray& colNumbers, const ::omero::api::LongArray& rowNumbers)
    {
        return slice(colNumbers, rowNumbers, 0);
    }
    ::omero::grid::DataPtr slice(const ::omero::api::LongArray& colNumbers, const ::omero::api::LongArray& rowNumbers, const ::Ice::Context& __ctx)
    {
        return slice(colNumbers, rowNumbers, &__ctx);
    }
    
private:

    ::omero::grid::DataPtr slice(const ::omero::api::LongArray&, const ::omero::api::LongArray&, const ::Ice::Context*);
    
public:
    bool slice_async(const ::omero::grid::AMI_Table_slicePtr&, const ::omero::api::LongArray&, const ::omero::api::LongArray&);
    bool slice_async(const ::omero::grid::AMI_Table_slicePtr&, const ::omero::api::LongArray&, const ::omero::api::LongArray&, const ::Ice::Context&);

    void addData(const ::omero::grid::ColumnArray& cols)
    {
        addData(cols, 0);
    }
    void addData(const ::omero::grid::ColumnArray& cols, const ::Ice::Context& __ctx)
    {
        addData(cols, &__ctx);
    }
    
private:

    void addData(const ::omero::grid::ColumnArray&, const ::Ice::Context*);
    
public:
    bool addData_async(const ::omero::grid::AMI_Table_addDataPtr&, const ::omero::grid::ColumnArray&);
    bool addData_async(const ::omero::grid::AMI_Table_addDataPtr&, const ::omero::grid::ColumnArray&, const ::Ice::Context&);

    void update(const ::omero::grid::DataPtr& modifiedData)
    {
        update(modifiedData, 0);
    }
    void update(const ::omero::grid::DataPtr& modifiedData, const ::Ice::Context& __ctx)
    {
        update(modifiedData, &__ctx);
    }
    
private:

    void update(const ::omero::grid::DataPtr&, const ::Ice::Context*);
    
public:
    bool update_async(const ::omero::grid::AMI_Table_updatePtr&, const ::omero::grid::DataPtr&);
    bool update_async(const ::omero::grid::AMI_Table_updatePtr&, const ::omero::grid::DataPtr&, const ::Ice::Context&);

    ::omero::RTypeDict getAllMetadata()
    {
        return getAllMetadata(0);
    }
    ::omero::RTypeDict getAllMetadata(const ::Ice::Context& __ctx)
    {
        return getAllMetadata(&__ctx);
    }
    
private:

    ::omero::RTypeDict getAllMetadata(const ::Ice::Context*);
    
public:
    bool getAllMetadata_async(const ::omero::grid::AMI_Table_getAllMetadataPtr&);
    bool getAllMetadata_async(const ::omero::grid::AMI_Table_getAllMetadataPtr&, const ::Ice::Context&);

    ::omero::RTypePtr getMetadata(const ::std::string& key)
    {
        return getMetadata(key, 0);
    }
    ::omero::RTypePtr getMetadata(const ::std::string& key, const ::Ice::Context& __ctx)
    {
        return getMetadata(key, &__ctx);
    }
    
private:

    ::omero::RTypePtr getMetadata(const ::std::string&, const ::Ice::Context*);
    
public:
    bool getMetadata_async(const ::omero::grid::AMI_Table_getMetadataPtr&, const ::std::string&);
    bool getMetadata_async(const ::omero::grid::AMI_Table_getMetadataPtr&, const ::std::string&, const ::Ice::Context&);

    void setAllMetadata(const ::omero::RTypeDict& dict)
    {
        setAllMetadata(dict, 0);
    }
    void setAllMetadata(const ::omero::RTypeDict& dict, const ::Ice::Context& __ctx)
    {
        setAllMetadata(dict, &__ctx);
    }
    
private:

    void setAllMetadata(const ::omero::RTypeDict&, const ::Ice::Context*);
    
public:
    bool setAllMetadata_async(const ::omero::grid::AMI_Table_setAllMetadataPtr&, const ::omero::RTypeDict&);
    bool setAllMetadata_async(const ::omero::grid::AMI_Table_setAllMetadataPtr&, const ::omero::RTypeDict&, const ::Ice::Context&);

    void setMetadata(const ::std::string& key, const ::omero::RTypePtr& value)
    {
        setMetadata(key, value, 0);
    }
    void setMetadata(const ::std::string& key, const ::omero::RTypePtr& value, const ::Ice::Context& __ctx)
    {
        setMetadata(key, value, &__ctx);
    }
    
private:

    void setMetadata(const ::std::string&, const ::omero::RTypePtr&, const ::Ice::Context*);
    
public:
    bool setMetadata_async(const ::omero::grid::AMI_Table_setMetadataPtr&, const ::std::string&, const ::omero::RTypePtr&);
    bool setMetadata_async(const ::omero::grid::AMI_Table_setMetadataPtr&, const ::std::string&, const ::omero::RTypePtr&, const ::Ice::Context&);

    void initialize(const ::omero::grid::ColumnArray& cols)
    {
        initialize(cols, 0);
    }
    void initialize(const ::omero::grid::ColumnArray& cols, const ::Ice::Context& __ctx)
    {
        initialize(cols, &__ctx);
    }
    
private:

    void initialize(const ::omero::grid::ColumnArray&, const ::Ice::Context*);
    
public:
    bool initialize_async(const ::omero::grid::AMI_Table_initializePtr&, const ::omero::grid::ColumnArray&);
    bool initialize_async(const ::omero::grid::AMI_Table_initializePtr&, const ::omero::grid::ColumnArray&, const ::Ice::Context&);

    ::Ice::Int addColumn(const ::omero::grid::ColumnPtr& col)
    {
        return addColumn(col, 0);
    }
    ::Ice::Int addColumn(const ::omero::grid::ColumnPtr& col, const ::Ice::Context& __ctx)
    {
        return addColumn(col, &__ctx);
    }
    
private:

    ::Ice::Int addColumn(const ::omero::grid::ColumnPtr&, const ::Ice::Context*);
    
public:
    bool addColumn_async(const ::omero::grid::AMI_Table_addColumnPtr&, const ::omero::grid::ColumnPtr&);
    bool addColumn_async(const ::omero::grid::AMI_Table_addColumnPtr&, const ::omero::grid::ColumnPtr&, const ::Ice::Context&);

    void _cpp_delete()
    {
        _cpp_delete(0);
    }
    void _cpp_delete(const ::Ice::Context& __ctx)
    {
        _cpp_delete(&__ctx);
    }
    
private:

    void _cpp_delete(const ::Ice::Context*);
    
public:
    bool delete_async(const ::omero::grid::AMI_Table_deletePtr&);
    bool delete_async(const ::omero::grid::AMI_Table_deletePtr&, const ::Ice::Context&);

    void close()
    {
        close(0);
    }
    void close(const ::Ice::Context& __ctx)
    {
        close(&__ctx);
    }
    
private:

    void close(const ::Ice::Context*);
    
public:
    bool close_async(const ::omero::grid::AMI_Table_closePtr&);
    bool close_async(const ::omero::grid::AMI_Table_closePtr&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<Table> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Table*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Table*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Table> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Table*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Table*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Table> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Table*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Table*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Table> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Table*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Table*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Table> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Table*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Table*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Table> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Table*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Table*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Table> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Table*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Table*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Table> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Table*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Table*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Table> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Table*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Table*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Table> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Table*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Table*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Table> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Table*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Table*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Table> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Table*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Table*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Table> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Table*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Table*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Table> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Table*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Table*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Table> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Table*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Table*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Table> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Table*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Table*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Table> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Table*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Table*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Table> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Table*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Table*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Table> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Table*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Table*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Tables : virtual public ::IceProxy::Ice::Object
{
public:

    ::omero::grid::RepositoryPrx getRepository()
    {
        return getRepository(0);
    }
    ::omero::grid::RepositoryPrx getRepository(const ::Ice::Context& __ctx)
    {
        return getRepository(&__ctx);
    }
    
private:

    ::omero::grid::RepositoryPrx getRepository(const ::Ice::Context*);
    
public:
    bool getRepository_async(const ::omero::grid::AMI_Tables_getRepositoryPtr&);
    bool getRepository_async(const ::omero::grid::AMI_Tables_getRepositoryPtr&, const ::Ice::Context&);

    ::omero::grid::TablePrx getTable(const ::omero::model::OriginalFilePtr& file, const ::omero::api::ServiceFactoryPrx& sf)
    {
        return getTable(file, sf, 0);
    }
    ::omero::grid::TablePrx getTable(const ::omero::model::OriginalFilePtr& file, const ::omero::api::ServiceFactoryPrx& sf, const ::Ice::Context& __ctx)
    {
        return getTable(file, sf, &__ctx);
    }
    
private:

    ::omero::grid::TablePrx getTable(const ::omero::model::OriginalFilePtr&, const ::omero::api::ServiceFactoryPrx&, const ::Ice::Context*);
    
public:
    bool getTable_async(const ::omero::grid::AMI_Tables_getTablePtr&, const ::omero::model::OriginalFilePtr&, const ::omero::api::ServiceFactoryPrx&);
    bool getTable_async(const ::omero::grid::AMI_Tables_getTablePtr&, const ::omero::model::OriginalFilePtr&, const ::omero::api::ServiceFactoryPrx&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<Tables> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Tables*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Tables*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Tables> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Tables*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Tables*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Tables> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Tables*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Tables*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Tables> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Tables*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Tables*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Tables> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Tables*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Tables*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Tables> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Tables*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Tables*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Tables> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Tables*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Tables*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Tables> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Tables*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Tables*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Tables> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Tables*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Tables*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Tables> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Tables*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Tables*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Tables> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Tables*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Tables*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Tables> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Tables*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Tables*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Tables> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Tables*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Tables*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Tables> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Tables*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Tables*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Tables> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Tables*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Tables*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Tables> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Tables*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Tables*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Tables> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Tables*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Tables*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Tables> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Tables*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Tables*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Tables> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Tables*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Tables*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace grid
{

class Column : virtual public ::IceDelegate::Ice::Object
{
public:
};

class FileColumn : virtual public ::IceDelegate::omero::grid::Column
{
public:
};

class ImageColumn : virtual public ::IceDelegate::omero::grid::Column
{
public:
};

class RoiColumn : virtual public ::IceDelegate::omero::grid::Column
{
public:
};

class WellColumn : virtual public ::IceDelegate::omero::grid::Column
{
public:
};

class PlateColumn : virtual public ::IceDelegate::omero::grid::Column
{
public:
};

class BoolColumn : virtual public ::IceDelegate::omero::grid::Column
{
public:
};

class DoubleColumn : virtual public ::IceDelegate::omero::grid::Column
{
public:
};

class LongColumn : virtual public ::IceDelegate::omero::grid::Column
{
public:
};

class StringColumn : virtual public ::IceDelegate::omero::grid::Column
{
public:
};

class FloatArrayColumn : virtual public ::IceDelegate::omero::grid::Column
{
public:
};

class DoubleArrayColumn : virtual public ::IceDelegate::omero::grid::Column
{
public:
};

class LongArrayColumn : virtual public ::IceDelegate::omero::grid::Column
{
public:
};

class MaskColumn : virtual public ::IceDelegate::omero::grid::Column
{
public:
};

class Data : virtual public ::IceDelegate::Ice::Object
{
public:
};

class Table : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::omero::model::OriginalFilePtr getOriginalFile(const ::Ice::Context*) = 0;

    virtual ::omero::grid::ColumnArray getHeaders(const ::Ice::Context*) = 0;

    virtual ::Ice::Long getNumberOfRows(const ::Ice::Context*) = 0;

    virtual ::omero::api::LongArray getWhereList(const ::std::string&, const ::omero::RTypeDict&, ::Ice::Long, ::Ice::Long, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::grid::DataPtr readCoordinates(const ::omero::api::LongArray&, const ::Ice::Context*) = 0;

    virtual ::omero::grid::DataPtr read(const ::omero::api::LongArray&, ::Ice::Long, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::grid::DataPtr slice(const ::omero::api::LongArray&, const ::omero::api::LongArray&, const ::Ice::Context*) = 0;

    virtual void addData(const ::omero::grid::ColumnArray&, const ::Ice::Context*) = 0;

    virtual void update(const ::omero::grid::DataPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RTypeDict getAllMetadata(const ::Ice::Context*) = 0;

    virtual ::omero::RTypePtr getMetadata(const ::std::string&, const ::Ice::Context*) = 0;

    virtual void setAllMetadata(const ::omero::RTypeDict&, const ::Ice::Context*) = 0;

    virtual void setMetadata(const ::std::string&, const ::omero::RTypePtr&, const ::Ice::Context*) = 0;

    virtual void initialize(const ::omero::grid::ColumnArray&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int addColumn(const ::omero::grid::ColumnPtr&, const ::Ice::Context*) = 0;

    virtual void _cpp_delete(const ::Ice::Context*) = 0;

    virtual void close(const ::Ice::Context*) = 0;
};

class Tables : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::omero::grid::RepositoryPrx getRepository(const ::Ice::Context*) = 0;

    virtual ::omero::grid::TablePrx getTable(const ::omero::model::OriginalFilePtr&, const ::omero::api::ServiceFactoryPrx&, const ::Ice::Context*) = 0;
};

}

}

}

namespace IceDelegateM
{

namespace omero
{

namespace grid
{

class Column : virtual public ::IceDelegate::omero::grid::Column,
               virtual public ::IceDelegateM::Ice::Object
{
public:
};

class FileColumn : virtual public ::IceDelegate::omero::grid::FileColumn,
                   virtual public ::IceDelegateM::omero::grid::Column
{
public:
};

class ImageColumn : virtual public ::IceDelegate::omero::grid::ImageColumn,
                    virtual public ::IceDelegateM::omero::grid::Column
{
public:
};

class RoiColumn : virtual public ::IceDelegate::omero::grid::RoiColumn,
                  virtual public ::IceDelegateM::omero::grid::Column
{
public:
};

class WellColumn : virtual public ::IceDelegate::omero::grid::WellColumn,
                   virtual public ::IceDelegateM::omero::grid::Column
{
public:
};

class PlateColumn : virtual public ::IceDelegate::omero::grid::PlateColumn,
                    virtual public ::IceDelegateM::omero::grid::Column
{
public:
};

class BoolColumn : virtual public ::IceDelegate::omero::grid::BoolColumn,
                   virtual public ::IceDelegateM::omero::grid::Column
{
public:
};

class DoubleColumn : virtual public ::IceDelegate::omero::grid::DoubleColumn,
                     virtual public ::IceDelegateM::omero::grid::Column
{
public:
};

class LongColumn : virtual public ::IceDelegate::omero::grid::LongColumn,
                   virtual public ::IceDelegateM::omero::grid::Column
{
public:
};

class StringColumn : virtual public ::IceDelegate::omero::grid::StringColumn,
                     virtual public ::IceDelegateM::omero::grid::Column
{
public:
};

class FloatArrayColumn : virtual public ::IceDelegate::omero::grid::FloatArrayColumn,
                         virtual public ::IceDelegateM::omero::grid::Column
{
public:
};

class DoubleArrayColumn : virtual public ::IceDelegate::omero::grid::DoubleArrayColumn,
                          virtual public ::IceDelegateM::omero::grid::Column
{
public:
};

class LongArrayColumn : virtual public ::IceDelegate::omero::grid::LongArrayColumn,
                        virtual public ::IceDelegateM::omero::grid::Column
{
public:
};

class MaskColumn : virtual public ::IceDelegate::omero::grid::MaskColumn,
                   virtual public ::IceDelegateM::omero::grid::Column
{
public:
};

class Data : virtual public ::IceDelegate::omero::grid::Data,
             virtual public ::IceDelegateM::Ice::Object
{
public:
};

class Table : virtual public ::IceDelegate::omero::grid::Table,
              virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::omero::model::OriginalFilePtr getOriginalFile(const ::Ice::Context*);

    virtual ::omero::grid::ColumnArray getHeaders(const ::Ice::Context*);

    virtual ::Ice::Long getNumberOfRows(const ::Ice::Context*);

    virtual ::omero::api::LongArray getWhereList(const ::std::string&, const ::omero::RTypeDict&, ::Ice::Long, ::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::omero::grid::DataPtr readCoordinates(const ::omero::api::LongArray&, const ::Ice::Context*);

    virtual ::omero::grid::DataPtr read(const ::omero::api::LongArray&, ::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::omero::grid::DataPtr slice(const ::omero::api::LongArray&, const ::omero::api::LongArray&, const ::Ice::Context*);

    virtual void addData(const ::omero::grid::ColumnArray&, const ::Ice::Context*);

    virtual void update(const ::omero::grid::DataPtr&, const ::Ice::Context*);

    virtual ::omero::RTypeDict getAllMetadata(const ::Ice::Context*);

    virtual ::omero::RTypePtr getMetadata(const ::std::string&, const ::Ice::Context*);

    virtual void setAllMetadata(const ::omero::RTypeDict&, const ::Ice::Context*);

    virtual void setMetadata(const ::std::string&, const ::omero::RTypePtr&, const ::Ice::Context*);

    virtual void initialize(const ::omero::grid::ColumnArray&, const ::Ice::Context*);

    virtual ::Ice::Int addColumn(const ::omero::grid::ColumnPtr&, const ::Ice::Context*);

    virtual void _cpp_delete(const ::Ice::Context*);

    virtual void close(const ::Ice::Context*);
};

class Tables : virtual public ::IceDelegate::omero::grid::Tables,
               virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::omero::grid::RepositoryPrx getRepository(const ::Ice::Context*);

    virtual ::omero::grid::TablePrx getTable(const ::omero::model::OriginalFilePtr&, const ::omero::api::ServiceFactoryPrx&, const ::Ice::Context*);
};

}

}

}

namespace IceDelegateD
{

namespace omero
{

namespace grid
{

class Column : virtual public ::IceDelegate::omero::grid::Column,
               virtual public ::IceDelegateD::Ice::Object
{
public:
};

class FileColumn : virtual public ::IceDelegate::omero::grid::FileColumn,
                   virtual public ::IceDelegateD::omero::grid::Column
{
public:
};

class ImageColumn : virtual public ::IceDelegate::omero::grid::ImageColumn,
                    virtual public ::IceDelegateD::omero::grid::Column
{
public:
};

class RoiColumn : virtual public ::IceDelegate::omero::grid::RoiColumn,
                  virtual public ::IceDelegateD::omero::grid::Column
{
public:
};

class WellColumn : virtual public ::IceDelegate::omero::grid::WellColumn,
                   virtual public ::IceDelegateD::omero::grid::Column
{
public:
};

class PlateColumn : virtual public ::IceDelegate::omero::grid::PlateColumn,
                    virtual public ::IceDelegateD::omero::grid::Column
{
public:
};

class BoolColumn : virtual public ::IceDelegate::omero::grid::BoolColumn,
                   virtual public ::IceDelegateD::omero::grid::Column
{
public:
};

class DoubleColumn : virtual public ::IceDelegate::omero::grid::DoubleColumn,
                     virtual public ::IceDelegateD::omero::grid::Column
{
public:
};

class LongColumn : virtual public ::IceDelegate::omero::grid::LongColumn,
                   virtual public ::IceDelegateD::omero::grid::Column
{
public:
};

class StringColumn : virtual public ::IceDelegate::omero::grid::StringColumn,
                     virtual public ::IceDelegateD::omero::grid::Column
{
public:
};

class FloatArrayColumn : virtual public ::IceDelegate::omero::grid::FloatArrayColumn,
                         virtual public ::IceDelegateD::omero::grid::Column
{
public:
};

class DoubleArrayColumn : virtual public ::IceDelegate::omero::grid::DoubleArrayColumn,
                          virtual public ::IceDelegateD::omero::grid::Column
{
public:
};

class LongArrayColumn : virtual public ::IceDelegate::omero::grid::LongArrayColumn,
                        virtual public ::IceDelegateD::omero::grid::Column
{
public:
};

class MaskColumn : virtual public ::IceDelegate::omero::grid::MaskColumn,
                   virtual public ::IceDelegateD::omero::grid::Column
{
public:
};

class Data : virtual public ::IceDelegate::omero::grid::Data,
             virtual public ::IceDelegateD::Ice::Object
{
public:
};

class Table : virtual public ::IceDelegate::omero::grid::Table,
              virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::omero::model::OriginalFilePtr getOriginalFile(const ::Ice::Context*);

    virtual ::omero::grid::ColumnArray getHeaders(const ::Ice::Context*);

    virtual ::Ice::Long getNumberOfRows(const ::Ice::Context*);

    virtual ::omero::api::LongArray getWhereList(const ::std::string&, const ::omero::RTypeDict&, ::Ice::Long, ::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::omero::grid::DataPtr readCoordinates(const ::omero::api::LongArray&, const ::Ice::Context*);

    virtual ::omero::grid::DataPtr read(const ::omero::api::LongArray&, ::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::omero::grid::DataPtr slice(const ::omero::api::LongArray&, const ::omero::api::LongArray&, const ::Ice::Context*);

    virtual void addData(const ::omero::grid::ColumnArray&, const ::Ice::Context*);

    virtual void update(const ::omero::grid::DataPtr&, const ::Ice::Context*);

    virtual ::omero::RTypeDict getAllMetadata(const ::Ice::Context*);

    virtual ::omero::RTypePtr getMetadata(const ::std::string&, const ::Ice::Context*);

    virtual void setAllMetadata(const ::omero::RTypeDict&, const ::Ice::Context*);

    virtual void setMetadata(const ::std::string&, const ::omero::RTypePtr&, const ::Ice::Context*);

    virtual void initialize(const ::omero::grid::ColumnArray&, const ::Ice::Context*);

    virtual ::Ice::Int addColumn(const ::omero::grid::ColumnPtr&, const ::Ice::Context*);

    virtual void _cpp_delete(const ::Ice::Context*);

    virtual void close(const ::Ice::Context*);
};

class Tables : virtual public ::IceDelegate::omero::grid::Tables,
               virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::omero::grid::RepositoryPrx getRepository(const ::Ice::Context*);

    virtual ::omero::grid::TablePrx getTable(const ::omero::model::OriginalFilePtr&, const ::omero::api::ServiceFactoryPrx&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace grid
{

class Column : virtual public ::Ice::Object
{
public:

    typedef ColumnPrx ProxyType;
    typedef ColumnPtr PointerType;
    
    Column() {}
    Column(const ::std::string&, const ::std::string&);
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

    virtual ~Column() {}

    friend class Column__staticInit;

public:

    ::std::string name;

    ::std::string description;
};

class Column__staticInit
{
public:

    ::omero::grid::Column _init;
};

static Column__staticInit _Column_init;

class FileColumn : virtual public ::omero::grid::Column
{
public:

    typedef FileColumnPrx ProxyType;
    typedef FileColumnPtr PointerType;
    
    FileColumn() {}
    FileColumn(const ::std::string&, const ::std::string&, const ::omero::api::LongArray&);
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

    virtual ~FileColumn() {}

public:

    ::omero::api::LongArray values;
};

class ImageColumn : virtual public ::omero::grid::Column
{
public:

    typedef ImageColumnPrx ProxyType;
    typedef ImageColumnPtr PointerType;
    
    ImageColumn() {}
    ImageColumn(const ::std::string&, const ::std::string&, const ::omero::api::LongArray&);
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

    virtual ~ImageColumn() {}

public:

    ::omero::api::LongArray values;
};

class RoiColumn : virtual public ::omero::grid::Column
{
public:

    typedef RoiColumnPrx ProxyType;
    typedef RoiColumnPtr PointerType;
    
    RoiColumn() {}
    RoiColumn(const ::std::string&, const ::std::string&, const ::omero::api::LongArray&);
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

    virtual ~RoiColumn() {}

public:

    ::omero::api::LongArray values;
};

class WellColumn : virtual public ::omero::grid::Column
{
public:

    typedef WellColumnPrx ProxyType;
    typedef WellColumnPtr PointerType;
    
    WellColumn() {}
    WellColumn(const ::std::string&, const ::std::string&, const ::omero::api::LongArray&);
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

    virtual ~WellColumn() {}

public:

    ::omero::api::LongArray values;
};

class PlateColumn : virtual public ::omero::grid::Column
{
public:

    typedef PlateColumnPrx ProxyType;
    typedef PlateColumnPtr PointerType;
    
    PlateColumn() {}
    PlateColumn(const ::std::string&, const ::std::string&, const ::omero::api::LongArray&);
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

    virtual ~PlateColumn() {}

public:

    ::omero::api::LongArray values;
};

class BoolColumn : virtual public ::omero::grid::Column
{
public:

    typedef BoolColumnPrx ProxyType;
    typedef BoolColumnPtr PointerType;
    
    BoolColumn() {}
    BoolColumn(const ::std::string&, const ::std::string&, const ::omero::api::BoolArray&);
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

    virtual ~BoolColumn() {}

public:

    ::omero::api::BoolArray values;
};

class DoubleColumn : virtual public ::omero::grid::Column
{
public:

    typedef DoubleColumnPrx ProxyType;
    typedef DoubleColumnPtr PointerType;
    
    DoubleColumn() {}
    DoubleColumn(const ::std::string&, const ::std::string&, const ::omero::api::DoubleArray&);
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

    virtual ~DoubleColumn() {}

public:

    ::omero::api::DoubleArray values;
};

class LongColumn : virtual public ::omero::grid::Column
{
public:

    typedef LongColumnPrx ProxyType;
    typedef LongColumnPtr PointerType;
    
    LongColumn() {}
    LongColumn(const ::std::string&, const ::std::string&, const ::omero::api::LongArray&);
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

    virtual ~LongColumn() {}

public:

    ::omero::api::LongArray values;
};

class StringColumn : virtual public ::omero::grid::Column
{
public:

    typedef StringColumnPrx ProxyType;
    typedef StringColumnPtr PointerType;
    
    StringColumn() {}
    StringColumn(const ::std::string&, const ::std::string&, ::Ice::Long, const ::omero::api::StringArray&);
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

    virtual ~StringColumn() {}

public:

    ::Ice::Long size;

    ::omero::api::StringArray values;
};

class FloatArrayColumn : virtual public ::omero::grid::Column
{
public:

    typedef FloatArrayColumnPrx ProxyType;
    typedef FloatArrayColumnPtr PointerType;
    
    FloatArrayColumn() {}
    FloatArrayColumn(const ::std::string&, const ::std::string&, ::Ice::Long, const ::omero::api::FloatArrayArray&);
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

    virtual ~FloatArrayColumn() {}

public:

    ::Ice::Long size;

    ::omero::api::FloatArrayArray values;
};

class DoubleArrayColumn : virtual public ::omero::grid::Column
{
public:

    typedef DoubleArrayColumnPrx ProxyType;
    typedef DoubleArrayColumnPtr PointerType;
    
    DoubleArrayColumn() {}
    DoubleArrayColumn(const ::std::string&, const ::std::string&, ::Ice::Long, const ::omero::api::DoubleArrayArray&);
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

    virtual ~DoubleArrayColumn() {}

public:

    ::Ice::Long size;

    ::omero::api::DoubleArrayArray values;
};

class LongArrayColumn : virtual public ::omero::grid::Column
{
public:

    typedef LongArrayColumnPrx ProxyType;
    typedef LongArrayColumnPtr PointerType;
    
    LongArrayColumn() {}
    LongArrayColumn(const ::std::string&, const ::std::string&, ::Ice::Long, const ::omero::api::LongArrayArray&);
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

    virtual ~LongArrayColumn() {}

public:

    ::Ice::Long size;

    ::omero::api::LongArrayArray values;
};

class MaskColumn : virtual public ::omero::grid::Column
{
public:

    typedef MaskColumnPrx ProxyType;
    typedef MaskColumnPtr PointerType;
    
    MaskColumn() {}
    MaskColumn(const ::std::string&, const ::std::string&, const ::omero::api::LongArray&, const ::omero::api::IntegerArray&, const ::omero::api::IntegerArray&, const ::omero::api::DoubleArray&, const ::omero::api::DoubleArray&, const ::omero::api::DoubleArray&, const ::omero::api::DoubleArray&, const ::omero::api::ByteArrayArray&);
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

    virtual ~MaskColumn() {}

public:

    ::omero::api::LongArray imageId;

    ::omero::api::IntegerArray theZ;

    ::omero::api::IntegerArray theT;

    ::omero::api::DoubleArray x;

    ::omero::api::DoubleArray y;

    ::omero::api::DoubleArray w;

    ::omero::api::DoubleArray h;

    ::omero::api::ByteArrayArray bytes;
};

class Data : virtual public ::Ice::Object
{
public:

    typedef DataPrx ProxyType;
    typedef DataPtr PointerType;
    
    Data() {}
    Data(::Ice::Long, const ::omero::api::LongArray&, const ::omero::grid::ColumnArray&);
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

    virtual ~Data() {}

public:

    ::Ice::Long lastModification;

    ::omero::api::LongArray rowNumbers;

    ::omero::grid::ColumnArray columns;
};

class Table : virtual public ::Ice::Object
{
public:

    typedef TablePrx ProxyType;
    typedef TablePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::omero::model::OriginalFilePtr getOriginalFile(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getOriginalFile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::grid::ColumnArray getHeaders(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getHeaders(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Long getNumberOfRows(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getNumberOfRows(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::LongArray getWhereList(const ::std::string&, const ::omero::RTypeDict&, ::Ice::Long, ::Ice::Long, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getWhereList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::grid::DataPtr readCoordinates(const ::omero::api::LongArray&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___readCoordinates(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::grid::DataPtr read(const ::omero::api::LongArray&, ::Ice::Long, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___read(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::grid::DataPtr slice(const ::omero::api::LongArray&, const ::omero::api::LongArray&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___slice(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addData(const ::omero::grid::ColumnArray&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addData(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void update(const ::omero::grid::DataPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___update(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RTypeDict getAllMetadata(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAllMetadata(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RTypePtr getMetadata(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMetadata(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setAllMetadata(const ::omero::RTypeDict&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setAllMetadata(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setMetadata(const ::std::string&, const ::omero::RTypePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setMetadata(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void initialize(const ::omero::grid::ColumnArray&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___initialize(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int addColumn(const ::omero::grid::ColumnPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addColumn(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void _cpp_delete(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___delete(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void close(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___close(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class Tables : virtual public ::Ice::Object
{
public:

    typedef TablesPrx ProxyType;
    typedef TablesPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::omero::grid::RepositoryPrx getRepository(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRepository(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::grid::TablePrx getTable(const ::omero::model::OriginalFilePtr&, const ::omero::api::ServiceFactoryPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getTable(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
