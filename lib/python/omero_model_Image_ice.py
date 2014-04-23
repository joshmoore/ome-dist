# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Image.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_model_IObject_ice
import omero_RTypes_ice
import omero_System_ice
import omero_Collections_ice

# Included module omero
_M_omero = Ice.openModule('omero')

# Included module omero.model
_M_omero.model = Ice.openModule('omero.model')

# Included module Ice
_M_Ice = Ice.openModule('Ice')

# Included module omero.sys
_M_omero.sys = Ice.openModule('omero.sys')

# Included module omero.api
_M_omero.api = Ice.openModule('omero.api')

# Start of module omero
__name__ = 'omero'

# Start of module omero.model
__name__ = 'omero.model'

if not _M_omero.model.__dict__.has_key('Format'):
    _M_omero.model._t_Format = IcePy.declareClass('::omero::model::Format')
    _M_omero.model._t_FormatPrx = IcePy.declareProxy('::omero::model::Format')

if not _M_omero.model.__dict__.has_key('ImagingEnvironment'):
    _M_omero.model._t_ImagingEnvironment = IcePy.declareClass('::omero::model::ImagingEnvironment')
    _M_omero.model._t_ImagingEnvironmentPrx = IcePy.declareProxy('::omero::model::ImagingEnvironment')

if not _M_omero.model.__dict__.has_key('ObjectiveSettings'):
    _M_omero.model._t_ObjectiveSettings = IcePy.declareClass('::omero::model::ObjectiveSettings')
    _M_omero.model._t_ObjectiveSettingsPrx = IcePy.declareProxy('::omero::model::ObjectiveSettings')

if not _M_omero.model.__dict__.has_key('Instrument'):
    _M_omero.model._t_Instrument = IcePy.declareClass('::omero::model::Instrument')
    _M_omero.model._t_InstrumentPrx = IcePy.declareProxy('::omero::model::Instrument')

if not _M_omero.model.__dict__.has_key('StageLabel'):
    _M_omero.model._t_StageLabel = IcePy.declareClass('::omero::model::StageLabel')
    _M_omero.model._t_StageLabelPrx = IcePy.declareProxy('::omero::model::StageLabel')

if not _M_omero.model.__dict__.has_key('Experiment'):
    _M_omero.model._t_Experiment = IcePy.declareClass('::omero::model::Experiment')
    _M_omero.model._t_ExperimentPrx = IcePy.declareProxy('::omero::model::Experiment')

if not _M_omero.model.__dict__.has_key('Pixels'):
    _M_omero.model._t_Pixels = IcePy.declareClass('::omero::model::Pixels')
    _M_omero.model._t_PixelsPrx = IcePy.declareProxy('::omero::model::Pixels')

if not _M_omero.model.__dict__.has_key('WellSample'):
    _M_omero.model._t_WellSample = IcePy.declareClass('::omero::model::WellSample')
    _M_omero.model._t_WellSamplePrx = IcePy.declareProxy('::omero::model::WellSample')

if not _M_omero.model.__dict__.has_key('Roi'):
    _M_omero.model._t_Roi = IcePy.declareClass('::omero::model::Roi')
    _M_omero.model._t_RoiPrx = IcePy.declareProxy('::omero::model::Roi')

if not _M_omero.model.__dict__.has_key('DatasetImageLink'):
    _M_omero.model._t_DatasetImageLink = IcePy.declareClass('::omero::model::DatasetImageLink')
    _M_omero.model._t_DatasetImageLinkPrx = IcePy.declareProxy('::omero::model::DatasetImageLink')

if not _M_omero.model.__dict__.has_key('Dataset'):
    _M_omero.model._t_Dataset = IcePy.declareClass('::omero::model::Dataset')
    _M_omero.model._t_DatasetPrx = IcePy.declareProxy('::omero::model::Dataset')

if not _M_omero.model.__dict__.has_key('Fileset'):
    _M_omero.model._t_Fileset = IcePy.declareClass('::omero::model::Fileset')
    _M_omero.model._t_FilesetPrx = IcePy.declareProxy('::omero::model::Fileset')

if not _M_omero.model.__dict__.has_key('ImageAnnotationLink'):
    _M_omero.model._t_ImageAnnotationLink = IcePy.declareClass('::omero::model::ImageAnnotationLink')
    _M_omero.model._t_ImageAnnotationLinkPrx = IcePy.declareProxy('::omero::model::ImageAnnotationLink')

if not _M_omero.model.__dict__.has_key('Annotation'):
    _M_omero.model._t_Annotation = IcePy.declareClass('::omero::model::Annotation')
    _M_omero.model._t_AnnotationPrx = IcePy.declareProxy('::omero::model::Annotation')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('_t_ImagePixelsSeq'):
    _M_omero.model._t_ImagePixelsSeq = IcePy.defineSequence('::omero::model::ImagePixelsSeq', (), _M_omero.model._t_Pixels)

