// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `IAdmin.ice'

#ifndef __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_IAdmin_h__
#define __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_IAdmin_h__

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

class IAdmin;

}

}

}

namespace omero
{

namespace api
{

class IAdmin;
bool operator==(const IAdmin&, const IAdmin&);
bool operator<(const IAdmin&, const IAdmin&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::api::IAdmin*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::IAdmin*);

}

namespace omero
{

namespace api
{

typedef ::IceInternal::Handle< ::omero::api::IAdmin> IAdminPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::IAdmin> IAdminPrx;

void __read(::IceInternal::BasicStream*, IAdminPrx&);
void __patch__IAdminPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace api
{

class AMI_IAdmin_canUpdate : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::omero::model::IObjectPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_canUpdate> AMI_IAdmin_canUpdatePtr;

class AMD_IAdmin_canUpdate : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_canUpdate> AMD_IAdmin_canUpdatePtr;

class AMI_IAdmin_getExperimenter : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::ExperimenterPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_getExperimenter> AMI_IAdmin_getExperimenterPtr;

class AMD_IAdmin_getExperimenter : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::ExperimenterPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_getExperimenter> AMD_IAdmin_getExperimenterPtr;

class AMI_IAdmin_lookupExperimenter : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::ExperimenterPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_lookupExperimenter> AMI_IAdmin_lookupExperimenterPtr;

class AMD_IAdmin_lookupExperimenter : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::ExperimenterPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_lookupExperimenter> AMD_IAdmin_lookupExperimenterPtr;

class AMI_IAdmin_lookupExperimenters : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::ExperimenterList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_lookupExperimenters> AMI_IAdmin_lookupExperimentersPtr;

class AMD_IAdmin_lookupExperimenters : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::ExperimenterList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_lookupExperimenters> AMD_IAdmin_lookupExperimentersPtr;

class AMI_IAdmin_getGroup : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::ExperimenterGroupPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_getGroup> AMI_IAdmin_getGroupPtr;

class AMD_IAdmin_getGroup : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::ExperimenterGroupPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_getGroup> AMD_IAdmin_getGroupPtr;

class AMI_IAdmin_lookupGroup : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::ExperimenterGroupPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_lookupGroup> AMI_IAdmin_lookupGroupPtr;

class AMD_IAdmin_lookupGroup : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::ExperimenterGroupPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_lookupGroup> AMD_IAdmin_lookupGroupPtr;

class AMI_IAdmin_lookupGroups : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::ExperimenterGroupList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_lookupGroups> AMI_IAdmin_lookupGroupsPtr;

class AMD_IAdmin_lookupGroups : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::ExperimenterGroupList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_lookupGroups> AMD_IAdmin_lookupGroupsPtr;

class AMI_IAdmin_containedExperimenters : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::ExperimenterList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_containedExperimenters> AMI_IAdmin_containedExperimentersPtr;

class AMD_IAdmin_containedExperimenters : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::ExperimenterList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_containedExperimenters> AMD_IAdmin_containedExperimentersPtr;

class AMI_IAdmin_containedGroups : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::ExperimenterGroupList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_containedGroups> AMI_IAdmin_containedGroupsPtr;

class AMD_IAdmin_containedGroups : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::ExperimenterGroupList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_containedGroups> AMD_IAdmin_containedGroupsPtr;

class AMI_IAdmin_getDefaultGroup : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::ExperimenterGroupPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_getDefaultGroup> AMI_IAdmin_getDefaultGroupPtr;

class AMD_IAdmin_getDefaultGroup : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::ExperimenterGroupPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_getDefaultGroup> AMD_IAdmin_getDefaultGroupPtr;

class AMI_IAdmin_lookupLdapAuthExperimenter : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_lookupLdapAuthExperimenter> AMI_IAdmin_lookupLdapAuthExperimenterPtr;

class AMD_IAdmin_lookupLdapAuthExperimenter : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::std::string&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_lookupLdapAuthExperimenter> AMD_IAdmin_lookupLdapAuthExperimenterPtr;

class AMI_IAdmin_lookupLdapAuthExperimenters : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::RListPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_lookupLdapAuthExperimenters> AMI_IAdmin_lookupLdapAuthExperimentersPtr;

class AMD_IAdmin_lookupLdapAuthExperimenters : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::RListPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_lookupLdapAuthExperimenters> AMD_IAdmin_lookupLdapAuthExperimentersPtr;

class AMI_IAdmin_getMemberOfGroupIds : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::LongList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_getMemberOfGroupIds> AMI_IAdmin_getMemberOfGroupIdsPtr;

class AMD_IAdmin_getMemberOfGroupIds : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::LongList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_getMemberOfGroupIds> AMD_IAdmin_getMemberOfGroupIdsPtr;

class AMI_IAdmin_getLeaderOfGroupIds : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::LongList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_getLeaderOfGroupIds> AMI_IAdmin_getLeaderOfGroupIdsPtr;

class AMD_IAdmin_getLeaderOfGroupIds : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::LongList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_getLeaderOfGroupIds> AMD_IAdmin_getLeaderOfGroupIdsPtr;

class AMI_IAdmin_updateSelf : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_updateSelf> AMI_IAdmin_updateSelfPtr;

class AMD_IAdmin_updateSelf : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_updateSelf> AMD_IAdmin_updateSelfPtr;

class AMI_IAdmin_uploadMyUserPhoto : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::std::string&, const ::std::string&, const ::Ice::ByteSeq&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_uploadMyUserPhoto> AMI_IAdmin_uploadMyUserPhotoPtr;

class AMD_IAdmin_uploadMyUserPhoto : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_uploadMyUserPhoto> AMD_IAdmin_uploadMyUserPhotoPtr;

class AMI_IAdmin_getMyUserPhotos : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::OriginalFileList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_getMyUserPhotos> AMI_IAdmin_getMyUserPhotosPtr;

class AMD_IAdmin_getMyUserPhotos : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::OriginalFileList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_getMyUserPhotos> AMD_IAdmin_getMyUserPhotosPtr;

class AMI_IAdmin_updateExperimenter : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_updateExperimenter> AMI_IAdmin_updateExperimenterPtr;

class AMD_IAdmin_updateExperimenter : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_updateExperimenter> AMD_IAdmin_updateExperimenterPtr;

class AMI_IAdmin_updateExperimenterWithPassword : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::omero::model::ExperimenterPtr&, const ::omero::RStringPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_updateExperimenterWithPassword> AMI_IAdmin_updateExperimenterWithPasswordPtr;

class AMD_IAdmin_updateExperimenterWithPassword : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_updateExperimenterWithPassword> AMD_IAdmin_updateExperimenterWithPasswordPtr;

class AMI_IAdmin_updateGroup : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_updateGroup> AMI_IAdmin_updateGroupPtr;

class AMD_IAdmin_updateGroup : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_updateGroup> AMD_IAdmin_updateGroupPtr;

class AMI_IAdmin_createUser : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::omero::model::ExperimenterPtr&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_createUser> AMI_IAdmin_createUserPtr;

class AMD_IAdmin_createUser : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_createUser> AMD_IAdmin_createUserPtr;

class AMI_IAdmin_createSystemUser : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_createSystemUser> AMI_IAdmin_createSystemUserPtr;

class AMD_IAdmin_createSystemUser : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_createSystemUser> AMD_IAdmin_createSystemUserPtr;

class AMI_IAdmin_createExperimenter : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::omero::model::ExperimenterPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterGroupList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_createExperimenter> AMI_IAdmin_createExperimenterPtr;

class AMD_IAdmin_createExperimenter : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_createExperimenter> AMD_IAdmin_createExperimenterPtr;

class AMI_IAdmin_createExperimenterWithPassword : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::omero::model::ExperimenterPtr&, const ::omero::RStringPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterGroupList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_createExperimenterWithPassword> AMI_IAdmin_createExperimenterWithPasswordPtr;

class AMD_IAdmin_createExperimenterWithPassword : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_createExperimenterWithPassword> AMD_IAdmin_createExperimenterWithPasswordPtr;

class AMI_IAdmin_createGroup : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_createGroup> AMI_IAdmin_createGroupPtr;

class AMD_IAdmin_createGroup : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_createGroup> AMD_IAdmin_createGroupPtr;

class AMI_IAdmin_addGroups : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::omero::model::ExperimenterPtr&, const ::omero::api::ExperimenterGroupList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_addGroups> AMI_IAdmin_addGroupsPtr;

class AMD_IAdmin_addGroups : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_addGroups> AMD_IAdmin_addGroupsPtr;

class AMI_IAdmin_removeGroups : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::omero::model::ExperimenterPtr&, const ::omero::api::ExperimenterGroupList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_removeGroups> AMI_IAdmin_removeGroupsPtr;

class AMD_IAdmin_removeGroups : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_removeGroups> AMD_IAdmin_removeGroupsPtr;

class AMI_IAdmin_setDefaultGroup : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::omero::model::ExperimenterPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_setDefaultGroup> AMI_IAdmin_setDefaultGroupPtr;

class AMD_IAdmin_setDefaultGroup : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_setDefaultGroup> AMD_IAdmin_setDefaultGroupPtr;

class AMI_IAdmin_setGroupOwner : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_setGroupOwner> AMI_IAdmin_setGroupOwnerPtr;

class AMD_IAdmin_setGroupOwner : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_setGroupOwner> AMD_IAdmin_setGroupOwnerPtr;

class AMI_IAdmin_unsetGroupOwner : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_unsetGroupOwner> AMI_IAdmin_unsetGroupOwnerPtr;

class AMD_IAdmin_unsetGroupOwner : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_unsetGroupOwner> AMD_IAdmin_unsetGroupOwnerPtr;

class AMI_IAdmin_addGroupOwners : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_addGroupOwners> AMI_IAdmin_addGroupOwnersPtr;

class AMD_IAdmin_addGroupOwners : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_addGroupOwners> AMD_IAdmin_addGroupOwnersPtr;

class AMI_IAdmin_removeGroupOwners : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_removeGroupOwners> AMI_IAdmin_removeGroupOwnersPtr;

class AMD_IAdmin_removeGroupOwners : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_removeGroupOwners> AMD_IAdmin_removeGroupOwnersPtr;

class AMI_IAdmin_deleteExperimenter : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_deleteExperimenter> AMI_IAdmin_deleteExperimenterPtr;

class AMD_IAdmin_deleteExperimenter : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_deleteExperimenter> AMD_IAdmin_deleteExperimenterPtr;

class AMI_IAdmin_deleteGroup : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_deleteGroup> AMI_IAdmin_deleteGroupPtr;

class AMD_IAdmin_deleteGroup : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_deleteGroup> AMD_IAdmin_deleteGroupPtr;

class AMI_IAdmin_changeOwner : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::omero::model::IObjectPtr&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_changeOwner> AMI_IAdmin_changeOwnerPtr;

class AMD_IAdmin_changeOwner : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_changeOwner> AMD_IAdmin_changeOwnerPtr;

class AMI_IAdmin_changeGroup : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::omero::model::IObjectPtr&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_changeGroup> AMI_IAdmin_changeGroupPtr;

class AMD_IAdmin_changeGroup : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_changeGroup> AMD_IAdmin_changeGroupPtr;

class AMI_IAdmin_changePermissions : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::omero::model::IObjectPtr&, const ::omero::model::PermissionsPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_changePermissions> AMI_IAdmin_changePermissionsPtr;

class AMD_IAdmin_changePermissions : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_changePermissions> AMD_IAdmin_changePermissionsPtr;

class AMI_IAdmin_moveToCommonSpace : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::omero::api::IObjectList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_moveToCommonSpace> AMI_IAdmin_moveToCommonSpacePtr;

class AMD_IAdmin_moveToCommonSpace : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_moveToCommonSpace> AMD_IAdmin_moveToCommonSpacePtr;

class AMI_IAdmin_changePassword : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::omero::RStringPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_changePassword> AMI_IAdmin_changePasswordPtr;

class AMD_IAdmin_changePassword : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_changePassword> AMD_IAdmin_changePasswordPtr;

class AMI_IAdmin_changePasswordWithOldPassword : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_changePasswordWithOldPassword> AMI_IAdmin_changePasswordWithOldPasswordPtr;

class AMD_IAdmin_changePasswordWithOldPassword : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_changePasswordWithOldPassword> AMD_IAdmin_changePasswordWithOldPasswordPtr;

class AMI_IAdmin_changeUserPassword : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::std::string&, const ::omero::RStringPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_changeUserPassword> AMI_IAdmin_changeUserPasswordPtr;

class AMD_IAdmin_changeUserPassword : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_changeUserPassword> AMD_IAdmin_changeUserPasswordPtr;

class AMI_IAdmin_synchronizeLoginCache : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_synchronizeLoginCache> AMI_IAdmin_synchronizeLoginCachePtr;

class AMD_IAdmin_synchronizeLoginCache : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_synchronizeLoginCache> AMD_IAdmin_synchronizeLoginCachePtr;

class AMI_IAdmin_changeExpiredCredentials : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_changeExpiredCredentials> AMI_IAdmin_changeExpiredCredentialsPtr;

class AMD_IAdmin_changeExpiredCredentials : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_changeExpiredCredentials> AMD_IAdmin_changeExpiredCredentialsPtr;

class AMI_IAdmin_reportForgottenPassword : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_reportForgottenPassword> AMI_IAdmin_reportForgottenPasswordPtr;

class AMD_IAdmin_reportForgottenPassword : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_reportForgottenPassword> AMD_IAdmin_reportForgottenPasswordPtr;

class AMI_IAdmin_getSecurityRoles : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::sys::RolesPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_getSecurityRoles> AMI_IAdmin_getSecurityRolesPtr;

class AMD_IAdmin_getSecurityRoles : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::sys::RolesPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_getSecurityRoles> AMD_IAdmin_getSecurityRolesPtr;

class AMI_IAdmin_getEventContext : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::sys::EventContextPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IAdminPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IAdmin_getEventContext> AMI_IAdmin_getEventContextPtr;

class AMD_IAdmin_getEventContext : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::sys::EventContextPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IAdmin_getEventContext> AMD_IAdmin_getEventContextPtr;

}

}

namespace IceAsync
{

namespace omero
{

namespace api
{

class AMD_IAdmin_canUpdate : public ::omero::api::AMD_IAdmin_canUpdate, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_canUpdate(::IceInternal::Incoming&);

