// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Repositories.ice'

#ifndef __omero__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_Repositories_h__
#define __omero__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_Repositories_h__

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
#include <omero/ServerErrors.h>
#include <omero/cmd/API.h>
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

namespace grid
{

class Repository;

class ImportLocation;

class ImportSettings;

class ImportProcess;

class ImportRequest;

class ImportResponse;

class ManagedRepository;

class RawAccessRequest;

class InternalRepository;

}

}

}

namespace omero
{

namespace grid
{

class Repository;
bool operator==(const Repository&, const Repository&);
bool operator<(const Repository&, const Repository&);

class ImportLocation;
bool operator==(const ImportLocation&, const ImportLocation&);
bool operator<(const ImportLocation&, const ImportLocation&);

class ImportSettings;
bool operator==(const ImportSettings&, const ImportSettings&);
bool operator<(const ImportSettings&, const ImportSettings&);

class ImportProcess;
bool operator==(const ImportProcess&, const ImportProcess&);
bool operator<(const ImportProcess&, const ImportProcess&);

class ImportRequest;
bool operator==(const ImportRequest&, const ImportRequest&);
bool operator<(const ImportRequest&, const ImportRequest&);

class ImportResponse;
bool operator==(const ImportResponse&, const ImportResponse&);
bool operator<(const ImportResponse&, const ImportResponse&);

class ManagedRepository;
bool operator==(const ManagedRepository&, const ManagedRepository&);
bool operator<(const ManagedRepository&, const ManagedRepository&);

class RawAccessRequest;
bool operator==(const RawAccessRequest&, const RawAccessRequest&);
bool operator<(const RawAccessRequest&, const RawAccessRequest&);

class InternalRepository;
bool operator==(const InternalRepository&, const InternalRepository&);
bool operator<(const InternalRepository&, const InternalRepository&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::grid::Repository*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::Repository*);

::Ice::Object* upCast(::omero::grid::ImportLocation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::ImportLocation*);

::Ice::Object* upCast(::omero::grid::ImportSettings*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::ImportSettings*);

::Ice::Object* upCast(::omero::grid::ImportProcess*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::ImportProcess*);

::Ice::Object* upCast(::omero::grid::ImportRequest*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::ImportRequest*);

::Ice::Object* upCast(::omero::grid::ImportResponse*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::ImportResponse*);

::Ice::Object* upCast(::omero::grid::ManagedRepository*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::ManagedRepository*);

::Ice::Object* upCast(::omero::grid::RawAccessRequest*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::RawAccessRequest*);

::Ice::Object* upCast(::omero::grid::InternalRepository*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::InternalRepository*);

}

namespace omero
{

namespace grid
{

typedef ::IceInternal::Handle< ::omero::grid::Repository> RepositoryPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::Repository> RepositoryPrx;

void __read(::IceInternal::BasicStream*, RepositoryPrx&);
void __patch__RepositoryPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::ImportLocation> ImportLocationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::ImportLocation> ImportLocationPrx;

void __read(::IceInternal::BasicStream*, ImportLocationPrx&);
void __patch__ImportLocationPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::ImportSettings> ImportSettingsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::ImportSettings> ImportSettingsPrx;

void __read(::IceInternal::BasicStream*, ImportSettingsPrx&);
void __patch__ImportSettingsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::ImportProcess> ImportProcessPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::ImportProcess> ImportProcessPrx;

void __read(::IceInternal::BasicStream*, ImportProcessPrx&);
void __patch__ImportProcessPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::ImportRequest> ImportRequestPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::ImportRequest> ImportRequestPrx;

void __read(::IceInternal::BasicStream*, ImportRequestPrx&);
void __patch__ImportRequestPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::ImportResponse> ImportResponsePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::ImportResponse> ImportResponsePrx;

void __read(::IceInternal::BasicStream*, ImportResponsePrx&);
void __patch__ImportResponsePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::ManagedRepository> ManagedRepositoryPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::ManagedRepository> ManagedRepositoryPrx;

void __read(::IceInternal::BasicStream*, ManagedRepositoryPrx&);
void __patch__ManagedRepositoryPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::RawAccessRequest> RawAccessRequestPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::RawAccessRequest> RawAccessRequestPrx;

void __read(::IceInternal::BasicStream*, RawAccessRequestPrx&);
void __patch__RawAccessRequestPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::InternalRepository> InternalRepositoryPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::InternalRepository> InternalRepositoryPrx;

void __read(::IceInternal::BasicStream*, InternalRepositoryPrx&);
void __patch__InternalRepositoryPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace grid
{

class RepositoryException : public ::omero::ServerError
{
public:

    RepositoryException() {}
    RepositoryException(const ::std::string&, const ::std::string&, const ::std::string&);
    virtual ~RepositoryException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

static RepositoryException __RepositoryException_init;

class FileDeleteException : public ::omero::grid::RepositoryException
{
public:

    FileDeleteException() {}
    FileDeleteException(const ::std::string&, const ::std::string&, const ::std::string&);
    virtual ~FileDeleteException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class UnregisteredFileException : public ::omero::grid::RepositoryException
{
public:

    UnregisteredFileException() {}
    UnregisteredFileException(const ::std::string&, const ::std::string&, const ::std::string&, const ::omero::model::OriginalFilePtr&);
    virtual ~UnregisteredFileException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::omero::model::OriginalFilePtr file;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
    virtual bool __usesClasses() const;
};

typedef ::std::vector< ::omero::grid::ImportProcessPrx> ImportProcessList;
void __writeImportProcessList(::IceInternal::BasicStream*, const ::omero::grid::ImportProcessPrx*, const ::omero::grid::ImportProcessPrx*);
void __readImportProcessList(::IceInternal::BasicStream*, ImportProcessList&);

typedef ::std::vector< ::omero::grid::RepositoryPrx> RepositoryProxyList;
void __writeRepositoryProxyList(::IceInternal::BasicStream*, const ::omero::grid::RepositoryPrx*, const ::omero::grid::RepositoryPrx*);
void __readRepositoryProxyList(::IceInternal::BasicStream*, RepositoryProxyList&);

struct RepositoryMap
{
    ::omero::api::OriginalFileList descriptions;
    ::omero::grid::RepositoryProxyList proxies;

    bool operator==(const RepositoryMap&) const;
    bool operator<(const RepositoryMap&) const;
    bool operator!=(const RepositoryMap& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const RepositoryMap& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const RepositoryMap& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const RepositoryMap& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

}

}

namespace omero
{

namespace grid
{

class AMI_Repository_root : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::OriginalFilePtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::RepositoryPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Repository_root> AMI_Repository_rootPtr;

class AMI_Repository_mimetype : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::RepositoryPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Repository_mimetype> AMI_Repository_mimetypePtr;

class AMI_Repository_list : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::StringSet&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::RepositoryPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Repository_list> AMI_Repository_listPtr;

class AMI_Repository_listFiles : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::OriginalFileList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::RepositoryPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Repository_listFiles> AMI_Repository_listFilesPtr;

class AMI_Repository_register : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::OriginalFilePtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::RepositoryPrx&, const ::std::string&, const ::omero::RStringPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Repository_register> AMI_Repository_registerPtr;

class AMI_Repository_file : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::RawFileStorePrx&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::RepositoryPrx&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Repository_file> AMI_Repository_filePtr;

class AMI_Repository_pixels : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::RawPixelsStorePrx&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::RepositoryPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Repository_pixels> AMI_Repository_pixelsPtr;

class AMI_Repository_fileById : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::RawFileStorePrx&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::RepositoryPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Repository_fileById> AMI_Repository_fileByIdPtr;

class AMI_Repository_fileExists : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::RepositoryPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Repository_fileExists> AMI_Repository_fileExistsPtr;

class AMI_Repository_makeDir : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::RepositoryPrx&, const ::std::string&, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Repository_makeDir> AMI_Repository_makeDirPtr;

class AMI_Repository_treeList : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::RMapPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::RepositoryPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Repository_treeList> AMI_Repository_treeListPtr;

class AMI_Repository_deletePaths : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::cmd::HandlePrx&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::RepositoryPrx&, const ::omero::api::StringArray&, bool, bool, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_Repository_deletePaths> AMI_Repository_deletePathsPtr;

class AMI_ManagedRepository_importFileset : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::grid::ImportProcessPrx&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::ManagedRepositoryPrx&, const ::omero::model::FilesetPtr&, const ::omero::grid::ImportSettingsPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_ManagedRepository_importFileset> AMI_ManagedRepository_importFilesetPtr;

class AMI_ManagedRepository_importPaths : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::grid::ImportProcessPrx&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::ManagedRepositoryPrx&, const ::omero::api::StringSet&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_ManagedRepository_importPaths> AMI_ManagedRepository_importPathsPtr;

class AMI_ManagedRepository_listImports : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::grid::ImportProcessList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::ManagedRepositoryPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_ManagedRepository_listImports> AMI_ManagedRepository_listImportsPtr;

class AMI_ManagedRepository_listChecksumAlgorithms : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::ChecksumAlgorithmList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::ManagedRepositoryPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_ManagedRepository_listChecksumAlgorithms> AMI_ManagedRepository_listChecksumAlgorithmsPtr;

class AMI_ManagedRepository_suggestChecksumAlgorithm : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::ChecksumAlgorithmPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::ManagedRepositoryPrx&, const ::omero::api::ChecksumAlgorithmList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_ManagedRepository_suggestChecksumAlgorithm> AMI_ManagedRepository_suggestChecksumAlgorithmPtr;

class AMI_InternalRepository_createRawFileStore : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::RawFileStorePrx&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::InternalRepositoryPrx&, const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_InternalRepository_createRawFileStore> AMI_InternalRepository_createRawFileStorePtr;

class AMI_InternalRepository_createRawPixelsStore : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::RawPixelsStorePrx&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::InternalRepositoryPrx&, const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_InternalRepository_createRawPixelsStore> AMI_InternalRepository_createRawPixelsStorePtr;

class AMI_InternalRepository_createRenderingEngine : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::RenderingEnginePrx&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::InternalRepositoryPrx&, const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_InternalRepository_createRenderingEngine> AMI_InternalRepository_createRenderingEnginePtr;

class AMI_InternalRepository_createThumbnailStore : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::ThumbnailStorePrx&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::InternalRepositoryPrx&, const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_InternalRepository_createThumbnailStore> AMI_InternalRepository_createThumbnailStorePtr;

class AMI_InternalRepository_getDescription : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::OriginalFilePtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::InternalRepositoryPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_InternalRepository_getDescription> AMI_InternalRepository_getDescriptionPtr;

class AMI_InternalRepository_getProxy : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::grid::RepositoryPrx&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::InternalRepositoryPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_InternalRepository_getProxy> AMI_InternalRepository_getProxyPtr;

class AMI_InternalRepository_rawAccess : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::cmd::ResponsePtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::InternalRepositoryPrx&, const ::omero::grid::RawAccessRequestPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_InternalRepository_rawAccess> AMI_InternalRepository_rawAccessPtr;

class AMI_InternalRepository_getFilePath : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::grid::InternalRepositoryPrx&, const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::grid::AMI_InternalRepository_getFilePath> AMI_InternalRepository_getFilePathPtr;

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

class Repository : virtual public ::IceProxy::Ice::Object
{
public:

    ::omero::model::OriginalFilePtr root()
    {
        return root(0);
    }
    ::omero::model::OriginalFilePtr root(const ::Ice::Context& __ctx)
    {
        return root(&__ctx);
    }
    
private:

    ::omero::model::OriginalFilePtr root(const ::Ice::Context*);
    
public:
    bool root_async(const ::omero::grid::AMI_Repository_rootPtr&);
    bool root_async(const ::omero::grid::AMI_Repository_rootPtr&, const ::Ice::Context&);

    ::std::string mimetype(const ::std::string& path)
    {
        return mimetype(path, 0);
    }
    ::std::string mimetype(const ::std::string& path, const ::Ice::Context& __ctx)
    {
        return mimetype(path, &__ctx);
    }
    
private:

    ::std::string mimetype(const ::std::string&, const ::Ice::Context*);
    
public:
    bool mimetype_async(const ::omero::grid::AMI_Repository_mimetypePtr&, const ::std::string&);
    bool mimetype_async(const ::omero::grid::AMI_Repository_mimetypePtr&, const ::std::string&, const ::Ice::Context&);

    ::omero::api::StringSet list(const ::std::string& path)
    {
        return list(path, 0);
    }
    ::omero::api::StringSet list(const ::std::string& path, const ::Ice::Context& __ctx)
    {
        return list(path, &__ctx);
    }
    
private:

    ::omero::api::StringSet list(const ::std::string&, const ::Ice::Context*);
    
public:
    bool list_async(const ::omero::grid::AMI_Repository_listPtr&, const ::std::string&);
    bool list_async(const ::omero::grid::AMI_Repository_listPtr&, const ::std::string&, const ::Ice::Context&);

    ::omero::api::OriginalFileList listFiles(const ::std::string& path)
    {
        return listFiles(path, 0);
    }
    ::omero::api::OriginalFileList listFiles(const ::std::string& path, const ::Ice::Context& __ctx)
    {
        return listFiles(path, &__ctx);
    }
    
private:

    ::omero::api::OriginalFileList listFiles(const ::std::string&, const ::Ice::Context*);
    
public:
    bool listFiles_async(const ::omero::grid::AMI_Repository_listFilesPtr&, const ::std::string&);
    bool listFiles_async(const ::omero::grid::AMI_Repository_listFilesPtr&, const ::std::string&, const ::Ice::Context&);

    ::omero::model::OriginalFilePtr _cpp_register(const ::std::string& path, const ::omero::RStringPtr& mimetype)
    {
        return _cpp_register(path, mimetype, 0);
    }
    ::omero::model::OriginalFilePtr _cpp_register(const ::std::string& path, const ::omero::RStringPtr& mimetype, const ::Ice::Context& __ctx)
    {
        return _cpp_register(path, mimetype, &__ctx);
    }
    
private:

    ::omero::model::OriginalFilePtr _cpp_register(const ::std::string&, const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:
    bool register_async(const ::omero::grid::AMI_Repository_registerPtr&, const ::std::string&, const ::omero::RStringPtr&);
    bool register_async(const ::omero::grid::AMI_Repository_registerPtr&, const ::std::string&, const ::omero::RStringPtr&, const ::Ice::Context&);

    ::omero::api::RawFileStorePrx file(const ::std::string& path, const ::std::string& mode)
    {
        return file(path, mode, 0);
    }
    ::omero::api::RawFileStorePrx file(const ::std::string& path, const ::std::string& mode, const ::Ice::Context& __ctx)
    {
        return file(path, mode, &__ctx);
    }
    
private:

    ::omero::api::RawFileStorePrx file(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:
    bool file_async(const ::omero::grid::AMI_Repository_filePtr&, const ::std::string&, const ::std::string&);
    bool file_async(const ::omero::grid::AMI_Repository_filePtr&, const ::std::string&, const ::std::string&, const ::Ice::Context&);

    ::omero::api::RawPixelsStorePrx pixels(const ::std::string& path)
    {
        return pixels(path, 0);
    }
    ::omero::api::RawPixelsStorePrx pixels(const ::std::string& path, const ::Ice::Context& __ctx)
    {
        return pixels(path, &__ctx);
    }
    
private:

    ::omero::api::RawPixelsStorePrx pixels(const ::std::string&, const ::Ice::Context*);
    
public:
    bool pixels_async(const ::omero::grid::AMI_Repository_pixelsPtr&, const ::std::string&);
    bool pixels_async(const ::omero::grid::AMI_Repository_pixelsPtr&, const ::std::string&, const ::Ice::Context&);

    ::omero::api::RawFileStorePrx fileById(::Ice::Long id)
    {
        return fileById(id, 0);
    }
    ::omero::api::RawFileStorePrx fileById(::Ice::Long id, const ::Ice::Context& __ctx)
    {
        return fileById(id, &__ctx);
    }
    
private:

    ::omero::api::RawFileStorePrx fileById(::Ice::Long, const ::Ice::Context*);
    
public:
    bool fileById_async(const ::omero::grid::AMI_Repository_fileByIdPtr&, ::Ice::Long);
    bool fileById_async(const ::omero::grid::AMI_Repository_fileByIdPtr&, ::Ice::Long, const ::Ice::Context&);

    bool fileExists(const ::std::string& path)
    {
        return fileExists(path, 0);
    }
    bool fileExists(const ::std::string& path, const ::Ice::Context& __ctx)
    {
        return fileExists(path, &__ctx);
    }
    
private:

    bool fileExists(const ::std::string&, const ::Ice::Context*);
    
public:
    bool fileExists_async(const ::omero::grid::AMI_Repository_fileExistsPtr&, const ::std::string&);
    bool fileExists_async(const ::omero::grid::AMI_Repository_fileExistsPtr&, const ::std::string&, const ::Ice::Context&);

    void makeDir(const ::std::string& path, bool parents)
    {
        makeDir(path, parents, 0);
    }
    void makeDir(const ::std::string& path, bool parents, const ::Ice::Context& __ctx)
    {
        makeDir(path, parents, &__ctx);
    }
    
private:

    void makeDir(const ::std::string&, bool, const ::Ice::Context*);
    
public:
    bool makeDir_async(const ::omero::grid::AMI_Repository_makeDirPtr&, const ::std::string&, bool);
    bool makeDir_async(const ::omero::grid::AMI_Repository_makeDirPtr&, const ::std::string&, bool, const ::Ice::Context&);

    ::omero::RMapPtr treeList(const ::std::string& path)
    {
        return treeList(path, 0);
    }
    ::omero::RMapPtr treeList(const ::std::string& path, const ::Ice::Context& __ctx)
    {
        return treeList(path, &__ctx);
    }
    
private:

    ::omero::RMapPtr treeList(const ::std::string&, const ::Ice::Context*);
    
public:
    bool treeList_async(const ::omero::grid::AMI_Repository_treeListPtr&, const ::std::string&);
    bool treeList_async(const ::omero::grid::AMI_Repository_treeListPtr&, const ::std::string&, const ::Ice::Context&);

    ::omero::cmd::HandlePrx deletePaths(const ::omero::api::StringArray& paths, bool recursively, bool force)
    {
        return deletePaths(paths, recursively, force, 0);
    }
    ::omero::cmd::HandlePrx deletePaths(const ::omero::api::StringArray& paths, bool recursively, bool force, const ::Ice::Context& __ctx)
    {
        return deletePaths(paths, recursively, force, &__ctx);
    }
    
private:

    ::omero::cmd::HandlePrx deletePaths(const ::omero::api::StringArray&, bool, bool, const ::Ice::Context*);
    
public:
    bool deletePaths_async(const ::omero::grid::AMI_Repository_deletePathsPtr&, const ::omero::api::StringArray&, bool, bool);
    bool deletePaths_async(const ::omero::grid::AMI_Repository_deletePathsPtr&, const ::omero::api::StringArray&, bool, bool, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<Repository> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Repository*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Repository*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Repository> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Repository*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Repository*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Repository> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Repository*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Repository*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Repository> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Repository*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Repository*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Repository> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Repository*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Repository*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Repository> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Repository*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Repository*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Repository> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Repository*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Repository*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Repository> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Repository*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Repository*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Repository> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Repository*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Repository*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Repository> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Repository*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Repository*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Repository> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Repository*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Repository*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Repository> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Repository*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Repository*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Repository> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Repository*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Repository*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Repository> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Repository*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Repository*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Repository> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Repository*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Repository*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Repository> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Repository*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Repository*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Repository> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Repository*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Repository*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Repository> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Repository*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Repository*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Repository> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Repository*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Repository*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class ImportLocation : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<ImportLocation> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportLocation*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ImportLocation*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportLocation> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportLocation*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ImportLocation*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportLocation> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportLocation*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ImportLocation*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportLocation> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportLocation*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ImportLocation*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportLocation> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportLocation*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ImportLocation*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportLocation> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportLocation*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ImportLocation*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportLocation> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportLocation*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ImportLocation*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportLocation> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportLocation*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ImportLocation*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportLocation> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportLocation*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ImportLocation*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportLocation> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportLocation*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ImportLocation*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportLocation> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportLocation*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ImportLocation*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportLocation> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportLocation*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ImportLocation*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportLocation> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportLocation*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ImportLocation*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportLocation> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportLocation*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ImportLocation*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportLocation> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportLocation*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ImportLocation*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportLocation> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportLocation*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ImportLocation*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportLocation> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportLocation*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ImportLocation*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportLocation> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportLocation*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ImportLocation*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportLocation> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportLocation*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ImportLocation*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class ImportSettings : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<ImportSettings> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportSettings*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ImportSettings*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportSettings> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportSettings*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ImportSettings*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportSettings> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportSettings*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ImportSettings*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportSettings> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportSettings*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ImportSettings*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportSettings> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportSettings*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ImportSettings*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportSettings> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportSettings*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ImportSettings*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportSettings> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportSettings*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ImportSettings*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportSettings> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportSettings*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ImportSettings*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportSettings> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportSettings*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ImportSettings*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportSettings> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportSettings*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ImportSettings*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportSettings> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportSettings*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ImportSettings*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportSettings> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportSettings*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ImportSettings*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportSettings> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportSettings*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ImportSettings*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportSettings> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportSettings*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ImportSettings*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportSettings> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportSettings*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ImportSettings*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportSettings> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportSettings*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ImportSettings*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportSettings> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportSettings*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ImportSettings*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportSettings> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportSettings*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ImportSettings*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportSettings> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportSettings*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ImportSettings*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class ImportProcess : virtual public ::IceProxy::omero::api::StatefulServiceInterface
{
public:

    ::omero::api::RawFileStorePrx getUploader(::Ice::Int i)
    {
        return getUploader(i, 0);
    }
    ::omero::api::RawFileStorePrx getUploader(::Ice::Int i, const ::Ice::Context& __ctx)
    {
        return getUploader(i, &__ctx);
    }
    
private:

    ::omero::api::RawFileStorePrx getUploader(::Ice::Int, const ::Ice::Context*);
    
public:

    ::omero::cmd::HandlePrx verifyUpload(const ::omero::api::StringSet& hash)
    {
        return verifyUpload(hash, 0);
    }
    ::omero::cmd::HandlePrx verifyUpload(const ::omero::api::StringSet& hash, const ::Ice::Context& __ctx)
    {
        return verifyUpload(hash, &__ctx);
    }
    
private:

    ::omero::cmd::HandlePrx verifyUpload(const ::omero::api::StringSet&, const ::Ice::Context*);
    
public:

    ::Ice::Long getUploadOffset(::Ice::Int i)
    {
        return getUploadOffset(i, 0);
    }
    ::Ice::Long getUploadOffset(::Ice::Int i, const ::Ice::Context& __ctx)
    {
        return getUploadOffset(i, &__ctx);
    }
    
private:

    ::Ice::Long getUploadOffset(::Ice::Int, const ::Ice::Context*);
    
public:

    ::omero::cmd::HandlePrx getHandle()
    {
        return getHandle(0);
    }
    ::omero::cmd::HandlePrx getHandle(const ::Ice::Context& __ctx)
    {
        return getHandle(&__ctx);
    }
    
private:

    ::omero::cmd::HandlePrx getHandle(const ::Ice::Context*);
    
public:

    ::omero::grid::ImportSettingsPtr getImportSettings()
    {
        return getImportSettings(0);
    }
    ::omero::grid::ImportSettingsPtr getImportSettings(const ::Ice::Context& __ctx)
    {
        return getImportSettings(&__ctx);
    }
    
private:

    ::omero::grid::ImportSettingsPtr getImportSettings(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<ImportProcess> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportProcess*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ImportProcess*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportProcess> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportProcess*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ImportProcess*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportProcess> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportProcess*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ImportProcess*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportProcess> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportProcess*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ImportProcess*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportProcess> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportProcess*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ImportProcess*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportProcess> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportProcess*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ImportProcess*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportProcess> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportProcess*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ImportProcess*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportProcess> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportProcess*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ImportProcess*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportProcess> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportProcess*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ImportProcess*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportProcess> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportProcess*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ImportProcess*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportProcess> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportProcess*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ImportProcess*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportProcess> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportProcess*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ImportProcess*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportProcess> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportProcess*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ImportProcess*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportProcess> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportProcess*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ImportProcess*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportProcess> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportProcess*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ImportProcess*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportProcess> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportProcess*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ImportProcess*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportProcess> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportProcess*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ImportProcess*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportProcess> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportProcess*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ImportProcess*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportProcess> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportProcess*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ImportProcess*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class ImportRequest : virtual public ::IceProxy::omero::cmd::Request
{
public:
    
    ::IceInternal::ProxyHandle<ImportRequest> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportRequest*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ImportRequest*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportRequest> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportRequest*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ImportRequest*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportRequest> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportRequest*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ImportRequest*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportRequest> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportRequest*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ImportRequest*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportRequest> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportRequest*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ImportRequest*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportRequest> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportRequest*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ImportRequest*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportRequest> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportRequest*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ImportRequest*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportRequest> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportRequest*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ImportRequest*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportRequest> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportRequest*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ImportRequest*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportRequest> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportRequest*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ImportRequest*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportRequest> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportRequest*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ImportRequest*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportRequest> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportRequest*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ImportRequest*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportRequest> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportRequest*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ImportRequest*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportRequest> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportRequest*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ImportRequest*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportRequest> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportRequest*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ImportRequest*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportRequest> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportRequest*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ImportRequest*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportRequest> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportRequest*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ImportRequest*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportRequest> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportRequest*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ImportRequest*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportRequest> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportRequest*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ImportRequest*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class ImportResponse : virtual public ::IceProxy::omero::cmd::Response
{
public:
    
    ::IceInternal::ProxyHandle<ImportResponse> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportResponse*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ImportResponse*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportResponse> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportResponse*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ImportResponse*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportResponse> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportResponse*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ImportResponse*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportResponse> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportResponse*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ImportResponse*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportResponse> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportResponse*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ImportResponse*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportResponse> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportResponse*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ImportResponse*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportResponse> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportResponse*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ImportResponse*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportResponse> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportResponse*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ImportResponse*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportResponse> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportResponse*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ImportResponse*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportResponse> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportResponse*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ImportResponse*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportResponse> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportResponse*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ImportResponse*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportResponse> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportResponse*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ImportResponse*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportResponse> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportResponse*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ImportResponse*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportResponse> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportResponse*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ImportResponse*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportResponse> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportResponse*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ImportResponse*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportResponse> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportResponse*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ImportResponse*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportResponse> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportResponse*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ImportResponse*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportResponse> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportResponse*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ImportResponse*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImportResponse> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImportResponse*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ImportResponse*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class ManagedRepository : virtual public ::IceProxy::omero::grid::Repository
{
public:

    ::omero::grid::ImportProcessPrx importFileset(const ::omero::model::FilesetPtr& fs, const ::omero::grid::ImportSettingsPtr& settings)
    {
        return importFileset(fs, settings, 0);
    }
    ::omero::grid::ImportProcessPrx importFileset(const ::omero::model::FilesetPtr& fs, const ::omero::grid::ImportSettingsPtr& settings, const ::Ice::Context& __ctx)
    {
        return importFileset(fs, settings, &__ctx);
    }
    
private:

    ::omero::grid::ImportProcessPrx importFileset(const ::omero::model::FilesetPtr&, const ::omero::grid::ImportSettingsPtr&, const ::Ice::Context*);
    
public:
    bool importFileset_async(const ::omero::grid::AMI_ManagedRepository_importFilesetPtr&, const ::omero::model::FilesetPtr&, const ::omero::grid::ImportSettingsPtr&);
    bool importFileset_async(const ::omero::grid::AMI_ManagedRepository_importFilesetPtr&, const ::omero::model::FilesetPtr&, const ::omero::grid::ImportSettingsPtr&, const ::Ice::Context&);

    ::omero::grid::ImportProcessPrx importPaths(const ::omero::api::StringSet& filePaths)
    {
        return importPaths(filePaths, 0);
    }
    ::omero::grid::ImportProcessPrx importPaths(const ::omero::api::StringSet& filePaths, const ::Ice::Context& __ctx)
    {
        return importPaths(filePaths, &__ctx);
    }
    
private:

    ::omero::grid::ImportProcessPrx importPaths(const ::omero::api::StringSet&, const ::Ice::Context*);
    
public:
    bool importPaths_async(const ::omero::grid::AMI_ManagedRepository_importPathsPtr&, const ::omero::api::StringSet&);
    bool importPaths_async(const ::omero::grid::AMI_ManagedRepository_importPathsPtr&, const ::omero::api::StringSet&, const ::Ice::Context&);

    ::omero::grid::ImportProcessList listImports()
    {
        return listImports(0);
    }
    ::omero::grid::ImportProcessList listImports(const ::Ice::Context& __ctx)
    {
        return listImports(&__ctx);
    }
    
private:

    ::omero::grid::ImportProcessList listImports(const ::Ice::Context*);
    
public:
    bool listImports_async(const ::omero::grid::AMI_ManagedRepository_listImportsPtr&);
    bool listImports_async(const ::omero::grid::AMI_ManagedRepository_listImportsPtr&, const ::Ice::Context&);

    ::omero::api::ChecksumAlgorithmList listChecksumAlgorithms()
    {
        return listChecksumAlgorithms(0);
    }
    ::omero::api::ChecksumAlgorithmList listChecksumAlgorithms(const ::Ice::Context& __ctx)
    {
        return listChecksumAlgorithms(&__ctx);
    }
    
private:

    ::omero::api::ChecksumAlgorithmList listChecksumAlgorithms(const ::Ice::Context*);
    
public:
    bool listChecksumAlgorithms_async(const ::omero::grid::AMI_ManagedRepository_listChecksumAlgorithmsPtr&);
    bool listChecksumAlgorithms_async(const ::omero::grid::AMI_ManagedRepository_listChecksumAlgorithmsPtr&, const ::Ice::Context&);

    ::omero::model::ChecksumAlgorithmPtr suggestChecksumAlgorithm(const ::omero::api::ChecksumAlgorithmList& supported)
    {
        return suggestChecksumAlgorithm(supported, 0);
    }
    ::omero::model::ChecksumAlgorithmPtr suggestChecksumAlgorithm(const ::omero::api::ChecksumAlgorithmList& supported, const ::Ice::Context& __ctx)
    {
        return suggestChecksumAlgorithm(supported, &__ctx);
    }
    
private:

    ::omero::model::ChecksumAlgorithmPtr suggestChecksumAlgorithm(const ::omero::api::ChecksumAlgorithmList&, const ::Ice::Context*);
    
public:
    bool suggestChecksumAlgorithm_async(const ::omero::grid::AMI_ManagedRepository_suggestChecksumAlgorithmPtr&, const ::omero::api::ChecksumAlgorithmList&);
    bool suggestChecksumAlgorithm_async(const ::omero::grid::AMI_ManagedRepository_suggestChecksumAlgorithmPtr&, const ::omero::api::ChecksumAlgorithmList&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<ManagedRepository> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ManagedRepository*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ManagedRepository*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ManagedRepository> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ManagedRepository*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ManagedRepository*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ManagedRepository> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ManagedRepository*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ManagedRepository*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ManagedRepository> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ManagedRepository*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ManagedRepository*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ManagedRepository> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ManagedRepository*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ManagedRepository*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ManagedRepository> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ManagedRepository*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ManagedRepository*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ManagedRepository> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ManagedRepository*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ManagedRepository*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ManagedRepository> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ManagedRepository*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ManagedRepository*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ManagedRepository> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ManagedRepository*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ManagedRepository*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ManagedRepository> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ManagedRepository*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ManagedRepository*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ManagedRepository> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ManagedRepository*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ManagedRepository*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ManagedRepository> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ManagedRepository*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ManagedRepository*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ManagedRepository> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ManagedRepository*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ManagedRepository*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ManagedRepository> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ManagedRepository*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ManagedRepository*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ManagedRepository> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ManagedRepository*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ManagedRepository*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ManagedRepository> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ManagedRepository*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ManagedRepository*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ManagedRepository> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ManagedRepository*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ManagedRepository*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ManagedRepository> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ManagedRepository*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ManagedRepository*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ManagedRepository> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ManagedRepository*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ManagedRepository*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class RawAccessRequest : virtual public ::IceProxy::omero::cmd::Request
{
public:
    
    ::IceInternal::ProxyHandle<RawAccessRequest> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawAccessRequest*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RawAccessRequest*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawAccessRequest> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawAccessRequest*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RawAccessRequest*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawAccessRequest> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawAccessRequest*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RawAccessRequest*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawAccessRequest> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawAccessRequest*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RawAccessRequest*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawAccessRequest> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawAccessRequest*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RawAccessRequest*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawAccessRequest> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawAccessRequest*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RawAccessRequest*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawAccessRequest> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawAccessRequest*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RawAccessRequest*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawAccessRequest> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawAccessRequest*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RawAccessRequest*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawAccessRequest> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawAccessRequest*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RawAccessRequest*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawAccessRequest> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawAccessRequest*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RawAccessRequest*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawAccessRequest> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawAccessRequest*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RawAccessRequest*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawAccessRequest> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawAccessRequest*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RawAccessRequest*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawAccessRequest> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawAccessRequest*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RawAccessRequest*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawAccessRequest> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawAccessRequest*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RawAccessRequest*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawAccessRequest> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawAccessRequest*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RawAccessRequest*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawAccessRequest> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawAccessRequest*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RawAccessRequest*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawAccessRequest> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawAccessRequest*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RawAccessRequest*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawAccessRequest> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawAccessRequest*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RawAccessRequest*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RawAccessRequest> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RawAccessRequest*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RawAccessRequest*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class InternalRepository : virtual public ::IceProxy::Ice::Object
{
public:

    ::omero::api::RawFileStorePrx createRawFileStore(const ::omero::model::OriginalFilePtr& file)
    {
        return createRawFileStore(file, 0);
    }
    ::omero::api::RawFileStorePrx createRawFileStore(const ::omero::model::OriginalFilePtr& file, const ::Ice::Context& __ctx)
    {
        return createRawFileStore(file, &__ctx);
    }
    
private:

    ::omero::api::RawFileStorePrx createRawFileStore(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);
    
public:
    bool createRawFileStore_async(const ::omero::grid::AMI_InternalRepository_createRawFileStorePtr&, const ::omero::model::OriginalFilePtr&);
    bool createRawFileStore_async(const ::omero::grid::AMI_InternalRepository_createRawFileStorePtr&, const ::omero::model::OriginalFilePtr&, const ::Ice::Context&);

    ::omero::api::RawPixelsStorePrx createRawPixelsStore(const ::omero::model::OriginalFilePtr& file)
    {
        return createRawPixelsStore(file, 0);
    }
    ::omero::api::RawPixelsStorePrx createRawPixelsStore(const ::omero::model::OriginalFilePtr& file, const ::Ice::Context& __ctx)
    {
        return createRawPixelsStore(file, &__ctx);
    }
    
private:

    ::omero::api::RawPixelsStorePrx createRawPixelsStore(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);
    
public:
    bool createRawPixelsStore_async(const ::omero::grid::AMI_InternalRepository_createRawPixelsStorePtr&, const ::omero::model::OriginalFilePtr&);
    bool createRawPixelsStore_async(const ::omero::grid::AMI_InternalRepository_createRawPixelsStorePtr&, const ::omero::model::OriginalFilePtr&, const ::Ice::Context&);

    ::omero::api::RenderingEnginePrx createRenderingEngine(const ::omero::model::OriginalFilePtr& file)
    {
        return createRenderingEngine(file, 0);
    }
    ::omero::api::RenderingEnginePrx createRenderingEngine(const ::omero::model::OriginalFilePtr& file, const ::Ice::Context& __ctx)
    {
        return createRenderingEngine(file, &__ctx);
    }
    
private:

    ::omero::api::RenderingEnginePrx createRenderingEngine(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);
    
public:
    bool createRenderingEngine_async(const ::omero::grid::AMI_InternalRepository_createRenderingEnginePtr&, const ::omero::model::OriginalFilePtr&);
    bool createRenderingEngine_async(const ::omero::grid::AMI_InternalRepository_createRenderingEnginePtr&, const ::omero::model::OriginalFilePtr&, const ::Ice::Context&);

    ::omero::api::ThumbnailStorePrx createThumbnailStore(const ::omero::model::OriginalFilePtr& file)
    {
        return createThumbnailStore(file, 0);
    }
    ::omero::api::ThumbnailStorePrx createThumbnailStore(const ::omero::model::OriginalFilePtr& file, const ::Ice::Context& __ctx)
    {
        return createThumbnailStore(file, &__ctx);
    }
    
private:

    ::omero::api::ThumbnailStorePrx createThumbnailStore(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);
    
public:
    bool createThumbnailStore_async(const ::omero::grid::AMI_InternalRepository_createThumbnailStorePtr&, const ::omero::model::OriginalFilePtr&);
    bool createThumbnailStore_async(const ::omero::grid::AMI_InternalRepository_createThumbnailStorePtr&, const ::omero::model::OriginalFilePtr&, const ::Ice::Context&);

    ::omero::model::OriginalFilePtr getDescription()
    {
        return getDescription(0);
    }
    ::omero::model::OriginalFilePtr getDescription(const ::Ice::Context& __ctx)
    {
        return getDescription(&__ctx);
    }
    
private:

    ::omero::model::OriginalFilePtr getDescription(const ::Ice::Context*);
    
public:
    bool getDescription_async(const ::omero::grid::AMI_InternalRepository_getDescriptionPtr&);
    bool getDescription_async(const ::omero::grid::AMI_InternalRepository_getDescriptionPtr&, const ::Ice::Context&);

    ::omero::grid::RepositoryPrx getProxy()
    {
        return getProxy(0);
    }
    ::omero::grid::RepositoryPrx getProxy(const ::Ice::Context& __ctx)
    {
        return getProxy(&__ctx);
    }
    
private:

    ::omero::grid::RepositoryPrx getProxy(const ::Ice::Context*);
    
public:
    bool getProxy_async(const ::omero::grid::AMI_InternalRepository_getProxyPtr&);
    bool getProxy_async(const ::omero::grid::AMI_InternalRepository_getProxyPtr&, const ::Ice::Context&);

    ::omero::cmd::ResponsePtr rawAccess(const ::omero::grid::RawAccessRequestPtr& raw)
    {
        return rawAccess(raw, 0);
    }
    ::omero::cmd::ResponsePtr rawAccess(const ::omero::grid::RawAccessRequestPtr& raw, const ::Ice::Context& __ctx)
    {
        return rawAccess(raw, &__ctx);
    }
    
private:

    ::omero::cmd::ResponsePtr rawAccess(const ::omero::grid::RawAccessRequestPtr&, const ::Ice::Context*);
    
public:
    bool rawAccess_async(const ::omero::grid::AMI_InternalRepository_rawAccessPtr&, const ::omero::grid::RawAccessRequestPtr&);
    bool rawAccess_async(const ::omero::grid::AMI_InternalRepository_rawAccessPtr&, const ::omero::grid::RawAccessRequestPtr&, const ::Ice::Context&);

    ::std::string getFilePath(const ::omero::model::OriginalFilePtr& file)
    {
        return getFilePath(file, 0);
    }
    ::std::string getFilePath(const ::omero::model::OriginalFilePtr& file, const ::Ice::Context& __ctx)
    {
        return getFilePath(file, &__ctx);
    }
    
private:

    ::std::string getFilePath(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);
    
public:
    bool getFilePath_async(const ::omero::grid::AMI_InternalRepository_getFilePathPtr&, const ::omero::model::OriginalFilePtr&);
    bool getFilePath_async(const ::omero::grid::AMI_InternalRepository_getFilePathPtr&, const ::omero::model::OriginalFilePtr&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<InternalRepository> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InternalRepository*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<InternalRepository*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InternalRepository> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InternalRepository*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<InternalRepository*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InternalRepository> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InternalRepository*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<InternalRepository*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InternalRepository> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InternalRepository*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<InternalRepository*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InternalRepository> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InternalRepository*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<InternalRepository*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InternalRepository> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InternalRepository*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<InternalRepository*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InternalRepository> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InternalRepository*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<InternalRepository*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InternalRepository> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InternalRepository*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<InternalRepository*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InternalRepository> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InternalRepository*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<InternalRepository*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InternalRepository> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InternalRepository*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<InternalRepository*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InternalRepository> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InternalRepository*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<InternalRepository*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InternalRepository> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InternalRepository*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<InternalRepository*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InternalRepository> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InternalRepository*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<InternalRepository*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InternalRepository> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InternalRepository*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<InternalRepository*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InternalRepository> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InternalRepository*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<InternalRepository*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InternalRepository> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InternalRepository*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<InternalRepository*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InternalRepository> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InternalRepository*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<InternalRepository*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InternalRepository> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InternalRepository*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<InternalRepository*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<InternalRepository> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<InternalRepository*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<InternalRepository*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Repository : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::omero::model::OriginalFilePtr root(const ::Ice::Context*) = 0;

    virtual ::std::string mimetype(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::api::StringSet list(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::api::OriginalFileList listFiles(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::model::OriginalFilePtr _cpp_register(const ::std::string&, const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::RawFileStorePrx file(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::api::RawPixelsStorePrx pixels(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::api::RawFileStorePrx fileById(::Ice::Long, const ::Ice::Context*) = 0;

    virtual bool fileExists(const ::std::string&, const ::Ice::Context*) = 0;

    virtual void makeDir(const ::std::string&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::RMapPtr treeList(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::cmd::HandlePrx deletePaths(const ::omero::api::StringArray&, bool, bool, const ::Ice::Context*) = 0;
};

class ImportLocation : virtual public ::IceDelegate::Ice::Object
{
public:
};

class ImportSettings : virtual public ::IceDelegate::Ice::Object
{
public:
};

class ImportProcess : virtual public ::IceDelegate::omero::api::StatefulServiceInterface
{
public:

    virtual ::omero::api::RawFileStorePrx getUploader(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::omero::cmd::HandlePrx verifyUpload(const ::omero::api::StringSet&, const ::Ice::Context*) = 0;

    virtual ::Ice::Long getUploadOffset(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::omero::cmd::HandlePrx getHandle(const ::Ice::Context*) = 0;

    virtual ::omero::grid::ImportSettingsPtr getImportSettings(const ::Ice::Context*) = 0;
};

class ImportRequest : virtual public ::IceDelegate::omero::cmd::Request
{
public:
};

class ImportResponse : virtual public ::IceDelegate::omero::cmd::Response
{
public:
};

class ManagedRepository : virtual public ::IceDelegate::omero::grid::Repository
{
public:

    virtual ::omero::grid::ImportProcessPrx importFileset(const ::omero::model::FilesetPtr&, const ::omero::grid::ImportSettingsPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::grid::ImportProcessPrx importPaths(const ::omero::api::StringSet&, const ::Ice::Context*) = 0;

    virtual ::omero::grid::ImportProcessList listImports(const ::Ice::Context*) = 0;

    virtual ::omero::api::ChecksumAlgorithmList listChecksumAlgorithms(const ::Ice::Context*) = 0;

    virtual ::omero::model::ChecksumAlgorithmPtr suggestChecksumAlgorithm(const ::omero::api::ChecksumAlgorithmList&, const ::Ice::Context*) = 0;
};

class RawAccessRequest : virtual public ::IceDelegate::omero::cmd::Request
{
public:
};

class InternalRepository : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::omero::api::RawFileStorePrx createRawFileStore(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::RawPixelsStorePrx createRawPixelsStore(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::RenderingEnginePrx createRenderingEngine(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::ThumbnailStorePrx createThumbnailStore(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::OriginalFilePtr getDescription(const ::Ice::Context*) = 0;

    virtual ::omero::grid::RepositoryPrx getProxy(const ::Ice::Context*) = 0;

    virtual ::omero::cmd::ResponsePtr rawAccess(const ::omero::grid::RawAccessRequestPtr&, const ::Ice::Context*) = 0;

    virtual ::std::string getFilePath(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*) = 0;
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

class Repository : virtual public ::IceDelegate::omero::grid::Repository,
                   virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::omero::model::OriginalFilePtr root(const ::Ice::Context*);

    virtual ::std::string mimetype(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::StringSet list(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::OriginalFileList listFiles(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::model::OriginalFilePtr _cpp_register(const ::std::string&, const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::api::RawFileStorePrx file(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::RawPixelsStorePrx pixels(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::RawFileStorePrx fileById(::Ice::Long, const ::Ice::Context*);

    virtual bool fileExists(const ::std::string&, const ::Ice::Context*);

    virtual void makeDir(const ::std::string&, bool, const ::Ice::Context*);

    virtual ::omero::RMapPtr treeList(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::cmd::HandlePrx deletePaths(const ::omero::api::StringArray&, bool, bool, const ::Ice::Context*);
};

class ImportLocation : virtual public ::IceDelegate::omero::grid::ImportLocation,
                       virtual public ::IceDelegateM::Ice::Object
{
public:
};

class ImportSettings : virtual public ::IceDelegate::omero::grid::ImportSettings,
                       virtual public ::IceDelegateM::Ice::Object
{
public:
};

class ImportProcess : virtual public ::IceDelegate::omero::grid::ImportProcess,
                      virtual public ::IceDelegateM::omero::api::StatefulServiceInterface
{
public:

    virtual ::omero::api::RawFileStorePrx getUploader(::Ice::Int, const ::Ice::Context*);

    virtual ::omero::cmd::HandlePrx verifyUpload(const ::omero::api::StringSet&, const ::Ice::Context*);

    virtual ::Ice::Long getUploadOffset(::Ice::Int, const ::Ice::Context*);

    virtual ::omero::cmd::HandlePrx getHandle(const ::Ice::Context*);

    virtual ::omero::grid::ImportSettingsPtr getImportSettings(const ::Ice::Context*);
};

class ImportRequest : virtual public ::IceDelegate::omero::grid::ImportRequest,
                      virtual public ::IceDelegateM::omero::cmd::Request
{
public:
};

class ImportResponse : virtual public ::IceDelegate::omero::grid::ImportResponse,
                       virtual public ::IceDelegateM::omero::cmd::Response
{
public:
};

class ManagedRepository : virtual public ::IceDelegate::omero::grid::ManagedRepository,
                          virtual public ::IceDelegateM::omero::grid::Repository
{
public:

    virtual ::omero::grid::ImportProcessPrx importFileset(const ::omero::model::FilesetPtr&, const ::omero::grid::ImportSettingsPtr&, const ::Ice::Context*);

    virtual ::omero::grid::ImportProcessPrx importPaths(const ::omero::api::StringSet&, const ::Ice::Context*);

    virtual ::omero::grid::ImportProcessList listImports(const ::Ice::Context*);

    virtual ::omero::api::ChecksumAlgorithmList listChecksumAlgorithms(const ::Ice::Context*);

    virtual ::omero::model::ChecksumAlgorithmPtr suggestChecksumAlgorithm(const ::omero::api::ChecksumAlgorithmList&, const ::Ice::Context*);
};

class RawAccessRequest : virtual public ::IceDelegate::omero::grid::RawAccessRequest,
                         virtual public ::IceDelegateM::omero::cmd::Request
{
public:
};

class InternalRepository : virtual public ::IceDelegate::omero::grid::InternalRepository,
                           virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::omero::api::RawFileStorePrx createRawFileStore(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

    virtual ::omero::api::RawPixelsStorePrx createRawPixelsStore(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

    virtual ::omero::api::RenderingEnginePrx createRenderingEngine(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

    virtual ::omero::api::ThumbnailStorePrx createThumbnailStore(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

    virtual ::omero::model::OriginalFilePtr getDescription(const ::Ice::Context*);

    virtual ::omero::grid::RepositoryPrx getProxy(const ::Ice::Context*);

    virtual ::omero::cmd::ResponsePtr rawAccess(const ::omero::grid::RawAccessRequestPtr&, const ::Ice::Context*);

    virtual ::std::string getFilePath(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);
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

class Repository : virtual public ::IceDelegate::omero::grid::Repository,
                   virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::omero::model::OriginalFilePtr root(const ::Ice::Context*);

    virtual ::std::string mimetype(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::StringSet list(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::OriginalFileList listFiles(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::model::OriginalFilePtr _cpp_register(const ::std::string&, const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::api::RawFileStorePrx file(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::RawPixelsStorePrx pixels(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::RawFileStorePrx fileById(::Ice::Long, const ::Ice::Context*);

    virtual bool fileExists(const ::std::string&, const ::Ice::Context*);

    virtual void makeDir(const ::std::string&, bool, const ::Ice::Context*);

    virtual ::omero::RMapPtr treeList(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::cmd::HandlePrx deletePaths(const ::omero::api::StringArray&, bool, bool, const ::Ice::Context*);
};

class ImportLocation : virtual public ::IceDelegate::omero::grid::ImportLocation,
                       virtual public ::IceDelegateD::Ice::Object
{
public:
};

class ImportSettings : virtual public ::IceDelegate::omero::grid::ImportSettings,
                       virtual public ::IceDelegateD::Ice::Object
{
public:
};

class ImportProcess : virtual public ::IceDelegate::omero::grid::ImportProcess,
                      virtual public ::IceDelegateD::omero::api::StatefulServiceInterface
{
public:

    virtual ::omero::api::RawFileStorePrx getUploader(::Ice::Int, const ::Ice::Context*);

    virtual ::omero::cmd::HandlePrx verifyUpload(const ::omero::api::StringSet&, const ::Ice::Context*);

    virtual ::Ice::Long getUploadOffset(::Ice::Int, const ::Ice::Context*);

    virtual ::omero::cmd::HandlePrx getHandle(const ::Ice::Context*);

    virtual ::omero::grid::ImportSettingsPtr getImportSettings(const ::Ice::Context*);
};

class ImportRequest : virtual public ::IceDelegate::omero::grid::ImportRequest,
                      virtual public ::IceDelegateD::omero::cmd::Request
{
public:
};

class ImportResponse : virtual public ::IceDelegate::omero::grid::ImportResponse,
                       virtual public ::IceDelegateD::omero::cmd::Response
{
public:
};

class ManagedRepository : virtual public ::IceDelegate::omero::grid::ManagedRepository,
                          virtual public ::IceDelegateD::omero::grid::Repository
{
public:

    virtual ::omero::grid::ImportProcessPrx importFileset(const ::omero::model::FilesetPtr&, const ::omero::grid::ImportSettingsPtr&, const ::Ice::Context*);

    virtual ::omero::grid::ImportProcessPrx importPaths(const ::omero::api::StringSet&, const ::Ice::Context*);

    virtual ::omero::grid::ImportProcessList listImports(const ::Ice::Context*);

    virtual ::omero::api::ChecksumAlgorithmList listChecksumAlgorithms(const ::Ice::Context*);

    virtual ::omero::model::ChecksumAlgorithmPtr suggestChecksumAlgorithm(const ::omero::api::ChecksumAlgorithmList&, const ::Ice::Context*);
};

class RawAccessRequest : virtual public ::IceDelegate::omero::grid::RawAccessRequest,
                         virtual public ::IceDelegateD::omero::cmd::Request
{
public:
};

class InternalRepository : virtual public ::IceDelegate::omero::grid::InternalRepository,
                           virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::omero::api::RawFileStorePrx createRawFileStore(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

    virtual ::omero::api::RawPixelsStorePrx createRawPixelsStore(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

    virtual ::omero::api::RenderingEnginePrx createRenderingEngine(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

    virtual ::omero::api::ThumbnailStorePrx createThumbnailStore(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

    virtual ::omero::model::OriginalFilePtr getDescription(const ::Ice::Context*);

    virtual ::omero::grid::RepositoryPrx getProxy(const ::Ice::Context*);

    virtual ::omero::cmd::ResponsePtr rawAccess(const ::omero::grid::RawAccessRequestPtr&, const ::Ice::Context*);

    virtual ::std::string getFilePath(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace grid
{

class Repository : virtual public ::Ice::Object
{
public:

    typedef RepositoryPrx ProxyType;
    typedef RepositoryPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::omero::model::OriginalFilePtr root(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___root(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::std::string mimetype(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___mimetype(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::StringSet list(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___list(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::OriginalFileList listFiles(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___listFiles(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::OriginalFilePtr _cpp_register(const ::std::string&, const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___register(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::RawFileStorePrx file(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___file(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::RawPixelsStorePrx pixels(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___pixels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::RawFileStorePrx fileById(::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___fileById(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool fileExists(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___fileExists(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void makeDir(const ::std::string&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___makeDir(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RMapPtr treeList(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___treeList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::cmd::HandlePrx deletePaths(const ::omero::api::StringArray&, bool, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___deletePaths(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class ImportLocation : virtual public ::Ice::Object
{
public:

    typedef ImportLocationPrx ProxyType;
    typedef ImportLocationPtr PointerType;
    
    ImportLocation() {}
    ImportLocation(const ::std::string&, ::Ice::Int, const ::omero::api::StringSet&, const ::omero::model::OriginalFilePtr&);
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

    virtual ~ImportLocation() {}

    friend class ImportLocation__staticInit;

public:

    ::std::string sharedPath;

    ::Ice::Int omittedLevels;

    ::omero::api::StringSet usedFiles;

    ::omero::model::OriginalFilePtr directory;
};

class ImportLocation__staticInit
{
public:

    ::omero::grid::ImportLocation _init;
};

static ImportLocation__staticInit _ImportLocation_init;

class ImportSettings : virtual public ::Ice::Object
{
public:

    typedef ImportSettingsPrx ProxyType;
    typedef ImportSettingsPtr PointerType;
    
    ImportSettings() {}
    ImportSettings(const ::omero::model::IObjectPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::api::DoubleArray&, const ::omero::api::AnnotationList&, const ::omero::RBoolPtr&, const ::omero::model::ChecksumAlgorithmPtr&);
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

    virtual ~ImportSettings() {}

public:

    ::omero::model::IObjectPtr userSpecifiedTarget;

    ::omero::RStringPtr userSpecifiedName;

    ::omero::RStringPtr userSpecifiedDescription;

    ::omero::api::DoubleArray userSpecifiedPixels;

    ::omero::api::AnnotationList userSpecifiedAnnotationList;

    ::omero::RBoolPtr doThumbnails;

    ::omero::model::ChecksumAlgorithmPtr checksumAlgorithm;
};

class ImportProcess : virtual public ::omero::api::StatefulServiceInterface
{
public:

    typedef ImportProcessPrx ProxyType;
    typedef ImportProcessPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::omero::api::RawFileStorePrx getUploader(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getUploader(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::cmd::HandlePrx verifyUpload(const ::omero::api::StringSet&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___verifyUpload(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Long getUploadOffset(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getUploadOffset(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::cmd::HandlePrx getHandle(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getHandle(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::grid::ImportSettingsPtr getImportSettings(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getImportSettings(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class ImportRequest : virtual public ::omero::cmd::Request
{
public:

    typedef ImportRequestPrx ProxyType;
    typedef ImportRequestPtr PointerType;
    
    ImportRequest() {}
    ImportRequest(const ::std::string&, const ::std::string&, const ::omero::grid::ImportProcessPrx&, const ::omero::model::FilesetJobLinkPtr&, const ::omero::grid::ImportSettingsPtr&, const ::omero::grid::ImportLocationPtr&, const ::omero::model::OriginalFilePtr&);
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

    virtual ~ImportRequest() {}

public:

    ::std::string clientUuid;

    ::std::string repoUuid;

    ::omero::grid::ImportProcessPrx process;

    ::omero::model::FilesetJobLinkPtr activity;

    ::omero::grid::ImportSettingsPtr settings;

    ::omero::grid::ImportLocationPtr location;

    ::omero::model::OriginalFilePtr logFile;
};

class ImportResponse : virtual public ::omero::cmd::Response
{
public:

    typedef ImportResponsePrx ProxyType;
    typedef ImportResponsePtr PointerType;
    
    ImportResponse() {}
    ImportResponse(const ::omero::api::PixelsList&, const ::omero::api::IObjectList&);
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

    virtual ~ImportResponse() {}

public:

    ::omero::api::PixelsList pixels;

    ::omero::api::IObjectList objects;
};

class ManagedRepository : virtual public ::omero::grid::Repository
{
public:

    typedef ManagedRepositoryPrx ProxyType;
    typedef ManagedRepositoryPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::omero::grid::ImportProcessPrx importFileset(const ::omero::model::FilesetPtr&, const ::omero::grid::ImportSettingsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___importFileset(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::grid::ImportProcessPrx importPaths(const ::omero::api::StringSet&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___importPaths(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::grid::ImportProcessList listImports(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___listImports(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::ChecksumAlgorithmList listChecksumAlgorithms(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___listChecksumAlgorithms(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ChecksumAlgorithmPtr suggestChecksumAlgorithm(const ::omero::api::ChecksumAlgorithmList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___suggestChecksumAlgorithm(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class RawAccessRequest : virtual public ::omero::cmd::Request
{
public:

    typedef RawAccessRequestPrx ProxyType;
    typedef RawAccessRequestPtr PointerType;
    
    RawAccessRequest() {}
    RawAccessRequest(const ::std::string&, const ::std::string&, const ::omero::api::StringSet&, const ::std::string&);
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

    virtual ~RawAccessRequest() {}

public:

    ::std::string repoUuid;

    ::std::string command;

    ::omero::api::StringSet args;

    ::std::string path;
};

class InternalRepository : virtual public ::Ice::Object
{
public:

    typedef InternalRepositoryPrx ProxyType;
    typedef InternalRepositoryPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::omero::api::RawFileStorePrx createRawFileStore(const ::omero::model::OriginalFilePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createRawFileStore(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::RawPixelsStorePrx createRawPixelsStore(const ::omero::model::OriginalFilePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createRawPixelsStore(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::RenderingEnginePrx createRenderingEngine(const ::omero::model::OriginalFilePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createRenderingEngine(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::ThumbnailStorePrx createThumbnailStore(const ::omero::model::OriginalFilePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createThumbnailStore(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::OriginalFilePtr getDescription(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getDescription(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::grid::RepositoryPrx getProxy(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getProxy(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::cmd::ResponsePtr rawAccess(const ::omero::grid::RawAccessRequestPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___rawAccess(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::std::string getFilePath(const ::omero::model::OriginalFilePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFilePath(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
