// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `IMetadata.ice'

#ifndef __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_IMetadata_h__
#define __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_IMetadata_h__

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

class IMetadata;

}

}

}

namespace omero
{

namespace api
{

class IMetadata;
bool operator==(const IMetadata&, const IMetadata&);
bool operator<(const IMetadata&, const IMetadata&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::api::IMetadata*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::IMetadata*);

}

namespace omero
{

namespace api
{

typedef ::IceInternal::Handle< ::omero::api::IMetadata> IMetadataPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::IMetadata> IMetadataPrx;

void __read(::IceInternal::BasicStream*, IMetadataPrx&);
void __patch__IMetadataPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace api
{

class AMI_IMetadata_loadChannelAcquisitionData : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::LogicalChannelList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IMetadataPrx&, const ::omero::sys::LongList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IMetadata_loadChannelAcquisitionData> AMI_IMetadata_loadChannelAcquisitionDataPtr;

class AMD_IMetadata_loadChannelAcquisitionData : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::LogicalChannelList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IMetadata_loadChannelAcquisitionData> AMD_IMetadata_loadChannelAcquisitionDataPtr;

class AMI_IMetadata_loadAnnotations : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::LongIObjectListMap&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IMetadataPrx&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::api::StringSet&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IMetadata_loadAnnotations> AMI_IMetadata_loadAnnotationsPtr;

class AMD_IMetadata_loadAnnotations : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::LongIObjectListMap&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IMetadata_loadAnnotations> AMD_IMetadata_loadAnnotationsPtr;

class AMI_IMetadata_loadSpecifiedAnnotations : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::AnnotationList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IMetadataPrx&, const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IMetadata_loadSpecifiedAnnotations> AMI_IMetadata_loadSpecifiedAnnotationsPtr;

class AMD_IMetadata_loadSpecifiedAnnotations : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::AnnotationList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IMetadata_loadSpecifiedAnnotations> AMD_IMetadata_loadSpecifiedAnnotationsPtr;

class AMI_IMetadata_loadTagContent : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::LongIObjectListMap&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IMetadataPrx&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IMetadata_loadTagContent> AMI_IMetadata_loadTagContentPtr;

class AMD_IMetadata_loadTagContent : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::LongIObjectListMap&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IMetadata_loadTagContent> AMD_IMetadata_loadTagContentPtr;

class AMI_IMetadata_loadTagSets : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IMetadataPrx&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IMetadata_loadTagSets> AMI_IMetadata_loadTagSetsPtr;

class AMD_IMetadata_loadTagSets : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IMetadata_loadTagSets> AMD_IMetadata_loadTagSetsPtr;

class AMI_IMetadata_getTaggedObjectsCount : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::sys::CountMap&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IMetadataPrx&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IMetadata_getTaggedObjectsCount> AMI_IMetadata_getTaggedObjectsCountPtr;

class AMD_IMetadata_getTaggedObjectsCount : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::sys::CountMap&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IMetadata_getTaggedObjectsCount> AMD_IMetadata_getTaggedObjectsCountPtr;

class AMI_IMetadata_countSpecifiedAnnotations : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::RLongPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IMetadataPrx&, const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IMetadata_countSpecifiedAnnotations> AMI_IMetadata_countSpecifiedAnnotationsPtr;

class AMD_IMetadata_countSpecifiedAnnotations : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::RLongPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IMetadata_countSpecifiedAnnotations> AMD_IMetadata_countSpecifiedAnnotationsPtr;

class AMI_IMetadata_loadAnnotation : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::AnnotationList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IMetadataPrx&, const ::omero::sys::LongList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IMetadata_loadAnnotation> AMI_IMetadata_loadAnnotationPtr;

class AMD_IMetadata_loadAnnotation : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::AnnotationList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IMetadata_loadAnnotation> AMD_IMetadata_loadAnnotationPtr;

class AMI_IMetadata_loadInstrument : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::InstrumentPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IMetadataPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IMetadata_loadInstrument> AMI_IMetadata_loadInstrumentPtr;

class AMD_IMetadata_loadInstrument : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::InstrumentPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IMetadata_loadInstrument> AMD_IMetadata_loadInstrumentPtr;

class AMI_IMetadata_loadAnnotationsUsedNotOwned : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IMetadataPrx&, const ::std::string&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IMetadata_loadAnnotationsUsedNotOwned> AMI_IMetadata_loadAnnotationsUsedNotOwnedPtr;

class AMD_IMetadata_loadAnnotationsUsedNotOwned : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::IObjectList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IMetadata_loadAnnotationsUsedNotOwned> AMD_IMetadata_loadAnnotationsUsedNotOwnedPtr;

class AMI_IMetadata_countAnnotationsUsedNotOwned : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::RLongPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IMetadataPrx&, const ::std::string&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IMetadata_countAnnotationsUsedNotOwned> AMI_IMetadata_countAnnotationsUsedNotOwnedPtr;

class AMD_IMetadata_countAnnotationsUsedNotOwned : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::RLongPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IMetadata_countAnnotationsUsedNotOwned> AMD_IMetadata_countAnnotationsUsedNotOwnedPtr;

class AMI_IMetadata_loadSpecifiedAnnotationsLinkedTo : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::LongAnnotationListMap&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IMetadataPrx&, const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IMetadata_loadSpecifiedAnnotationsLinkedTo> AMI_IMetadata_loadSpecifiedAnnotationsLinkedToPtr;

class AMD_IMetadata_loadSpecifiedAnnotationsLinkedTo : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::LongAnnotationListMap&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IMetadata_loadSpecifiedAnnotationsLinkedTo> AMD_IMetadata_loadSpecifiedAnnotationsLinkedToPtr;

class AMI_IMetadata_loadLogFiles : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::LongIObjectListMap&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IMetadataPrx&, const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IMetadata_loadLogFiles> AMI_IMetadata_loadLogFilesPtr;

class AMD_IMetadata_loadLogFiles : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::LongIObjectListMap&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IMetadata_loadLogFiles> AMD_IMetadata_loadLogFilesPtr;

}

}

namespace IceAsync
{

namespace omero
{

namespace api
{

class AMD_IMetadata_loadChannelAcquisitionData : public ::omero::api::AMD_IMetadata_loadChannelAcquisitionData, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMetadata_loadChannelAcquisitionData(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::LogicalChannelList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMetadata_loadAnnotations : public ::omero::api::AMD_IMetadata_loadAnnotations, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMetadata_loadAnnotations(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::LongIObjectListMap&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMetadata_loadSpecifiedAnnotations : public ::omero::api::AMD_IMetadata_loadSpecifiedAnnotations, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMetadata_loadSpecifiedAnnotations(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::AnnotationList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMetadata_loadTagContent : public ::omero::api::AMD_IMetadata_loadTagContent, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMetadata_loadTagContent(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::LongIObjectListMap&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMetadata_loadTagSets : public ::omero::api::AMD_IMetadata_loadTagSets, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMetadata_loadTagSets(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMetadata_getTaggedObjectsCount : public ::omero::api::AMD_IMetadata_getTaggedObjectsCount, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMetadata_getTaggedObjectsCount(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::sys::CountMap&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMetadata_countSpecifiedAnnotations : public ::omero::api::AMD_IMetadata_countSpecifiedAnnotations, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMetadata_countSpecifiedAnnotations(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::RLongPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMetadata_loadAnnotation : public ::omero::api::AMD_IMetadata_loadAnnotation, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMetadata_loadAnnotation(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::AnnotationList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMetadata_loadInstrument : public ::omero::api::AMD_IMetadata_loadInstrument, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMetadata_loadInstrument(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::InstrumentPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMetadata_loadAnnotationsUsedNotOwned : public ::omero::api::AMD_IMetadata_loadAnnotationsUsedNotOwned, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMetadata_loadAnnotationsUsedNotOwned(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::IObjectList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMetadata_countAnnotationsUsedNotOwned : public ::omero::api::AMD_IMetadata_countAnnotationsUsedNotOwned, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMetadata_countAnnotationsUsedNotOwned(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::RLongPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMetadata_loadSpecifiedAnnotationsLinkedTo : public ::omero::api::AMD_IMetadata_loadSpecifiedAnnotationsLinkedTo, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMetadata_loadSpecifiedAnnotationsLinkedTo(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::LongAnnotationListMap&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IMetadata_loadLogFiles : public ::omero::api::AMD_IMetadata_loadLogFiles, public ::IceInternal::IncomingAsync
{
public:

    AMD_IMetadata_loadLogFiles(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::LongIObjectListMap&);
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

class IMetadata : virtual public ::IceProxy::omero::api::ServiceInterface
{
public:

    ::omero::api::LogicalChannelList loadChannelAcquisitionData(const ::omero::sys::LongList& ids)
    {
        return loadChannelAcquisitionData(ids, 0);
    }
    ::omero::api::LogicalChannelList loadChannelAcquisitionData(const ::omero::sys::LongList& ids, const ::Ice::Context& __ctx)
    {
        return loadChannelAcquisitionData(ids, &__ctx);
    }
    
private:

    ::omero::api::LogicalChannelList loadChannelAcquisitionData(const ::omero::sys::LongList&, const ::Ice::Context*);
    
public:
    bool loadChannelAcquisitionData_async(const ::omero::api::AMI_IMetadata_loadChannelAcquisitionDataPtr&, const ::omero::sys::LongList&);
    bool loadChannelAcquisitionData_async(const ::omero::api::AMI_IMetadata_loadChannelAcquisitionDataPtr&, const ::omero::sys::LongList&, const ::Ice::Context&);

    ::omero::api::LongIObjectListMap loadAnnotations(const ::std::string& rootType, const ::omero::sys::LongList& rootIds, const ::omero::api::StringSet& annotationTypes, const ::omero::sys::LongList& annotatorIds, const ::omero::sys::ParametersPtr& options)
    {
        return loadAnnotations(rootType, rootIds, annotationTypes, annotatorIds, options, 0);
    }
    ::omero::api::LongIObjectListMap loadAnnotations(const ::std::string& rootType, const ::omero::sys::LongList& rootIds, const ::omero::api::StringSet& annotationTypes, const ::omero::sys::LongList& annotatorIds, const ::omero::sys::ParametersPtr& options, const ::Ice::Context& __ctx)
    {
        return loadAnnotations(rootType, rootIds, annotationTypes, annotatorIds, options, &__ctx);
    }
    
private:

    ::omero::api::LongIObjectListMap loadAnnotations(const ::std::string&, const ::omero::sys::LongList&, const ::omero::api::StringSet&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool loadAnnotations_async(const ::omero::api::AMI_IMetadata_loadAnnotationsPtr&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::api::StringSet&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&);
    bool loadAnnotations_async(const ::omero::api::AMI_IMetadata_loadAnnotationsPtr&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::api::StringSet&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);

    ::omero::api::AnnotationList loadSpecifiedAnnotations(const ::std::string& annotationType, const ::omero::api::StringSet& include, const ::omero::api::StringSet& exclude, const ::omero::sys::ParametersPtr& options)
    {
        return loadSpecifiedAnnotations(annotationType, include, exclude, options, 0);
    }
    ::omero::api::AnnotationList loadSpecifiedAnnotations(const ::std::string& annotationType, const ::omero::api::StringSet& include, const ::omero::api::StringSet& exclude, const ::omero::sys::ParametersPtr& options, const ::Ice::Context& __ctx)
    {
        return loadSpecifiedAnnotations(annotationType, include, exclude, options, &__ctx);
    }
    
private:

    ::omero::api::AnnotationList loadSpecifiedAnnotations(const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool loadSpecifiedAnnotations_async(const ::omero::api::AMI_IMetadata_loadSpecifiedAnnotationsPtr&, const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&);
    bool loadSpecifiedAnnotations_async(const ::omero::api::AMI_IMetadata_loadSpecifiedAnnotationsPtr&, const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);

    ::omero::api::LongIObjectListMap loadTagContent(const ::omero::sys::LongList& ids, const ::omero::sys::ParametersPtr& options)
    {
        return loadTagContent(ids, options, 0);
    }
    ::omero::api::LongIObjectListMap loadTagContent(const ::omero::sys::LongList& ids, const ::omero::sys::ParametersPtr& options, const ::Ice::Context& __ctx)
    {
        return loadTagContent(ids, options, &__ctx);
    }
    
private:

    ::omero::api::LongIObjectListMap loadTagContent(const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool loadTagContent_async(const ::omero::api::AMI_IMetadata_loadTagContentPtr&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&);
    bool loadTagContent_async(const ::omero::api::AMI_IMetadata_loadTagContentPtr&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);

    ::omero::api::IObjectList loadTagSets(const ::omero::sys::ParametersPtr& options)
    {
        return loadTagSets(options, 0);
    }
    ::omero::api::IObjectList loadTagSets(const ::omero::sys::ParametersPtr& options, const ::Ice::Context& __ctx)
    {
        return loadTagSets(options, &__ctx);
    }
    
private:

    ::omero::api::IObjectList loadTagSets(const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool loadTagSets_async(const ::omero::api::AMI_IMetadata_loadTagSetsPtr&, const ::omero::sys::ParametersPtr&);
    bool loadTagSets_async(const ::omero::api::AMI_IMetadata_loadTagSetsPtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);

    ::omero::sys::CountMap getTaggedObjectsCount(const ::omero::sys::LongList& ids, const ::omero::sys::ParametersPtr& options)
    {
        return getTaggedObjectsCount(ids, options, 0);
    }
    ::omero::sys::CountMap getTaggedObjectsCount(const ::omero::sys::LongList& ids, const ::omero::sys::ParametersPtr& options, const ::Ice::Context& __ctx)
    {
        return getTaggedObjectsCount(ids, options, &__ctx);
    }
    
private:

    ::omero::sys::CountMap getTaggedObjectsCount(const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool getTaggedObjectsCount_async(const ::omero::api::AMI_IMetadata_getTaggedObjectsCountPtr&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&);
    bool getTaggedObjectsCount_async(const ::omero::api::AMI_IMetadata_getTaggedObjectsCountPtr&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);

    ::omero::RLongPtr countSpecifiedAnnotations(const ::std::string& annotationType, const ::omero::api::StringSet& include, const ::omero::api::StringSet& exclude, const ::omero::sys::ParametersPtr& options)
    {
        return countSpecifiedAnnotations(annotationType, include, exclude, options, 0);
    }
    ::omero::RLongPtr countSpecifiedAnnotations(const ::std::string& annotationType, const ::omero::api::StringSet& include, const ::omero::api::StringSet& exclude, const ::omero::sys::ParametersPtr& options, const ::Ice::Context& __ctx)
    {
        return countSpecifiedAnnotations(annotationType, include, exclude, options, &__ctx);
    }
    
private:

    ::omero::RLongPtr countSpecifiedAnnotations(const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool countSpecifiedAnnotations_async(const ::omero::api::AMI_IMetadata_countSpecifiedAnnotationsPtr&, const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&);
    bool countSpecifiedAnnotations_async(const ::omero::api::AMI_IMetadata_countSpecifiedAnnotationsPtr&, const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);

    ::omero::api::AnnotationList loadAnnotation(const ::omero::sys::LongList& annotationIds)
    {
        return loadAnnotation(annotationIds, 0);
    }
    ::omero::api::AnnotationList loadAnnotation(const ::omero::sys::LongList& annotationIds, const ::Ice::Context& __ctx)
    {
        return loadAnnotation(annotationIds, &__ctx);
    }
    
private:

    ::omero::api::AnnotationList loadAnnotation(const ::omero::sys::LongList&, const ::Ice::Context*);
    
public:
    bool loadAnnotation_async(const ::omero::api::AMI_IMetadata_loadAnnotationPtr&, const ::omero::sys::LongList&);
    bool loadAnnotation_async(const ::omero::api::AMI_IMetadata_loadAnnotationPtr&, const ::omero::sys::LongList&, const ::Ice::Context&);

    ::omero::model::InstrumentPtr loadInstrument(::Ice::Long id)
    {
        return loadInstrument(id, 0);
    }
    ::omero::model::InstrumentPtr loadInstrument(::Ice::Long id, const ::Ice::Context& __ctx)
    {
        return loadInstrument(id, &__ctx);
    }
    
private:

    ::omero::model::InstrumentPtr loadInstrument(::Ice::Long, const ::Ice::Context*);
    
public:
    bool loadInstrument_async(const ::omero::api::AMI_IMetadata_loadInstrumentPtr&, ::Ice::Long);
    bool loadInstrument_async(const ::omero::api::AMI_IMetadata_loadInstrumentPtr&, ::Ice::Long, const ::Ice::Context&);

    ::omero::api::IObjectList loadAnnotationsUsedNotOwned(const ::std::string& annotationType, ::Ice::Long userID)
    {
        return loadAnnotationsUsedNotOwned(annotationType, userID, 0);
    }
    ::omero::api::IObjectList loadAnnotationsUsedNotOwned(const ::std::string& annotationType, ::Ice::Long userID, const ::Ice::Context& __ctx)
    {
        return loadAnnotationsUsedNotOwned(annotationType, userID, &__ctx);
    }
    
private:

    ::omero::api::IObjectList loadAnnotationsUsedNotOwned(const ::std::string&, ::Ice::Long, const ::Ice::Context*);
    
public:
    bool loadAnnotationsUsedNotOwned_async(const ::omero::api::AMI_IMetadata_loadAnnotationsUsedNotOwnedPtr&, const ::std::string&, ::Ice::Long);
    bool loadAnnotationsUsedNotOwned_async(const ::omero::api::AMI_IMetadata_loadAnnotationsUsedNotOwnedPtr&, const ::std::string&, ::Ice::Long, const ::Ice::Context&);

    ::omero::RLongPtr countAnnotationsUsedNotOwned(const ::std::string& annotationType, ::Ice::Long userID)
    {
        return countAnnotationsUsedNotOwned(annotationType, userID, 0);
    }
    ::omero::RLongPtr countAnnotationsUsedNotOwned(const ::std::string& annotationType, ::Ice::Long userID, const ::Ice::Context& __ctx)
    {
        return countAnnotationsUsedNotOwned(annotationType, userID, &__ctx);
    }
    
private:

    ::omero::RLongPtr countAnnotationsUsedNotOwned(const ::std::string&, ::Ice::Long, const ::Ice::Context*);
    
public:
    bool countAnnotationsUsedNotOwned_async(const ::omero::api::AMI_IMetadata_countAnnotationsUsedNotOwnedPtr&, const ::std::string&, ::Ice::Long);
    bool countAnnotationsUsedNotOwned_async(const ::omero::api::AMI_IMetadata_countAnnotationsUsedNotOwnedPtr&, const ::std::string&, ::Ice::Long, const ::Ice::Context&);

    ::omero::api::LongAnnotationListMap loadSpecifiedAnnotationsLinkedTo(const ::std::string& annotationType, const ::omero::api::StringSet& include, const ::omero::api::StringSet& exclude, const ::std::string& rootNodeType, const ::omero::sys::LongList& rootNodeIds, const ::omero::sys::ParametersPtr& options)
    {
        return loadSpecifiedAnnotationsLinkedTo(annotationType, include, exclude, rootNodeType, rootNodeIds, options, 0);
    }
    ::omero::api::LongAnnotationListMap loadSpecifiedAnnotationsLinkedTo(const ::std::string& annotationType, const ::omero::api::StringSet& include, const ::omero::api::StringSet& exclude, const ::std::string& rootNodeType, const ::omero::sys::LongList& rootNodeIds, const ::omero::sys::ParametersPtr& options, const ::Ice::Context& __ctx)
    {
        return loadSpecifiedAnnotationsLinkedTo(annotationType, include, exclude, rootNodeType, rootNodeIds, options, &__ctx);
    }
    
private:

    ::omero::api::LongAnnotationListMap loadSpecifiedAnnotationsLinkedTo(const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);
    
public:
    bool loadSpecifiedAnnotationsLinkedTo_async(const ::omero::api::AMI_IMetadata_loadSpecifiedAnnotationsLinkedToPtr&, const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&);
    bool loadSpecifiedAnnotationsLinkedTo_async(const ::omero::api::AMI_IMetadata_loadSpecifiedAnnotationsLinkedToPtr&, const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context&);

    ::omero::api::LongIObjectListMap loadLogFiles(const ::std::string& rootType, const ::omero::sys::LongList& ids)
    {
        return loadLogFiles(rootType, ids, 0);
    }
    ::omero::api::LongIObjectListMap loadLogFiles(const ::std::string& rootType, const ::omero::sys::LongList& ids, const ::Ice::Context& __ctx)
    {
        return loadLogFiles(rootType, ids, &__ctx);
    }
    
private:

    ::omero::api::LongIObjectListMap loadLogFiles(const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context*);
    
public:
    bool loadLogFiles_async(const ::omero::api::AMI_IMetadata_loadLogFilesPtr&, const ::std::string&, const ::omero::sys::LongList&);
    bool loadLogFiles_async(const ::omero::api::AMI_IMetadata_loadLogFilesPtr&, const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<IMetadata> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMetadata*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<IMetadata*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMetadata> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMetadata*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<IMetadata*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMetadata> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMetadata*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<IMetadata*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMetadata> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMetadata*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<IMetadata*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMetadata> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMetadata*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<IMetadata*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMetadata> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMetadata*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<IMetadata*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMetadata> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMetadata*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<IMetadata*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMetadata> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMetadata*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<IMetadata*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMetadata> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMetadata*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<IMetadata*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMetadata> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMetadata*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<IMetadata*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMetadata> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMetadata*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<IMetadata*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMetadata> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMetadata*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<IMetadata*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMetadata> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMetadata*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<IMetadata*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMetadata> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMetadata*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<IMetadata*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMetadata> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMetadata*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<IMetadata*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMetadata> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMetadata*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<IMetadata*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMetadata> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMetadata*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<IMetadata*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMetadata> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMetadata*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<IMetadata*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMetadata> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMetadata*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<IMetadata*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class IMetadata : virtual public ::IceDelegate::omero::api::ServiceInterface
{
public:

    virtual ::omero::api::LogicalChannelList loadChannelAcquisitionData(const ::omero::sys::LongList&, const ::Ice::Context*) = 0;

    virtual ::omero::api::LongIObjectListMap loadAnnotations(const ::std::string&, const ::omero::sys::LongList&, const ::omero::api::StringSet&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::AnnotationList loadSpecifiedAnnotations(const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::LongIObjectListMap loadTagContent(const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::IObjectList loadTagSets(const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getTaggedObjectsCount(const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RLongPtr countSpecifiedAnnotations(const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::AnnotationList loadAnnotation(const ::omero::sys::LongList&, const ::Ice::Context*) = 0;

    virtual ::omero::model::InstrumentPtr loadInstrument(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::api::IObjectList loadAnnotationsUsedNotOwned(const ::std::string&, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::RLongPtr countAnnotationsUsedNotOwned(const ::std::string&, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::api::LongAnnotationListMap loadSpecifiedAnnotationsLinkedTo(const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::LongIObjectListMap loadLogFiles(const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context*) = 0;
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

class IMetadata : virtual public ::IceDelegate::omero::api::IMetadata,
                  virtual public ::IceDelegateM::omero::api::ServiceInterface
{
public:

    virtual ::omero::api::LogicalChannelList loadChannelAcquisitionData(const ::omero::sys::LongList&, const ::Ice::Context*);

    virtual ::omero::api::LongIObjectListMap loadAnnotations(const ::std::string&, const ::omero::sys::LongList&, const ::omero::api::StringSet&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::AnnotationList loadSpecifiedAnnotations(const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::LongIObjectListMap loadTagContent(const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList loadTagSets(const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getTaggedObjectsCount(const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::RLongPtr countSpecifiedAnnotations(const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::AnnotationList loadAnnotation(const ::omero::sys::LongList&, const ::Ice::Context*);

    virtual ::omero::model::InstrumentPtr loadInstrument(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::IObjectList loadAnnotationsUsedNotOwned(const ::std::string&, ::Ice::Long, const ::Ice::Context*);

    virtual ::omero::RLongPtr countAnnotationsUsedNotOwned(const ::std::string&, ::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::LongAnnotationListMap loadSpecifiedAnnotationsLinkedTo(const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::LongIObjectListMap loadLogFiles(const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context*);
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

class IMetadata : virtual public ::IceDelegate::omero::api::IMetadata,
                  virtual public ::IceDelegateD::omero::api::ServiceInterface
{
public:

    virtual ::omero::api::LogicalChannelList loadChannelAcquisitionData(const ::omero::sys::LongList&, const ::Ice::Context*);

    virtual ::omero::api::LongIObjectListMap loadAnnotations(const ::std::string&, const ::omero::sys::LongList&, const ::omero::api::StringSet&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::AnnotationList loadSpecifiedAnnotations(const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::LongIObjectListMap loadTagContent(const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::IObjectList loadTagSets(const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getTaggedObjectsCount(const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::RLongPtr countSpecifiedAnnotations(const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::AnnotationList loadAnnotation(const ::omero::sys::LongList&, const ::Ice::Context*);

    virtual ::omero::model::InstrumentPtr loadInstrument(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::IObjectList loadAnnotationsUsedNotOwned(const ::std::string&, ::Ice::Long, const ::Ice::Context*);

    virtual ::omero::RLongPtr countAnnotationsUsedNotOwned(const ::std::string&, ::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::LongAnnotationListMap loadSpecifiedAnnotationsLinkedTo(const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Context*);

    virtual ::omero::api::LongIObjectListMap loadLogFiles(const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace api
{

class IMetadata : virtual public ::omero::api::ServiceInterface
{
public:

    typedef IMetadataPrx ProxyType;
    typedef IMetadataPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void loadChannelAcquisitionData_async(const ::omero::api::AMD_IMetadata_loadChannelAcquisitionDataPtr&, const ::omero::sys::LongList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___loadChannelAcquisitionData(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void loadAnnotations_async(const ::omero::api::AMD_IMetadata_loadAnnotationsPtr&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::api::StringSet&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___loadAnnotations(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void loadSpecifiedAnnotations_async(const ::omero::api::AMD_IMetadata_loadSpecifiedAnnotationsPtr&, const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___loadSpecifiedAnnotations(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void loadTagContent_async(const ::omero::api::AMD_IMetadata_loadTagContentPtr&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___loadTagContent(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void loadTagSets_async(const ::omero::api::AMD_IMetadata_loadTagSetsPtr&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___loadTagSets(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getTaggedObjectsCount_async(const ::omero::api::AMD_IMetadata_getTaggedObjectsCountPtr&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getTaggedObjectsCount(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void countSpecifiedAnnotations_async(const ::omero::api::AMD_IMetadata_countSpecifiedAnnotationsPtr&, const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___countSpecifiedAnnotations(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void loadAnnotation_async(const ::omero::api::AMD_IMetadata_loadAnnotationPtr&, const ::omero::sys::LongList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___loadAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void loadInstrument_async(const ::omero::api::AMD_IMetadata_loadInstrumentPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___loadInstrument(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void loadAnnotationsUsedNotOwned_async(const ::omero::api::AMD_IMetadata_loadAnnotationsUsedNotOwnedPtr&, const ::std::string&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___loadAnnotationsUsedNotOwned(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void countAnnotationsUsedNotOwned_async(const ::omero::api::AMD_IMetadata_countAnnotationsUsedNotOwnedPtr&, const ::std::string&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___countAnnotationsUsedNotOwned(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void loadSpecifiedAnnotationsLinkedTo_async(const ::omero::api::AMD_IMetadata_loadSpecifiedAnnotationsLinkedToPtr&, const ::std::string&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::std::string&, const ::omero::sys::LongList&, const ::omero::sys::ParametersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___loadSpecifiedAnnotationsLinkedTo(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void loadLogFiles_async(const ::omero::api::AMD_IMetadata_loadLogFilesPtr&, const ::std::string&, const ::omero::sys::LongList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___loadLogFiles(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
