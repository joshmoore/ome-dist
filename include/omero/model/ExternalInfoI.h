   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.h for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef EXTERNALINFOI_H
#define EXTERNALINFOI_H
#include <omero/IceNoWarnPush.h>
#include <omero/RTypes.h>
#include <omero/model/RTypes.h>
#include <omero/model/IObject.h>
#include <omero/model/ExternalInfo.h>
#include <omero/IceNoWarnPop.h>
#include <omero/ClientErrors.h>
#include <omero/model/DetailsI.h>
#include <omero/model/NamedValue.h>
#include <omero/templates.h>
#include <IceUtil/Config.h>
#if ICE_INT_VERSION / 100 >= 304
#   include <Ice/Handle.h>
#else
#   include <IceUtil/Handle.h>
#endif
#ifndef OMERO_CLIENT
#   ifdef OMERO_CLIENT_EXPORTS
#       define OMERO_CLIENT ICE_DECLSPEC_EXPORT
#   else
#       define OMERO_CLIENT ICE_DECLSPEC_IMPORT
#   endif
#endif
namespace omero {
  namespace model {
    class OMERO_CLIENT ExternalInfoI;
  }
}
#if ICE_INT_VERSION / 100 >= 304
namespace IceInternal {
  OMERO_CLIENT ::Ice::Object* upCast(::omero::model::ExternalInfoI*);
}
#endif
namespace omero {
  namespace model {
#if ICE_INT_VERSION / 100 >= 304
  typedef IceInternal::Handle<ExternalInfoI> ExternalInfoIPtr;
#else
  typedef IceUtil::Handle<ExternalInfoI> ExternalInfoIPtr;
#endif
    class OMERO_CLIENT ExternalInfoI : virtual public ExternalInfo {
   public:
      static const std::string ENTITYID;
      static const std::string ENTITYTYPE;
      static const std::string LSID;
      static const std::string UUID;
      static const std::string DETAILS;
    protected:
      void errorIfUnloaded();
      void throwNullCollectionException(std::string propertyName);
      virtual void toggleCollectionsLoaded(bool /*unused*/);
      virtual ~ExternalInfoI();
    public:
      ExternalInfoI();
      ExternalInfoI(omero::RLongPtr idPtr, bool isLoaded = false);
      ExternalInfoI(Ice::Long id, bool isLoaded = false);
      virtual void unload(const Ice::Current& current = Ice::Current());
      virtual bool isLoaded(const Ice::Current& current = Ice::Current());
      virtual void unloadCollections(const Ice::Current& current = Ice::Current());
      virtual bool isGlobal(const Ice::Current& current = Ice::Current());
      virtual bool isMutable(const Ice::Current& current = Ice::Current());
      virtual bool isAnnotated(const Ice::Current& current = Ice::Current());
      virtual bool isLink(const Ice::Current& current = Ice::Current());
      virtual omero::model::IObjectPtr shallowCopy(const Ice::Current& current = Ice::Current());
      virtual omero::model::IObjectPtr proxy(const Ice::Current& current = Ice::Current());
      virtual omero::model::DetailsPtr getDetails(const Ice::Current& current = Ice::Current());
      virtual void unloadDetails(const Ice::Current& current = Ice::Current());
      virtual omero::RLongPtr getId(const Ice::Current& current = Ice::Current());
      virtual void setId( const omero::RLongPtr& id, const Ice::Current& current = Ice::Current() );

      //
      //  ExternalInfo.entityId
      //
      virtual void unloadEntityId();
      virtual omero::RLongPtr getEntityId(const Ice::Current& current = Ice::Current());
      virtual void setEntityId(const omero::RLongPtr& _entityId, const Ice::Current& current = Ice::Current());

      //
      //  ExternalInfo.entityType
      //
      virtual void unloadEntityType();
      virtual omero::RStringPtr getEntityType(const Ice::Current& current = Ice::Current());
      virtual void setEntityType(const omero::RStringPtr& _entityType, const Ice::Current& current = Ice::Current());

      //
      //  ExternalInfo.lsid
      //
      virtual void unloadLsid();
      virtual omero::RStringPtr getLsid(const Ice::Current& current = Ice::Current());
      virtual void setLsid(const omero::RStringPtr& _lsid, const Ice::Current& current = Ice::Current());

      //
      //  ExternalInfo.uuid
      //
      virtual void unloadUuid();
      virtual omero::RStringPtr getUuid(const Ice::Current& current = Ice::Current());
      virtual void setUuid(const omero::RStringPtr& _uuid, const Ice::Current& current = Ice::Current());
 };

}}
#endif // EXTERNALINFOI_H
