// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `IDelete.ice'

#ifndef __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_IDelete_h__
#define __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_IDelete_h__

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

namespace _cpp_delete
{

class DeleteReport;

class DeleteHandle;

}

class IDelete;

}

}

}

namespace omero
{

namespace api
{

namespace _cpp_delete
{

class DeleteReport;
bool operator==(const DeleteReport&, const DeleteReport&);
bool operator<(const DeleteReport&, const DeleteReport&);

class DeleteHandle;
bool operator==(const DeleteHandle&, const DeleteHandle&);
bool operator<(const DeleteHandle&, const DeleteHandle&);

}

class IDelete;
bool operator==(const IDelete&, const IDelete&);
bool operator<(const IDelete&, const IDelete&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::api::_cpp_delete::DeleteReport*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::_cpp_delete::DeleteReport*);

::Ice::Object* upCast(::omero::api::_cpp_delete::DeleteHandle*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::_cpp_delete::DeleteHandle*);

::Ice::Object* upCast(::omero::api::IDelete*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::IDelete*);

}

namespace omero
{

namespace api
{

namespace _cpp_delete
{

typedef ::IceInternal::Handle< ::omero::api::_cpp_delete::DeleteReport> DeleteReportPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::_cpp_delete::DeleteReport> DeleteReportPrx;

void __read(::IceInternal::BasicStream*, DeleteReportPrx&);
void __patch__DeleteReportPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::_cpp_delete::DeleteHandle> DeleteHandlePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::_cpp_delete::DeleteHandle> DeleteHandlePrx;

void __read(::IceInternal::BasicStream*, DeleteHandlePrx&);
void __patch__DeleteHandlePtr(void*, ::Ice::ObjectPtr&);

}

typedef ::IceInternal::Handle< ::omero::api::IDelete> IDeletePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::IDelete> IDeletePrx;

void __read(::IceInternal::BasicStream*, IDeletePrx&);
void __patch__IDeletePtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace api
{

namespace _cpp_delete
{

const ::std::string ORPHAN = "ORPHAN";

const ::std::string REAP = "REAP";

const ::std::string SOFT = "SOFT";

const ::std::string HARD = "HARD";

struct DeleteCommand
{
    ::std::string type;
    ::Ice::Long id;
    ::omero::api::StringStringMap options;

    bool operator==(const DeleteCommand&) const;
    bool operator<(const DeleteCommand&) const;
    bool operator!=(const DeleteCommand& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const DeleteCommand& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const DeleteCommand& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const DeleteCommand& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::omero::api::_cpp_delete::DeleteCommand> DeleteCommands;
void __writeDeleteCommands(::IceInternal::BasicStream*, const ::omero::api::_cpp_delete::DeleteCommand*, const ::omero::api::_cpp_delete::DeleteCommand*);
void __readDeleteCommands(::IceInternal::BasicStream*, DeleteCommands&);

typedef ::std::vector< ::omero::api::_cpp_delete::DeleteReportPtr> DeleteReports;
void __writeDeleteReports(::IceInternal::BasicStream*, const ::omero::api::_cpp_delete::DeleteReportPtr*, const ::omero::api::_cpp_delete::DeleteReportPtr*);
void __readDeleteReports(::IceInternal::BasicStream*, DeleteReports&);

}

}

}

namespace omero
{

namespace api
{

class AMI_IDelete_checkImageDelete : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IDeletePrx&, ::Ice::Long, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IDelete_checkImageDelete> AMI_IDelete_checkImageDeletePtr;

class AMD_IDelete_checkImageDelete : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IDelete_checkImageDelete> AMD_IDelete_checkImageDeletePtr;

class AMI_IDelete_previewImageDelete : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IDeletePrx&, ::Ice::Long, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IDelete_previewImageDelete> AMI_IDelete_previewImageDeletePtr;

class AMD_IDelete_previewImageDelete : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IDelete_previewImageDelete> AMD_IDelete_previewImageDeletePtr;

class AMI_IDelete_deleteImage : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IDeletePrx&, ::Ice::Long, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IDelete_deleteImage> AMI_IDelete_deleteImagePtr;

class AMD_IDelete_deleteImage : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IDelete_deleteImage> AMD_IDelete_deleteImagePtr;

class AMI_IDelete_deleteImages : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IDeletePrx&, const ::omero::api::LongList&, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IDelete_deleteImages> AMI_IDelete_deleteImagesPtr;

class AMD_IDelete_deleteImages : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IDelete_deleteImages> AMD_IDelete_deleteImagesPtr;

class AMI_IDelete_deleteImagesByDataset : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IDeletePrx&, ::Ice::Long, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IDelete_deleteImagesByDataset> AMI_IDelete_deleteImagesByDatasetPtr;

class AMD_IDelete_deleteImagesByDataset : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IDelete_deleteImagesByDataset> AMD_IDelete_deleteImagesByDatasetPtr;

class AMI_IDelete_deleteSettings : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IDeletePrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IDelete_deleteSettings> AMI_IDelete_deleteSettingsPtr;

class AMD_IDelete_deleteSettings : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IDelete_deleteSettings> AMD_IDelete_deleteSettingsPtr;

class AMI_IDelete_deletePlate : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IDeletePrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IDelete_deletePlate> AMI_IDelete_deletePlatePtr;

class AMD_IDelete_deletePlate : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IDelete_deletePlate> AMD_IDelete_deletePlatePtr;

class AMI_IDelete_availableCommands : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::_cpp_delete::DeleteCommands&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IDeletePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IDelete_availableCommands> AMI_IDelete_availableCommandsPtr;

class AMD_IDelete_availableCommands : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::_cpp_delete::DeleteCommands&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IDelete_availableCommands> AMD_IDelete_availableCommandsPtr;

class AMI_IDelete_queueDelete : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::_cpp_delete::DeleteHandlePrx&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IDeletePrx&, const ::omero::api::_cpp_delete::DeleteCommands&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IDelete_queueDelete> AMI_IDelete_queueDeletePtr;

class AMD_IDelete_queueDelete : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::_cpp_delete::DeleteHandlePrx&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IDelete_queueDelete> AMD_IDelete_queueDeletePtr;

}

}

namespace IceAsync
{

namespace omero
{

namespace api
{

class AMD_IDelete_checkImageDelete : public ::omero::api::AMD_IDelete_checkImageDelete, public ::IceInternal::IncomingAsync
{
public:

    AMD_IDelete_checkImageDelete(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IDelete_previewImageDelete : public ::omero::api::AMD_IDelete_previewImageDelete, public ::IceInternal::IncomingAsync
{
public:

    AMD_IDelete_previewImageDelete(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IDelete_deleteImage : public ::omero::api::AMD_IDelete_deleteImage, public ::IceInternal::IncomingAsync
{
public:

    AMD_IDelete_deleteImage(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IDelete_deleteImages : public ::omero::api::AMD_IDelete_deleteImages, public ::IceInternal::IncomingAsync
{
public:

    AMD_IDelete_deleteImages(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IDelete_deleteImagesByDataset : public ::omero::api::AMD_IDelete_deleteImagesByDataset, public ::IceInternal::IncomingAsync
{
public:

    AMD_IDelete_deleteImagesByDataset(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IDelete_deleteSettings : public ::omero::api::AMD_IDelete_deleteSettings, public ::IceInternal::IncomingAsync
{
public:

    AMD_IDelete_deleteSettings(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IDelete_deletePlate : public ::omero::api::AMD_IDelete_deletePlate, public ::IceInternal::IncomingAsync
{
public:

    AMD_IDelete_deletePlate(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IDelete_availableCommands : public ::omero::api::AMD_IDelete_availableCommands, public ::IceInternal::IncomingAsync
{
public:

    AMD_IDelete_availableCommands(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::_cpp_delete::DeleteCommands&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IDelete_queueDelete : public ::omero::api::AMD_IDelete_queueDelete, public ::IceInternal::IncomingAsync
{
public:

    AMD_IDelete_queueDelete(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::_cpp_delete::DeleteHandlePrx&);
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

namespace _cpp_delete
{

class DeleteReport : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<DeleteReport> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteReport*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<DeleteReport*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteReport> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteReport*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<DeleteReport*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteReport> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteReport*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<DeleteReport*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteReport> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteReport*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<DeleteReport*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteReport> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteReport*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<DeleteReport*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteReport> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteReport*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<DeleteReport*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteReport> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteReport*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<DeleteReport*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteReport> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteReport*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<DeleteReport*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteReport> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteReport*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<DeleteReport*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteReport> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteReport*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<DeleteReport*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteReport> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteReport*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<DeleteReport*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteReport> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteReport*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<DeleteReport*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteReport> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteReport*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<DeleteReport*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteReport> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteReport*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<DeleteReport*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteReport> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteReport*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<DeleteReport*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteReport> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteReport*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<DeleteReport*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteReport> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteReport*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<DeleteReport*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteReport> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteReport*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<DeleteReport*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteReport> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteReport*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<DeleteReport*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class DeleteHandle : virtual public ::IceProxy::Ice::Object
{
public:

    ICE_DEPRECATED_API ::omero::api::_cpp_delete::DeleteCommands commands()
    {
        return commands(0);
    }
    ICE_DEPRECATED_API ::omero::api::_cpp_delete::DeleteCommands commands(const ::Ice::Context& __ctx)
    {
        return commands(&__ctx);
    }
    
private:

    ::omero::api::_cpp_delete::DeleteCommands commands(const ::Ice::Context*);
    
public:

    ICE_DEPRECATED_API ::omero::api::_cpp_delete::DeleteReports report()
    {
        return report(0);
    }
    ICE_DEPRECATED_API ::omero::api::_cpp_delete::DeleteReports report(const ::Ice::Context& __ctx)
    {
        return report(&__ctx);
    }
    
private:

    ::omero::api::_cpp_delete::DeleteReports report(const ::Ice::Context*);
    
public:

    ICE_DEPRECATED_API bool finished()
    {
        return finished(0);
    }
    ICE_DEPRECATED_API bool finished(const ::Ice::Context& __ctx)
    {
        return finished(&__ctx);
    }
    
private:

    bool finished(const ::Ice::Context*);
    
public:

    ICE_DEPRECATED_API ::Ice::Int errors()
    {
        return errors(0);
    }
    ICE_DEPRECATED_API ::Ice::Int errors(const ::Ice::Context& __ctx)
    {
        return errors(&__ctx);
    }
    
private:

    ::Ice::Int errors(const ::Ice::Context*);
    
public:

    ICE_DEPRECATED_API bool cancel()
    {
        return cancel(0);
    }
    ICE_DEPRECATED_API bool cancel(const ::Ice::Context& __ctx)
    {
        return cancel(&__ctx);
    }
    
private:

    bool cancel(const ::Ice::Context*);
    
public:

    ICE_DEPRECATED_API void close()
    {
        close(0);
    }
    ICE_DEPRECATED_API void close(const ::Ice::Context& __ctx)
    {
        close(&__ctx);
    }
    
private:

    void close(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<DeleteHandle> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteHandle*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<DeleteHandle*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteHandle> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteHandle*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<DeleteHandle*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteHandle> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteHandle*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<DeleteHandle*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteHandle> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteHandle*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<DeleteHandle*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteHandle> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteHandle*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<DeleteHandle*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteHandle> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteHandle*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<DeleteHandle*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteHandle> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteHandle*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<DeleteHandle*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteHandle> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteHandle*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<DeleteHandle*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteHandle> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteHandle*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<DeleteHandle*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteHandle> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteHandle*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<DeleteHandle*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteHandle> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteHandle*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<DeleteHandle*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteHandle> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteHandle*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<DeleteHandle*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteHandle> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteHandle*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<DeleteHandle*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteHandle> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteHandle*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<DeleteHandle*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteHandle> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteHandle*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<DeleteHandle*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteHandle> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteHandle*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<DeleteHandle*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteHandle> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteHandle*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<DeleteHandle*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteHandle> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteHandle*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<DeleteHandle*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteHandle> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteHandle*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<DeleteHandle*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

class IDelete : virtual public ::IceProxy::omero::api::ServiceInterface
{
public:

    ICE_DEPRECATED_API ::omero::api::IObjectList checkImageDelete(::Ice::Long id, bool force)
    {
        return checkImageDelete(id, force, 0);
    }
    ICE_DEPRECATED_API ::omero::api::IObjectList checkImageDelete(::Ice::Long id, bool force, const ::Ice::Context& __ctx)
    {
        return checkImageDelete(id, force, &__ctx);
    }
    
private:

    ::omero::api::IObjectList checkImageDelete(::Ice::Long, bool, const ::Ice::Context*);
    
public:
    bool checkImageDelete_async(const ::omero::api::AMI_IDelete_checkImageDeletePtr&, ::Ice::Long, bool);
    bool checkImageDelete_async(const ::omero::api::AMI_IDelete_checkImageDeletePtr&, ::Ice::Long, bool, const ::Ice::Context&);

    ICE_DEPRECATED_API ::omero::api::IObjectList previewImageDelete(::Ice::Long id, bool force)
    {
        return previewImageDelete(id, force, 0);
    }
    ICE_DEPRECATED_API ::omero::api::IObjectList previewImageDelete(::Ice::Long id, bool force, const ::Ice::Context& __ctx)
    {
        return previewImageDelete(id, force, &__ctx);
    }
    
private:

    ::omero::api::IObjectList previewImageDelete(::Ice::Long, bool, const ::Ice::Context*);
    
public:
    bool previewImageDelete_async(const ::omero::api::AMI_IDelete_previewImageDeletePtr&, ::Ice::Long, bool);
    bool previewImageDelete_async(const ::omero::api::AMI_IDelete_previewImageDeletePtr&, ::Ice::Long, bool, const ::Ice::Context&);

    ICE_DEPRECATED_API void deleteImage(::Ice::Long id, bool force)
    {
        deleteImage(id, force, 0);
    }
    ICE_DEPRECATED_API void deleteImage(::Ice::Long id, bool force, const ::Ice::Context& __ctx)
    {
        deleteImage(id, force, &__ctx);
    }
    
private:

    void deleteImage(::Ice::Long, bool, const ::Ice::Context*);
    
public:
    bool deleteImage_async(const ::omero::api::AMI_IDelete_deleteImagePtr&, ::Ice::Long, bool);
    bool deleteImage_async(const ::omero::api::AMI_IDelete_deleteImagePtr&, ::Ice::Long, bool, const ::Ice::Context&);

    ICE_DEPRECATED_API void deleteImages(const ::omero::api::LongList& ids, bool force)
    {
        deleteImages(ids, force, 0);
    }
    ICE_DEPRECATED_API void deleteImages(const ::omero::api::LongList& ids, bool force, const ::Ice::Context& __ctx)
    {
        deleteImages(ids, force, &__ctx);
    }
    
private:

    void deleteImages(const ::omero::api::LongList&, bool, const ::Ice::Context*);
    
public:
    bool deleteImages_async(const ::omero::api::AMI_IDelete_deleteImagesPtr&, const ::omero::api::LongList&, bool);
    bool deleteImages_async(const ::omero::api::AMI_IDelete_deleteImagesPtr&, const ::omero::api::LongList&, bool, const ::Ice::Context&);

    ICE_DEPRECATED_API void deleteImagesByDataset(::Ice::Long datasetId, bool force)
    {
        deleteImagesByDataset(datasetId, force, 0);
    }
    ICE_DEPRECATED_API void deleteImagesByDataset(::Ice::Long datasetId, bool force, const ::Ice::Context& __ctx)
    {
        deleteImagesByDataset(datasetId, force, &__ctx);
    }
    
private:

    void deleteImagesByDataset(::Ice::Long, bool, const ::Ice::Context*);
    
public:
    bool deleteImagesByDataset_async(const ::omero::api::AMI_IDelete_deleteImagesByDatasetPtr&, ::Ice::Long, bool);
    bool deleteImagesByDataset_async(const ::omero::api::AMI_IDelete_deleteImagesByDatasetPtr&, ::Ice::Long, bool, const ::Ice::Context&);

    ICE_DEPRECATED_API void deleteSettings(::Ice::Long imageId)
    {
        deleteSettings(imageId, 0);
    }
    ICE_DEPRECATED_API void deleteSettings(::Ice::Long imageId, const ::Ice::Context& __ctx)
    {
        deleteSettings(imageId, &__ctx);
    }
    
private:

    void deleteSettings(::Ice::Long, const ::Ice::Context*);
    
public:
    bool deleteSettings_async(const ::omero::api::AMI_IDelete_deleteSettingsPtr&, ::Ice::Long);
    bool deleteSettings_async(const ::omero::api::AMI_IDelete_deleteSettingsPtr&, ::Ice::Long, const ::Ice::Context&);

    ICE_DEPRECATED_API void deletePlate(::Ice::Long plateId)
    {
        deletePlate(plateId, 0);
    }
    ICE_DEPRECATED_API void deletePlate(::Ice::Long plateId, const ::Ice::Context& __ctx)
    {
        deletePlate(plateId, &__ctx);
    }
    
private:

    void deletePlate(::Ice::Long, const ::Ice::Context*);
    
public:
    bool deletePlate_async(const ::omero::api::AMI_IDelete_deletePlatePtr&, ::Ice::Long);
    bool deletePlate_async(const ::omero::api::AMI_IDelete_deletePlatePtr&, ::Ice::Long, const ::Ice::Context&);

    ICE_DEPRECATED_API ::omero::api::_cpp_delete::DeleteCommands availableCommands()
    {
        return availableCommands(0);
    }
    ICE_DEPRECATED_API ::omero::api::_cpp_delete::DeleteCommands availableCommands(const ::Ice::Context& __ctx)
    {
        return availableCommands(&__ctx);
    }
    
private:

    ::omero::api::_cpp_delete::DeleteCommands availableCommands(const ::Ice::Context*);
    
public:
    bool availableCommands_async(const ::omero::api::AMI_IDelete_availableCommandsPtr&);
    bool availableCommands_async(const ::omero::api::AMI_IDelete_availableCommandsPtr&, const ::Ice::Context&);

    ICE_DEPRECATED_API ::omero::api::_cpp_delete::DeleteHandlePrx queueDelete(const ::omero::api::_cpp_delete::DeleteCommands& commands)
    {
        return queueDelete(commands, 0);
    }
    ICE_DEPRECATED_API ::omero::api::_cpp_delete::DeleteHandlePrx queueDelete(const ::omero::api::_cpp_delete::DeleteCommands& commands, const ::Ice::Context& __ctx)
    {
        return queueDelete(commands, &__ctx);
    }
    
private:

    ::omero::api::_cpp_delete::DeleteHandlePrx queueDelete(const ::omero::api::_cpp_delete::DeleteCommands&, const ::Ice::Context*);
    
public:
    bool queueDelete_async(const ::omero::api::AMI_IDelete_queueDeletePtr&, const ::omero::api::_cpp_delete::DeleteCommands&);
    bool queueDelete_async(const ::omero::api::AMI_IDelete_queueDeletePtr&, const ::omero::api::_cpp_delete::DeleteCommands&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<IDelete> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IDelete*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<IDelete*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IDelete> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IDelete*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<IDelete*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IDelete> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IDelete*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<IDelete*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IDelete> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IDelete*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<IDelete*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IDelete> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IDelete*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<IDelete*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IDelete> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IDelete*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<IDelete*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IDelete> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IDelete*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<IDelete*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IDelete> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IDelete*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<IDelete*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IDelete> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IDelete*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<IDelete*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IDelete> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IDelete*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<IDelete*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IDelete> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IDelete*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<IDelete*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IDelete> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IDelete*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<IDelete*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IDelete> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IDelete*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<IDelete*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IDelete> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IDelete*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<IDelete*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IDelete> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IDelete*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<IDelete*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IDelete> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IDelete*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<IDelete*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IDelete> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IDelete*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<IDelete*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IDelete> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IDelete*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<IDelete*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IDelete> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IDelete*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<IDelete*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace _cpp_delete
{

class DeleteReport : virtual public ::IceDelegate::Ice::Object
{
public:
};

class DeleteHandle : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::omero::api::_cpp_delete::DeleteCommands commands(const ::Ice::Context*) = 0;

    virtual ::omero::api::_cpp_delete::DeleteReports report(const ::Ice::Context*) = 0;

    virtual bool finished(const ::Ice::Context*) = 0;

    virtual ::Ice::Int errors(const ::Ice::Context*) = 0;

    virtual bool cancel(const ::Ice::Context*) = 0;

    virtual void close(const ::Ice::Context*) = 0;
};

}

class IDelete : virtual public ::IceDelegate::omero::api::ServiceInterface
{
public:

    virtual ::omero::api::IObjectList checkImageDelete(::Ice::Long, bool, const ::Ice::Context*) = 0;

    virtual ::omero::api::IObjectList previewImageDelete(::Ice::Long, bool, const ::Ice::Context*) = 0;

    virtual void deleteImage(::Ice::Long, bool, const ::Ice::Context*) = 0;

    virtual void deleteImages(const ::omero::api::LongList&, bool, const ::Ice::Context*) = 0;

    virtual void deleteImagesByDataset(::Ice::Long, bool, const ::Ice::Context*) = 0;

    virtual void deleteSettings(::Ice::Long, const ::Ice::Context*) = 0;

    virtual void deletePlate(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::api::_cpp_delete::DeleteCommands availableCommands(const ::Ice::Context*) = 0;

    virtual ::omero::api::_cpp_delete::DeleteHandlePrx queueDelete(const ::omero::api::_cpp_delete::DeleteCommands&, const ::Ice::Context*) = 0;
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

namespace _cpp_delete
{

class DeleteReport : virtual public ::IceDelegate::omero::api::_cpp_delete::DeleteReport,
                     virtual public ::IceDelegateM::Ice::Object
{
public:
};

class DeleteHandle : virtual public ::IceDelegate::omero::api::_cpp_delete::DeleteHandle,
                     virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::omero::api::_cpp_delete::DeleteCommands commands(const ::Ice::Context*);

    virtual ::omero::api::_cpp_delete::DeleteReports report(const ::Ice::Context*);

    virtual bool finished(const ::Ice::Context*);

    virtual ::Ice::Int errors(const ::Ice::Context*);

    virtual bool cancel(const ::Ice::Context*);

    virtual void close(const ::Ice::Context*);
};

}

class IDelete : virtual public ::IceDelegate::omero::api::IDelete,
                virtual public ::IceDelegateM::omero::api::ServiceInterface
{
public:

    virtual ::omero::api::IObjectList checkImageDelete(::Ice::Long, bool, const ::Ice::Context*);

    virtual ::omero::api::IObjectList previewImageDelete(::Ice::Long, bool, const ::Ice::Context*);

    virtual void deleteImage(::Ice::Long, bool, const ::Ice::Context*);

    virtual void deleteImages(const ::omero::api::LongList&, bool, const ::Ice::Context*);

    virtual void deleteImagesByDataset(::Ice::Long, bool, const ::Ice::Context*);

    virtual void deleteSettings(::Ice::Long, const ::Ice::Context*);

    virtual void deletePlate(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::_cpp_delete::DeleteCommands availableCommands(const ::Ice::Context*);

    virtual ::omero::api::_cpp_delete::DeleteHandlePrx queueDelete(const ::omero::api::_cpp_delete::DeleteCommands&, const ::Ice::Context*);
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

namespace _cpp_delete
{

class DeleteReport : virtual public ::IceDelegate::omero::api::_cpp_delete::DeleteReport,
                     virtual public ::IceDelegateD::Ice::Object
{
public:
};

class DeleteHandle : virtual public ::IceDelegate::omero::api::_cpp_delete::DeleteHandle,
                     virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::omero::api::_cpp_delete::DeleteCommands commands(const ::Ice::Context*);

    virtual ::omero::api::_cpp_delete::DeleteReports report(const ::Ice::Context*);

    virtual bool finished(const ::Ice::Context*);

    virtual ::Ice::Int errors(const ::Ice::Context*);

    virtual bool cancel(const ::Ice::Context*);

    virtual void close(const ::Ice::Context*);
};

}

class IDelete : virtual public ::IceDelegate::omero::api::IDelete,
                virtual public ::IceDelegateD::omero::api::ServiceInterface
{
public:

    virtual ::omero::api::IObjectList checkImageDelete(::Ice::Long, bool, const ::Ice::Context*);

    virtual ::omero::api::IObjectList previewImageDelete(::Ice::Long, bool, const ::Ice::Context*);

    virtual void deleteImage(::Ice::Long, bool, const ::Ice::Context*);

    virtual void deleteImages(const ::omero::api::LongList&, bool, const ::Ice::Context*);

    virtual void deleteImagesByDataset(::Ice::Long, bool, const ::Ice::Context*);

    virtual void deleteSettings(::Ice::Long, const ::Ice::Context*);

    virtual void deletePlate(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::_cpp_delete::DeleteCommands availableCommands(const ::Ice::Context*);

    virtual ::omero::api::_cpp_delete::DeleteHandlePrx queueDelete(const ::omero::api::_cpp_delete::DeleteCommands&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace api
{

namespace _cpp_delete
{

class DeleteReport : virtual public ::Ice::Object
{
public:

    typedef DeleteReportPrx ProxyType;
    typedef DeleteReportPtr PointerType;
    
    DeleteReport() {}
    DeleteReport(const ::omero::api::_cpp_delete::DeleteCommand&, const ::std::string&, const ::std::string&, const ::omero::api::IdListMap&, ::Ice::Int, ::Ice::Long, ::Ice::Long, ::Ice::Long, const ::omero::api::LongArray&, const ::omero::api::LongArray&, ::Ice::Long);
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

    virtual ~DeleteReport() {}

    friend class DeleteReport__staticInit;

public:

    ::omero::api::_cpp_delete::DeleteCommand command;

    ::std::string error;

    ::std::string warning;

    ::omero::api::IdListMap undeletedFiles;

    ::Ice::Int steps;

    ::Ice::Long scheduledDeletes;

    ::Ice::Long actualDeletes;

    ::Ice::Long start;

    ::omero::api::LongArray stepStarts;

    ::omero::api::LongArray stepStops;

    ::Ice::Long stop;
};

class DeleteReport__staticInit
{
public:

    ::omero::api::_cpp_delete::DeleteReport _init;
};

static DeleteReport__staticInit _DeleteReport_init;

class DeleteHandle : virtual public ::Ice::Object
{
public:

    typedef DeleteHandlePrx ProxyType;
    typedef DeleteHandlePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    ICE_DEPRECATED_API virtual ::omero::api::_cpp_delete::DeleteCommands commands(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___commands(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual ::omero::api::_cpp_delete::DeleteReports report(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___report(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual bool finished(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___finished(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual ::Ice::Int errors(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___errors(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual bool cancel(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___cancel(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual void close(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___close(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

class IDelete : virtual public ::omero::api::ServiceInterface
{
public:

    typedef IDeletePrx ProxyType;
    typedef IDeletePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    ICE_DEPRECATED_API virtual void checkImageDelete_async(const ::omero::api::AMD_IDelete_checkImageDeletePtr&, ::Ice::Long, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___checkImageDelete(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual void previewImageDelete_async(const ::omero::api::AMD_IDelete_previewImageDeletePtr&, ::Ice::Long, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___previewImageDelete(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual void deleteImage_async(const ::omero::api::AMD_IDelete_deleteImagePtr&, ::Ice::Long, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___deleteImage(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual void deleteImages_async(const ::omero::api::AMD_IDelete_deleteImagesPtr&, const ::omero::api::LongList&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___deleteImages(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual void deleteImagesByDataset_async(const ::omero::api::AMD_IDelete_deleteImagesByDatasetPtr&, ::Ice::Long, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___deleteImagesByDataset(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual void deleteSettings_async(const ::omero::api::AMD_IDelete_deleteSettingsPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___deleteSettings(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual void deletePlate_async(const ::omero::api::AMD_IDelete_deletePlatePtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___deletePlate(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual void availableCommands_async(const ::omero::api::AMD_IDelete_availableCommandsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___availableCommands(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual void queueDelete_async(const ::omero::api::AMD_IDelete_queueDeletePtr&, const ::omero::api::_cpp_delete::DeleteCommands&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___queueDelete(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
