// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `IContainer.ice'

#ifndef __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_IContainer_h__
#define __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_IContainer_h__

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

class IContainer;

}

}

}

namespace omero
{

namespace api
{

class IContainer;
bool operator==(const IContainer&, const IContainer&);
bool operator<(const IContainer&, const IContainer&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::api::IContainer*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::IContainer*);

}

namespace omero
{

namespace api
{

typedef ::IceInternal::Handle< ::omero::api::IContainer> IContainerPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::IContainer> IContainerPrx;

void __read(::IceInternal::BasicStream*, IContainerPrx&);
void __patch__IContainerPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace api
{

class AMI_IContainer_loadContainerHierarchy : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IContainerPrx&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IContainer_loadContainerHierarchy> AMI_IContainer_loadContainerHierarchyPtr;

class AMD_IContainer_loadContainerHierarchy : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IContainer_loadContainerHierarchy> AMD_IContainer_loadContainerHierarchyPtr;

class AMI_IContainer_findContainerHierarchies : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IContainerPrx&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IContainer_findContainerHierarchies> AMI_IContainer_findContainerHierarchiesPtr;

class AMD_IContainer_findContainerHierarchies : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IContainer_findContainerHierarchies> AMD_IContainer_findContainerHierarchiesPtr;

class AMI_IContainer_getImages : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::ImageList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IContainerPrx&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IContainer_getImages> AMI_IContainer_getImagesPtr;

class AMD_IContainer_getImages : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::ImageList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IContainer_getImages> AMD_IContainer_getImagesPtr;

class AMI_IContainer_getUserImages : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::ImageList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IContainerPrx&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IContainer_getUserImages> AMI_IContainer_getUserImagesPtr;

class AMD_IContainer_getUserImages : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::ImageList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IContainer_getUserImages> AMD_IContainer_getUserImagesPtr;

class AMI_IContainer_getImagesByOptions : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::ImageList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IContainerPrx&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IContainer_getImagesByOptions> AMI_IContainer_getImagesByOptionsPtr;

class AMD_IContainer_getImagesByOptions : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::ImageList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IContainer_getImagesByOptions> AMD_IContainer_getImagesByOptionsPtr;

class AMI_IContainer_getImagesBySplitFilesets : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IdBooleanLongListMapMap&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IContainerPrx&, const ::omero::api::StringLongListMap&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IContainer_getImagesBySplitFilesets> AMI_IContainer_getImagesBySplitFilesetsPtr;

class AMD_IContainer_getImagesBySplitFilesets : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IdBooleanLongListMapMap&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IContainer_getImagesBySplitFilesets> AMD_IContainer_getImagesBySplitFilesetsPtr;

class AMI_IContainer_getCollectionCount : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::sys::CountMap&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IContainerPrx&, const ::std::string&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IContainer_getCollectionCount> AMI_IContainer_getCollectionCountPtr;

class AMD_IContainer_getCollectionCount : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::sys::CountMap&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IContainer_getCollectionCount> AMD_IContainer_getCollectionCountPtr;

class AMI_IContainer_retrieveCollection : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IContainerPrx&, const ::omero::model::IObjectPtr&, const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IContainer_retrieveCollection> AMI_IContainer_retrieveCollectionPtr;

class AMD_IContainer_retrieveCollection : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IContainer_retrieveCollection> AMD_IContainer_retrieveCollectionPtr;

class AMI_IContainer_createDataObject : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::IObjectPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IContainerPrx&, const ::omero::model::IObjectPtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IContainer_createDataObject> AMI_IContainer_createDataObjectPtr;

class AMD_IContainer_createDataObject : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::IObjectPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IContainer_createDataObject> AMD_IContainer_createDataObjectPtr;

class AMI_IContainer_createDataObjects : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IContainerPrx&, const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IContainer_createDataObjects> AMI_IContainer_createDataObjectsPtr;

class AMD_IContainer_createDataObjects : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IContainer_createDataObjects> AMD_IContainer_createDataObjectsPtr;

class AMI_IContainer_unlink : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IContainerPrx&, const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IContainer_unlink> AMI_IContainer_unlinkPtr;

class AMD_IContainer_unlink : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IContainer_unlink> AMD_IContainer_unlinkPtr;

class AMI_IContainer_link : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IContainerPrx&, const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IContainer_link> AMI_IContainer_linkPtr;

class AMD_IContainer_link : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IContainer_link> AMD_IContainer_linkPtr;

class AMI_IContainer_updateDataObject : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::IObjectPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IContainerPrx&, const ::omero::model::IObjectPtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IContainer_updateDataObject> AMI_IContainer_updateDataObjectPtr;

class AMD_IContainer_updateDataObject : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::IObjectPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IContainer_updateDataObject> AMD_IContainer_updateDataObjectPtr;

class AMI_IContainer_updateDataObjects : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IContainerPrx&, const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IContainer_updateDataObjects> AMI_IContainer_updateDataObjectsPtr;

class AMD_IContainer_updateDataObjects : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IContainer_updateDataObjects> AMD_IContainer_updateDataObjectsPtr;

class AMI_IContainer_deleteDataObject : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IContainerPrx&, const ::omero::model::IObjectPtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IContainer_deleteDataObject> AMI_IContainer_deleteDataObjectPtr;

class AMD_IContainer_deleteDataObject : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IContainer_deleteDataObject> AMD_IContainer_deleteDataObjectPtr;

class AMI_IContainer_deleteDataObjects : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IContainerPrx&, const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IContainer_deleteDataObjects> AMI_IContainer_deleteDataObjectsPtr;

class AMD_IContainer_deleteDataObjects : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IContainer_deleteDataObjects> AMD_IContainer_deleteDataObjectsPtr;

}

}

namespace IceAsync
{

namespace omero
{

namespace api
{

class AMD_IContainer_loadContainerHierarchy : public ::omero::api::AMD_IContainer_loadContainerHierarchy, public ::IceInternal::IncomingAsync
{
public:

