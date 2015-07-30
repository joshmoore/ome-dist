   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.ice for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef CODOMAINMAPCONTEXT_ICE
#define CODOMAINMAPCONTEXT_ICE
#include <omero/model/IObject.ice>
#include <omero/RTypes.ice>
#include <omero/model/RTypes.ice>
#include <omero/System.ice>
#include <omero/Collections.ice>
module omero {
  module model {
    class RenderingDef;
    class Details;
    ["protected"] class CodomainMapContext
    extends omero::model::IObject
    {
      omero::RInt version;
      omero::RInt getVersion();
      void setVersion(omero::RInt theVersion);
      omero::model::RenderingDef renderingDef;
      omero::model::RenderingDef getRenderingDef();
      void setRenderingDef(omero::model::RenderingDef theRenderingDef);
    };
  };
};
#endif // CODOMAINMAPCONTEXT_ICE
