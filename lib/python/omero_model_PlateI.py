"""
   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
"""
import Ice
import IceImport
import omero
IceImport.load("omero_model_DetailsI")
IceImport.load("omero_model_Plate_ice")
from omero.rtypes import rlong
from collections import namedtuple
_omero = Ice.openModule("omero")
_omero_model = Ice.openModule("omero.model")
__name__ = "omero.model"
class PlateI(_omero_model.Plate):

      # Property Metadata
      _field_info_data = namedtuple("FieldData", ["wrapper", "nullable"])
      _field_info_type = namedtuple("FieldInfo", [
          "defaultSample",
          "columnNamingConvention",
          "rowNamingConvention",
          "wellOriginX",
          "wellOriginY",
          "rows",
          "columns",
          "status",
          "externalIdentifier",
          "screenLinks",
          "wells",
          "plateAcquisitions",
          "annotationLinks",
          "name",
          "description",
          "details",
      ])
      _field_info = _field_info_type(
          defaultSample=_field_info_data(wrapper=omero.rtypes.rint, nullable=True),
          columnNamingConvention=_field_info_data(wrapper=omero.rtypes.rstring, nullable=True),
          rowNamingConvention=_field_info_data(wrapper=omero.rtypes.rstring, nullable=True),
          wellOriginX=_field_info_data(wrapper=omero.rtypes.rdouble, nullable=True),
          wellOriginY=_field_info_data(wrapper=omero.rtypes.rdouble, nullable=True),
          rows=_field_info_data(wrapper=omero.rtypes.rint, nullable=True),
          columns=_field_info_data(wrapper=omero.rtypes.rint, nullable=True),
          status=_field_info_data(wrapper=omero.rtypes.rstring, nullable=True),
          externalIdentifier=_field_info_data(wrapper=omero.rtypes.rstring, nullable=True),
          screenLinks=_field_info_data(wrapper=omero.proxy_to_instance, nullable=True),
          wells=_field_info_data(wrapper=omero.proxy_to_instance, nullable=True),
          plateAcquisitions=_field_info_data(wrapper=omero.proxy_to_instance, nullable=True),
          annotationLinks=_field_info_data(wrapper=omero.proxy_to_instance, nullable=True),
          name=_field_info_data(wrapper=omero.rtypes.rstring, nullable=False),
          description=_field_info_data(wrapper=omero.rtypes.rstring, nullable=True),
          details=_field_info_data(wrapper=omero.proxy_to_instance, nullable=True),
      )  # end _field_info
      DEFAULTSAMPLE =  "ome.model.screen.Plate_defaultSample"
      COLUMNNAMINGCONVENTION =  "ome.model.screen.Plate_columnNamingConvention"
      ROWNAMINGCONVENTION =  "ome.model.screen.Plate_rowNamingConvention"
      WELLORIGINX =  "ome.model.screen.Plate_wellOriginX"
      WELLORIGINY =  "ome.model.screen.Plate_wellOriginY"
      ROWS =  "ome.model.screen.Plate_rows"
      COLUMNS =  "ome.model.screen.Plate_columns"
      STATUS =  "ome.model.screen.Plate_status"
      EXTERNALIDENTIFIER =  "ome.model.screen.Plate_externalIdentifier"
      SCREENLINKS =  "ome.model.screen.Plate_screenLinks"
      WELLS =  "ome.model.screen.Plate_wells"
      PLATEACQUISITIONS =  "ome.model.screen.Plate_plateAcquisitions"
      ANNOTATIONLINKS =  "ome.model.screen.Plate_annotationLinks"
      NAME =  "ome.model.screen.Plate_name"
      DESCRIPTION =  "ome.model.screen.Plate_description"
      DETAILS =  "ome.model.screen.Plate_details"
      def errorIfUnloaded(self):
          if not self._loaded:
              raise _omero.UnloadedEntityException("Object unloaded:"+str(self))

      def throwNullCollectionException(self,propertyName):
          raise _omero.UnloadedEntityException(""+
          "Error updating collection:" + propertyName +"\n"+
          "Collection is currently null. This can be seen\n" +
          "by testing \""+ propertyName +"Loaded\". This implies\n"+
          "that this collection was unloaded. Please refresh this object\n"+
          "in order to update this collection.\n")

      def _toggleCollectionsLoaded(self,load):
          if load:
              self._screenLinksSeq = []
              self._screenLinksLoaded = True;
          else:
              self._screenLinksSeq = []
              self._screenLinksLoaded = False;

          if load:
              self._wellsSeq = []
              self._wellsLoaded = True;
          else:
              self._wellsSeq = []
              self._wellsLoaded = False;

          if load:
              self._plateAcquisitionsSeq = []
              self._plateAcquisitionsLoaded = True;
          else:
              self._plateAcquisitionsSeq = []
              self._plateAcquisitionsLoaded = False;

          if load:
              self._annotationLinksSeq = []
              self._annotationLinksLoaded = True;
          else:
              self._annotationLinksSeq = []
              self._annotationLinksLoaded = False;

          pass

      def __init__(self, id=None, loaded=None):
          super(PlateI, self).__init__()
          if id is not None and isinstance(id, (str, unicode)) and ":" in id:
              parts = id.split(":")
              if len(parts) != 2:
                  raise Exception("Invalid proxy string: %s", id)
              if parts[0] != self.__class__.__name__ and \
                 parts[0]+"I" != self.__class__.__name__:
                  raise Exception("Proxy class mismatch: %s<>%s" %
                  (self.__class__.__name__, parts[0]))
              self._id = rlong(parts[1])
              if loaded is None:
                  # If no loadedness was requested with
                  # a proxy string, then assume False.
                  loaded = False
          else:
              # Relying on omero.rtypes.rlong's error-handling
              self._id = rlong(id)
              if loaded is None:
                  loaded = True  # Assume true as previously
          self._loaded = loaded
          if self._loaded:
             self._details = _omero_model.DetailsI()
             self._toggleCollectionsLoaded(True)

      def unload(self, current = None):
          self._loaded = False
          self.unloadDefaultSample( )
          self.unloadColumnNamingConvention( )
          self.unloadRowNamingConvention( )
          self.unloadWellOriginX( )
          self.unloadWellOriginY( )
          self.unloadRows( )
          self.unloadColumns( )
          self.unloadStatus( )
          self.unloadExternalIdentifier( )
          self.unloadScreenLinks( )
          self.unloadWells( )
          self.unloadPlateAcquisitions( )
          self.unloadAnnotationLinks( )
          self.unloadName( )
          self.unloadDescription( )
          self.unloadDetails( )

      def isLoaded(self, current = None):
          return self._loaded
      def unloadCollections(self, current = None):
          self._toggleCollectionsLoaded( False )
      def isGlobal(self, current = None):
          return  False ;
      def isMutable(self, current = None):
          return  True ;
      def isAnnotated(self, current = None):
          return  True ;
      def isLink(self, current = None):
          return  False ;
      def shallowCopy(self, current = None):
            if not self._loaded: return self.proxy()
            copy = PlateI()
            copy._id = self._id;
            copy._version = self._version;
            copy._details = None  # Unloading for the moment.
            raise omero.ClientError("NYI")
      def proxy(self, current = None):
          if self._id is None: raise omero.ClientError("Proxies require an id")
          return PlateI( self._id.getValue(), False )

      def getDetails(self, current = None):
          self.errorIfUnloaded()
          return self._details

      def unloadDetails(self, current = None):
          self._details = None

      def getId(self, current = None):
          return self._id

      def setId(self, _id, current = None):
          self._id = _id

      def checkUnloadedProperty(self, value, loadedField):
          if value == None:
              self.__dict__[loadedField] = False
          else:
              self.__dict__[loadedField] = True

      def getVersion(self, current = None):
          self.errorIfUnloaded()
          return self._version

      def setVersion(self, version, current = None):
          self.errorIfUnloaded()
          self._version = version

      def unloadDefaultSample(self, ):
          self._defaultSampleLoaded = False
          self._defaultSample = None;

      def getDefaultSample(self, current = None):
          self.errorIfUnloaded()
          return self._defaultSample

      def setDefaultSample(self, _defaultSample, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.defaultSample.wrapper is not None:
              if _defaultSample is not None:
                  _defaultSample = self._field_info.defaultSample.wrapper(_defaultSample)
          self._defaultSample = _defaultSample
          pass

      def unloadColumnNamingConvention(self, ):
          self._columnNamingConventionLoaded = False
          self._columnNamingConvention = None;

      def getColumnNamingConvention(self, current = None):
          self.errorIfUnloaded()
          return self._columnNamingConvention

      def setColumnNamingConvention(self, _columnNamingConvention, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.columnNamingConvention.wrapper is not None:
              if _columnNamingConvention is not None:
                  _columnNamingConvention = self._field_info.columnNamingConvention.wrapper(_columnNamingConvention)
          self._columnNamingConvention = _columnNamingConvention
          pass

      def unloadRowNamingConvention(self, ):
          self._rowNamingConventionLoaded = False
          self._rowNamingConvention = None;

      def getRowNamingConvention(self, current = None):
          self.errorIfUnloaded()
          return self._rowNamingConvention

      def setRowNamingConvention(self, _rowNamingConvention, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.rowNamingConvention.wrapper is not None:
              if _rowNamingConvention is not None:
                  _rowNamingConvention = self._field_info.rowNamingConvention.wrapper(_rowNamingConvention)
          self._rowNamingConvention = _rowNamingConvention
          pass

      def unloadWellOriginX(self, ):
          self._wellOriginXLoaded = False
          self._wellOriginX = None;

      def getWellOriginX(self, current = None):
          self.errorIfUnloaded()
          return self._wellOriginX

      def setWellOriginX(self, _wellOriginX, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.wellOriginX.wrapper is not None:
              if _wellOriginX is not None:
                  _wellOriginX = self._field_info.wellOriginX.wrapper(_wellOriginX)
          self._wellOriginX = _wellOriginX
          pass

      def unloadWellOriginY(self, ):
          self._wellOriginYLoaded = False
          self._wellOriginY = None;

      def getWellOriginY(self, current = None):
          self.errorIfUnloaded()
          return self._wellOriginY

      def setWellOriginY(self, _wellOriginY, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.wellOriginY.wrapper is not None:
              if _wellOriginY is not None:
                  _wellOriginY = self._field_info.wellOriginY.wrapper(_wellOriginY)
          self._wellOriginY = _wellOriginY
          pass

      def unloadRows(self, ):
          self._rowsLoaded = False
          self._rows = None;

      def getRows(self, current = None):
          self.errorIfUnloaded()
          return self._rows

      def setRows(self, _rows, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.rows.wrapper is not None:
              if _rows is not None:
                  _rows = self._field_info.rows.wrapper(_rows)
          self._rows = _rows
          pass

      def unloadColumns(self, ):
          self._columnsLoaded = False
          self._columns = None;

      def getColumns(self, current = None):
          self.errorIfUnloaded()
          return self._columns

      def setColumns(self, _columns, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.columns.wrapper is not None:
              if _columns is not None:
                  _columns = self._field_info.columns.wrapper(_columns)
          self._columns = _columns
          pass

      def unloadStatus(self, ):
          self._statusLoaded = False
          self._status = None;

      def getStatus(self, current = None):
          self.errorIfUnloaded()
          return self._status

      def setStatus(self, _status, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.status.wrapper is not None:
              if _status is not None:
                  _status = self._field_info.status.wrapper(_status)
          self._status = _status
          pass

      def unloadExternalIdentifier(self, ):
          self._externalIdentifierLoaded = False
          self._externalIdentifier = None;

      def getExternalIdentifier(self, current = None):
          self.errorIfUnloaded()
          return self._externalIdentifier

      def setExternalIdentifier(self, _externalIdentifier, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.externalIdentifier.wrapper is not None:
              if _externalIdentifier is not None:
                  _externalIdentifier = self._field_info.externalIdentifier.wrapper(_externalIdentifier)
          self._externalIdentifier = _externalIdentifier
          pass

      def unloadScreenLinks(self, current = None):
          self._screenLinksLoaded = False
          self._screenLinksSeq = None;

      def _getScreenLinks(self, current = None):
          self.errorIfUnloaded()
          return self._screenLinksSeq

      def _setScreenLinks(self, _screenLinks, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.screenLinksSeq.wrapper is not None:
              if _screenLinks is not None:
                  _screenLinks = self._field_info.screenLinksSeq.wrapper(_screenLinks)
          self._screenLinksSeq = _screenLinks
          self.checkUnloadedProperty(_screenLinks,'screenLinksLoaded')

      def isScreenLinksLoaded(self):
          return self._screenLinksLoaded

      def sizeOfScreenLinks(self, current = None):
          self.errorIfUnloaded()
          if not self._screenLinksLoaded: return -1
          return len(self._screenLinksSeq)

      def copyScreenLinks(self, current = None):
          self.errorIfUnloaded()
          if not self._screenLinksLoaded: self.throwNullCollectionException("screenLinksSeq")
          return list(self._screenLinksSeq)

      def iterateScreenLinks(self):
          self.errorIfUnloaded()
          if not self._screenLinksLoaded: self.throwNullCollectionException("screenLinksSeq")
          return iter(self._screenLinksSeq)

      def addScreenPlateLink(self, target, current = None):
          self.errorIfUnloaded()
          if not self._screenLinksLoaded: self.throwNullCollectionException("screenLinksSeq")
          self._screenLinksSeq.append( target );
          target.setChild( self )

      def addAllScreenPlateLinkSet(self, targets, current = None):
          self.errorIfUnloaded()
          if  not self._screenLinksLoaded: self.throwNullCollectionException("screenLinksSeq")
          self._screenLinksSeq.extend( targets )
          for target in targets:
              target.setChild( self )

      def removeScreenPlateLink(self, target, current = None):
          self.errorIfUnloaded()
          if not self._screenLinksLoaded: self.throwNullCollectionException("screenLinksSeq")
          self._screenLinksSeq.remove( target )
          target.setChild( None )

      def removeAllScreenPlateLinkSet(self, targets, current = None):
          self.errorIfUnloaded()
          if not self._screenLinksLoaded: self.throwNullCollectionException("screenLinksSeq")
          for elt in targets:
              elt.setChild( None )
              self._screenLinksSeq.remove( elt )

      def clearScreenLinks(self, current = None):
          self.errorIfUnloaded()
          if not self._screenLinksLoaded: self.throwNullCollectionException("screenLinksSeq")
          for elt in self._screenLinksSeq:
              elt.setChild( None )
          self._screenLinksSeq = list()

      def reloadScreenLinks(self, toCopy, current = None):
          self.errorIfUnloaded()
          if self._screenLinksLoaded:
              raise omero.ClientError("Cannot reload active collection: screenLinksSeq")
          if not toCopy:
              raise omero.ClientError("Argument cannot be null")
          if toCopy.getId().getValue() != self.getId().getValue():
             raise omero.ClientError("Argument must have the same id as this instance")
          if toCopy.getDetails().getUpdateEvent().getId().getValue() < self.getDetails().getUpdateEvent().getId().getValue():
             raise omero.ClientError("Argument may not be older than this instance")
          copy = toCopy.copyScreenLinks() # May also throw
          for elt in copy:
              elt.setChild( self )
          self._screenLinksSeq = copy
          toCopy.unloadScreenLinks()
          self._screenLinksLoaded = True

      def getScreenLinksCountPerOwner(self, current = None):
          return self._screenLinksCountPerOwner

      def linkScreen(self, addition, current = None):
          self.errorIfUnloaded()
          if not self._screenLinksLoaded: self.throwNullCollectionException("screenLinksSeq")
          link = _omero_model.ScreenPlateLinkI()
          link.link( addition, self );
          self.addScreenPlateLinkToBoth( link, True )
          return link

      def addScreenPlateLinkToBoth(self, link, bothSides):
          self.errorIfUnloaded()
          if not self._screenLinksLoaded: self.throwNullCollectionException("screenLinksSeq")
          self._screenLinksSeq.append( link )
          if bothSides and link.getParent().isLoaded():
              link.getParent().addScreenPlateLinkToBoth( link, False )

      def findScreenPlateLink(self, removal, current = None):
          self.errorIfUnloaded()
          if not self._screenLinksLoaded: self.throwNullCollectionException("screenLinksSeq")
          result = list()
          for link in self._screenLinksSeq:
              if link.getParent() == removal: result.append(link)
          return result

      def unlinkScreen(self, removal, current = None):
          self.errorIfUnloaded()
          if not self._screenLinksLoaded: self.throwNullCollectionException("screenLinksSeq")
          toRemove = self.findScreenPlateLink(removal)
          for next in toRemove:
              self.removeScreenPlateLinkFromBoth( next, True )

      def removeScreenPlateLinkFromBoth(self, link, bothSides, current = None):
          self.errorIfUnloaded()
          if not self._screenLinksLoaded: self.throwNullCollectionException("screenLinksSeq")
          self._screenLinksSeq.remove( link )
          if bothSides and link.getParent().isLoaded():
              link.getParent().removeScreenPlateLinkFromBoth(link, False)

      def linkedScreenList(self, current = None):
          self.errorIfUnloaded()
          if not self.screenLinksLoaded: self.throwNullCollectionException("ScreenLinks")
          linked = []
          for link in self._screenLinksSeq:
              linked.append( link.getParent() )
          return linked

      def unloadWells(self, current = None):
          self._wellsLoaded = False
          self._wellsSeq = None;

      def _getWells(self, current = None):
          self.errorIfUnloaded()
          return self._wellsSeq

      def _setWells(self, _wells, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.wellsSeq.wrapper is not None:
              if _wells is not None:
                  _wells = self._field_info.wellsSeq.wrapper(_wells)
          self._wellsSeq = _wells
          self.checkUnloadedProperty(_wells,'wellsLoaded')

      def isWellsLoaded(self):
          return self._wellsLoaded

      def sizeOfWells(self, current = None):
          self.errorIfUnloaded()
          if not self._wellsLoaded: return -1
          return len(self._wellsSeq)

      def copyWells(self, current = None):
          self.errorIfUnloaded()
          if not self._wellsLoaded: self.throwNullCollectionException("wellsSeq")
          return list(self._wellsSeq)

      def iterateWells(self):
          self.errorIfUnloaded()
          if not self._wellsLoaded: self.throwNullCollectionException("wellsSeq")
          return iter(self._wellsSeq)

      def addWell(self, target, current = None):
          self.errorIfUnloaded()
          if not self._wellsLoaded: self.throwNullCollectionException("wellsSeq")
          self._wellsSeq.append( target );
          target.setPlate( self )

      def addAllWellSet(self, targets, current = None):
          self.errorIfUnloaded()
          if  not self._wellsLoaded: self.throwNullCollectionException("wellsSeq")
          self._wellsSeq.extend( targets )
          for target in targets:
              target.setPlate( self )

      def removeWell(self, target, current = None):
          self.errorIfUnloaded()
          if not self._wellsLoaded: self.throwNullCollectionException("wellsSeq")
          self._wellsSeq.remove( target )
          target.setPlate( None )

      def removeAllWellSet(self, targets, current = None):
          self.errorIfUnloaded()
          if not self._wellsLoaded: self.throwNullCollectionException("wellsSeq")
          for elt in targets:
              elt.setPlate( None )
              self._wellsSeq.remove( elt )

      def clearWells(self, current = None):
          self.errorIfUnloaded()
          if not self._wellsLoaded: self.throwNullCollectionException("wellsSeq")
          for elt in self._wellsSeq:
              elt.setPlate( None )
          self._wellsSeq = list()

      def reloadWells(self, toCopy, current = None):
          self.errorIfUnloaded()
          if self._wellsLoaded:
              raise omero.ClientError("Cannot reload active collection: wellsSeq")
          if not toCopy:
              raise omero.ClientError("Argument cannot be null")
          if toCopy.getId().getValue() != self.getId().getValue():
             raise omero.ClientError("Argument must have the same id as this instance")
          if toCopy.getDetails().getUpdateEvent().getId().getValue() < self.getDetails().getUpdateEvent().getId().getValue():
             raise omero.ClientError("Argument may not be older than this instance")
          copy = toCopy.copyWells() # May also throw
          for elt in copy:
              elt.setPlate( self )
          self._wellsSeq = copy
          toCopy.unloadWells()
          self._wellsLoaded = True

      def unloadPlateAcquisitions(self, current = None):
          self._plateAcquisitionsLoaded = False
          self._plateAcquisitionsSeq = None;

      def _getPlateAcquisitions(self, current = None):
          self.errorIfUnloaded()
          return self._plateAcquisitionsSeq

      def _setPlateAcquisitions(self, _plateAcquisitions, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.plateAcquisitionsSeq.wrapper is not None:
              if _plateAcquisitions is not None:
                  _plateAcquisitions = self._field_info.plateAcquisitionsSeq.wrapper(_plateAcquisitions)
          self._plateAcquisitionsSeq = _plateAcquisitions
          self.checkUnloadedProperty(_plateAcquisitions,'plateAcquisitionsLoaded')

      def isPlateAcquisitionsLoaded(self):
          return self._plateAcquisitionsLoaded

      def sizeOfPlateAcquisitions(self, current = None):
          self.errorIfUnloaded()
          if not self._plateAcquisitionsLoaded: return -1
          return len(self._plateAcquisitionsSeq)

      def copyPlateAcquisitions(self, current = None):
          self.errorIfUnloaded()
          if not self._plateAcquisitionsLoaded: self.throwNullCollectionException("plateAcquisitionsSeq")
          return list(self._plateAcquisitionsSeq)

      def iteratePlateAcquisitions(self):
          self.errorIfUnloaded()
          if not self._plateAcquisitionsLoaded: self.throwNullCollectionException("plateAcquisitionsSeq")
          return iter(self._plateAcquisitionsSeq)

      def addPlateAcquisition(self, target, current = None):
          self.errorIfUnloaded()
          if not self._plateAcquisitionsLoaded: self.throwNullCollectionException("plateAcquisitionsSeq")
          self._plateAcquisitionsSeq.append( target );
          target.setPlate( self )

      def addAllPlateAcquisitionSet(self, targets, current = None):
          self.errorIfUnloaded()
          if  not self._plateAcquisitionsLoaded: self.throwNullCollectionException("plateAcquisitionsSeq")
          self._plateAcquisitionsSeq.extend( targets )
          for target in targets:
              target.setPlate( self )

      def removePlateAcquisition(self, target, current = None):
          self.errorIfUnloaded()
          if not self._plateAcquisitionsLoaded: self.throwNullCollectionException("plateAcquisitionsSeq")
          self._plateAcquisitionsSeq.remove( target )
          target.setPlate( None )

      def removeAllPlateAcquisitionSet(self, targets, current = None):
          self.errorIfUnloaded()
          if not self._plateAcquisitionsLoaded: self.throwNullCollectionException("plateAcquisitionsSeq")
          for elt in targets:
              elt.setPlate( None )
              self._plateAcquisitionsSeq.remove( elt )

      def clearPlateAcquisitions(self, current = None):
          self.errorIfUnloaded()
          if not self._plateAcquisitionsLoaded: self.throwNullCollectionException("plateAcquisitionsSeq")
          for elt in self._plateAcquisitionsSeq:
              elt.setPlate( None )
          self._plateAcquisitionsSeq = list()

      def reloadPlateAcquisitions(self, toCopy, current = None):
          self.errorIfUnloaded()
          if self._plateAcquisitionsLoaded:
              raise omero.ClientError("Cannot reload active collection: plateAcquisitionsSeq")
          if not toCopy:
              raise omero.ClientError("Argument cannot be null")
          if toCopy.getId().getValue() != self.getId().getValue():
             raise omero.ClientError("Argument must have the same id as this instance")
          if toCopy.getDetails().getUpdateEvent().getId().getValue() < self.getDetails().getUpdateEvent().getId().getValue():
             raise omero.ClientError("Argument may not be older than this instance")
          copy = toCopy.copyPlateAcquisitions() # May also throw
          for elt in copy:
              elt.setPlate( self )
          self._plateAcquisitionsSeq = copy
          toCopy.unloadPlateAcquisitions()
          self._plateAcquisitionsLoaded = True

      def unloadAnnotationLinks(self, current = None):
          self._annotationLinksLoaded = False
          self._annotationLinksSeq = None;

      def _getAnnotationLinks(self, current = None):
          self.errorIfUnloaded()
          return self._annotationLinksSeq

      def _setAnnotationLinks(self, _annotationLinks, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.annotationLinksSeq.wrapper is not None:
              if _annotationLinks is not None:
                  _annotationLinks = self._field_info.annotationLinksSeq.wrapper(_annotationLinks)
          self._annotationLinksSeq = _annotationLinks
          self.checkUnloadedProperty(_annotationLinks,'annotationLinksLoaded')

      def isAnnotationLinksLoaded(self):
          return self._annotationLinksLoaded

      def sizeOfAnnotationLinks(self, current = None):
          self.errorIfUnloaded()
          if not self._annotationLinksLoaded: return -1
          return len(self._annotationLinksSeq)

      def copyAnnotationLinks(self, current = None):
          self.errorIfUnloaded()
          if not self._annotationLinksLoaded: self.throwNullCollectionException("annotationLinksSeq")
          return list(self._annotationLinksSeq)

      def iterateAnnotationLinks(self):
          self.errorIfUnloaded()
          if not self._annotationLinksLoaded: self.throwNullCollectionException("annotationLinksSeq")
          return iter(self._annotationLinksSeq)

      def addPlateAnnotationLink(self, target, current = None):
          self.errorIfUnloaded()
          if not self._annotationLinksLoaded: self.throwNullCollectionException("annotationLinksSeq")
          self._annotationLinksSeq.append( target );
          target.setParent( self )

      def addAllPlateAnnotationLinkSet(self, targets, current = None):
          self.errorIfUnloaded()
          if  not self._annotationLinksLoaded: self.throwNullCollectionException("annotationLinksSeq")
          self._annotationLinksSeq.extend( targets )
          for target in targets:
              target.setParent( self )

      def removePlateAnnotationLink(self, target, current = None):
          self.errorIfUnloaded()
          if not self._annotationLinksLoaded: self.throwNullCollectionException("annotationLinksSeq")
          self._annotationLinksSeq.remove( target )
          target.setParent( None )

      def removeAllPlateAnnotationLinkSet(self, targets, current = None):
          self.errorIfUnloaded()
          if not self._annotationLinksLoaded: self.throwNullCollectionException("annotationLinksSeq")
          for elt in targets:
              elt.setParent( None )
              self._annotationLinksSeq.remove( elt )

      def clearAnnotationLinks(self, current = None):
          self.errorIfUnloaded()
          if not self._annotationLinksLoaded: self.throwNullCollectionException("annotationLinksSeq")
          for elt in self._annotationLinksSeq:
              elt.setParent( None )
          self._annotationLinksSeq = list()

      def reloadAnnotationLinks(self, toCopy, current = None):
          self.errorIfUnloaded()
          if self._annotationLinksLoaded:
              raise omero.ClientError("Cannot reload active collection: annotationLinksSeq")
          if not toCopy:
              raise omero.ClientError("Argument cannot be null")
          if toCopy.getId().getValue() != self.getId().getValue():
             raise omero.ClientError("Argument must have the same id as this instance")
          if toCopy.getDetails().getUpdateEvent().getId().getValue() < self.getDetails().getUpdateEvent().getId().getValue():
             raise omero.ClientError("Argument may not be older than this instance")
          copy = toCopy.copyAnnotationLinks() # May also throw
          for elt in copy:
              elt.setParent( self )
          self._annotationLinksSeq = copy
          toCopy.unloadAnnotationLinks()
          self._annotationLinksLoaded = True

      def getAnnotationLinksCountPerOwner(self, current = None):
          return self._annotationLinksCountPerOwner

      def linkAnnotation(self, addition, current = None):
          self.errorIfUnloaded()
          if not self._annotationLinksLoaded: self.throwNullCollectionException("annotationLinksSeq")
          link = _omero_model.PlateAnnotationLinkI()
          link.link( self, addition );
          self.addPlateAnnotationLinkToBoth( link, True )
          return link

      def addPlateAnnotationLinkToBoth(self, link, bothSides):
          self.errorIfUnloaded()
          if not self._annotationLinksLoaded: self.throwNullCollectionException("annotationLinksSeq")
          self._annotationLinksSeq.append( link )

      def findPlateAnnotationLink(self, removal, current = None):
          self.errorIfUnloaded()
          if not self._annotationLinksLoaded: self.throwNullCollectionException("annotationLinksSeq")
          result = list()
          for link in self._annotationLinksSeq:
              if link.getChild() == removal: result.append(link)
          return result

      def unlinkAnnotation(self, removal, current = None):
          self.errorIfUnloaded()
          if not self._annotationLinksLoaded: self.throwNullCollectionException("annotationLinksSeq")
          toRemove = self.findPlateAnnotationLink(removal)
          for next in toRemove:
              self.removePlateAnnotationLinkFromBoth( next, True )

      def removePlateAnnotationLinkFromBoth(self, link, bothSides, current = None):
          self.errorIfUnloaded()
          if not self._annotationLinksLoaded: self.throwNullCollectionException("annotationLinksSeq")
          self._annotationLinksSeq.remove( link )

      def linkedAnnotationList(self, current = None):
          self.errorIfUnloaded()
          if not self.annotationLinksLoaded: self.throwNullCollectionException("AnnotationLinks")
          linked = []
          for link in self._annotationLinksSeq:
              linked.append( link.getChild() )
          return linked

      def unloadName(self, ):
          self._nameLoaded = False
          self._name = None;

      def getName(self, current = None):
          self.errorIfUnloaded()
          return self._name

      def setName(self, _name, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.name.wrapper is not None:
              if _name is not None:
                  _name = self._field_info.name.wrapper(_name)
          self._name = _name
          pass

      def unloadDescription(self, ):
          self._descriptionLoaded = False
          self._description = None;

      def getDescription(self, current = None):
          self.errorIfUnloaded()
          return self._description

      def setDescription(self, _description, current = None, wrap=False):
          self.errorIfUnloaded()
          if wrap and self._field_info.description.wrapper is not None:
              if _description is not None:
                  _description = self._field_info.description.wrapper(_description)
          self._description = _description
          pass


      def ice_postUnmarshal(self):
          """
          Provides additional initialization once all data loaded
          """
          pass # Currently unused


      def ice_preMarshal(self):
          """
          Provides additional validation before data is sent
          """
          pass # Currently unused

      def __getattr__(self, name):
          import __builtin__
          """
          Reroutes all access to object.field through object.getField() or object.isField()
          """
          if "_" in name:  # Ice disallows underscores, so these should be treated normally.
              return object.__getattribute__(self, name)
          field  = "_" + name
          capitalized = name[0].capitalize() + name[1:]
          getter = "get" + capitalized
          questn = "is" + capitalized
          try:
              self.__dict__[field]
              if hasattr(self, getter):
                  method = getattr(self, getter)
                  return method()
              elif hasattr(self, questn):
                  method = getattr(self, questn)
                  return method()
          except:
              pass
          raise AttributeError("'%s' object has no attribute '%s' or '%s'" % (self.__class__.__name__, getter, questn))

      def __setattr__(self, name, value):
          """
          Reroutes all access to object.field through object.getField(), with the caveat
          that all sets on variables starting with "_" are permitted directly.
          """
          if name.startswith("_"):
              self.__dict__[name] = value
              return
          else:
              field  = "_" + name
              setter = "set" + name[0].capitalize() + name[1:]
              if hasattr(self, field) and hasattr(self, setter):
                  method = getattr(self, setter)
                  return method(value)
          raise AttributeError("'%s' object has no attribute '%s'" % (self.__class__.__name__, setter))

_omero_model.PlateI = PlateI