    virtual void ice_response(bool);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_getExperimenter : public ::omero::api::AMD_IAdmin_getExperimenter, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_getExperimenter(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::ExperimenterPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_lookupExperimenter : public ::omero::api::AMD_IAdmin_lookupExperimenter, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_lookupExperimenter(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::ExperimenterPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_lookupExperimenters : public ::omero::api::AMD_IAdmin_lookupExperimenters, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_lookupExperimenters(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::ExperimenterList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_getGroup : public ::omero::api::AMD_IAdmin_getGroup, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_getGroup(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::ExperimenterGroupPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_lookupGroup : public ::omero::api::AMD_IAdmin_lookupGroup, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_lookupGroup(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::ExperimenterGroupPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_lookupGroups : public ::omero::api::AMD_IAdmin_lookupGroups, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_lookupGroups(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::ExperimenterGroupList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_containedExperimenters : public ::omero::api::AMD_IAdmin_containedExperimenters, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_containedExperimenters(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::ExperimenterList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_containedGroups : public ::omero::api::AMD_IAdmin_containedGroups, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_containedGroups(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::ExperimenterGroupList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_getDefaultGroup : public ::omero::api::AMD_IAdmin_getDefaultGroup, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_getDefaultGroup(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::ExperimenterGroupPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_lookupLdapAuthExperimenter : public ::omero::api::AMD_IAdmin_lookupLdapAuthExperimenter, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_lookupLdapAuthExperimenter(::IceInternal::Incoming&);

    virtual void ice_response(const ::std::string&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_lookupLdapAuthExperimenters : public ::omero::api::AMD_IAdmin_lookupLdapAuthExperimenters, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_lookupLdapAuthExperimenters(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::RListPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_getMemberOfGroupIds : public ::omero::api::AMD_IAdmin_getMemberOfGroupIds, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_getMemberOfGroupIds(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::LongList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_getLeaderOfGroupIds : public ::omero::api::AMD_IAdmin_getLeaderOfGroupIds, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_getLeaderOfGroupIds(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::LongList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_updateSelf : public ::omero::api::AMD_IAdmin_updateSelf, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_updateSelf(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_uploadMyUserPhoto : public ::omero::api::AMD_IAdmin_uploadMyUserPhoto, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_uploadMyUserPhoto(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Long);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_getMyUserPhotos : public ::omero::api::AMD_IAdmin_getMyUserPhotos, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_getMyUserPhotos(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::OriginalFileList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_updateExperimenter : public ::omero::api::AMD_IAdmin_updateExperimenter, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_updateExperimenter(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_updateExperimenterWithPassword : public ::omero::api::AMD_IAdmin_updateExperimenterWithPassword, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_updateExperimenterWithPassword(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_updateGroup : public ::omero::api::AMD_IAdmin_updateGroup, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_updateGroup(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_createUser : public ::omero::api::AMD_IAdmin_createUser, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_createUser(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Long);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_createSystemUser : public ::omero::api::AMD_IAdmin_createSystemUser, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_createSystemUser(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Long);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_createExperimenter : public ::omero::api::AMD_IAdmin_createExperimenter, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_createExperimenter(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Long);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_createExperimenterWithPassword : public ::omero::api::AMD_IAdmin_createExperimenterWithPassword, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_createExperimenterWithPassword(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Long);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_createGroup : public ::omero::api::AMD_IAdmin_createGroup, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_createGroup(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Long);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_addGroups : public ::omero::api::AMD_IAdmin_addGroups, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_addGroups(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_removeGroups : public ::omero::api::AMD_IAdmin_removeGroups, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_removeGroups(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_setDefaultGroup : public ::omero::api::AMD_IAdmin_setDefaultGroup, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_setDefaultGroup(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_setGroupOwner : public ::omero::api::AMD_IAdmin_setGroupOwner, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_setGroupOwner(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_unsetGroupOwner : public ::omero::api::AMD_IAdmin_unsetGroupOwner, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_unsetGroupOwner(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_addGroupOwners : public ::omero::api::AMD_IAdmin_addGroupOwners, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_addGroupOwners(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_removeGroupOwners : public ::omero::api::AMD_IAdmin_removeGroupOwners, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_removeGroupOwners(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_deleteExperimenter : public ::omero::api::AMD_IAdmin_deleteExperimenter, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_deleteExperimenter(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_deleteGroup : public ::omero::api::AMD_IAdmin_deleteGroup, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_deleteGroup(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_changeOwner : public ::omero::api::AMD_IAdmin_changeOwner, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_changeOwner(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_changeGroup : public ::omero::api::AMD_IAdmin_changeGroup, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_changeGroup(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_changePermissions : public ::omero::api::AMD_IAdmin_changePermissions, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_changePermissions(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_moveToCommonSpace : public ::omero::api::AMD_IAdmin_moveToCommonSpace, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_moveToCommonSpace(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_changePassword : public ::omero::api::AMD_IAdmin_changePassword, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_changePassword(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_changePasswordWithOldPassword : public ::omero::api::AMD_IAdmin_changePasswordWithOldPassword, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_changePasswordWithOldPassword(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_changeUserPassword : public ::omero::api::AMD_IAdmin_changeUserPassword, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_changeUserPassword(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_synchronizeLoginCache : public ::omero::api::AMD_IAdmin_synchronizeLoginCache, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_synchronizeLoginCache(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_changeExpiredCredentials : public ::omero::api::AMD_IAdmin_changeExpiredCredentials, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_changeExpiredCredentials(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_reportForgottenPassword : public ::omero::api::AMD_IAdmin_reportForgottenPassword, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_reportForgottenPassword(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_getSecurityRoles : public ::omero::api::AMD_IAdmin_getSecurityRoles, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_getSecurityRoles(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::sys::RolesPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IAdmin_getEventContext : public ::omero::api::AMD_IAdmin_getEventContext, public ::IceInternal::IncomingAsync
{
public:

    AMD_IAdmin_getEventContext(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::sys::EventContextPtr&);
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

class IAdmin : virtual public ::IceProxy::omero::api::ServiceInterface
{
public:

    bool canUpdate(const ::omero::model::IObjectPtr& obj)
    {
        return canUpdate(obj, 0);
    }
    bool canUpdate(const ::omero::model::IObjectPtr& obj, const ::Ice::Context& __ctx)
    {
        return canUpdate(obj, &__ctx);
    }
    
private:

    bool canUpdate(const ::omero::model::IObjectPtr&, const ::Ice::Context*);
    
public:
    bool canUpdate_async(const ::omero::api::AMI_IAdmin_canUpdatePtr&, const ::omero::model::IObjectPtr&);
    bool canUpdate_async(const ::omero::api::AMI_IAdmin_canUpdatePtr&, const ::omero::model::IObjectPtr&, const ::Ice::Context&);

    ::omero::model::ExperimenterPtr getExperimenter(::Ice::Long id)
    {
        return getExperimenter(id, 0);
    }
    ::omero::model::ExperimenterPtr getExperimenter(::Ice::Long id, const ::Ice::Context& __ctx)
    {
        return getExperimenter(id, &__ctx);
    }
    
private:

    ::omero::model::ExperimenterPtr getExperimenter(::Ice::Long, const ::Ice::Context*);
    
public:
    bool getExperimenter_async(const ::omero::api::AMI_IAdmin_getExperimenterPtr&, ::Ice::Long);
    bool getExperimenter_async(const ::omero::api::AMI_IAdmin_getExperimenterPtr&, ::Ice::Long, const ::Ice::Context&);

    ::omero::model::ExperimenterPtr lookupExperimenter(const ::std::string& name)
    {
        return lookupExperimenter(name, 0);
    }
    ::omero::model::ExperimenterPtr lookupExperimenter(const ::std::string& name, const ::Ice::Context& __ctx)
    {
        return lookupExperimenter(name, &__ctx);
    }
    
private:

    ::omero::model::ExperimenterPtr lookupExperimenter(const ::std::string&, const ::Ice::Context*);
    
public:
    bool lookupExperimenter_async(const ::omero::api::AMI_IAdmin_lookupExperimenterPtr&, const ::std::string&);
    bool lookupExperimenter_async(const ::omero::api::AMI_IAdmin_lookupExperimenterPtr&, const ::std::string&, const ::Ice::Context&);

    ::omero::api::ExperimenterList lookupExperimenters()
    {
        return lookupExperimenters(0);
    }
    ::omero::api::ExperimenterList lookupExperimenters(const ::Ice::Context& __ctx)
    {
        return lookupExperimenters(&__ctx);
    }
    
private:

    ::omero::api::ExperimenterList lookupExperimenters(const ::Ice::Context*);
    
public:
    bool lookupExperimenters_async(const ::omero::api::AMI_IAdmin_lookupExperimentersPtr&);
    bool lookupExperimenters_async(const ::omero::api::AMI_IAdmin_lookupExperimentersPtr&, const ::Ice::Context&);

    ::omero::model::ExperimenterGroupPtr getGroup(::Ice::Long id)
    {
        return getGroup(id, 0);
    }
    ::omero::model::ExperimenterGroupPtr getGroup(::Ice::Long id, const ::Ice::Context& __ctx)
    {
        return getGroup(id, &__ctx);
    }
    
private:

    ::omero::model::ExperimenterGroupPtr getGroup(::Ice::Long, const ::Ice::Context*);
    
public:
    bool getGroup_async(const ::omero::api::AMI_IAdmin_getGroupPtr&, ::Ice::Long);
    bool getGroup_async(const ::omero::api::AMI_IAdmin_getGroupPtr&, ::Ice::Long, const ::Ice::Context&);

    ::omero::model::ExperimenterGroupPtr lookupGroup(const ::std::string& name)
    {
        return lookupGroup(name, 0);
    }
    ::omero::model::ExperimenterGroupPtr lookupGroup(const ::std::string& name, const ::Ice::Context& __ctx)
    {
        return lookupGroup(name, &__ctx);
    }
    
private:

    ::omero::model::ExperimenterGroupPtr lookupGroup(const ::std::string&, const ::Ice::Context*);
    
public:
    bool lookupGroup_async(const ::omero::api::AMI_IAdmin_lookupGroupPtr&, const ::std::string&);
    bool lookupGroup_async(const ::omero::api::AMI_IAdmin_lookupGroupPtr&, const ::std::string&, const ::Ice::Context&);

    ::omero::api::ExperimenterGroupList lookupGroups()
    {
        return lookupGroups(0);
    }
    ::omero::api::ExperimenterGroupList lookupGroups(const ::Ice::Context& __ctx)
    {
        return lookupGroups(&__ctx);
    }
    
private:

    ::omero::api::ExperimenterGroupList lookupGroups(const ::Ice::Context*);
    
public:
    bool lookupGroups_async(const ::omero::api::AMI_IAdmin_lookupGroupsPtr&);
    bool lookupGroups_async(const ::omero::api::AMI_IAdmin_lookupGroupsPtr&, const ::Ice::Context&);

    ::omero::api::ExperimenterList containedExperimenters(::Ice::Long groupId)
    {
        return containedExperimenters(groupId, 0);
    }
    ::omero::api::ExperimenterList containedExperimenters(::Ice::Long groupId, const ::Ice::Context& __ctx)
    {
        return containedExperimenters(groupId, &__ctx);
    }
    
private:

    ::omero::api::ExperimenterList containedExperimenters(::Ice::Long, const ::Ice::Context*);
    
public:
    bool containedExperimenters_async(const ::omero::api::AMI_IAdmin_containedExperimentersPtr&, ::Ice::Long);
    bool containedExperimenters_async(const ::omero::api::AMI_IAdmin_containedExperimentersPtr&, ::Ice::Long, const ::Ice::Context&);

    ::omero::api::ExperimenterGroupList containedGroups(::Ice::Long experimenterId)
    {
        return containedGroups(experimenterId, 0);
    }
    ::omero::api::ExperimenterGroupList containedGroups(::Ice::Long experimenterId, const ::Ice::Context& __ctx)
    {
        return containedGroups(experimenterId, &__ctx);
    }
    
private:

    ::omero::api::ExperimenterGroupList containedGroups(::Ice::Long, const ::Ice::Context*);
    
public:
    bool containedGroups_async(const ::omero::api::AMI_IAdmin_containedGroupsPtr&, ::Ice::Long);
    bool containedGroups_async(const ::omero::api::AMI_IAdmin_containedGroupsPtr&, ::Ice::Long, const ::Ice::Context&);

    ::omero::model::ExperimenterGroupPtr getDefaultGroup(::Ice::Long experimenterId)
    {
        return getDefaultGroup(experimenterId, 0);
    }
    ::omero::model::ExperimenterGroupPtr getDefaultGroup(::Ice::Long experimenterId, const ::Ice::Context& __ctx)
    {
        return getDefaultGroup(experimenterId, &__ctx);
    }
    
private:

    ::omero::model::ExperimenterGroupPtr getDefaultGroup(::Ice::Long, const ::Ice::Context*);
    
public:
    bool getDefaultGroup_async(const ::omero::api::AMI_IAdmin_getDefaultGroupPtr&, ::Ice::Long);
    bool getDefaultGroup_async(const ::omero::api::AMI_IAdmin_getDefaultGroupPtr&, ::Ice::Long, const ::Ice::Context&);

    ::std::string lookupLdapAuthExperimenter(::Ice::Long id)
    {
        return lookupLdapAuthExperimenter(id, 0);
    }
    ::std::string lookupLdapAuthExperimenter(::Ice::Long id, const ::Ice::Context& __ctx)
    {
        return lookupLdapAuthExperimenter(id, &__ctx);
    }
    
private:

    ::std::string lookupLdapAuthExperimenter(::Ice::Long, const ::Ice::Context*);
    
public:
    bool lookupLdapAuthExperimenter_async(const ::omero::api::AMI_IAdmin_lookupLdapAuthExperimenterPtr&, ::Ice::Long);
    bool lookupLdapAuthExperimenter_async(const ::omero::api::AMI_IAdmin_lookupLdapAuthExperimenterPtr&, ::Ice::Long, const ::Ice::Context&);

    ::omero::RListPtr lookupLdapAuthExperimenters()
    {
        return lookupLdapAuthExperimenters(0);
    }
    ::omero::RListPtr lookupLdapAuthExperimenters(const ::Ice::Context& __ctx)
    {
        return lookupLdapAuthExperimenters(&__ctx);
    }
    
private:

    ::omero::RListPtr lookupLdapAuthExperimenters(const ::Ice::Context*);
    
public:
    bool lookupLdapAuthExperimenters_async(const ::omero::api::AMI_IAdmin_lookupLdapAuthExperimentersPtr&);
    bool lookupLdapAuthExperimenters_async(const ::omero::api::AMI_IAdmin_lookupLdapAuthExperimentersPtr&, const ::Ice::Context&);

    ::omero::api::LongList getMemberOfGroupIds(const ::omero::model::ExperimenterPtr& exp)
    {
        return getMemberOfGroupIds(exp, 0);
    }
    ::omero::api::LongList getMemberOfGroupIds(const ::omero::model::ExperimenterPtr& exp, const ::Ice::Context& __ctx)
    {
        return getMemberOfGroupIds(exp, &__ctx);
    }
    
private:

    ::omero::api::LongList getMemberOfGroupIds(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);
    
public:
    bool getMemberOfGroupIds_async(const ::omero::api::AMI_IAdmin_getMemberOfGroupIdsPtr&, const ::omero::model::ExperimenterPtr&);
    bool getMemberOfGroupIds_async(const ::omero::api::AMI_IAdmin_getMemberOfGroupIdsPtr&, const ::omero::model::ExperimenterPtr&, const ::Ice::Context&);

    ::omero::api::LongList getLeaderOfGroupIds(const ::omero::model::ExperimenterPtr& exp)
    {
        return getLeaderOfGroupIds(exp, 0);
    }
    ::omero::api::LongList getLeaderOfGroupIds(const ::omero::model::ExperimenterPtr& exp, const ::Ice::Context& __ctx)
    {
        return getLeaderOfGroupIds(exp, &__ctx);
    }
    
private:

    ::omero::api::LongList getLeaderOfGroupIds(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);
    
public:
    bool getLeaderOfGroupIds_async(const ::omero::api::AMI_IAdmin_getLeaderOfGroupIdsPtr&, const ::omero::model::ExperimenterPtr&);
    bool getLeaderOfGroupIds_async(const ::omero::api::AMI_IAdmin_getLeaderOfGroupIdsPtr&, const ::omero::model::ExperimenterPtr&, const ::Ice::Context&);

    void updateSelf(const ::omero::model::ExperimenterPtr& experimenter)
    {
        updateSelf(experimenter, 0);
    }
    void updateSelf(const ::omero::model::ExperimenterPtr& experimenter, const ::Ice::Context& __ctx)
    {
        updateSelf(experimenter, &__ctx);
    }
    
private:

    void updateSelf(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);
    
public:
    bool updateSelf_async(const ::omero::api::AMI_IAdmin_updateSelfPtr&, const ::omero::model::ExperimenterPtr&);
    bool updateSelf_async(const ::omero::api::AMI_IAdmin_updateSelfPtr&, const ::omero::model::ExperimenterPtr&, const ::Ice::Context&);

    ::Ice::Long uploadMyUserPhoto(const ::std::string& filename, const ::std::string& format, const ::Ice::ByteSeq& data)
    {
        return uploadMyUserPhoto(filename, format, data, 0);
    }
    ::Ice::Long uploadMyUserPhoto(const ::std::string& filename, const ::std::string& format, const ::Ice::ByteSeq& data, const ::Ice::Context& __ctx)
    {
        return uploadMyUserPhoto(filename, format, data, &__ctx);
    }
    
private:

    ::Ice::Long uploadMyUserPhoto(const ::std::string&, const ::std::string&, const ::Ice::ByteSeq&, const ::Ice::Context*);
    
public:
    bool uploadMyUserPhoto_async(const ::omero::api::AMI_IAdmin_uploadMyUserPhotoPtr&, const ::std::string&, const ::std::string&, const ::Ice::ByteSeq&);
    bool uploadMyUserPhoto_async(const ::omero::api::AMI_IAdmin_uploadMyUserPhotoPtr&, const ::std::string&, const ::std::string&, const ::Ice::ByteSeq&, const ::Ice::Context&);

    ::omero::api::OriginalFileList getMyUserPhotos()
    {
        return getMyUserPhotos(0);
    }
    ::omero::api::OriginalFileList getMyUserPhotos(const ::Ice::Context& __ctx)
    {
        return getMyUserPhotos(&__ctx);
    }
    
private:

    ::omero::api::OriginalFileList getMyUserPhotos(const ::Ice::Context*);
    
public:
    bool getMyUserPhotos_async(const ::omero::api::AMI_IAdmin_getMyUserPhotosPtr&);
    bool getMyUserPhotos_async(const ::omero::api::AMI_IAdmin_getMyUserPhotosPtr&, const ::Ice::Context&);

    void updateExperimenter(const ::omero::model::ExperimenterPtr& experimenter)
    {
        updateExperimenter(experimenter, 0);
    }
    void updateExperimenter(const ::omero::model::ExperimenterPtr& experimenter, const ::Ice::Context& __ctx)
    {
        updateExperimenter(experimenter, &__ctx);
    }
    
private:

    void updateExperimenter(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);
    
public:
    bool updateExperimenter_async(const ::omero::api::AMI_IAdmin_updateExperimenterPtr&, const ::omero::model::ExperimenterPtr&);
    bool updateExperimenter_async(const ::omero::api::AMI_IAdmin_updateExperimenterPtr&, const ::omero::model::ExperimenterPtr&, const ::Ice::Context&);

    void updateExperimenterWithPassword(const ::omero::model::ExperimenterPtr& experimenter, const ::omero::RStringPtr& password)
    {
        updateExperimenterWithPassword(experimenter, password, 0);
    }
    void updateExperimenterWithPassword(const ::omero::model::ExperimenterPtr& experimenter, const ::omero::RStringPtr& password, const ::Ice::Context& __ctx)
    {
        updateExperimenterWithPassword(experimenter, password, &__ctx);
    }
    
private:

    void updateExperimenterWithPassword(const ::omero::model::ExperimenterPtr&, const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:
    bool updateExperimenterWithPassword_async(const ::omero::api::AMI_IAdmin_updateExperimenterWithPasswordPtr&, const ::omero::model::ExperimenterPtr&, const ::omero::RStringPtr&);
    bool updateExperimenterWithPassword_async(const ::omero::api::AMI_IAdmin_updateExperimenterWithPasswordPtr&, const ::omero::model::ExperimenterPtr&, const ::omero::RStringPtr&, const ::Ice::Context&);

    void updateGroup(const ::omero::model::ExperimenterGroupPtr& group)
    {
        updateGroup(group, 0);
    }
    void updateGroup(const ::omero::model::ExperimenterGroupPtr& group, const ::Ice::Context& __ctx)
    {
        updateGroup(group, &__ctx);
    }
    
private:

    void updateGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);
    
public:
    bool updateGroup_async(const ::omero::api::AMI_IAdmin_updateGroupPtr&, const ::omero::model::ExperimenterGroupPtr&);
    bool updateGroup_async(const ::omero::api::AMI_IAdmin_updateGroupPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context&);

    ::Ice::Long createUser(const ::omero::model::ExperimenterPtr& experimenter, const ::std::string& group)
    {
        return createUser(experimenter, group, 0);
    }
    ::Ice::Long createUser(const ::omero::model::ExperimenterPtr& experimenter, const ::std::string& group, const ::Ice::Context& __ctx)
    {
        return createUser(experimenter, group, &__ctx);
    }
    
private:

    ::Ice::Long createUser(const ::omero::model::ExperimenterPtr&, const ::std::string&, const ::Ice::Context*);
    
public:
    bool createUser_async(const ::omero::api::AMI_IAdmin_createUserPtr&, const ::omero::model::ExperimenterPtr&, const ::std::string&);
    bool createUser_async(const ::omero::api::AMI_IAdmin_createUserPtr&, const ::omero::model::ExperimenterPtr&, const ::std::string&, const ::Ice::Context&);

    ::Ice::Long createSystemUser(const ::omero::model::ExperimenterPtr& experimenter)
    {
        return createSystemUser(experimenter, 0);
    }
    ::Ice::Long createSystemUser(const ::omero::model::ExperimenterPtr& experimenter, const ::Ice::Context& __ctx)
    {
        return createSystemUser(experimenter, &__ctx);
    }
    
private:

    ::Ice::Long createSystemUser(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);
    
public:
    bool createSystemUser_async(const ::omero::api::AMI_IAdmin_createSystemUserPtr&, const ::omero::model::ExperimenterPtr&);
    bool createSystemUser_async(const ::omero::api::AMI_IAdmin_createSystemUserPtr&, const ::omero::model::ExperimenterPtr&, const ::Ice::Context&);

    ::Ice::Long createExperimenter(const ::omero::model::ExperimenterPtr& user, const ::omero::model::ExperimenterGroupPtr& defaultGroup, const ::omero::api::ExperimenterGroupList& groups)
    {
        return createExperimenter(user, defaultGroup, groups, 0);
    }
    ::Ice::Long createExperimenter(const ::omero::model::ExperimenterPtr& user, const ::omero::model::ExperimenterGroupPtr& defaultGroup, const ::omero::api::ExperimenterGroupList& groups, const ::Ice::Context& __ctx)
    {
        return createExperimenter(user, defaultGroup, groups, &__ctx);
    }
    
private:

    ::Ice::Long createExperimenter(const ::omero::model::ExperimenterPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterGroupList&, const ::Ice::Context*);
    
public:
    bool createExperimenter_async(const ::omero::api::AMI_IAdmin_createExperimenterPtr&, const ::omero::model::ExperimenterPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterGroupList&);
    bool createExperimenter_async(const ::omero::api::AMI_IAdmin_createExperimenterPtr&, const ::omero::model::ExperimenterPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterGroupList&, const ::Ice::Context&);

    ::Ice::Long createExperimenterWithPassword(const ::omero::model::ExperimenterPtr& user, const ::omero::RStringPtr& password, const ::omero::model::ExperimenterGroupPtr& defaultGroup, const ::omero::api::ExperimenterGroupList& groups)
    {
        return createExperimenterWithPassword(user, password, defaultGroup, groups, 0);
    }
    ::Ice::Long createExperimenterWithPassword(const ::omero::model::ExperimenterPtr& user, const ::omero::RStringPtr& password, const ::omero::model::ExperimenterGroupPtr& defaultGroup, const ::omero::api::ExperimenterGroupList& groups, const ::Ice::Context& __ctx)
    {
        return createExperimenterWithPassword(user, password, defaultGroup, groups, &__ctx);
    }
    
private:

    ::Ice::Long createExperimenterWithPassword(const ::omero::model::ExperimenterPtr&, const ::omero::RStringPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterGroupList&, const ::Ice::Context*);
    
public:
    bool createExperimenterWithPassword_async(const ::omero::api::AMI_IAdmin_createExperimenterWithPasswordPtr&, const ::omero::model::ExperimenterPtr&, const ::omero::RStringPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterGroupList&);
    bool createExperimenterWithPassword_async(const ::omero::api::AMI_IAdmin_createExperimenterWithPasswordPtr&, const ::omero::model::ExperimenterPtr&, const ::omero::RStringPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterGroupList&, const ::Ice::Context&);

    ::Ice::Long createGroup(const ::omero::model::ExperimenterGroupPtr& group)
    {
        return createGroup(group, 0);
    }
    ::Ice::Long createGroup(const ::omero::model::ExperimenterGroupPtr& group, const ::Ice::Context& __ctx)
    {
        return createGroup(group, &__ctx);
    }
    
private:

    ::Ice::Long createGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);
    
public:
    bool createGroup_async(const ::omero::api::AMI_IAdmin_createGroupPtr&, const ::omero::model::ExperimenterGroupPtr&);
    bool createGroup_async(const ::omero::api::AMI_IAdmin_createGroupPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context&);

    void addGroups(const ::omero::model::ExperimenterPtr& user, const ::omero::api::ExperimenterGroupList& groups)
    {
        addGroups(user, groups, 0);
    }
    void addGroups(const ::omero::model::ExperimenterPtr& user, const ::omero::api::ExperimenterGroupList& groups, const ::Ice::Context& __ctx)
    {
        addGroups(user, groups, &__ctx);
    }
    
private:

    void addGroups(const ::omero::model::ExperimenterPtr&, const ::omero::api::ExperimenterGroupList&, const ::Ice::Context*);
    
public:
    bool addGroups_async(const ::omero::api::AMI_IAdmin_addGroupsPtr&, const ::omero::model::ExperimenterPtr&, const ::omero::api::ExperimenterGroupList&);
    bool addGroups_async(const ::omero::api::AMI_IAdmin_addGroupsPtr&, const ::omero::model::ExperimenterPtr&, const ::omero::api::ExperimenterGroupList&, const ::Ice::Context&);

    void removeGroups(const ::omero::model::ExperimenterPtr& user, const ::omero::api::ExperimenterGroupList& groups)
    {
        removeGroups(user, groups, 0);
    }
    void removeGroups(const ::omero::model::ExperimenterPtr& user, const ::omero::api::ExperimenterGroupList& groups, const ::Ice::Context& __ctx)
    {
        removeGroups(user, groups, &__ctx);
    }
    
private:

    void removeGroups(const ::omero::model::ExperimenterPtr&, const ::omero::api::ExperimenterGroupList&, const ::Ice::Context*);
    
public:
    bool removeGroups_async(const ::omero::api::AMI_IAdmin_removeGroupsPtr&, const ::omero::model::ExperimenterPtr&, const ::omero::api::ExperimenterGroupList&);
    bool removeGroups_async(const ::omero::api::AMI_IAdmin_removeGroupsPtr&, const ::omero::model::ExperimenterPtr&, const ::omero::api::ExperimenterGroupList&, const ::Ice::Context&);

    void setDefaultGroup(const ::omero::model::ExperimenterPtr& user, const ::omero::model::ExperimenterGroupPtr& group)
    {
        setDefaultGroup(user, group, 0);
    }
    void setDefaultGroup(const ::omero::model::ExperimenterPtr& user, const ::omero::model::ExperimenterGroupPtr& group, const ::Ice::Context& __ctx)
    {
        setDefaultGroup(user, group, &__ctx);
    }
    
private:

    void setDefaultGroup(const ::omero::model::ExperimenterPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);
    
public:
    bool setDefaultGroup_async(const ::omero::api::AMI_IAdmin_setDefaultGroupPtr&, const ::omero::model::ExperimenterPtr&, const ::omero::model::ExperimenterGroupPtr&);
    bool setDefaultGroup_async(const ::omero::api::AMI_IAdmin_setDefaultGroupPtr&, const ::omero::model::ExperimenterPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context&);

    void setGroupOwner(const ::omero::model::ExperimenterGroupPtr& group, const ::omero::model::ExperimenterPtr& owner)
    {
        setGroupOwner(group, owner, 0);
    }
    void setGroupOwner(const ::omero::model::ExperimenterGroupPtr& group, const ::omero::model::ExperimenterPtr& owner, const ::Ice::Context& __ctx)
    {
        setGroupOwner(group, owner, &__ctx);
    }
    
private:

    void setGroupOwner(const ::omero::model::ExperimenterGroupPtr&, const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);
    
public:
    bool setGroupOwner_async(const ::omero::api::AMI_IAdmin_setGroupOwnerPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::model::ExperimenterPtr&);
    bool setGroupOwner_async(const ::omero::api::AMI_IAdmin_setGroupOwnerPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::model::ExperimenterPtr&, const ::Ice::Context&);

    void unsetGroupOwner(const ::omero::model::ExperimenterGroupPtr& group, const ::omero::model::ExperimenterPtr& owner)
    {
        unsetGroupOwner(group, owner, 0);
    }
    void unsetGroupOwner(const ::omero::model::ExperimenterGroupPtr& group, const ::omero::model::ExperimenterPtr& owner, const ::Ice::Context& __ctx)
    {
        unsetGroupOwner(group, owner, &__ctx);
    }
    
private:

    void unsetGroupOwner(const ::omero::model::ExperimenterGroupPtr&, const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);
    
public:
    bool unsetGroupOwner_async(const ::omero::api::AMI_IAdmin_unsetGroupOwnerPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::model::ExperimenterPtr&);
    bool unsetGroupOwner_async(const ::omero::api::AMI_IAdmin_unsetGroupOwnerPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::model::ExperimenterPtr&, const ::Ice::Context&);

    void addGroupOwners(const ::omero::model::ExperimenterGroupPtr& group, const ::omero::api::ExperimenterList& owners)
    {
        addGroupOwners(group, owners, 0);
    }
    void addGroupOwners(const ::omero::model::ExperimenterGroupPtr& group, const ::omero::api::ExperimenterList& owners, const ::Ice::Context& __ctx)
    {
        addGroupOwners(group, owners, &__ctx);
    }
    
private:

    void addGroupOwners(const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterList&, const ::Ice::Context*);
    
public:
    bool addGroupOwners_async(const ::omero::api::AMI_IAdmin_addGroupOwnersPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterList&);
    bool addGroupOwners_async(const ::omero::api::AMI_IAdmin_addGroupOwnersPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterList&, const ::Ice::Context&);

    void removeGroupOwners(const ::omero::model::ExperimenterGroupPtr& group, const ::omero::api::ExperimenterList& owners)
    {
        removeGroupOwners(group, owners, 0);
    }
    void removeGroupOwners(const ::omero::model::ExperimenterGroupPtr& group, const ::omero::api::ExperimenterList& owners, const ::Ice::Context& __ctx)
    {
        removeGroupOwners(group, owners, &__ctx);
    }
    
private:

    void removeGroupOwners(const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterList&, const ::Ice::Context*);
    
public:
    bool removeGroupOwners_async(const ::omero::api::AMI_IAdmin_removeGroupOwnersPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterList&);
    bool removeGroupOwners_async(const ::omero::api::AMI_IAdmin_removeGroupOwnersPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterList&, const ::Ice::Context&);

    void deleteExperimenter(const ::omero::model::ExperimenterPtr& user)
    {
        deleteExperimenter(user, 0);
    }
    void deleteExperimenter(const ::omero::model::ExperimenterPtr& user, const ::Ice::Context& __ctx)
    {
        deleteExperimenter(user, &__ctx);
    }
    
private:

    void deleteExperimenter(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);
    
public:
    bool deleteExperimenter_async(const ::omero::api::AMI_IAdmin_deleteExperimenterPtr&, const ::omero::model::ExperimenterPtr&);
    bool deleteExperimenter_async(const ::omero::api::AMI_IAdmin_deleteExperimenterPtr&, const ::omero::model::ExperimenterPtr&, const ::Ice::Context&);

    void deleteGroup(const ::omero::model::ExperimenterGroupPtr& group)
    {
        deleteGroup(group, 0);
    }
    void deleteGroup(const ::omero::model::ExperimenterGroupPtr& group, const ::Ice::Context& __ctx)
    {
        deleteGroup(group, &__ctx);
    }
    
private:

    void deleteGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);
    
public:
    bool deleteGroup_async(const ::omero::api::AMI_IAdmin_deleteGroupPtr&, const ::omero::model::ExperimenterGroupPtr&);
    bool deleteGroup_async(const ::omero::api::AMI_IAdmin_deleteGroupPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context&);

    ICE_DEPRECATED_API void changeOwner(const ::omero::model::IObjectPtr& obj, const ::std::string& omeName)
    {
        changeOwner(obj, omeName, 0);
    }
    ICE_DEPRECATED_API void changeOwner(const ::omero::model::IObjectPtr& obj, const ::std::string& omeName, const ::Ice::Context& __ctx)
    {
        changeOwner(obj, omeName, &__ctx);
    }
    
private:

    void changeOwner(const ::omero::model::IObjectPtr&, const ::std::string&, const ::Ice::Context*);
    
public:
    bool changeOwner_async(const ::omero::api::AMI_IAdmin_changeOwnerPtr&, const ::omero::model::IObjectPtr&, const ::std::string&);
    bool changeOwner_async(const ::omero::api::AMI_IAdmin_changeOwnerPtr&, const ::omero::model::IObjectPtr&, const ::std::string&, const ::Ice::Context&);

    ICE_DEPRECATED_API void changeGroup(const ::omero::model::IObjectPtr& obj, const ::std::string& omeName)
    {
        changeGroup(obj, omeName, 0);
    }
    ICE_DEPRECATED_API void changeGroup(const ::omero::model::IObjectPtr& obj, const ::std::string& omeName, const ::Ice::Context& __ctx)
    {
        changeGroup(obj, omeName, &__ctx);
    }
    
private:

    void changeGroup(const ::omero::model::IObjectPtr&, const ::std::string&, const ::Ice::Context*);
    
public:
    bool changeGroup_async(const ::omero::api::AMI_IAdmin_changeGroupPtr&, const ::omero::model::IObjectPtr&, const ::std::string&);
    bool changeGroup_async(const ::omero::api::AMI_IAdmin_changeGroupPtr&, const ::omero::model::IObjectPtr&, const ::std::string&, const ::Ice::Context&);

    ICE_DEPRECATED_API void changePermissions(const ::omero::model::IObjectPtr& obj, const ::omero::model::PermissionsPtr& perms)
    {
        changePermissions(obj, perms, 0);
    }
    ICE_DEPRECATED_API void changePermissions(const ::omero::model::IObjectPtr& obj, const ::omero::model::PermissionsPtr& perms, const ::Ice::Context& __ctx)
    {
        changePermissions(obj, perms, &__ctx);
    }
    
private:

    void changePermissions(const ::omero::model::IObjectPtr&, const ::omero::model::PermissionsPtr&, const ::Ice::Context*);
    
public:
    bool changePermissions_async(const ::omero::api::AMI_IAdmin_changePermissionsPtr&, const ::omero::model::IObjectPtr&, const ::omero::model::PermissionsPtr&);
    bool changePermissions_async(const ::omero::api::AMI_IAdmin_changePermissionsPtr&, const ::omero::model::IObjectPtr&, const ::omero::model::PermissionsPtr&, const ::Ice::Context&);

    void moveToCommonSpace(const ::omero::api::IObjectList& objects)
    {
        moveToCommonSpace(objects, 0);
    }
    void moveToCommonSpace(const ::omero::api::IObjectList& objects, const ::Ice::Context& __ctx)
    {
        moveToCommonSpace(objects, &__ctx);
    }
    
private:

    void moveToCommonSpace(const ::omero::api::IObjectList&, const ::Ice::Context*);
    
public:
    bool moveToCommonSpace_async(const ::omero::api::AMI_IAdmin_moveToCommonSpacePtr&, const ::omero::api::IObjectList&);
    bool moveToCommonSpace_async(const ::omero::api::AMI_IAdmin_moveToCommonSpacePtr&, const ::omero::api::IObjectList&, const ::Ice::Context&);

    void changePassword(const ::omero::RStringPtr& newPassword)
    {
        changePassword(newPassword, 0);
    }
    void changePassword(const ::omero::RStringPtr& newPassword, const ::Ice::Context& __ctx)
    {
        changePassword(newPassword, &__ctx);
    }
    
private:

    void changePassword(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:
    bool changePassword_async(const ::omero::api::AMI_IAdmin_changePasswordPtr&, const ::omero::RStringPtr&);
    bool changePassword_async(const ::omero::api::AMI_IAdmin_changePasswordPtr&, const ::omero::RStringPtr&, const ::Ice::Context&);

    void changePasswordWithOldPassword(const ::omero::RStringPtr& oldPassword, const ::omero::RStringPtr& newPassword)
    {
        changePasswordWithOldPassword(oldPassword, newPassword, 0);
    }
    void changePasswordWithOldPassword(const ::omero::RStringPtr& oldPassword, const ::omero::RStringPtr& newPassword, const ::Ice::Context& __ctx)
    {
        changePasswordWithOldPassword(oldPassword, newPassword, &__ctx);
    }
    
private:

    void changePasswordWithOldPassword(const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:
    bool changePasswordWithOldPassword_async(const ::omero::api::AMI_IAdmin_changePasswordWithOldPasswordPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&);
    bool changePasswordWithOldPassword_async(const ::omero::api::AMI_IAdmin_changePasswordWithOldPasswordPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::Ice::Context&);

    void changeUserPassword(const ::std::string& omeName, const ::omero::RStringPtr& newPassword)
    {
        changeUserPassword(omeName, newPassword, 0);
    }
    void changeUserPassword(const ::std::string& omeName, const ::omero::RStringPtr& newPassword, const ::Ice::Context& __ctx)
    {
        changeUserPassword(omeName, newPassword, &__ctx);
    }
    
private:

    void changeUserPassword(const ::std::string&, const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:
    bool changeUserPassword_async(const ::omero::api::AMI_IAdmin_changeUserPasswordPtr&, const ::std::string&, const ::omero::RStringPtr&);
    bool changeUserPassword_async(const ::omero::api::AMI_IAdmin_changeUserPasswordPtr&, const ::std::string&, const ::omero::RStringPtr&, const ::Ice::Context&);

    void synchronizeLoginCache()
    {
        synchronizeLoginCache(0);
    }
    void synchronizeLoginCache(const ::Ice::Context& __ctx)
    {
        synchronizeLoginCache(&__ctx);
    }
    
private:

    void synchronizeLoginCache(const ::Ice::Context*);
    
public:
    bool synchronizeLoginCache_async(const ::omero::api::AMI_IAdmin_synchronizeLoginCachePtr&);
    bool synchronizeLoginCache_async(const ::omero::api::AMI_IAdmin_synchronizeLoginCachePtr&, const ::Ice::Context&);

    void changeExpiredCredentials(const ::std::string& name, const ::std::string& oldCred, const ::std::string& newCred)
    {
        changeExpiredCredentials(name, oldCred, newCred, 0);
    }
    void changeExpiredCredentials(const ::std::string& name, const ::std::string& oldCred, const ::std::string& newCred, const ::Ice::Context& __ctx)
    {
        changeExpiredCredentials(name, oldCred, newCred, &__ctx);
    }
    
private:

    void changeExpiredCredentials(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:
    bool changeExpiredCredentials_async(const ::omero::api::AMI_IAdmin_changeExpiredCredentialsPtr&, const ::std::string&, const ::std::string&, const ::std::string&);
    bool changeExpiredCredentials_async(const ::omero::api::AMI_IAdmin_changeExpiredCredentialsPtr&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context&);

    void reportForgottenPassword(const ::std::string& name, const ::std::string& email)
    {
        reportForgottenPassword(name, email, 0);
    }
    void reportForgottenPassword(const ::std::string& name, const ::std::string& email, const ::Ice::Context& __ctx)
    {
        reportForgottenPassword(name, email, &__ctx);
    }
    
private:

    void reportForgottenPassword(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:
    bool reportForgottenPassword_async(const ::omero::api::AMI_IAdmin_reportForgottenPasswordPtr&, const ::std::string&, const ::std::string&);
    bool reportForgottenPassword_async(const ::omero::api::AMI_IAdmin_reportForgottenPasswordPtr&, const ::std::string&, const ::std::string&, const ::Ice::Context&);

    ::omero::sys::RolesPtr getSecurityRoles()
    {
        return getSecurityRoles(0);
    }
    ::omero::sys::RolesPtr getSecurityRoles(const ::Ice::Context& __ctx)
    {
        return getSecurityRoles(&__ctx);
    }
    
private:

    ::omero::sys::RolesPtr getSecurityRoles(const ::Ice::Context*);
    
public:
    bool getSecurityRoles_async(const ::omero::api::AMI_IAdmin_getSecurityRolesPtr&);
    bool getSecurityRoles_async(const ::omero::api::AMI_IAdmin_getSecurityRolesPtr&, const ::Ice::Context&);

    ::omero::sys::EventContextPtr getEventContext()
    {
        return getEventContext(0);
    }
    ::omero::sys::EventContextPtr getEventContext(const ::Ice::Context& __ctx)
    {
        return getEventContext(&__ctx);
    }
    
private:

    ::omero::sys::EventContextPtr getEventContext(const ::Ice::Context*);
    
public:
    bool getEventContext_async(const ::omero::api::AMI_IAdmin_getEventContextPtr&);
    bool getEventContext_async(const ::omero::api::AMI_IAdmin_getEventContextPtr&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<IAdmin> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IAdmin*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<IAdmin*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IAdmin> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IAdmin*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<IAdmin*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IAdmin> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IAdmin*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<IAdmin*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IAdmin> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IAdmin*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<IAdmin*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IAdmin> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IAdmin*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<IAdmin*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IAdmin> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IAdmin*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<IAdmin*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IAdmin> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IAdmin*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<IAdmin*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IAdmin> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IAdmin*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<IAdmin*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IAdmin> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IAdmin*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<IAdmin*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IAdmin> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IAdmin*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<IAdmin*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IAdmin> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IAdmin*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<IAdmin*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IAdmin> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IAdmin*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<IAdmin*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IAdmin> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IAdmin*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<IAdmin*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IAdmin> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IAdmin*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<IAdmin*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IAdmin> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IAdmin*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<IAdmin*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IAdmin> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IAdmin*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<IAdmin*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IAdmin> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IAdmin*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<IAdmin*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IAdmin> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IAdmin*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<IAdmin*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IAdmin> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IAdmin*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<IAdmin*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class IAdmin : virtual public ::IceDelegate::omero::api::ServiceInterface
{
public:

    virtual bool canUpdate(const ::omero::model::IObjectPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::ExperimenterPtr getExperimenter(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::model::ExperimenterPtr lookupExperimenter(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::api::ExperimenterList lookupExperimenters(const ::Ice::Context*) = 0;

    virtual ::omero::model::ExperimenterGroupPtr getGroup(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::model::ExperimenterGroupPtr lookupGroup(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::api::ExperimenterGroupList lookupGroups(const ::Ice::Context*) = 0;

    virtual ::omero::api::ExperimenterList containedExperimenters(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::api::ExperimenterGroupList containedGroups(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::model::ExperimenterGroupPtr getDefaultGroup(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::std::string lookupLdapAuthExperimenter(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::RListPtr lookupLdapAuthExperimenters(const ::Ice::Context*) = 0;

    virtual ::omero::api::LongList getMemberOfGroupIds(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::LongList getLeaderOfGroupIds(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*) = 0;

    virtual void updateSelf(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*) = 0;

    virtual ::Ice::Long uploadMyUserPhoto(const ::std::string&, const ::std::string&, const ::Ice::ByteSeq&, const ::Ice::Context*) = 0;

    virtual ::omero::api::OriginalFileList getMyUserPhotos(const ::Ice::Context*) = 0;

    virtual void updateExperimenter(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*) = 0;

    virtual void updateExperimenterWithPassword(const ::omero::model::ExperimenterPtr&, const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual void updateGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*) = 0;

    virtual ::Ice::Long createUser(const ::omero::model::ExperimenterPtr&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Long createSystemUser(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*) = 0;

    virtual ::Ice::Long createExperimenter(const ::omero::model::ExperimenterPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterGroupList&, const ::Ice::Context*) = 0;

    virtual ::Ice::Long createExperimenterWithPassword(const ::omero::model::ExperimenterPtr&, const ::omero::RStringPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterGroupList&, const ::Ice::Context*) = 0;

    virtual ::Ice::Long createGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*) = 0;

    virtual void addGroups(const ::omero::model::ExperimenterPtr&, const ::omero::api::ExperimenterGroupList&, const ::Ice::Context*) = 0;

    virtual void removeGroups(const ::omero::model::ExperimenterPtr&, const ::omero::api::ExperimenterGroupList&, const ::Ice::Context*) = 0;

    virtual void setDefaultGroup(const ::omero::model::ExperimenterPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*) = 0;

    virtual void setGroupOwner(const ::omero::model::ExperimenterGroupPtr&, const ::omero::model::ExperimenterPtr&, const ::Ice::Context*) = 0;

    virtual void unsetGroupOwner(const ::omero::model::ExperimenterGroupPtr&, const ::omero::model::ExperimenterPtr&, const ::Ice::Context*) = 0;

    virtual void addGroupOwners(const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterList&, const ::Ice::Context*) = 0;

    virtual void removeGroupOwners(const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterList&, const ::Ice::Context*) = 0;

    virtual void deleteExperimenter(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*) = 0;

    virtual void deleteGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*) = 0;

    virtual void changeOwner(const ::omero::model::IObjectPtr&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual void changeGroup(const ::omero::model::IObjectPtr&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual void changePermissions(const ::omero::model::IObjectPtr&, const ::omero::model::PermissionsPtr&, const ::Ice::Context*) = 0;

    virtual void moveToCommonSpace(const ::omero::api::IObjectList&, const ::Ice::Context*) = 0;

    virtual void changePassword(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual void changePasswordWithOldPassword(const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual void changeUserPassword(const ::std::string&, const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual void synchronizeLoginCache(const ::Ice::Context*) = 0;

    virtual void changeExpiredCredentials(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual void reportForgottenPassword(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::RolesPtr getSecurityRoles(const ::Ice::Context*) = 0;

    virtual ::omero::sys::EventContextPtr getEventContext(const ::Ice::Context*) = 0;
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

class IAdmin : virtual public ::IceDelegate::omero::api::IAdmin,
               virtual public ::IceDelegateM::omero::api::ServiceInterface
{
public:

    virtual bool canUpdate(const ::omero::model::IObjectPtr&, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterPtr getExperimenter(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterPtr lookupExperimenter(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::ExperimenterList lookupExperimenters(const ::Ice::Context*);

    virtual ::omero::model::ExperimenterGroupPtr getGroup(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterGroupPtr lookupGroup(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::ExperimenterGroupList lookupGroups(const ::Ice::Context*);

    virtual ::omero::api::ExperimenterList containedExperimenters(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::ExperimenterGroupList containedGroups(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterGroupPtr getDefaultGroup(::Ice::Long, const ::Ice::Context*);

    virtual ::std::string lookupLdapAuthExperimenter(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::RListPtr lookupLdapAuthExperimenters(const ::Ice::Context*);

    virtual ::omero::api::LongList getMemberOfGroupIds(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual ::omero::api::LongList getLeaderOfGroupIds(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual void updateSelf(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual ::Ice::Long uploadMyUserPhoto(const ::std::string&, const ::std::string&, const ::Ice::ByteSeq&, const ::Ice::Context*);

    virtual ::omero::api::OriginalFileList getMyUserPhotos(const ::Ice::Context*);

    virtual void updateExperimenter(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual void updateExperimenterWithPassword(const ::omero::model::ExperimenterPtr&, const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual void updateGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);

    virtual ::Ice::Long createUser(const ::omero::model::ExperimenterPtr&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Long createSystemUser(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual ::Ice::Long createExperimenter(const ::omero::model::ExperimenterPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterGroupList&, const ::Ice::Context*);

    virtual ::Ice::Long createExperimenterWithPassword(const ::omero::model::ExperimenterPtr&, const ::omero::RStringPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterGroupList&, const ::Ice::Context*);

    virtual ::Ice::Long createGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);

    virtual void addGroups(const ::omero::model::ExperimenterPtr&, const ::omero::api::ExperimenterGroupList&, const ::Ice::Context*);

    virtual void removeGroups(const ::omero::model::ExperimenterPtr&, const ::omero::api::ExperimenterGroupList&, const ::Ice::Context*);

    virtual void setDefaultGroup(const ::omero::model::ExperimenterPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);

    virtual void setGroupOwner(const ::omero::model::ExperimenterGroupPtr&, const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual void unsetGroupOwner(const ::omero::model::ExperimenterGroupPtr&, const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual void addGroupOwners(const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterList&, const ::Ice::Context*);

    virtual void removeGroupOwners(const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterList&, const ::Ice::Context*);

    virtual void deleteExperimenter(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual void deleteGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);

    virtual void changeOwner(const ::omero::model::IObjectPtr&, const ::std::string&, const ::Ice::Context*);

    virtual void changeGroup(const ::omero::model::IObjectPtr&, const ::std::string&, const ::Ice::Context*);

    virtual void changePermissions(const ::omero::model::IObjectPtr&, const ::omero::model::PermissionsPtr&, const ::Ice::Context*);

    virtual void moveToCommonSpace(const ::omero::api::IObjectList&, const ::Ice::Context*);

    virtual void changePassword(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual void changePasswordWithOldPassword(const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual void changeUserPassword(const ::std::string&, const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual void synchronizeLoginCache(const ::Ice::Context*);

    virtual void changeExpiredCredentials(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual void reportForgottenPassword(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::sys::RolesPtr getSecurityRoles(const ::Ice::Context*);

    virtual ::omero::sys::EventContextPtr getEventContext(const ::Ice::Context*);
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

class IAdmin : virtual public ::IceDelegate::omero::api::IAdmin,
               virtual public ::IceDelegateD::omero::api::ServiceInterface
{
public:

    virtual bool canUpdate(const ::omero::model::IObjectPtr&, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterPtr getExperimenter(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterPtr lookupExperimenter(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::ExperimenterList lookupExperimenters(const ::Ice::Context*);

    virtual ::omero::model::ExperimenterGroupPtr getGroup(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterGroupPtr lookupGroup(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::api::ExperimenterGroupList lookupGroups(const ::Ice::Context*);

    virtual ::omero::api::ExperimenterList containedExperimenters(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::api::ExperimenterGroupList containedGroups(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::model::ExperimenterGroupPtr getDefaultGroup(::Ice::Long, const ::Ice::Context*);

    virtual ::std::string lookupLdapAuthExperimenter(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::RListPtr lookupLdapAuthExperimenters(const ::Ice::Context*);

    virtual ::omero::api::LongList getMemberOfGroupIds(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual ::omero::api::LongList getLeaderOfGroupIds(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual void updateSelf(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual ::Ice::Long uploadMyUserPhoto(const ::std::string&, const ::std::string&, const ::Ice::ByteSeq&, const ::Ice::Context*);

    virtual ::omero::api::OriginalFileList getMyUserPhotos(const ::Ice::Context*);

    virtual void updateExperimenter(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual void updateExperimenterWithPassword(const ::omero::model::ExperimenterPtr&, const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual void updateGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);

    virtual ::Ice::Long createUser(const ::omero::model::ExperimenterPtr&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Long createSystemUser(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual ::Ice::Long createExperimenter(const ::omero::model::ExperimenterPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterGroupList&, const ::Ice::Context*);

    virtual ::Ice::Long createExperimenterWithPassword(const ::omero::model::ExperimenterPtr&, const ::omero::RStringPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterGroupList&, const ::Ice::Context*);

    virtual ::Ice::Long createGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);

    virtual void addGroups(const ::omero::model::ExperimenterPtr&, const ::omero::api::ExperimenterGroupList&, const ::Ice::Context*);

    virtual void removeGroups(const ::omero::model::ExperimenterPtr&, const ::omero::api::ExperimenterGroupList&, const ::Ice::Context*);

    virtual void setDefaultGroup(const ::omero::model::ExperimenterPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);

    virtual void setGroupOwner(const ::omero::model::ExperimenterGroupPtr&, const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual void unsetGroupOwner(const ::omero::model::ExperimenterGroupPtr&, const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual void addGroupOwners(const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterList&, const ::Ice::Context*);

    virtual void removeGroupOwners(const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterList&, const ::Ice::Context*);

    virtual void deleteExperimenter(const ::omero::model::ExperimenterPtr&, const ::Ice::Context*);

    virtual void deleteGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);

    virtual void changeOwner(const ::omero::model::IObjectPtr&, const ::std::string&, const ::Ice::Context*);

    virtual void changeGroup(const ::omero::model::IObjectPtr&, const ::std::string&, const ::Ice::Context*);

    virtual void changePermissions(const ::omero::model::IObjectPtr&, const ::omero::model::PermissionsPtr&, const ::Ice::Context*);

    virtual void moveToCommonSpace(const ::omero::api::IObjectList&, const ::Ice::Context*);

    virtual void changePassword(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual void changePasswordWithOldPassword(const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual void changeUserPassword(const ::std::string&, const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual void synchronizeLoginCache(const ::Ice::Context*);

    virtual void changeExpiredCredentials(const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual void reportForgottenPassword(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::sys::RolesPtr getSecurityRoles(const ::Ice::Context*);

    virtual ::omero::sys::EventContextPtr getEventContext(const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace api
{

class IAdmin : virtual public ::omero::api::ServiceInterface
{
public:

    typedef IAdminPrx ProxyType;
    typedef IAdminPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void canUpdate_async(const ::omero::api::AMD_IAdmin_canUpdatePtr&, const ::omero::model::IObjectPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___canUpdate(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getExperimenter_async(const ::omero::api::AMD_IAdmin_getExperimenterPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getExperimenter(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void lookupExperimenter_async(const ::omero::api::AMD_IAdmin_lookupExperimenterPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___lookupExperimenter(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void lookupExperimenters_async(const ::omero::api::AMD_IAdmin_lookupExperimentersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___lookupExperimenters(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getGroup_async(const ::omero::api::AMD_IAdmin_getGroupPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void lookupGroup_async(const ::omero::api::AMD_IAdmin_lookupGroupPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___lookupGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void lookupGroups_async(const ::omero::api::AMD_IAdmin_lookupGroupsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___lookupGroups(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void containedExperimenters_async(const ::omero::api::AMD_IAdmin_containedExperimentersPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___containedExperimenters(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void containedGroups_async(const ::omero::api::AMD_IAdmin_containedGroupsPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___containedGroups(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getDefaultGroup_async(const ::omero::api::AMD_IAdmin_getDefaultGroupPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getDefaultGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void lookupLdapAuthExperimenter_async(const ::omero::api::AMD_IAdmin_lookupLdapAuthExperimenterPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___lookupLdapAuthExperimenter(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void lookupLdapAuthExperimenters_async(const ::omero::api::AMD_IAdmin_lookupLdapAuthExperimentersPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___lookupLdapAuthExperimenters(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getMemberOfGroupIds_async(const ::omero::api::AMD_IAdmin_getMemberOfGroupIdsPtr&, const ::omero::model::ExperimenterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMemberOfGroupIds(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getLeaderOfGroupIds_async(const ::omero::api::AMD_IAdmin_getLeaderOfGroupIdsPtr&, const ::omero::model::ExperimenterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getLeaderOfGroupIds(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void updateSelf_async(const ::omero::api::AMD_IAdmin_updateSelfPtr&, const ::omero::model::ExperimenterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___updateSelf(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void uploadMyUserPhoto_async(const ::omero::api::AMD_IAdmin_uploadMyUserPhotoPtr&, const ::std::string&, const ::std::string&, const ::Ice::ByteSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___uploadMyUserPhoto(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getMyUserPhotos_async(const ::omero::api::AMD_IAdmin_getMyUserPhotosPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMyUserPhotos(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void updateExperimenter_async(const ::omero::api::AMD_IAdmin_updateExperimenterPtr&, const ::omero::model::ExperimenterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___updateExperimenter(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void updateExperimenterWithPassword_async(const ::omero::api::AMD_IAdmin_updateExperimenterWithPasswordPtr&, const ::omero::model::ExperimenterPtr&, const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___updateExperimenterWithPassword(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void updateGroup_async(const ::omero::api::AMD_IAdmin_updateGroupPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___updateGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void createUser_async(const ::omero::api::AMD_IAdmin_createUserPtr&, const ::omero::model::ExperimenterPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void createSystemUser_async(const ::omero::api::AMD_IAdmin_createSystemUserPtr&, const ::omero::model::ExperimenterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createSystemUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void createExperimenter_async(const ::omero::api::AMD_IAdmin_createExperimenterPtr&, const ::omero::model::ExperimenterPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterGroupList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createExperimenter(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void createExperimenterWithPassword_async(const ::omero::api::AMD_IAdmin_createExperimenterWithPasswordPtr&, const ::omero::model::ExperimenterPtr&, const ::omero::RStringPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterGroupList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createExperimenterWithPassword(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void createGroup_async(const ::omero::api::AMD_IAdmin_createGroupPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addGroups_async(const ::omero::api::AMD_IAdmin_addGroupsPtr&, const ::omero::model::ExperimenterPtr&, const ::omero::api::ExperimenterGroupList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addGroups(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeGroups_async(const ::omero::api::AMD_IAdmin_removeGroupsPtr&, const ::omero::model::ExperimenterPtr&, const ::omero::api::ExperimenterGroupList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeGroups(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setDefaultGroup_async(const ::omero::api::AMD_IAdmin_setDefaultGroupPtr&, const ::omero::model::ExperimenterPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setDefaultGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setGroupOwner_async(const ::omero::api::AMD_IAdmin_setGroupOwnerPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::model::ExperimenterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setGroupOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unsetGroupOwner_async(const ::omero::api::AMD_IAdmin_unsetGroupOwnerPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::model::ExperimenterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unsetGroupOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addGroupOwners_async(const ::omero::api::AMD_IAdmin_addGroupOwnersPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addGroupOwners(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeGroupOwners_async(const ::omero::api::AMD_IAdmin_removeGroupOwnersPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::api::ExperimenterList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeGroupOwners(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void deleteExperimenter_async(const ::omero::api::AMD_IAdmin_deleteExperimenterPtr&, const ::omero::model::ExperimenterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___deleteExperimenter(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void deleteGroup_async(const ::omero::api::AMD_IAdmin_deleteGroupPtr&, const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___deleteGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual void changeOwner_async(const ::omero::api::AMD_IAdmin_changeOwnerPtr&, const ::omero::model::IObjectPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___changeOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual void changeGroup_async(const ::omero::api::AMD_IAdmin_changeGroupPtr&, const ::omero::model::IObjectPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___changeGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    ICE_DEPRECATED_API virtual void changePermissions_async(const ::omero::api::AMD_IAdmin_changePermissionsPtr&, const ::omero::model::IObjectPtr&, const ::omero::model::PermissionsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___changePermissions(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void moveToCommonSpace_async(const ::omero::api::AMD_IAdmin_moveToCommonSpacePtr&, const ::omero::api::IObjectList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___moveToCommonSpace(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void changePassword_async(const ::omero::api::AMD_IAdmin_changePasswordPtr&, const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___changePassword(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void changePasswordWithOldPassword_async(const ::omero::api::AMD_IAdmin_changePasswordWithOldPasswordPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___changePasswordWithOldPassword(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void changeUserPassword_async(const ::omero::api::AMD_IAdmin_changeUserPasswordPtr&, const ::std::string&, const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___changeUserPassword(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void synchronizeLoginCache_async(const ::omero::api::AMD_IAdmin_synchronizeLoginCachePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___synchronizeLoginCache(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void changeExpiredCredentials_async(const ::omero::api::AMD_IAdmin_changeExpiredCredentialsPtr&, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___changeExpiredCredentials(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reportForgottenPassword_async(const ::omero::api::AMD_IAdmin_reportForgottenPasswordPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reportForgottenPassword(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getSecurityRoles_async(const ::omero::api::AMD_IAdmin_getSecurityRolesPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getSecurityRoles(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getEventContext_async(const ::omero::api::AMD_IAdmin_getEventContextPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getEventContext(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