if not _M_omero.model.__dict__.has_key('_t_ImageWellSamplesSeq'):
    _M_omero.model._t_ImageWellSamplesSeq = IcePy.defineSequence('::omero::model::ImageWellSamplesSeq', (), _M_omero.model._t_WellSample)

if not _M_omero.model.__dict__.has_key('_t_ImageRoisSeq'):
    _M_omero.model._t_ImageRoisSeq = IcePy.defineSequence('::omero::model::ImageRoisSeq', (), _M_omero.model._t_Roi)

if not _M_omero.model.__dict__.has_key('_t_ImageDatasetLinksSeq'):
    _M_omero.model._t_ImageDatasetLinksSeq = IcePy.defineSequence('::omero::model::ImageDatasetLinksSeq', (), _M_omero.model._t_DatasetImageLink)

if not _M_omero.model.__dict__.has_key('_t_ImageLinkedDatasetSeq'):
    _M_omero.model._t_ImageLinkedDatasetSeq = IcePy.defineSequence('::omero::model::ImageLinkedDatasetSeq', (), _M_omero.model._t_Dataset)

if not _M_omero.model.__dict__.has_key('_t_ImageAnnotationLinksSeq'):
    _M_omero.model._t_ImageAnnotationLinksSeq = IcePy.defineSequence('::omero::model::ImageAnnotationLinksSeq', (), _M_omero.model._t_ImageAnnotationLink)

if not _M_omero.model.__dict__.has_key('_t_ImageLinkedAnnotationSeq'):
    _M_omero.model._t_ImageLinkedAnnotationSeq = IcePy.defineSequence('::omero::model::ImageLinkedAnnotationSeq', (), _M_omero.model._t_Annotation)