    AMD_IContainer_loadContainerHierarchy(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IContainer_findContainerHierarchies : public ::omero::api::AMD_IContainer_findContainerHierarchies, public ::IceInternal::IncomingAsync
{
public:

    AMD_IContainer_findContainerHierarchies(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IContainer_getImages : public ::omero::api::AMD_IContainer_getImages, public ::IceInternal::IncomingAsync
{
public:

    AMD_IContainer_getImages(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::ImageList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IContainer_getUserImages : public ::omero::api::AMD_IContainer_getUserImages, public ::IceInternal::IncomingAsync
{
public:

    AMD_IContainer_getUserImages(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::ImageList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IContainer_getImagesByOptions : public ::omero::api::AMD_IContainer_getImagesByOptions, public ::IceInternal::IncomingAsync
{
public:

    AMD_IContainer_getImagesByOptions(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::ImageList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IContainer_getImagesBySplitFilesets : public ::omero::api::AMD_IContainer_getImagesBySplitFilesets, public ::IceInternal::IncomingAsync
{
public:

    AMD_IContainer_getImagesBySplitFilesets(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IdBooleanLongListMapMap&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IContainer_getCollectionCount : public ::omero::api::AMD_IContainer_getCollectionCount, public ::IceInternal::IncomingAsync
{
public:

    AMD_IContainer_getCollectionCount(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::sys::CountMap&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IContainer_retrieveCollection : public ::omero::api::AMD_IContainer_retrieveCollection, public ::IceInternal::IncomingAsync
{
public:

    AMD_IContainer_retrieveCollection(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IContainer_createDataObject : public ::omero::api::AMD_IContainer_createDataObject, public ::IceInternal::IncomingAsync
{
public:

    AMD_IContainer_createDataObject(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::IObjectPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IContainer_createDataObjects : public ::omero::api::AMD_IContainer_createDataObjects, public ::IceInternal::IncomingAsync
{
public:

    AMD_IContainer_createDataObjects(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IContainer_unlink : public ::omero::api::AMD_IContainer_unlink, public ::IceInternal::IncomingAsync
{
public:

    AMD_IContainer_unlink(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IContainer_link : public ::omero::api::AMD_IContainer_link, public ::IceInternal::IncomingAsync
{
public:

    AMD_IContainer_link(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IContainer_updateDataObject : public ::omero::api::AMD_IContainer_updateDataObject, public ::IceInternal::IncomingAsync
{
public:

    AMD_IContainer_updateDataObject(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::IObjectPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IContainer_updateDataObjects : public ::omero::api::AMD_IContainer_updateDataObjects, public ::IceInternal::IncomingAsync
{
public:

    AMD_IContainer_updateDataObjects(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IContainer_deleteDataObject : public ::omero::api::AMD_IContainer_deleteDataObject, public ::IceInternal::IncomingAsync
{
public:

    AMD_IContainer_deleteDataObject(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IContainer_deleteDataObjects : public ::omero::api::AMD_IContainer_deleteDataObjects, public ::IceInternal::IncomingAsync
{
public:

    AMD_IContainer_deleteDataObjects(::IceInternal::Incoming&);

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

class IContainer : virtual public ::IceProxy::omero::api::ServiceInterface
{
public:

    ::omero::api::IObjectList loadContainerHierarchy(const ::std::string& rootType, const ::omero::sys::LongList& rootIds, const ::omero::sys::ParametersPtr& options)
    {
        return loadContainerHierarchy(rootType, rootIds, options, 0);
    }
    ::omero::api::IObjectList loadContainerHierarchy(const ::std::string& rootType, const ::omero::sys::LongList& rootIds, const ::omero::sys::ParametersPtr& options, const ::Ice::Context& __ctx)
    {
        return loadContainerHierarchy(rootType, rootIds, options, &__ctx);
    }
    
private:

    ::omero::api::IObjectList loadContainerHierarchy(const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool loadContainerHierarchy_async(const ::omero::api::AMI_IContainer_loadContainerHierarchyPtr&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&);
    bool loadContainerHierarchy_async(const ::omero::api::AMI_IContainer_loadContainerHierarchyPtr&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);

    ::omero::api::IObjectList findContainerHierarchies(const ::std::string& rootType, const ::omero::sys::LongList& imageIds, const ::omero::sys::ParametersPtr& options)
    {
        return findContainerHierarchies(rootType, imageIds, options, 0);
    }
    ::omero::api::IObjectList findContainerHierarchies(const ::std::string& rootType, const ::omero::sys::LongList& imageIds, const ::omero::sys::ParametersPtr& options, const ::Ice::Context& __ctx)
    {
        return findContainerHierarchies(rootType, imageIds, options, &__ctx);
    }
    
private:

    ::omero::api::IObjectList findContainerHierarchies(const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool findContainerHierarchies_async(const ::omero::api::AMI_IContainer_findContainerHierarchiesPtr&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&);
    bool findContainerHierarchies_async(const ::omero::api::AMI_IContainer_findContainerHierarchiesPtr&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);

    ::omero::api::ImageList getImages(const ::std::string& rootType, const ::omero::sys::LongList& rootIds, const ::omero::sys::ParametersPtr& options)
    {
        return getImages(rootType, rootIds, options, 0);
    }
    ::omero::api::ImageList getImages(const ::std::string& rootType, const ::omero::sys::LongList& rootIds, const ::omero::sys::ParametersPtr& options, const ::Ice::Context& __ctx)
    {
        return getImages(rootType, rootIds, options, &__ctx);
    }
    
private:

    ::omero::api::ImageList getImages(const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool getImages_async(const ::omero::api::AMI_IContainer_getImagesPtr&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&);
    bool getImages_async(const ::omero::api::AMI_IContainer_getImagesPtr&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);

    ::omero::api::ImageList getUserImages(const ::omero::sys::ParametersPtr& options)
    {
        return getUserImages(options, 0);
    }
    ::omero::api::ImageList getUserImages(const ::omero::sys::ParametersPtr& options, const ::Ice::Context& __ctx)
    {
        return getUserImages(options, &__ctx);
    }
    
private:

    ::omero::api::ImageList getUserImages(const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool getUserImages_async(const ::omero::api::AMI_IContainer_getUserImagesPtr&, const ::omero::sys::ParametersPtr&);
    bool getUserImages_async(const ::omero::api::AMI_IContainer_getUserImagesPtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);

    ::omero::api::ImageList getImagesByOptions(const ::omero::sys::ParametersPtr& options)
    {
        return getImagesByOptions(options, 0);
    }
    ::omero::api::ImageList getImagesByOptions(const ::omero::sys::ParametersPtr& options, const ::Ice::Context& __ctx)
    {
        return getImagesByOptions(options, &__ctx);
    }
    
private:

    ::omero::api::ImageList getImagesByOptions(const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool getImagesByOptions_async(const ::omero::api::AMI_IContainer_getImagesByOptionsPtr&, const ::omero::sys::ParametersPtr&);
    bool getImagesByOptions_async(const ::omero::api::AMI_IContainer_getImagesByOptionsPtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);

    ::omero::api::IdBooleanLongListMapMap getImagesBySplitFilesets(const ::omero::api::StringLongListMap& included, const ::omero::sys::ParametersPtr& options)
    {
        return getImagesBySplitFilesets(included, options, 0);
    }
    ::omero::api::IdBooleanLongListMapMap getImagesBySplitFilesets(const ::omero::api::StringLongListMap& included, const ::omero::sys::ParametersPtr& options, const ::Ice::Context& __ctx)
    {
        return getImagesBySplitFilesets(included, options, &__ctx);
    }
    
private:

    ::omero::api::IdBooleanLongListMapMap getImagesBySplitFilesets(const ::omero::api::StringLongListMap&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool getImagesBySplitFilesets_async(const ::omero::api::AMI_IContainer_getImagesBySplitFilesetsPtr&, const ::omero::api::StringLongListMap&, const ::omero::sys::ParametersPtr&);
    bool getImagesBySplitFilesets_async(const ::omero::api::AMI_IContainer_getImagesBySplitFilesetsPtr&, const ::omero::api::StringLongListMap&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);

    ::omero::sys::CountMap getCollectionCount(const ::std::string& type, const ::std::string& property, const ::omero::sys::LongList& ids, const ::omero::sys::ParametersPtr& options)
    {
        return getCollectionCount(type, property, ids, options, 0);
    }
    ::omero::sys::CountMap getCollectionCount(const ::std::string& type, const ::std::string& property, const ::omero::sys::LongList& ids, const ::omero::sys::ParametersPtr& options, const ::Ice::Context& __ctx)
    {
        return getCollectionCount(type, property, ids, options, &__ctx);
    }
    
private:

    ::omero::sys::CountMap getCollectionCount(const ::std::string&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool getCollectionCount_async(const ::omero::api::AMI_IContainer_getCollectionCountPtr&, const ::std::string&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&);
    bool getCollectionCount_async(const ::omero::api::AMI_IContainer_getCollectionCountPtr&, const ::std::string&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);

    ::omero::api::IObjectList retrieveCollection(const ::omero::model::IObjectPtr& obj, const ::std::string& collectionName, const ::omero::sys::ParametersPtr& options)
    {
        return retrieveCollection(obj, collectionName, options, 0);
    }
    ::omero::api::IObjectList retrieveCollection(const ::omero::model::IObjectPtr& obj, const ::std::string& collectionName, const ::omero::sys::ParametersPtr& options, const ::Ice::Context& __ctx)
    {
        return retrieveCollection(obj, collectionName, options, &__ctx);
    }
    
private:

    ::omero::api::IObjectList retrieveCollection(const ::omero::model::IObjectPtr&, const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool retrieveCollection_async(const ::omero::api::AMI_IContainer_retrieveCollectionPtr&, const ::omero::model::IObjectPtr&, const ::std::string&, const ::omero::sys::ParametersPtr&);
    bool retrieveCollection_async(const ::omero::api::AMI_IContainer_retrieveCollectionPtr&, const ::omero::model::IObjectPtr&, const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);

    ::omero::model::IObjectPtr createDataObject(const ::omero::model::IObjectPtr& obj, const ::omero::sys::ParametersPtr& options)
    {
        return createDataObject(obj, options, 0);
    }
    ::omero::model::IObjectPtr createDataObject(const ::omero::model::IObjectPtr& obj, const ::omero::sys::ParametersPtr& options, const ::Ice::Context& __ctx)
    {
        return createDataObject(obj, options, &__ctx);
    }
    
private:

    ::omero::model::IObjectPtr createDataObject(const ::omero::model::IObjectPtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool createDataObject_async(const ::omero::api::AMI_IContainer_createDataObjectPtr&, const ::omero::model::IObjectPtr&, const ::omero::sys::ParametersPtr&);
    bool createDataObject_async(const ::omero::api::AMI_IContainer_createDataObjectPtr&, const ::omero::model::IObjectPtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);

    ::omero::api::IObjectList createDataObjects(const ::omero::api::IObjectList& dataObjects, const ::omero::sys::ParametersPtr& options)
    {
        return createDataObjects(dataObjects, options, 0);
    }
    ::omero::api::IObjectList createDataObjects(const ::omero::api::IObjectList& dataObjects, const ::omero::sys::ParametersPtr& options, const ::Ice::Context& __ctx)
    {
        return createDataObjects(dataObjects, options, &__ctx);
    }
    
private:

    ::omero::api::IObjectList createDataObjects(const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool createDataObjects_async(const ::omero::api::AMI_IContainer_createDataObjectsPtr&, const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&);
    bool createDataObjects_async(const ::omero::api::AMI_IContainer_createDataObjectsPtr&, const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);

    void unlink(const ::omero::api::IObjectList& links, const ::omero::sys::ParametersPtr& options)
    {
        unlink(links, options, 0);
    }
    void unlink(const ::omero::api::IObjectList& links, const ::omero::sys::ParametersPtr& options, const ::Ice::Context& __ctx)
    {
        unlink(links, options, &__ctx);
    }
    
private:

    void unlink(const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool unlink_async(const ::omero::api::AMI_IContainer_unlinkPtr&, const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&);
    bool unlink_async(const ::omero::api::AMI_IContainer_unlinkPtr&, const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);

    ::omero::api::IObjectList link(const ::omero::api::IObjectList& links, const ::omero::sys::ParametersPtr& options)
    {
        return link(links, options, 0);
    }
    ::omero::api::IObjectList link(const ::omero::api::IObjectList& links, const ::omero::sys::ParametersPtr& options, const ::Ice::Context& __ctx)
    {
        return link(links, options, &__ctx);
    }
    
private:

    ::omero::api::IObjectList link(const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool link_async(const ::omero::api::AMI_IContainer_linkPtr&, const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&);
    bool link_async(const ::omero::api::AMI_IContainer_linkPtr&, const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);

    ::omero::model::IObjectPtr updateDataObject(const ::omero::model::IObjectPtr& obj, const ::omero::sys::ParametersPtr& options)
    {
        return updateDataObject(obj, options, 0);
    }
    ::omero::model::IObjectPtr updateDataObject(const ::omero::model::IObjectPtr& obj, const ::omero::sys::ParametersPtr& options, const ::Ice::Context& __ctx)
    {
        return updateDataObject(obj, options, &__ctx);
    }
    
private:

    ::omero::model::IObjectPtr updateDataObject(const ::omero::model::IObjectPtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool updateDataObject_async(const ::omero::api::AMI_IContainer_updateDataObjectPtr&, const ::omero::model::IObjectPtr&, const ::omero::sys::ParametersPtr&);
    bool updateDataObject_async(const ::omero::api::AMI_IContainer_updateDataObjectPtr&, const ::omero::model::IObjectPtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);

    ::omero::api::IObjectList updateDataObjects(const ::omero::api::IObjectList& objs, const ::omero::sys::ParametersPtr& options)
    {
        return updateDataObjects(objs, options, 0);
    }
    ::omero::api::IObjectList updateDataObjects(const ::omero::api::IObjectList& objs, const ::omero::sys::ParametersPtr& options, const ::Ice::Context& __ctx)
    {
        return updateDataObjects(objs, options, &__ctx);
    }
    
private:

    ::omero::api::IObjectList updateDataObjects(const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool updateDataObjects_async(const ::omero::api::AMI_IContainer_updateDataObjectsPtr&, const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&);
    bool updateDataObjects_async(const ::omero::api::AMI_IContainer_updateDataObjectsPtr&, const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);

    ICE_DEPRECATED_API void deleteDataObject(const ::omero::model::IObjectPtr& obj, const ::omero::sys::ParametersPtr& options)
    {
        deleteDataObject(obj, options, 0);
    }
    ICE_DEPRECATED_API void deleteDataObject(const ::omero::model::IObjectPtr& obj, const ::omero::sys::ParametersPtr& options, const ::Ice::Context& __ctx)
    {
        deleteDataObject(obj, options, &__ctx);
    }
    
private:

    void deleteDataObject(const ::omero::model::IObjectPtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool deleteDataObject_async(const ::omero::api::AMI_IContainer_deleteDataObjectPtr&, const ::omero::model::IObjectPtr&, const ::omero::sys::ParametersPtr&);
    bool deleteDataObject_async(const ::omero::api::AMI_IContainer_deleteDataObjectPtr&, const ::omero::model::IObjectPtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);

    ICE_DEPRECATED_API void deleteDataObjects(const ::omero::api::IObjectList& objs, const ::omero::sys::ParametersPtr& options)
    {
        deleteDataObjects(objs, options, 0);
    }
    ICE_DEPRECATED_API void deleteDataObjects(const ::omero::api::IObjectList& objs, const ::omero::sys::ParametersPtr& options, const ::Ice::Context& __ctx)
    {
        deleteDataObjects(objs, options, &__ctx);
    }
    
private:

    void deleteDataObjects(const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool deleteDataObjects_async(const ::omero::api::AMI_IContainer_deleteDataObjectsPtr&, const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&);
    bool deleteDataObjects_async(const ::omero::api::AMI_IContainer_deleteDataObjectsPtr&, const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<IContainer> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IContainer*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<IContainer*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IContainer> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IContainer*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<IContainer*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IContainer> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IContainer*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<IContainer*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IContainer> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IContainer*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<IContainer*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IContainer> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IContainer*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<IContainer*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IContainer> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IContainer*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<IContainer*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IContainer> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IContainer*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<IContainer*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IContainer> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IContainer*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<IContainer*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IContainer> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IContainer*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<IContainer*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IContainer> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IContainer*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<IContainer*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IContainer> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IContainer*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<IContainer*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IContainer> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IContainer*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<IContainer*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IContainer> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IContainer*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<IContainer*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IContainer> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IContainer*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<IContainer*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IContainer> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IContainer*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<IContainer*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IContainer> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IContainer*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<IContainer*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IContainer> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IContainer*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<IContainer*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IContainer> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IContainer*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<IContainer*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IContainer> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IContainer*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<IContainer*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class IContainer : virtual public ::IceDelegate::omero::api::ServiceInterface
{
public:

    virtual ::omero::api::IObjectList loadContainerHierarchy(const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::IObjectList findContainerHierarchies(const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::ImageList getImages(const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::ImageList getUserImages(const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::ImageList getImagesByOptions(const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::IdBooleanLongListMapMap getImagesBySplitFilesets(const ::omero::api::StringLongListMap&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getCollectionCount(const ::std::string&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::IObjectList retrieveCollection(const ::omero::model::IObjectPtr&, const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::IObjectPtr createDataObject(const ::omero::model::IObjectPtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::IObjectList createDataObjects(const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;

    virtual void unlink(const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::IObjectList link(const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::IObjectPtr updateDataObject(const ::omero::model::IObjectPtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::IObjectList updateDataObjects(const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;

    virtual void deleteDataObject(const ::omero::model::IObjectPtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;

    virtual void deleteDataObjects(const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;
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

class IContainer : virtual public ::IceDelegate::omero::api::IContainer,
                   virtual public ::IceDelegateM::omero::api::ServiceInterface
{
public:

    virtual ::omero::api::IObjectList loadContainerHierarchy(const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList findContainerHierarchies(const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::ImageList getImages(const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::ImageList getUserImages(const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::ImageList getImagesByOptions(const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::IdBooleanLongListMapMap getImagesBySplitFilesets(const ::omero::api::StringLongListMap&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getCollectionCount(const ::std::string&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList retrieveCollection(const ::omero::model::IObjectPtr&, const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr createDataObject(const ::omero::model::IObjectPtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList createDataObjects(const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual void unlink(const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList link(const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr updateDataObject(const ::omero::model::IObjectPtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList updateDataObjects(const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual void deleteDataObject(const ::omero::model::IObjectPtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual void deleteDataObjects(const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
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

class IContainer : virtual public ::IceDelegate::omero::api::IContainer,
                   virtual public ::IceDelegateD::omero::api::ServiceInterface
{
public:

    virtual ::omero::api::IObjectList loadContainerHierarchy(const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList findContainerHierarchies(const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::ImageList getImages(const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::ImageList getUserImages(const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::ImageList getImagesByOptions(const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::IdBooleanLongListMapMap getImagesBySplitFilesets(const ::omero::api::StringLongListMap&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getCollectionCount(const ::std::string&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList retrieveCollection(const ::omero::model::IObjectPtr&, const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr createDataObject(const ::omero::model::IObjectPtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList createDataObjects(const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual void unlink(const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList link(const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::model::IObjectPtr updateDataObject(const ::omero::model::IObjectPtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList updateDataObjects(const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual void deleteDataObject(const ::omero::model::IObjectPtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual void deleteDataObjects(const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace api
{

class IContainer : virtual public ::omero::api::ServiceInterface
{
public:

    typedef IContainerPrx ProxyType;
    typedef IContainerPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void loadContainerHierarchy_async(const ::omero::api::AMD_IContainer_loadContainerHierarchyPtr&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___loadContainerHierarchy(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void findContainerHierarchies_async(const ::omero::api::AMD_IContainer_findContainerHierarchiesPtr&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findContainerHierarchies(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getImages_async(const ::omero::api::AMD_IContainer_getImagesPtr&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getImages(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getUserImages_async(const ::omero::api::AMD_IContainer_getUserImagesPtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getUserImages(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getImagesByOptions_async(const ::omero::api::AMD_IContainer_getImagesByOptionsPtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getImagesByOptions(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getImagesBySplitFilesets_async(const ::omero::api::AMD_IContainer_getImagesBySplitFilesetsPtr&, const ::omero::api::StringLongListMap&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getImagesBySplitFilesets(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getCollectionCount_async(const ::omero::api::AMD_IContainer_getCollectionCountPtr&, const ::std::string&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getCollectionCount(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void retrieveCollection_async(const ::omero::api::AMD_IContainer_retrieveCollectionPtr&, const ::omero::model::IObjectPtr&, const ::std::string&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___retrieveCollection(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void createDataObject_async(const ::omero::api::AMD_IContainer_createDataObjectPtr&, const ::omero::model::IObjectPtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createDataObject(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void createDataObjects_async(const ::omero::api::AMD_IContainer_createDataObjectsPtr&, const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createDataObjects(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlink_async(const ::omero::api::AMD_IContainer_unlinkPtr&, const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void link_async(const ::omero::api::AMD_IContainer_linkPtr&, const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___link(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void updateDataObject_async(const ::omero::api::AMD_IContainer_updateDataObjectPtr&, const ::omero::model::IObjectPtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___updateDataObject(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void updateDataObjects_async(const ::omero::api::AMD_IContainer_updateDataObjectsPtr&, const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___updateDataObjects(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual void deleteDataObject_async(const ::omero::api::AMD_IContainer_deleteDataObjectPtr&, const ::omero::model::IObjectPtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___deleteDataObject(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual void deleteDataObjects_async(const ::omero::api::AMD_IContainer_deleteDataObjectsPtr&, const ::omero::api::IObjectList&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___deleteDataObjects(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
