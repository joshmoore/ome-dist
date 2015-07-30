   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.h for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef THUMBNAILI_H
#define THUMBNAILI_H
#include <omero/IceNoWarnPush.h>
#include <omero/RTypes.h>
#include <omero/model/RTypes.h>
#include <omero/model/IObject.h>
#include <omero/model/Thumbnail.h>
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
    class OMERO_CLIENT ThumbnailI;
  }
}
#if ICE_INT_VERSION / 100 >= 304
namespace IceInternal {
  OMERO_CLIENT ::Ice::Object* upCast(::omero::model::ThumbnailI*);
}
#endif
namespace omero {
  namespace model {
#if ICE_INT_VERSION / 100 >= 304
  typedef IceInternal::Handle<ThumbnailI> ThumbnailIPtr;
#else
  typedef IceUtil::Handle<ThumbnailI> ThumbnailIPtr;
#endif
    class OMERO_CLIENT ThumbnailI : virtual public Thumbnail {
   public:
      static const std::string PIXELS;
      static const std::string MIMETYPE;
      static const std::string SIZEX;
      static const std::string SIZEY;
      static const std::string REF;
      static const std::string DETAILS;
    protected:
      void errorIfUnloaded();
      void throwNullCollectionException(std::string propertyName);
      virtual void toggleCollectionsLoaded(bool /*unused*/);
      virtual ~ThumbnailI();
    public:
      ThumbnailI();
      ThumbnailI(omero::RLongPtr idPtr, bool isLoaded = false);
      ThumbnailI(Ice::Long id, bool isLoaded = false);
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
      virtual omero::RIntPtr getVersion(const Ice::Current& current = Ice::Current());
      virtual void setVersion( const omero::RIntPtr& version, const Ice::Current& current = Ice::Current() );

      //
      //  Thumbnail.pixels
      //
      virtual void unloadPixels();
      virtual omero::model::PixelsPtr getPixels(const Ice::Current& current = Ice::Current());
      virtual void setPixels(const omero::model::PixelsPtr& _pixels, const Ice::Current& current = Ice::Current());

      //
      //  Thumbnail.mimeType
      //
      virtual void unloadMimeType();
      virtual omero::RStringPtr getMimeType(const Ice::Current& current = Ice::Current());
      virtual void setMimeType(const omero::RStringPtr& _mimeType, const Ice::Current& current = Ice::Current());

      //
      //  Thumbnail.sizeX
      //
      virtual void unloadSizeX();
      virtual omero::RIntPtr getSizeX(const Ice::Current& current = Ice::Current());
      virtual void setSizeX(const omero::RIntPtr& _sizeX, const Ice::Current& current = Ice::Current());

      //
      //  Thumbnail.sizeY
      //
      virtual void unloadSizeY();
      virtual omero::RIntPtr getSizeY(const Ice::Current& current = Ice::Current());
      virtual void setSizeY(const omero::RIntPtr& _sizeY, const Ice::Current& current = Ice::Current());

      //
      //  Thumbnail.ref
      //
      virtual void unloadRef();
      virtual omero::RStringPtr getRef(const Ice::Current& current = Ice::Current());
      virtual void setRef(const omero::RStringPtr& _ref, const Ice::Current& current = Ice::Current());
 };

}}
#endif // THUMBNAILI_H