if not _M_omero.model.__dict__.has_key('Image'):
    _M_omero.model.Image = Ice.createTempClass()
    class Image(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _acquisitionDate=None, _archived=None, _partial=None, _format=None, _imagingEnvironment=None, _objectiveSettings=None, _instrument=None, _stageLabel=None, _experiment=None, _pixelsSeq=None, _pixelsLoaded=False, _wellSamplesSeq=None, _wellSamplesLoaded=False, _roisSeq=None, _roisLoaded=False, _datasetLinksSeq=None, _datasetLinksLoaded=False, _datasetLinksCountPerOwner=None, _fileset=None, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None, _name=None, _description=None):
            if __builtin__.type(self) == _M_omero.model.Image:
                raise RuntimeError('omero.model.Image is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._acquisitionDate = _acquisitionDate
            self._archived = _archived
            self._partial = _partial
            self._format = _format
            self._imagingEnvironment = _imagingEnvironment
            self._objectiveSettings = _objectiveSettings
            self._instrument = _instrument
            self._stageLabel = _stageLabel
            self._experiment = _experiment
            self._pixelsSeq = _pixelsSeq
            self._pixelsLoaded = _pixelsLoaded
            self._wellSamplesSeq = _wellSamplesSeq
            self._wellSamplesLoaded = _wellSamplesLoaded
            self._roisSeq = _roisSeq
            self._roisLoaded = _roisLoaded
            self._datasetLinksSeq = _datasetLinksSeq
            self._datasetLinksLoaded = _datasetLinksLoaded
            self._datasetLinksCountPerOwner = _datasetLinksCountPerOwner
            self._fileset = _fileset
            self._annotationLinksSeq = _annotationLinksSeq
            self._annotationLinksLoaded = _annotationLinksLoaded
            self._annotationLinksCountPerOwner = _annotationLinksCountPerOwner
            self._name = _name
            self._description = _description

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::Image')

        def ice_id(self, current=None):
            return '::omero::model::Image'

        def ice_staticId():
            return '::omero::model::Image'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getAcquisitionDate(self, current=None):
        # def setAcquisitionDate(self, theAcquisitionDate, current=None):
        # def getArchived(self, current=None):
        # def setArchived(self, theArchived, current=None):
        # def getPartial(self, current=None):
        # def setPartial(self, thePartial, current=None):
        # def getFormat(self, current=None):
        # def setFormat(self, theFormat, current=None):
        # def getImagingEnvironment(self, current=None):
        # def setImagingEnvironment(self, theImagingEnvironment, current=None):
        # def getObjectiveSettings(self, current=None):
        # def setObjectiveSettings(self, theObjectiveSettings, current=None):
        # def getInstrument(self, current=None):
        # def setInstrument(self, theInstrument, current=None):
        # def getStageLabel(self, current=None):
        # def setStageLabel(self, theStageLabel, current=None):
        # def getExperiment(self, current=None):
        # def setExperiment(self, theExperiment, current=None):
        # def unloadPixels(self, current=None):
        # def sizeOfPixels(self, current=None):
        # def copyPixels(self, current=None):
        # def addPixels(self, target, current=None):
        # def addAllPixelsSet(self, targets, current=None):
        # def removePixels(self, theTarget, current=None):
        # def removeAllPixelsSet(self, targets, current=None):
        # def clearPixels(self, current=None):
        # def reloadPixels(self, toCopy, current=None):
        # def getPixels(self, index, current=None):
        # def setPixels(self, index, theElement, current=None):
        # def getPrimaryPixels(self, current=None):
        # def setPrimaryPixels(self, theElement, current=None):
        # def unloadWellSamples(self, current=None):
        # def sizeOfWellSamples(self, current=None):
        # def copyWellSamples(self, current=None):
        # def addWellSample(self, target, current=None):
        # def addAllWellSampleSet(self, targets, current=None):
        # def removeWellSample(self, theTarget, current=None):
        # def removeAllWellSampleSet(self, targets, current=None):
        # def clearWellSamples(self, current=None):
        # def reloadWellSamples(self, toCopy, current=None):
        # def unloadRois(self, current=None):
        # def sizeOfRois(self, current=None):
        # def copyRois(self, current=None):
        # def addRoi(self, target, current=None):
        # def addAllRoiSet(self, targets, current=None):
        # def removeRoi(self, theTarget, current=None):
        # def removeAllRoiSet(self, targets, current=None):
        # def clearRois(self, current=None):
        # def reloadRois(self, toCopy, current=None):
        # def unloadDatasetLinks(self, current=None):
        # def sizeOfDatasetLinks(self, current=None):
        # def copyDatasetLinks(self, current=None):
        # def addDatasetImageLink(self, target, current=None):
        # def addAllDatasetImageLinkSet(self, targets, current=None):
        # def removeDatasetImageLink(self, theTarget, current=None):
        # def removeAllDatasetImageLinkSet(self, targets, current=None):
        # def clearDatasetLinks(self, current=None):
        # def reloadDatasetLinks(self, toCopy, current=None):
        # def getDatasetLinksCountPerOwner(self, current=None):
        # def linkDataset(self, addition, current=None):
        # def addDatasetImageLinkToBoth(self, link, bothSides, current=None):
        # def findDatasetImageLink(self, removal, current=None):
        # def unlinkDataset(self, removal, current=None):
        # def removeDatasetImageLinkFromBoth(self, link, bothSides, current=None):
        # def linkedDatasetList(self, current=None):
        # def getFileset(self, current=None):
        # def setFileset(self, theFileset, current=None):
        # def unloadAnnotationLinks(self, current=None):
        # def sizeOfAnnotationLinks(self, current=None):
        # def copyAnnotationLinks(self, current=None):
        # def addImageAnnotationLink(self, target, current=None):
        # def addAllImageAnnotationLinkSet(self, targets, current=None):
        # def removeImageAnnotationLink(self, theTarget, current=None):
        # def removeAllImageAnnotationLinkSet(self, targets, current=None):
        # def clearAnnotationLinks(self, current=None):
        # def reloadAnnotationLinks(self, toCopy, current=None):
        # def getAnnotationLinksCountPerOwner(self, current=None):
        # def linkAnnotation(self, addition, current=None):
        # def addImageAnnotationLinkToBoth(self, link, bothSides, current=None):
        # def findImageAnnotationLink(self, removal, current=None):
        # def unlinkAnnotation(self, removal, current=None):
        # def removeImageAnnotationLinkFromBoth(self, link, bothSides, current=None):
        # def linkedAnnotationList(self, current=None):
        # def getName(self, current=None):
        # def setName(self, theName, current=None):
        # def getDescription(self, current=None):
        # def setDescription(self, theDescription, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Image)

        __repr__ = __str__

    _M_omero.model.ImagePrx = Ice.createTempClass()
    class ImagePrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.Image._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.Image._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getAcquisitionDate(self, _ctx=None):
            return _M_omero.model.Image._op_getAcquisitionDate.invoke(self, ((), _ctx))

        def setAcquisitionDate(self, theAcquisitionDate, _ctx=None):
            return _M_omero.model.Image._op_setAcquisitionDate.invoke(self, ((theAcquisitionDate, ), _ctx))

        def getArchived(self, _ctx=None):
            return _M_omero.model.Image._op_getArchived.invoke(self, ((), _ctx))

        def setArchived(self, theArchived, _ctx=None):
            return _M_omero.model.Image._op_setArchived.invoke(self, ((theArchived, ), _ctx))

        def getPartial(self, _ctx=None):
            return _M_omero.model.Image._op_getPartial.invoke(self, ((), _ctx))

        def setPartial(self, thePartial, _ctx=None):
            return _M_omero.model.Image._op_setPartial.invoke(self, ((thePartial, ), _ctx))

        def getFormat(self, _ctx=None):
            return _M_omero.model.Image._op_getFormat.invoke(self, ((), _ctx))

        def setFormat(self, theFormat, _ctx=None):
            return _M_omero.model.Image._op_setFormat.invoke(self, ((theFormat, ), _ctx))

        def getImagingEnvironment(self, _ctx=None):
            return _M_omero.model.Image._op_getImagingEnvironment.invoke(self, ((), _ctx))

        def setImagingEnvironment(self, theImagingEnvironment, _ctx=None):
            return _M_omero.model.Image._op_setImagingEnvironment.invoke(self, ((theImagingEnvironment, ), _ctx))

        def getObjectiveSettings(self, _ctx=None):
            return _M_omero.model.Image._op_getObjectiveSettings.invoke(self, ((), _ctx))

        def setObjectiveSettings(self, theObjectiveSettings, _ctx=None):
            return _M_omero.model.Image._op_setObjectiveSettings.invoke(self, ((theObjectiveSettings, ), _ctx))

        def getInstrument(self, _ctx=None):
            return _M_omero.model.Image._op_getInstrument.invoke(self, ((), _ctx))

        def setInstrument(self, theInstrument, _ctx=None):
            return _M_omero.model.Image._op_setInstrument.invoke(self, ((theInstrument, ), _ctx))

        def getStageLabel(self, _ctx=None):
            return _M_omero.model.Image._op_getStageLabel.invoke(self, ((), _ctx))

        def setStageLabel(self, theStageLabel, _ctx=None):
            return _M_omero.model.Image._op_setStageLabel.invoke(self, ((theStageLabel, ), _ctx))

        def getExperiment(self, _ctx=None):
            return _M_omero.model.Image._op_getExperiment.invoke(self, ((), _ctx))

        def setExperiment(self, theExperiment, _ctx=None):
            return _M_omero.model.Image._op_setExperiment.invoke(self, ((theExperiment, ), _ctx))

        def unloadPixels(self, _ctx=None):
            return _M_omero.model.Image._op_unloadPixels.invoke(self, ((), _ctx))

        def sizeOfPixels(self, _ctx=None):
            return _M_omero.model.Image._op_sizeOfPixels.invoke(self, ((), _ctx))

        def copyPixels(self, _ctx=None):
            return _M_omero.model.Image._op_copyPixels.invoke(self, ((), _ctx))

        def addPixels(self, target, _ctx=None):
            return _M_omero.model.Image._op_addPixels.invoke(self, ((target, ), _ctx))

        def addAllPixelsSet(self, targets, _ctx=None):
            return _M_omero.model.Image._op_addAllPixelsSet.invoke(self, ((targets, ), _ctx))

        def removePixels(self, theTarget, _ctx=None):
            return _M_omero.model.Image._op_removePixels.invoke(self, ((theTarget, ), _ctx))

        def removeAllPixelsSet(self, targets, _ctx=None):
            return _M_omero.model.Image._op_removeAllPixelsSet.invoke(self, ((targets, ), _ctx))

        def clearPixels(self, _ctx=None):
            return _M_omero.model.Image._op_clearPixels.invoke(self, ((), _ctx))

        def reloadPixels(self, toCopy, _ctx=None):
            return _M_omero.model.Image._op_reloadPixels.invoke(self, ((toCopy, ), _ctx))

        def getPixels(self, index, _ctx=None):
            return _M_omero.model.Image._op_getPixels.invoke(self, ((index, ), _ctx))

        def setPixels(self, index, theElement, _ctx=None):
            return _M_omero.model.Image._op_setPixels.invoke(self, ((index, theElement), _ctx))

        def getPrimaryPixels(self, _ctx=None):
            return _M_omero.model.Image._op_getPrimaryPixels.invoke(self, ((), _ctx))

        def setPrimaryPixels(self, theElement, _ctx=None):
            return _M_omero.model.Image._op_setPrimaryPixels.invoke(self, ((theElement, ), _ctx))

        def unloadWellSamples(self, _ctx=None):
            return _M_omero.model.Image._op_unloadWellSamples.invoke(self, ((), _ctx))

        def sizeOfWellSamples(self, _ctx=None):
            return _M_omero.model.Image._op_sizeOfWellSamples.invoke(self, ((), _ctx))

        def copyWellSamples(self, _ctx=None):
            return _M_omero.model.Image._op_copyWellSamples.invoke(self, ((), _ctx))

        def addWellSample(self, target, _ctx=None):
            return _M_omero.model.Image._op_addWellSample.invoke(self, ((target, ), _ctx))

        def addAllWellSampleSet(self, targets, _ctx=None):
            return _M_omero.model.Image._op_addAllWellSampleSet.invoke(self, ((targets, ), _ctx))

        def removeWellSample(self, theTarget, _ctx=None):
            return _M_omero.model.Image._op_removeWellSample.invoke(self, ((theTarget, ), _ctx))

        def removeAllWellSampleSet(self, targets, _ctx=None):
            return _M_omero.model.Image._op_removeAllWellSampleSet.invoke(self, ((targets, ), _ctx))

        def clearWellSamples(self, _ctx=None):
            return _M_omero.model.Image._op_clearWellSamples.invoke(self, ((), _ctx))

        def reloadWellSamples(self, toCopy, _ctx=None):
            return _M_omero.model.Image._op_reloadWellSamples.invoke(self, ((toCopy, ), _ctx))

        def unloadRois(self, _ctx=None):
            return _M_omero.model.Image._op_unloadRois.invoke(self, ((), _ctx))

        def sizeOfRois(self, _ctx=None):
            return _M_omero.model.Image._op_sizeOfRois.invoke(self, ((), _ctx))

        def copyRois(self, _ctx=None):
            return _M_omero.model.Image._op_copyRois.invoke(self, ((), _ctx))

        def addRoi(self, target, _ctx=None):
            return _M_omero.model.Image._op_addRoi.invoke(self, ((target, ), _ctx))

        def addAllRoiSet(self, targets, _ctx=None):
            return _M_omero.model.Image._op_addAllRoiSet.invoke(self, ((targets, ), _ctx))

        def removeRoi(self, theTarget, _ctx=None):
            return _M_omero.model.Image._op_removeRoi.invoke(self, ((theTarget, ), _ctx))

        def removeAllRoiSet(self, targets, _ctx=None):
            return _M_omero.model.Image._op_removeAllRoiSet.invoke(self, ((targets, ), _ctx))

        def clearRois(self, _ctx=None):
            return _M_omero.model.Image._op_clearRois.invoke(self, ((), _ctx))

        def reloadRois(self, toCopy, _ctx=None):
            return _M_omero.model.Image._op_reloadRois.invoke(self, ((toCopy, ), _ctx))

        def unloadDatasetLinks(self, _ctx=None):
            return _M_omero.model.Image._op_unloadDatasetLinks.invoke(self, ((), _ctx))

        def sizeOfDatasetLinks(self, _ctx=None):
            return _M_omero.model.Image._op_sizeOfDatasetLinks.invoke(self, ((), _ctx))

        def copyDatasetLinks(self, _ctx=None):
            return _M_omero.model.Image._op_copyDatasetLinks.invoke(self, ((), _ctx))

        def addDatasetImageLink(self, target, _ctx=None):
            return _M_omero.model.Image._op_addDatasetImageLink.invoke(self, ((target, ), _ctx))

        def addAllDatasetImageLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Image._op_addAllDatasetImageLinkSet.invoke(self, ((targets, ), _ctx))

        def removeDatasetImageLink(self, theTarget, _ctx=None):
            return _M_omero.model.Image._op_removeDatasetImageLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllDatasetImageLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Image._op_removeAllDatasetImageLinkSet.invoke(self, ((targets, ), _ctx))

        def clearDatasetLinks(self, _ctx=None):
            return _M_omero.model.Image._op_clearDatasetLinks.invoke(self, ((), _ctx))

        def reloadDatasetLinks(self, toCopy, _ctx=None):
            return _M_omero.model.Image._op_reloadDatasetLinks.invoke(self, ((toCopy, ), _ctx))

        def getDatasetLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.Image._op_getDatasetLinksCountPerOwner.invoke(self, ((), _ctx))

        def linkDataset(self, addition, _ctx=None):
            return _M_omero.model.Image._op_linkDataset.invoke(self, ((addition, ), _ctx))

        def addDatasetImageLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Image._op_addDatasetImageLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findDatasetImageLink(self, removal, _ctx=None):
            return _M_omero.model.Image._op_findDatasetImageLink.invoke(self, ((removal, ), _ctx))

        def unlinkDataset(self, removal, _ctx=None):
            return _M_omero.model.Image._op_unlinkDataset.invoke(self, ((removal, ), _ctx))

        def removeDatasetImageLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Image._op_removeDatasetImageLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedDatasetList(self, _ctx=None):
            return _M_omero.model.Image._op_linkedDatasetList.invoke(self, ((), _ctx))

        def getFileset(self, _ctx=None):
            return _M_omero.model.Image._op_getFileset.invoke(self, ((), _ctx))

        def setFileset(self, theFileset, _ctx=None):
            return _M_omero.model.Image._op_setFileset.invoke(self, ((theFileset, ), _ctx))

        def unloadAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Image._op_unloadAnnotationLinks.invoke(self, ((), _ctx))

        def sizeOfAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Image._op_sizeOfAnnotationLinks.invoke(self, ((), _ctx))

        def copyAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Image._op_copyAnnotationLinks.invoke(self, ((), _ctx))

        def addImageAnnotationLink(self, target, _ctx=None):
            return _M_omero.model.Image._op_addImageAnnotationLink.invoke(self, ((target, ), _ctx))

        def addAllImageAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Image._op_addAllImageAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def removeImageAnnotationLink(self, theTarget, _ctx=None):
            return _M_omero.model.Image._op_removeImageAnnotationLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllImageAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Image._op_removeAllImageAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def clearAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Image._op_clearAnnotationLinks.invoke(self, ((), _ctx))

        def reloadAnnotationLinks(self, toCopy, _ctx=None):
            return _M_omero.model.Image._op_reloadAnnotationLinks.invoke(self, ((toCopy, ), _ctx))

        def getAnnotationLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.Image._op_getAnnotationLinksCountPerOwner.invoke(self, ((), _ctx))

        def linkAnnotation(self, addition, _ctx=None):
            return _M_omero.model.Image._op_linkAnnotation.invoke(self, ((addition, ), _ctx))

        def addImageAnnotationLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Image._op_addImageAnnotationLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findImageAnnotationLink(self, removal, _ctx=None):
            return _M_omero.model.Image._op_findImageAnnotationLink.invoke(self, ((removal, ), _ctx))

        def unlinkAnnotation(self, removal, _ctx=None):
            return _M_omero.model.Image._op_unlinkAnnotation.invoke(self, ((removal, ), _ctx))

        def removeImageAnnotationLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Image._op_removeImageAnnotationLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedAnnotationList(self, _ctx=None):
            return _M_omero.model.Image._op_linkedAnnotationList.invoke(self, ((), _ctx))

        def getName(self, _ctx=None):
            return _M_omero.model.Image._op_getName.invoke(self, ((), _ctx))

        def setName(self, theName, _ctx=None):
            return _M_omero.model.Image._op_setName.invoke(self, ((theName, ), _ctx))

        def getDescription(self, _ctx=None):
            return _M_omero.model.Image._op_getDescription.invoke(self, ((), _ctx))

        def setDescription(self, theDescription, _ctx=None):
            return _M_omero.model.Image._op_setDescription.invoke(self, ((theDescription, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.ImagePrx.ice_checkedCast(proxy, '::omero::model::Image', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.ImagePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_ImagePrx = IcePy.defineProxy('::omero::model::Image', ImagePrx)

    _M_omero.model._t_Image = IcePy.declareClass('::omero::model::Image')

    _M_omero.model._t_Image = IcePy.defineClass('::omero::model::Image', Image, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_acquisitionDate', (), _M_omero._t_RTime),
        ('_archived', (), _M_omero._t_RBool),
        ('_partial', (), _M_omero._t_RBool),
        ('_format', (), _M_omero.model._t_Format),
        ('_imagingEnvironment', (), _M_omero.model._t_ImagingEnvironment),
        ('_objectiveSettings', (), _M_omero.model._t_ObjectiveSettings),
        ('_instrument', (), _M_omero.model._t_Instrument),
        ('_stageLabel', (), _M_omero.model._t_StageLabel),
        ('_experiment', (), _M_omero.model._t_Experiment),
        ('_pixelsSeq', (), _M_omero.model._t_ImagePixelsSeq),
        ('_pixelsLoaded', (), IcePy._t_bool),
        ('_wellSamplesSeq', (), _M_omero.model._t_ImageWellSamplesSeq),
        ('_wellSamplesLoaded', (), IcePy._t_bool),
        ('_roisSeq', (), _M_omero.model._t_ImageRoisSeq),
        ('_roisLoaded', (), IcePy._t_bool),
        ('_datasetLinksSeq', (), _M_omero.model._t_ImageDatasetLinksSeq),
        ('_datasetLinksLoaded', (), IcePy._t_bool),
        ('_datasetLinksCountPerOwner', (), _M_omero.sys._t_CountMap),
        ('_fileset', (), _M_omero.model._t_Fileset),
        ('_annotationLinksSeq', (), _M_omero.model._t_ImageAnnotationLinksSeq),
        ('_annotationLinksLoaded', (), IcePy._t_bool),
        ('_annotationLinksCountPerOwner', (), _M_omero.sys._t_CountMap),
        ('_name', (), _M_omero._t_RString),
        ('_description', (), _M_omero._t_RString)
    ))
    Image.ice_type = _M_omero.model._t_Image

    Image._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Image._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Image._op_getAcquisitionDate = IcePy.Operation('getAcquisitionDate', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RTime, ())
    Image._op_setAcquisitionDate = IcePy.Operation('setAcquisitionDate', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RTime),), (), None, ())
    Image._op_getArchived = IcePy.Operation('getArchived', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RBool, ())
    Image._op_setArchived = IcePy.Operation('setArchived', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RBool),), (), None, ())
    Image._op_getPartial = IcePy.Operation('getPartial', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RBool, ())
    Image._op_setPartial = IcePy.Operation('setPartial', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RBool),), (), None, ())
    Image._op_getFormat = IcePy.Operation('getFormat', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Format, ())
    Image._op_setFormat = IcePy.Operation('setFormat', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Format),), (), None, ())
    Image._op_getImagingEnvironment = IcePy.Operation('getImagingEnvironment', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ImagingEnvironment, ())
    Image._op_setImagingEnvironment = IcePy.Operation('setImagingEnvironment', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ImagingEnvironment),), (), None, ())
    Image._op_getObjectiveSettings = IcePy.Operation('getObjectiveSettings', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ObjectiveSettings, ())
    Image._op_setObjectiveSettings = IcePy.Operation('setObjectiveSettings', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ObjectiveSettings),), (), None, ())
    Image._op_getInstrument = IcePy.Operation('getInstrument', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Instrument, ())
    Image._op_setInstrument = IcePy.Operation('setInstrument', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Instrument),), (), None, ())
    Image._op_getStageLabel = IcePy.Operation('getStageLabel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_StageLabel, ())
    Image._op_setStageLabel = IcePy.Operation('setStageLabel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_StageLabel),), (), None, ())
    Image._op_getExperiment = IcePy.Operation('getExperiment', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Experiment, ())
    Image._op_setExperiment = IcePy.Operation('setExperiment', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Experiment),), (), None, ())
    Image._op_unloadPixels = IcePy.Operation('unloadPixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Image._op_sizeOfPixels = IcePy.Operation('sizeOfPixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Image._op_copyPixels = IcePy.Operation('copyPixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ImagePixelsSeq, ())
    Image._op_addPixels = IcePy.Operation('addPixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Pixels),), (), None, ())
    Image._op_addAllPixelsSet = IcePy.Operation('addAllPixelsSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ImagePixelsSeq),), (), None, ())
    Image._op_removePixels = IcePy.Operation('removePixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Pixels),), (), None, ())
    Image._op_removeAllPixelsSet = IcePy.Operation('removeAllPixelsSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ImagePixelsSeq),), (), None, ())
    Image._op_clearPixels = IcePy.Operation('clearPixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Image._op_reloadPixels = IcePy.Operation('reloadPixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Image),), (), None, ())
    Image._op_getPixels = IcePy.Operation('getPixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int),), (), _M_omero.model._t_Pixels, ())
    Image._op_setPixels = IcePy.Operation('setPixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int), ((), _M_omero.model._t_Pixels)), (), _M_omero.model._t_Pixels, ())
    Image._op_getPrimaryPixels = IcePy.Operation('getPrimaryPixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Pixels, ())
    Image._op_setPrimaryPixels = IcePy.Operation('setPrimaryPixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Pixels),), (), _M_omero.model._t_Pixels, ())
    Image._op_unloadWellSamples = IcePy.Operation('unloadWellSamples', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Image._op_sizeOfWellSamples = IcePy.Operation('sizeOfWellSamples', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Image._op_copyWellSamples = IcePy.Operation('copyWellSamples', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ImageWellSamplesSeq, ())
    Image._op_addWellSample = IcePy.Operation('addWellSample', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellSample),), (), None, ())
    Image._op_addAllWellSampleSet = IcePy.Operation('addAllWellSampleSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ImageWellSamplesSeq),), (), None, ())
    Image._op_removeWellSample = IcePy.Operation('removeWellSample', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_WellSample),), (), None, ())
    Image._op_removeAllWellSampleSet = IcePy.Operation('removeAllWellSampleSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ImageWellSamplesSeq),), (), None, ())
    Image._op_clearWellSamples = IcePy.Operation('clearWellSamples', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Image._op_reloadWellSamples = IcePy.Operation('reloadWellSamples', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Image),), (), None, ())
    Image._op_unloadRois = IcePy.Operation('unloadRois', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Image._op_sizeOfRois = IcePy.Operation('sizeOfRois', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Image._op_copyRois = IcePy.Operation('copyRois', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ImageRoisSeq, ())
    Image._op_addRoi = IcePy.Operation('addRoi', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Roi),), (), None, ())
    Image._op_addAllRoiSet = IcePy.Operation('addAllRoiSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ImageRoisSeq),), (), None, ())
    Image._op_removeRoi = IcePy.Operation('removeRoi', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Roi),), (), None, ())
    Image._op_removeAllRoiSet = IcePy.Operation('removeAllRoiSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ImageRoisSeq),), (), None, ())
    Image._op_clearRois = IcePy.Operation('clearRois', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Image._op_reloadRois = IcePy.Operation('reloadRois', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Image),), (), None, ())
    Image._op_unloadDatasetLinks = IcePy.Operation('unloadDatasetLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Image._op_sizeOfDatasetLinks = IcePy.Operation('sizeOfDatasetLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Image._op_copyDatasetLinks = IcePy.Operation('copyDatasetLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ImageDatasetLinksSeq, ())
    Image._op_addDatasetImageLink = IcePy.Operation('addDatasetImageLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_DatasetImageLink),), (), None, ())
    Image._op_addAllDatasetImageLinkSet = IcePy.Operation('addAllDatasetImageLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ImageDatasetLinksSeq),), (), None, ())
    Image._op_removeDatasetImageLink = IcePy.Operation('removeDatasetImageLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_DatasetImageLink),), (), None, ())
    Image._op_removeAllDatasetImageLinkSet = IcePy.Operation('removeAllDatasetImageLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ImageDatasetLinksSeq),), (), None, ())
    Image._op_clearDatasetLinks = IcePy.Operation('clearDatasetLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Image._op_reloadDatasetLinks = IcePy.Operation('reloadDatasetLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Image),), (), None, ())
    Image._op_getDatasetLinksCountPerOwner = IcePy.Operation('getDatasetLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    Image._op_linkDataset = IcePy.Operation('linkDataset', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Dataset),), (), _M_omero.model._t_DatasetImageLink, ())
    Image._op_addDatasetImageLinkToBoth = IcePy.Operation('addDatasetImageLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_DatasetImageLink), ((), IcePy._t_bool)), (), None, ())
    Image._op_findDatasetImageLink = IcePy.Operation('findDatasetImageLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Dataset),), (), _M_omero.model._t_ImageDatasetLinksSeq, ())
    Image._op_unlinkDataset = IcePy.Operation('unlinkDataset', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Dataset),), (), None, ())
    Image._op_removeDatasetImageLinkFromBoth = IcePy.Operation('removeDatasetImageLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_DatasetImageLink), ((), IcePy._t_bool)), (), None, ())
    Image._op_linkedDatasetList = IcePy.Operation('linkedDatasetList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ImageLinkedDatasetSeq, ())
    Image._op_getFileset = IcePy.Operation('getFileset', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Fileset, ())
    Image._op_setFileset = IcePy.Operation('setFileset', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Fileset),), (), None, ())
    Image._op_unloadAnnotationLinks = IcePy.Operation('unloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Image._op_sizeOfAnnotationLinks = IcePy.Operation('sizeOfAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Image._op_copyAnnotationLinks = IcePy.Operation('copyAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ImageAnnotationLinksSeq, ())
    Image._op_addImageAnnotationLink = IcePy.Operation('addImageAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ImageAnnotationLink),), (), None, ())
    Image._op_addAllImageAnnotationLinkSet = IcePy.Operation('addAllImageAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ImageAnnotationLinksSeq),), (), None, ())
    Image._op_removeImageAnnotationLink = IcePy.Operation('removeImageAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ImageAnnotationLink),), (), None, ())
    Image._op_removeAllImageAnnotationLinkSet = IcePy.Operation('removeAllImageAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ImageAnnotationLinksSeq),), (), None, ())
    Image._op_clearAnnotationLinks = IcePy.Operation('clearAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Image._op_reloadAnnotationLinks = IcePy.Operation('reloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Image),), (), None, ())
    Image._op_getAnnotationLinksCountPerOwner = IcePy.Operation('getAnnotationLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    Image._op_linkAnnotation = IcePy.Operation('linkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_ImageAnnotationLink, ())
    Image._op_addImageAnnotationLinkToBoth = IcePy.Operation('addImageAnnotationLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ImageAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Image._op_findImageAnnotationLink = IcePy.Operation('findImageAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_ImageAnnotationLinksSeq, ())
    Image._op_unlinkAnnotation = IcePy.Operation('unlinkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), None, ())
    Image._op_removeImageAnnotationLinkFromBoth = IcePy.Operation('removeImageAnnotationLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ImageAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Image._op_linkedAnnotationList = IcePy.Operation('linkedAnnotationList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ImageLinkedAnnotationSeq, ())
    Image._op_getName = IcePy.Operation('getName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Image._op_setName = IcePy.Operation('setName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Image._op_getDescription = IcePy.Operation('getDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Image._op_setDescription = IcePy.Operation('setDescription', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.Image = Image
    del Image

    _M_omero.model.ImagePrx = ImagePrx
    del ImagePrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
