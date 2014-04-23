// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Image.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Image_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Image_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/Incoming.h>
#include <Ice/Direct.h>
#include <Ice/FactoryTable.h>
#include <Ice/StreamF.h>
#include <omero/model/IObject.h>
#include <omero/RTypes.h>
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

namespace model
{

class Format;

class ImagingEnvironment;

class ObjectiveSettings;

class Instrument;

class StageLabel;

class Experiment;

class Pixels;

class WellSample;

class Roi;

class DatasetImageLink;

class Dataset;

class Fileset;

class ImageAnnotationLink;

class Annotation;

class Details;

class Image;

}

}

}

namespace omero
{

namespace model
{

class Format;
bool operator==(const Format&, const Format&);
bool operator<(const Format&, const Format&);

class ImagingEnvironment;
bool operator==(const ImagingEnvironment&, const ImagingEnvironment&);
bool operator<(const ImagingEnvironment&, const ImagingEnvironment&);

class ObjectiveSettings;
bool operator==(const ObjectiveSettings&, const ObjectiveSettings&);
bool operator<(const ObjectiveSettings&, const ObjectiveSettings&);

class Instrument;
bool operator==(const Instrument&, const Instrument&);
bool operator<(const Instrument&, const Instrument&);

class StageLabel;
bool operator==(const StageLabel&, const StageLabel&);
bool operator<(const StageLabel&, const StageLabel&);

class Experiment;
bool operator==(const Experiment&, const Experiment&);
bool operator<(const Experiment&, const Experiment&);

class Pixels;
bool operator==(const Pixels&, const Pixels&);
bool operator<(const Pixels&, const Pixels&);

class WellSample;
bool operator==(const WellSample&, const WellSample&);
bool operator<(const WellSample&, const WellSample&);

class Roi;
bool operator==(const Roi&, const Roi&);
bool operator<(const Roi&, const Roi&);

class DatasetImageLink;
bool operator==(const DatasetImageLink&, const DatasetImageLink&);
bool operator<(const DatasetImageLink&, const DatasetImageLink&);

class Dataset;
bool operator==(const Dataset&, const Dataset&);
bool operator<(const Dataset&, const Dataset&);

class Fileset;
bool operator==(const Fileset&, const Fileset&);
bool operator<(const Fileset&, const Fileset&);

class ImageAnnotationLink;
bool operator==(const ImageAnnotationLink&, const ImageAnnotationLink&);
bool operator<(const ImageAnnotationLink&, const ImageAnnotationLink&);

class Annotation;
bool operator==(const Annotation&, const Annotation&);
bool operator<(const Annotation&, const Annotation&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class Image;
bool operator==(const Image&, const Image&);
bool operator<(const Image&, const Image&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Format*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Format*);

::Ice::Object* upCast(::omero::model::ImagingEnvironment*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::ImagingEnvironment*);

::Ice::Object* upCast(::omero::model::ObjectiveSettings*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::ObjectiveSettings*);

::Ice::Object* upCast(::omero::model::Instrument*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Instrument*);

::Ice::Object* upCast(::omero::model::StageLabel*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::StageLabel*);

::Ice::Object* upCast(::omero::model::Experiment*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Experiment*);

::Ice::Object* upCast(::omero::model::Pixels*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Pixels*);

::Ice::Object* upCast(::omero::model::WellSample*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::WellSample*);

::Ice::Object* upCast(::omero::model::Roi*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Roi*);

::Ice::Object* upCast(::omero::model::DatasetImageLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::DatasetImageLink*);

::Ice::Object* upCast(::omero::model::Dataset*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Dataset*);

::Ice::Object* upCast(::omero::model::Fileset*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Fileset*);

::Ice::Object* upCast(::omero::model::ImageAnnotationLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::ImageAnnotationLink*);

::Ice::Object* upCast(::omero::model::Annotation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Annotation*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::Image*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Image*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Format> FormatPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Format> FormatPrx;

void __read(::IceInternal::BasicStream*, FormatPrx&);
void __patch__FormatPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::ImagingEnvironment> ImagingEnvironmentPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ImagingEnvironment> ImagingEnvironmentPrx;

void __read(::IceInternal::BasicStream*, ImagingEnvironmentPrx&);
void __patch__ImagingEnvironmentPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::ObjectiveSettings> ObjectiveSettingsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ObjectiveSettings> ObjectiveSettingsPrx;

void __read(::IceInternal::BasicStream*, ObjectiveSettingsPrx&);
void __patch__ObjectiveSettingsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Instrument> InstrumentPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Instrument> InstrumentPrx;

void __read(::IceInternal::BasicStream*, InstrumentPrx&);
void __patch__InstrumentPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::StageLabel> StageLabelPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::StageLabel> StageLabelPrx;

void __read(::IceInternal::BasicStream*, StageLabelPrx&);
void __patch__StageLabelPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Experiment> ExperimentPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Experiment> ExperimentPrx;

void __read(::IceInternal::BasicStream*, ExperimentPrx&);
void __patch__ExperimentPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Pixels> PixelsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Pixels> PixelsPrx;

void __read(::IceInternal::BasicStream*, PixelsPrx&);
void __patch__PixelsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::WellSample> WellSamplePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::WellSample> WellSamplePrx;

void __read(::IceInternal::BasicStream*, WellSamplePrx&);
void __patch__WellSamplePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Roi> RoiPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Roi> RoiPrx;

void __read(::IceInternal::BasicStream*, RoiPrx&);
void __patch__RoiPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::DatasetImageLink> DatasetImageLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::DatasetImageLink> DatasetImageLinkPrx;

void __read(::IceInternal::BasicStream*, DatasetImageLinkPrx&);
void __patch__DatasetImageLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Dataset> DatasetPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Dataset> DatasetPrx;

void __read(::IceInternal::BasicStream*, DatasetPrx&);
void __patch__DatasetPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Fileset> FilesetPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Fileset> FilesetPrx;

void __read(::IceInternal::BasicStream*, FilesetPrx&);
void __patch__FilesetPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::ImageAnnotationLink> ImageAnnotationLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ImageAnnotationLink> ImageAnnotationLinkPrx;

void __read(::IceInternal::BasicStream*, ImageAnnotationLinkPrx&);
void __patch__ImageAnnotationLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Annotation> AnnotationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Annotation> AnnotationPrx;

void __read(::IceInternal::BasicStream*, AnnotationPrx&);
void __patch__AnnotationPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Image> ImagePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Image> ImagePrx;

void __read(::IceInternal::BasicStream*, ImagePrx&);
void __patch__ImagePtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

typedef ::std::vector< ::omero::model::PixelsPtr> ImagePixelsSeq;
void __writeImagePixelsSeq(::IceInternal::BasicStream*, const ::omero::model::PixelsPtr*, const ::omero::model::PixelsPtr*);
void __readImagePixelsSeq(::IceInternal::BasicStream*, ImagePixelsSeq&);

typedef ::std::vector< ::omero::model::WellSamplePtr> ImageWellSamplesSeq;
void __writeImageWellSamplesSeq(::IceInternal::BasicStream*, const ::omero::model::WellSamplePtr*, const ::omero::model::WellSamplePtr*);
void __readImageWellSamplesSeq(::IceInternal::BasicStream*, ImageWellSamplesSeq&);

typedef ::std::vector< ::omero::model::RoiPtr> ImageRoisSeq;
void __writeImageRoisSeq(::IceInternal::BasicStream*, const ::omero::model::RoiPtr*, const ::omero::model::RoiPtr*);
void __readImageRoisSeq(::IceInternal::BasicStream*, ImageRoisSeq&);

typedef ::std::vector< ::omero::model::DatasetImageLinkPtr> ImageDatasetLinksSeq;
void __writeImageDatasetLinksSeq(::IceInternal::BasicStream*, const ::omero::model::DatasetImageLinkPtr*, const ::omero::model::DatasetImageLinkPtr*);
void __readImageDatasetLinksSeq(::IceInternal::BasicStream*, ImageDatasetLinksSeq&);

typedef ::std::vector< ::omero::model::DatasetPtr> ImageLinkedDatasetSeq;
void __writeImageLinkedDatasetSeq(::IceInternal::BasicStream*, const ::omero::model::DatasetPtr*, const ::omero::model::DatasetPtr*);
void __readImageLinkedDatasetSeq(::IceInternal::BasicStream*, ImageLinkedDatasetSeq&);

typedef ::std::vector< ::omero::model::ImageAnnotationLinkPtr> ImageAnnotationLinksSeq;
void __writeImageAnnotationLinksSeq(::IceInternal::BasicStream*, const ::omero::model::ImageAnnotationLinkPtr*, const ::omero::model::ImageAnnotationLinkPtr*);
void __readImageAnnotationLinksSeq(::IceInternal::BasicStream*, ImageAnnotationLinksSeq&);

typedef ::std::vector< ::omero::model::AnnotationPtr> ImageLinkedAnnotationSeq;
void __writeImageLinkedAnnotationSeq(::IceInternal::BasicStream*, const ::omero::model::AnnotationPtr*, const ::omero::model::AnnotationPtr*);
void __readImageLinkedAnnotationSeq(::IceInternal::BasicStream*, ImageLinkedAnnotationSeq&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Image : virtual public ::IceProxy::omero::model::IObject
{
public:

    ::omero::RIntPtr getVersion()
    {
        return getVersion(0);
    }
    ::omero::RIntPtr getVersion(const ::Ice::Context& __ctx)
    {
        return getVersion(&__ctx);
    }
    
private:

    ::omero::RIntPtr getVersion(const ::Ice::Context*);
    
public:

    void setVersion(const ::omero::RIntPtr& theVersion)
    {
        setVersion(theVersion, 0);
    }
    void setVersion(const ::omero::RIntPtr& theVersion, const ::Ice::Context& __ctx)
    {
        setVersion(theVersion, &__ctx);
    }
    
private:

    void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RTimePtr getAcquisitionDate()
    {
        return getAcquisitionDate(0);
    }
    ::omero::RTimePtr getAcquisitionDate(const ::Ice::Context& __ctx)
    {
        return getAcquisitionDate(&__ctx);
    }
    
private:

    ::omero::RTimePtr getAcquisitionDate(const ::Ice::Context*);
    
public:

    void setAcquisitionDate(const ::omero::RTimePtr& theAcquisitionDate)
    {
        setAcquisitionDate(theAcquisitionDate, 0);
    }
    void setAcquisitionDate(const ::omero::RTimePtr& theAcquisitionDate, const ::Ice::Context& __ctx)
    {
        setAcquisitionDate(theAcquisitionDate, &__ctx);
    }
    
private:

    void setAcquisitionDate(const ::omero::RTimePtr&, const ::Ice::Context*);
    
public:

    ::omero::RBoolPtr getArchived()
    {
        return getArchived(0);
    }
    ::omero::RBoolPtr getArchived(const ::Ice::Context& __ctx)
    {
        return getArchived(&__ctx);
    }
    
private:

    ::omero::RBoolPtr getArchived(const ::Ice::Context*);
    
public:

    void setArchived(const ::omero::RBoolPtr& theArchived)
    {
        setArchived(theArchived, 0);
    }
    void setArchived(const ::omero::RBoolPtr& theArchived, const ::Ice::Context& __ctx)
    {
        setArchived(theArchived, &__ctx);
    }
    
private:

    void setArchived(const ::omero::RBoolPtr&, const ::Ice::Context*);
    
public:

    ::omero::RBoolPtr getPartial()
    {
        return getPartial(0);
    }
    ::omero::RBoolPtr getPartial(const ::Ice::Context& __ctx)
    {
        return getPartial(&__ctx);
    }
    
private:

    ::omero::RBoolPtr getPartial(const ::Ice::Context*);
    
public:

    void setPartial(const ::omero::RBoolPtr& thePartial)
    {
        setPartial(thePartial, 0);
    }
    void setPartial(const ::omero::RBoolPtr& thePartial, const ::Ice::Context& __ctx)
    {
        setPartial(thePartial, &__ctx);
    }
    
private:

    void setPartial(const ::omero::RBoolPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::FormatPtr getFormat()
    {
        return getFormat(0);
    }
    ::omero::model::FormatPtr getFormat(const ::Ice::Context& __ctx)
    {
        return getFormat(&__ctx);
    }
    
private:

    ::omero::model::FormatPtr getFormat(const ::Ice::Context*);
    
public:

    void setFormat(const ::omero::model::FormatPtr& theFormat)
    {
        setFormat(theFormat, 0);
    }
    void setFormat(const ::omero::model::FormatPtr& theFormat, const ::Ice::Context& __ctx)
    {
        setFormat(theFormat, &__ctx);
    }
    
private:

    void setFormat(const ::omero::model::FormatPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::ImagingEnvironmentPtr getImagingEnvironment()
    {
        return getImagingEnvironment(0);
    }
    ::omero::model::ImagingEnvironmentPtr getImagingEnvironment(const ::Ice::Context& __ctx)
    {
        return getImagingEnvironment(&__ctx);
    }
    
private:

    ::omero::model::ImagingEnvironmentPtr getImagingEnvironment(const ::Ice::Context*);
    
public:

    void setImagingEnvironment(const ::omero::model::ImagingEnvironmentPtr& theImagingEnvironment)
    {
        setImagingEnvironment(theImagingEnvironment, 0);
    }
    void setImagingEnvironment(const ::omero::model::ImagingEnvironmentPtr& theImagingEnvironment, const ::Ice::Context& __ctx)
    {
        setImagingEnvironment(theImagingEnvironment, &__ctx);
    }
    
private:

    void setImagingEnvironment(const ::omero::model::ImagingEnvironmentPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::ObjectiveSettingsPtr getObjectiveSettings()
    {
        return getObjectiveSettings(0);
    }
    ::omero::model::ObjectiveSettingsPtr getObjectiveSettings(const ::Ice::Context& __ctx)
    {
        return getObjectiveSettings(&__ctx);
    }
    
private:

    ::omero::model::ObjectiveSettingsPtr getObjectiveSettings(const ::Ice::Context*);
    
public:

    void setObjectiveSettings(const ::omero::model::ObjectiveSettingsPtr& theObjectiveSettings)
    {
        setObjectiveSettings(theObjectiveSettings, 0);
    }
    void setObjectiveSettings(const ::omero::model::ObjectiveSettingsPtr& theObjectiveSettings, const ::Ice::Context& __ctx)
    {
        setObjectiveSettings(theObjectiveSettings, &__ctx);
    }
    
private:

    void setObjectiveSettings(const ::omero::model::ObjectiveSettingsPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::InstrumentPtr getInstrument()
    {
        return getInstrument(0);
    }
    ::omero::model::InstrumentPtr getInstrument(const ::Ice::Context& __ctx)
    {
        return getInstrument(&__ctx);
    }
    
private:

    ::omero::model::InstrumentPtr getInstrument(const ::Ice::Context*);
    
public:

    void setInstrument(const ::omero::model::InstrumentPtr& theInstrument)
    {
        setInstrument(theInstrument, 0);
    }
    void setInstrument(const ::omero::model::InstrumentPtr& theInstrument, const ::Ice::Context& __ctx)
    {
        setInstrument(theInstrument, &__ctx);
    }
    
private:

    void setInstrument(const ::omero::model::InstrumentPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::StageLabelPtr getStageLabel()
    {
        return getStageLabel(0);
    }
    ::omero::model::StageLabelPtr getStageLabel(const ::Ice::Context& __ctx)
    {
        return getStageLabel(&__ctx);
    }
    
private:

    ::omero::model::StageLabelPtr getStageLabel(const ::Ice::Context*);
    
public:

    void setStageLabel(const ::omero::model::StageLabelPtr& theStageLabel)
    {
        setStageLabel(theStageLabel, 0);
    }
    void setStageLabel(const ::omero::model::StageLabelPtr& theStageLabel, const ::Ice::Context& __ctx)
    {
        setStageLabel(theStageLabel, &__ctx);
    }
    
private:

    void setStageLabel(const ::omero::model::StageLabelPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::ExperimentPtr getExperiment()
    {
        return getExperiment(0);
    }
    ::omero::model::ExperimentPtr getExperiment(const ::Ice::Context& __ctx)
    {
        return getExperiment(&__ctx);
    }
    
private:

    ::omero::model::ExperimentPtr getExperiment(const ::Ice::Context*);
    
public:

    void setExperiment(const ::omero::model::ExperimentPtr& theExperiment)
    {
        setExperiment(theExperiment, 0);
    }
    void setExperiment(const ::omero::model::ExperimentPtr& theExperiment, const ::Ice::Context& __ctx)
    {
        setExperiment(theExperiment, &__ctx);
    }
    
private:

    void setExperiment(const ::omero::model::ExperimentPtr&, const ::Ice::Context*);
    
public:

    void unloadPixels()
    {
        unloadPixels(0);
    }
    void unloadPixels(const ::Ice::Context& __ctx)
    {
        unloadPixels(&__ctx);
    }
    
private:

    void unloadPixels(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfPixels()
    {
        return sizeOfPixels(0);
    }
    ::Ice::Int sizeOfPixels(const ::Ice::Context& __ctx)
    {
        return sizeOfPixels(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfPixels(const ::Ice::Context*);
    
public:

    ::omero::model::ImagePixelsSeq copyPixels()
    {
        return copyPixels(0);
    }
    ::omero::model::ImagePixelsSeq copyPixels(const ::Ice::Context& __ctx)
    {
        return copyPixels(&__ctx);
    }
    
private:

    ::omero::model::ImagePixelsSeq copyPixels(const ::Ice::Context*);
    
public:

    void addPixels(const ::omero::model::PixelsPtr& target)
    {
        addPixels(target, 0);
    }
    void addPixels(const ::omero::model::PixelsPtr& target, const ::Ice::Context& __ctx)
    {
        addPixels(target, &__ctx);
    }
    
private:

    void addPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);
    
public:

    void addAllPixelsSet(const ::omero::model::ImagePixelsSeq& targets)
    {
        addAllPixelsSet(targets, 0);
    }
    void addAllPixelsSet(const ::omero::model::ImagePixelsSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllPixelsSet(targets, &__ctx);
    }
    
private:

    void addAllPixelsSet(const ::omero::model::ImagePixelsSeq&, const ::Ice::Context*);
    
public:

    void removePixels(const ::omero::model::PixelsPtr& theTarget)
    {
        removePixels(theTarget, 0);
    }
    void removePixels(const ::omero::model::PixelsPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removePixels(theTarget, &__ctx);
    }
    
private:

    void removePixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);
    
public:

    void removeAllPixelsSet(const ::omero::model::ImagePixelsSeq& targets)
    {
        removeAllPixelsSet(targets, 0);
    }
    void removeAllPixelsSet(const ::omero::model::ImagePixelsSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllPixelsSet(targets, &__ctx);
    }
    
private:

    void removeAllPixelsSet(const ::omero::model::ImagePixelsSeq&, const ::Ice::Context*);
    
public:

    void clearPixels()
    {
        clearPixels(0);
    }
    void clearPixels(const ::Ice::Context& __ctx)
    {
        clearPixels(&__ctx);
    }
    
private:

    void clearPixels(const ::Ice::Context*);
    
public:

    void reloadPixels(const ::omero::model::ImagePtr& toCopy)
    {
        reloadPixels(toCopy, 0);
    }
    void reloadPixels(const ::omero::model::ImagePtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadPixels(toCopy, &__ctx);
    }
    
private:

    void reloadPixels(const ::omero::model::ImagePtr&, const ::Ice::Context*);
    
public:

    ::omero::model::PixelsPtr getPixels(::Ice::Int index)
    {
        return getPixels(index, 0);
    }
    ::omero::model::PixelsPtr getPixels(::Ice::Int index, const ::Ice::Context& __ctx)
    {
        return getPixels(index, &__ctx);
    }
    
private:

    ::omero::model::PixelsPtr getPixels(::Ice::Int, const ::Ice::Context*);
    
public:

    ::omero::model::PixelsPtr setPixels(::Ice::Int index, const ::omero::model::PixelsPtr& theElement)
    {
        return setPixels(index, theElement, 0);
    }
    ::omero::model::PixelsPtr setPixels(::Ice::Int index, const ::omero::model::PixelsPtr& theElement, const ::Ice::Context& __ctx)
    {
        return setPixels(index, theElement, &__ctx);
    }
    
private:

    ::omero::model::PixelsPtr setPixels(::Ice::Int, const ::omero::model::PixelsPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::PixelsPtr getPrimaryPixels()
    {
        return getPrimaryPixels(0);
    }
    ::omero::model::PixelsPtr getPrimaryPixels(const ::Ice::Context& __ctx)
    {
        return getPrimaryPixels(&__ctx);
    }
    
private:

    ::omero::model::PixelsPtr getPrimaryPixels(const ::Ice::Context*);
    
public:

    ::omero::model::PixelsPtr setPrimaryPixels(const ::omero::model::PixelsPtr& theElement)
    {
        return setPrimaryPixels(theElement, 0);
    }
    ::omero::model::PixelsPtr setPrimaryPixels(const ::omero::model::PixelsPtr& theElement, const ::Ice::Context& __ctx)
    {
        return setPrimaryPixels(theElement, &__ctx);
    }
    
private:

    ::omero::model::PixelsPtr setPrimaryPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);
    
public:

    void unloadWellSamples()
    {
        unloadWellSamples(0);
    }
    void unloadWellSamples(const ::Ice::Context& __ctx)
    {
        unloadWellSamples(&__ctx);
    }
    
private:

    void unloadWellSamples(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfWellSamples()
    {
        return sizeOfWellSamples(0);
    }
    ::Ice::Int sizeOfWellSamples(const ::Ice::Context& __ctx)
    {
        return sizeOfWellSamples(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfWellSamples(const ::Ice::Context*);
    
public:

    ::omero::model::ImageWellSamplesSeq copyWellSamples()
    {
        return copyWellSamples(0);
    }
    ::omero::model::ImageWellSamplesSeq copyWellSamples(const ::Ice::Context& __ctx)
    {
        return copyWellSamples(&__ctx);
    }
    
private:

    ::omero::model::ImageWellSamplesSeq copyWellSamples(const ::Ice::Context*);
    
public:

    void addWellSample(const ::omero::model::WellSamplePtr& target)
    {
        addWellSample(target, 0);
    }
    void addWellSample(const ::omero::model::WellSamplePtr& target, const ::Ice::Context& __ctx)
    {
        addWellSample(target, &__ctx);
    }
    
private:

    void addWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Context*);
    
public:

    void addAllWellSampleSet(const ::omero::model::ImageWellSamplesSeq& targets)
    {
        addAllWellSampleSet(targets, 0);
    }
    void addAllWellSampleSet(const ::omero::model::ImageWellSamplesSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllWellSampleSet(targets, &__ctx);
    }
    
private:

    void addAllWellSampleSet(const ::omero::model::ImageWellSamplesSeq&, const ::Ice::Context*);
    
public:

    void removeWellSample(const ::omero::model::WellSamplePtr& theTarget)
    {
        removeWellSample(theTarget, 0);
    }
    void removeWellSample(const ::omero::model::WellSamplePtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeWellSample(theTarget, &__ctx);
    }
    
private:

    void removeWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Context*);
    
public:

    void removeAllWellSampleSet(const ::omero::model::ImageWellSamplesSeq& targets)
    {
        removeAllWellSampleSet(targets, 0);
    }
    void removeAllWellSampleSet(const ::omero::model::ImageWellSamplesSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllWellSampleSet(targets, &__ctx);
    }
    
private:

    void removeAllWellSampleSet(const ::omero::model::ImageWellSamplesSeq&, const ::Ice::Context*);
    
public:

    void clearWellSamples()
    {
        clearWellSamples(0);
    }
    void clearWellSamples(const ::Ice::Context& __ctx)
    {
        clearWellSamples(&__ctx);
    }
    
private:

    void clearWellSamples(const ::Ice::Context*);
    
public:

    void reloadWellSamples(const ::omero::model::ImagePtr& toCopy)
    {
        reloadWellSamples(toCopy, 0);
    }
    void reloadWellSamples(const ::omero::model::ImagePtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadWellSamples(toCopy, &__ctx);
    }
    
private:

    void reloadWellSamples(const ::omero::model::ImagePtr&, const ::Ice::Context*);
    
public:

    void unloadRois()
    {
        unloadRois(0);
    }
    void unloadRois(const ::Ice::Context& __ctx)
    {
        unloadRois(&__ctx);
    }
    
private:

    void unloadRois(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfRois()
    {
        return sizeOfRois(0);
    }
    ::Ice::Int sizeOfRois(const ::Ice::Context& __ctx)
    {
        return sizeOfRois(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfRois(const ::Ice::Context*);
    
public:

    ::omero::model::ImageRoisSeq copyRois()
    {
        return copyRois(0);
    }
    ::omero::model::ImageRoisSeq copyRois(const ::Ice::Context& __ctx)
    {
        return copyRois(&__ctx);
    }
    
private:

    ::omero::model::ImageRoisSeq copyRois(const ::Ice::Context*);
    
public:

    void addRoi(const ::omero::model::RoiPtr& target)
    {
        addRoi(target, 0);
    }
    void addRoi(const ::omero::model::RoiPtr& target, const ::Ice::Context& __ctx)
    {
        addRoi(target, &__ctx);
    }
    
private:

    void addRoi(const ::omero::model::RoiPtr&, const ::Ice::Context*);
    
public:

    void addAllRoiSet(const ::omero::model::ImageRoisSeq& targets)
    {
        addAllRoiSet(targets, 0);
    }
    void addAllRoiSet(const ::omero::model::ImageRoisSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllRoiSet(targets, &__ctx);
    }
    
private:

    void addAllRoiSet(const ::omero::model::ImageRoisSeq&, const ::Ice::Context*);
    
public:

    void removeRoi(const ::omero::model::RoiPtr& theTarget)
    {
        removeRoi(theTarget, 0);
    }
    void removeRoi(const ::omero::model::RoiPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeRoi(theTarget, &__ctx);
    }
    
private:

    void removeRoi(const ::omero::model::RoiPtr&, const ::Ice::Context*);
    
public:

    void removeAllRoiSet(const ::omero::model::ImageRoisSeq& targets)
    {
        removeAllRoiSet(targets, 0);
    }
    void removeAllRoiSet(const ::omero::model::ImageRoisSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllRoiSet(targets, &__ctx);
    }
    
private:

    void removeAllRoiSet(const ::omero::model::ImageRoisSeq&, const ::Ice::Context*);
    
public:

    void clearRois()
    {
        clearRois(0);
    }
    void clearRois(const ::Ice::Context& __ctx)
    {
        clearRois(&__ctx);
    }
    
private:

    void clearRois(const ::Ice::Context*);
    
public:

    void reloadRois(const ::omero::model::ImagePtr& toCopy)
    {
        reloadRois(toCopy, 0);
    }
    void reloadRois(const ::omero::model::ImagePtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadRois(toCopy, &__ctx);
    }
    
private:

    void reloadRois(const ::omero::model::ImagePtr&, const ::Ice::Context*);
    
public:

    void unloadDatasetLinks()
    {
        unloadDatasetLinks(0);
    }
    void unloadDatasetLinks(const ::Ice::Context& __ctx)
    {
        unloadDatasetLinks(&__ctx);
    }
    
private:

    void unloadDatasetLinks(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfDatasetLinks()
    {
        return sizeOfDatasetLinks(0);
    }
    ::Ice::Int sizeOfDatasetLinks(const ::Ice::Context& __ctx)
    {
        return sizeOfDatasetLinks(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfDatasetLinks(const ::Ice::Context*);
    
public:

    ::omero::model::ImageDatasetLinksSeq copyDatasetLinks()
    {
        return copyDatasetLinks(0);
    }
    ::omero::model::ImageDatasetLinksSeq copyDatasetLinks(const ::Ice::Context& __ctx)
    {
        return copyDatasetLinks(&__ctx);
    }
    
private:

    ::omero::model::ImageDatasetLinksSeq copyDatasetLinks(const ::Ice::Context*);
    
public:

    void addDatasetImageLink(const ::omero::model::DatasetImageLinkPtr& target)
    {
        addDatasetImageLink(target, 0);
    }
    void addDatasetImageLink(const ::omero::model::DatasetImageLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addDatasetImageLink(target, &__ctx);
    }
    
private:

    void addDatasetImageLink(const ::omero::model::DatasetImageLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllDatasetImageLinkSet(const ::omero::model::ImageDatasetLinksSeq& targets)
    {
        addAllDatasetImageLinkSet(targets, 0);
    }
    void addAllDatasetImageLinkSet(const ::omero::model::ImageDatasetLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllDatasetImageLinkSet(targets, &__ctx);
    }
    
private:

    void addAllDatasetImageLinkSet(const ::omero::model::ImageDatasetLinksSeq&, const ::Ice::Context*);
    
public:

    void removeDatasetImageLink(const ::omero::model::DatasetImageLinkPtr& theTarget)
    {
        removeDatasetImageLink(theTarget, 0);
    }
    void removeDatasetImageLink(const ::omero::model::DatasetImageLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeDatasetImageLink(theTarget, &__ctx);
    }
    
private:

    void removeDatasetImageLink(const ::omero::model::DatasetImageLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllDatasetImageLinkSet(const ::omero::model::ImageDatasetLinksSeq& targets)
    {
        removeAllDatasetImageLinkSet(targets, 0);
    }
    void removeAllDatasetImageLinkSet(const ::omero::model::ImageDatasetLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllDatasetImageLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllDatasetImageLinkSet(const ::omero::model::ImageDatasetLinksSeq&, const ::Ice::Context*);
    
public:

    void clearDatasetLinks()
    {
        clearDatasetLinks(0);
    }
    void clearDatasetLinks(const ::Ice::Context& __ctx)
    {
        clearDatasetLinks(&__ctx);
    }
    
private:

    void clearDatasetLinks(const ::Ice::Context*);
    
public:

    void reloadDatasetLinks(const ::omero::model::ImagePtr& toCopy)
    {
        reloadDatasetLinks(toCopy, 0);
    }
    void reloadDatasetLinks(const ::omero::model::ImagePtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadDatasetLinks(toCopy, &__ctx);
    }
    
private:

    void reloadDatasetLinks(const ::omero::model::ImagePtr&, const ::Ice::Context*);
    
public:

    ::omero::sys::CountMap getDatasetLinksCountPerOwner()
    {
        return getDatasetLinksCountPerOwner(0);
    }
    ::omero::sys::CountMap getDatasetLinksCountPerOwner(const ::Ice::Context& __ctx)
    {
        return getDatasetLinksCountPerOwner(&__ctx);
    }
    
private:

    ::omero::sys::CountMap getDatasetLinksCountPerOwner(const ::Ice::Context*);
    
public:

    ::omero::model::DatasetImageLinkPtr linkDataset(const ::omero::model::DatasetPtr& addition)
    {
        return linkDataset(addition, 0);
    }
    ::omero::model::DatasetImageLinkPtr linkDataset(const ::omero::model::DatasetPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkDataset(addition, &__ctx);
    }
    
private:

    ::omero::model::DatasetImageLinkPtr linkDataset(const ::omero::model::DatasetPtr&, const ::Ice::Context*);
    
public:

    void addDatasetImageLinkToBoth(const ::omero::model::DatasetImageLinkPtr& link, bool bothSides)
    {
        addDatasetImageLinkToBoth(link, bothSides, 0);
    }
    void addDatasetImageLinkToBoth(const ::omero::model::DatasetImageLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addDatasetImageLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addDatasetImageLinkToBoth(const ::omero::model::DatasetImageLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::ImageDatasetLinksSeq findDatasetImageLink(const ::omero::model::DatasetPtr& removal)
    {
        return findDatasetImageLink(removal, 0);
    }
    ::omero::model::ImageDatasetLinksSeq findDatasetImageLink(const ::omero::model::DatasetPtr& removal, const ::Ice::Context& __ctx)
    {
        return findDatasetImageLink(removal, &__ctx);
    }
    
private:

    ::omero::model::ImageDatasetLinksSeq findDatasetImageLink(const ::omero::model::DatasetPtr&, const ::Ice::Context*);
    
public:

    void unlinkDataset(const ::omero::model::DatasetPtr& removal)
    {
        unlinkDataset(removal, 0);
    }
    void unlinkDataset(const ::omero::model::DatasetPtr& removal, const ::Ice::Context& __ctx)
    {
        unlinkDataset(removal, &__ctx);
    }
    
private:

    void unlinkDataset(const ::omero::model::DatasetPtr&, const ::Ice::Context*);
    
public:

    void removeDatasetImageLinkFromBoth(const ::omero::model::DatasetImageLinkPtr& link, bool bothSides)
    {
        removeDatasetImageLinkFromBoth(link, bothSides, 0);
    }
    void removeDatasetImageLinkFromBoth(const ::omero::model::DatasetImageLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removeDatasetImageLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removeDatasetImageLinkFromBoth(const ::omero::model::DatasetImageLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::ImageLinkedDatasetSeq linkedDatasetList()
    {
        return linkedDatasetList(0);
    }
    ::omero::model::ImageLinkedDatasetSeq linkedDatasetList(const ::Ice::Context& __ctx)
    {
        return linkedDatasetList(&__ctx);
    }
    
private:

    ::omero::model::ImageLinkedDatasetSeq linkedDatasetList(const ::Ice::Context*);
    
public:

    ::omero::model::FilesetPtr getFileset()
    {
        return getFileset(0);
    }
    ::omero::model::FilesetPtr getFileset(const ::Ice::Context& __ctx)
    {
        return getFileset(&__ctx);
    }
    
private:

    ::omero::model::FilesetPtr getFileset(const ::Ice::Context*);
    
public:

    void setFileset(const ::omero::model::FilesetPtr& theFileset)
    {
        setFileset(theFileset, 0);
    }
    void setFileset(const ::omero::model::FilesetPtr& theFileset, const ::Ice::Context& __ctx)
    {
        setFileset(theFileset, &__ctx);
    }
    
private:

    void setFileset(const ::omero::model::FilesetPtr&, const ::Ice::Context*);
    
public:

    void unloadAnnotationLinks()
    {
        unloadAnnotationLinks(0);
    }
    void unloadAnnotationLinks(const ::Ice::Context& __ctx)
    {
        unloadAnnotationLinks(&__ctx);
    }
    
private:

    void unloadAnnotationLinks(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfAnnotationLinks()
    {
        return sizeOfAnnotationLinks(0);
    }
    ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context& __ctx)
    {
        return sizeOfAnnotationLinks(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);
    
public:

    ::omero::model::ImageAnnotationLinksSeq copyAnnotationLinks()
    {
        return copyAnnotationLinks(0);
    }
    ::omero::model::ImageAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context& __ctx)
    {
        return copyAnnotationLinks(&__ctx);
    }
    
private:

    ::omero::model::ImageAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);
    
public:

    void addImageAnnotationLink(const ::omero::model::ImageAnnotationLinkPtr& target)
    {
        addImageAnnotationLink(target, 0);
    }
    void addImageAnnotationLink(const ::omero::model::ImageAnnotationLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addImageAnnotationLink(target, &__ctx);
    }
    
private:

    void addImageAnnotationLink(const ::omero::model::ImageAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllImageAnnotationLinkSet(const ::omero::model::ImageAnnotationLinksSeq& targets)
    {
        addAllImageAnnotationLinkSet(targets, 0);
    }
    void addAllImageAnnotationLinkSet(const ::omero::model::ImageAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllImageAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void addAllImageAnnotationLinkSet(const ::omero::model::ImageAnnotationLinksSeq&, const ::Ice::Context*);
    
public:

    void removeImageAnnotationLink(const ::omero::model::ImageAnnotationLinkPtr& theTarget)
    {
        removeImageAnnotationLink(theTarget, 0);
    }
    void removeImageAnnotationLink(const ::omero::model::ImageAnnotationLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeImageAnnotationLink(theTarget, &__ctx);
    }
    
private:

    void removeImageAnnotationLink(const ::omero::model::ImageAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllImageAnnotationLinkSet(const ::omero::model::ImageAnnotationLinksSeq& targets)
    {
        removeAllImageAnnotationLinkSet(targets, 0);
    }
    void removeAllImageAnnotationLinkSet(const ::omero::model::ImageAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllImageAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllImageAnnotationLinkSet(const ::omero::model::ImageAnnotationLinksSeq&, const ::Ice::Context*);
    
public:

    void clearAnnotationLinks()
    {
        clearAnnotationLinks(0);
    }
    void clearAnnotationLinks(const ::Ice::Context& __ctx)
    {
        clearAnnotationLinks(&__ctx);
    }
    
private:

    void clearAnnotationLinks(const ::Ice::Context*);
    
public:

    void reloadAnnotationLinks(const ::omero::model::ImagePtr& toCopy)
    {
        reloadAnnotationLinks(toCopy, 0);
    }
    void reloadAnnotationLinks(const ::omero::model::ImagePtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadAnnotationLinks(toCopy, &__ctx);
    }
    
private:

    void reloadAnnotationLinks(const ::omero::model::ImagePtr&, const ::Ice::Context*);
    
public:

    ::omero::sys::CountMap getAnnotationLinksCountPerOwner()
    {
        return getAnnotationLinksCountPerOwner(0);
    }
    ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context& __ctx)
    {
        return getAnnotationLinksCountPerOwner(&__ctx);
    }
    
private:

    ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);
    
public:

    ::omero::model::ImageAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition)
    {
        return linkAnnotation(addition, 0);
    }
    ::omero::model::ImageAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkAnnotation(addition, &__ctx);
    }
    
private:

    ::omero::model::ImageAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
public:

    void addImageAnnotationLinkToBoth(const ::omero::model::ImageAnnotationLinkPtr& link, bool bothSides)
    {
        addImageAnnotationLinkToBoth(link, bothSides, 0);
    }
    void addImageAnnotationLinkToBoth(const ::omero::model::ImageAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addImageAnnotationLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addImageAnnotationLinkToBoth(const ::omero::model::ImageAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::ImageAnnotationLinksSeq findImageAnnotationLink(const ::omero::model::AnnotationPtr& removal)
    {
        return findImageAnnotationLink(removal, 0);
    }
    ::omero::model::ImageAnnotationLinksSeq findImageAnnotationLink(const ::omero::model::AnnotationPtr& removal, const ::Ice::Context& __ctx)
    {
        return findImageAnnotationLink(removal, &__ctx);
    }
    
private:

    ::omero::model::ImageAnnotationLinksSeq findImageAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
public:

    void unlinkAnnotation(const ::omero::model::AnnotationPtr& removal)
    {
        unlinkAnnotation(removal, 0);
    }
    void unlinkAnnotation(const ::omero::model::AnnotationPtr& removal, const ::Ice::Context& __ctx)
    {
        unlinkAnnotation(removal, &__ctx);
    }
    
private:

    void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
public:

    void removeImageAnnotationLinkFromBoth(const ::omero::model::ImageAnnotationLinkPtr& link, bool bothSides)
    {
        removeImageAnnotationLinkFromBoth(link, bothSides, 0);
    }
    void removeImageAnnotationLinkFromBoth(const ::omero::model::ImageAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removeImageAnnotationLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removeImageAnnotationLinkFromBoth(const ::omero::model::ImageAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::ImageLinkedAnnotationSeq linkedAnnotationList()
    {
        return linkedAnnotationList(0);
    }
    ::omero::model::ImageLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context& __ctx)
    {
        return linkedAnnotationList(&__ctx);
    }
    
private:

    ::omero::model::ImageLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getName()
    {
        return getName(0);
    }
    ::omero::RStringPtr getName(const ::Ice::Context& __ctx)
    {
        return getName(&__ctx);
    }
    
private:

    ::omero::RStringPtr getName(const ::Ice::Context*);
    
public:

    void setName(const ::omero::RStringPtr& theName)
    {
        setName(theName, 0);
    }
    void setName(const ::omero::RStringPtr& theName, const ::Ice::Context& __ctx)
    {
        setName(theName, &__ctx);
    }
    
private:

    void setName(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getDescription()
    {
        return getDescription(0);
    }
    ::omero::RStringPtr getDescription(const ::Ice::Context& __ctx)
    {
        return getDescription(&__ctx);
    }
    
private:

    ::omero::RStringPtr getDescription(const ::Ice::Context*);
    
public:

    void setDescription(const ::omero::RStringPtr& theDescription)
    {
        setDescription(theDescription, 0);
    }
    void setDescription(const ::omero::RStringPtr& theDescription, const ::Ice::Context& __ctx)
    {
        setDescription(theDescription, &__ctx);
    }
    
private:

    void setDescription(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Image> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Image*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Image*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Image> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Image*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Image*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Image> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Image*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Image*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Image> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Image*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Image*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Image> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Image*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Image*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Image> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Image*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Image*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Image> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Image*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Image*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Image> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Image*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Image*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Image> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Image*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Image*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Image> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Image*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Image*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Image> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Image*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Image*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Image> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Image*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Image*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Image> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Image*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Image*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Image> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Image*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Image*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Image> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Image*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Image*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Image> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Image*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Image*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Image> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Image*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Image*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Image> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Image*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Image*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Image> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Image*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Image*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace model
{

class Image : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RTimePtr getAcquisitionDate(const ::Ice::Context*) = 0;

    virtual void setAcquisitionDate(const ::omero::RTimePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RBoolPtr getArchived(const ::Ice::Context*) = 0;

    virtual void setArchived(const ::omero::RBoolPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RBoolPtr getPartial(const ::Ice::Context*) = 0;

    virtual void setPartial(const ::omero::RBoolPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::FormatPtr getFormat(const ::Ice::Context*) = 0;

    virtual void setFormat(const ::omero::model::FormatPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::ImagingEnvironmentPtr getImagingEnvironment(const ::Ice::Context*) = 0;

    virtual void setImagingEnvironment(const ::omero::model::ImagingEnvironmentPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::ObjectiveSettingsPtr getObjectiveSettings(const ::Ice::Context*) = 0;

    virtual void setObjectiveSettings(const ::omero::model::ObjectiveSettingsPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::InstrumentPtr getInstrument(const ::Ice::Context*) = 0;

    virtual void setInstrument(const ::omero::model::InstrumentPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::StageLabelPtr getStageLabel(const ::Ice::Context*) = 0;

    virtual void setStageLabel(const ::omero::model::StageLabelPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::ExperimentPtr getExperiment(const ::Ice::Context*) = 0;

    virtual void setExperiment(const ::omero::model::ExperimentPtr&, const ::Ice::Context*) = 0;

    virtual void unloadPixels(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfPixels(const ::Ice::Context*) = 0;

    virtual ::omero::model::ImagePixelsSeq copyPixels(const ::Ice::Context*) = 0;

    virtual void addPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*) = 0;

    virtual void addAllPixelsSet(const ::omero::model::ImagePixelsSeq&, const ::Ice::Context*) = 0;

    virtual void removePixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllPixelsSet(const ::omero::model::ImagePixelsSeq&, const ::Ice::Context*) = 0;

    virtual void clearPixels(const ::Ice::Context*) = 0;

    virtual void reloadPixels(const ::omero::model::ImagePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::PixelsPtr getPixels(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::omero::model::PixelsPtr setPixels(::Ice::Int, const ::omero::model::PixelsPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::PixelsPtr getPrimaryPixels(const ::Ice::Context*) = 0;

    virtual ::omero::model::PixelsPtr setPrimaryPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*) = 0;

    virtual void unloadWellSamples(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfWellSamples(const ::Ice::Context*) = 0;

    virtual ::omero::model::ImageWellSamplesSeq copyWellSamples(const ::Ice::Context*) = 0;

    virtual void addWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Context*) = 0;

    virtual void addAllWellSampleSet(const ::omero::model::ImageWellSamplesSeq&, const ::Ice::Context*) = 0;

    virtual void removeWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Context*) = 0;

    virtual void removeAllWellSampleSet(const ::omero::model::ImageWellSamplesSeq&, const ::Ice::Context*) = 0;

    virtual void clearWellSamples(const ::Ice::Context*) = 0;

    virtual void reloadWellSamples(const ::omero::model::ImagePtr&, const ::Ice::Context*) = 0;

    virtual void unloadRois(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfRois(const ::Ice::Context*) = 0;

    virtual ::omero::model::ImageRoisSeq copyRois(const ::Ice::Context*) = 0;

    virtual void addRoi(const ::omero::model::RoiPtr&, const ::Ice::Context*) = 0;

    virtual void addAllRoiSet(const ::omero::model::ImageRoisSeq&, const ::Ice::Context*) = 0;

    virtual void removeRoi(const ::omero::model::RoiPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllRoiSet(const ::omero::model::ImageRoisSeq&, const ::Ice::Context*) = 0;

    virtual void clearRois(const ::Ice::Context*) = 0;

    virtual void reloadRois(const ::omero::model::ImagePtr&, const ::Ice::Context*) = 0;

    virtual void unloadDatasetLinks(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfDatasetLinks(const ::Ice::Context*) = 0;

    virtual ::omero::model::ImageDatasetLinksSeq copyDatasetLinks(const ::Ice::Context*) = 0;

    virtual void addDatasetImageLink(const ::omero::model::DatasetImageLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllDatasetImageLinkSet(const ::omero::model::ImageDatasetLinksSeq&, const ::Ice::Context*) = 0;

    virtual void removeDatasetImageLink(const ::omero::model::DatasetImageLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllDatasetImageLinkSet(const ::omero::model::ImageDatasetLinksSeq&, const ::Ice::Context*) = 0;

    virtual void clearDatasetLinks(const ::Ice::Context*) = 0;

    virtual void reloadDatasetLinks(const ::omero::model::ImagePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getDatasetLinksCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::DatasetImageLinkPtr linkDataset(const ::omero::model::DatasetPtr&, const ::Ice::Context*) = 0;

    virtual void addDatasetImageLinkToBoth(const ::omero::model::DatasetImageLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::ImageDatasetLinksSeq findDatasetImageLink(const ::omero::model::DatasetPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkDataset(const ::omero::model::DatasetPtr&, const ::Ice::Context*) = 0;

    virtual void removeDatasetImageLinkFromBoth(const ::omero::model::DatasetImageLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::ImageLinkedDatasetSeq linkedDatasetList(const ::Ice::Context*) = 0;

    virtual ::omero::model::FilesetPtr getFileset(const ::Ice::Context*) = 0;

    virtual void setFileset(const ::omero::model::FilesetPtr&, const ::Ice::Context*) = 0;

    virtual void unloadAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::omero::model::ImageAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void addImageAnnotationLink(const ::omero::model::ImageAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllImageAnnotationLinkSet(const ::omero::model::ImageAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void removeImageAnnotationLink(const ::omero::model::ImageAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllImageAnnotationLinkSet(const ::omero::model::ImageAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void clearAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void reloadAnnotationLinks(const ::omero::model::ImagePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::ImageAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void addImageAnnotationLinkToBoth(const ::omero::model::ImageAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::ImageAnnotationLinksSeq findImageAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void removeImageAnnotationLinkFromBoth(const ::omero::model::ImageAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::ImageLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getName(const ::Ice::Context*) = 0;

    virtual void setName(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getDescription(const ::Ice::Context*) = 0;

    virtual void setDescription(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;
};

}

}

}

namespace IceDelegateM
{

namespace omero
{

namespace model
{

class Image : virtual public ::IceDelegate::omero::model::Image,
              virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getAcquisitionDate(const ::Ice::Context*);

    virtual void setAcquisitionDate(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual ::omero::RBoolPtr getArchived(const ::Ice::Context*);

    virtual void setArchived(const ::omero::RBoolPtr&, const ::Ice::Context*);

    virtual ::omero::RBoolPtr getPartial(const ::Ice::Context*);

    virtual void setPartial(const ::omero::RBoolPtr&, const ::Ice::Context*);

    virtual ::omero::model::FormatPtr getFormat(const ::Ice::Context*);

    virtual void setFormat(const ::omero::model::FormatPtr&, const ::Ice::Context*);

    virtual ::omero::model::ImagingEnvironmentPtr getImagingEnvironment(const ::Ice::Context*);

    virtual void setImagingEnvironment(const ::omero::model::ImagingEnvironmentPtr&, const ::Ice::Context*);

    virtual ::omero::model::ObjectiveSettingsPtr getObjectiveSettings(const ::Ice::Context*);

    virtual void setObjectiveSettings(const ::omero::model::ObjectiveSettingsPtr&, const ::Ice::Context*);

    virtual ::omero::model::InstrumentPtr getInstrument(const ::Ice::Context*);

    virtual void setInstrument(const ::omero::model::InstrumentPtr&, const ::Ice::Context*);

    virtual ::omero::model::StageLabelPtr getStageLabel(const ::Ice::Context*);

    virtual void setStageLabel(const ::omero::model::StageLabelPtr&, const ::Ice::Context*);

    virtual ::omero::model::ExperimentPtr getExperiment(const ::Ice::Context*);

    virtual void setExperiment(const ::omero::model::ExperimentPtr&, const ::Ice::Context*);

    virtual void unloadPixels(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfPixels(const ::Ice::Context*);

    virtual ::omero::model::ImagePixelsSeq copyPixels(const ::Ice::Context*);

    virtual void addPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual void addAllPixelsSet(const ::omero::model::ImagePixelsSeq&, const ::Ice::Context*);

    virtual void removePixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual void removeAllPixelsSet(const ::omero::model::ImagePixelsSeq&, const ::Ice::Context*);

    virtual void clearPixels(const ::Ice::Context*);

    virtual void reloadPixels(const ::omero::model::ImagePtr&, const ::Ice::Context*);

    virtual ::omero::model::PixelsPtr getPixels(::Ice::Int, const ::Ice::Context*);

    virtual ::omero::model::PixelsPtr setPixels(::Ice::Int, const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual ::omero::model::PixelsPtr getPrimaryPixels(const ::Ice::Context*);

    virtual ::omero::model::PixelsPtr setPrimaryPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual void unloadWellSamples(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfWellSamples(const ::Ice::Context*);

    virtual ::omero::model::ImageWellSamplesSeq copyWellSamples(const ::Ice::Context*);

    virtual void addWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Context*);

    virtual void addAllWellSampleSet(const ::omero::model::ImageWellSamplesSeq&, const ::Ice::Context*);

    virtual void removeWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Context*);

    virtual void removeAllWellSampleSet(const ::omero::model::ImageWellSamplesSeq&, const ::Ice::Context*);

    virtual void clearWellSamples(const ::Ice::Context*);

    virtual void reloadWellSamples(const ::omero::model::ImagePtr&, const ::Ice::Context*);

    virtual void unloadRois(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfRois(const ::Ice::Context*);

    virtual ::omero::model::ImageRoisSeq copyRois(const ::Ice::Context*);

    virtual void addRoi(const ::omero::model::RoiPtr&, const ::Ice::Context*);

    virtual void addAllRoiSet(const ::omero::model::ImageRoisSeq&, const ::Ice::Context*);

    virtual void removeRoi(const ::omero::model::RoiPtr&, const ::Ice::Context*);

    virtual void removeAllRoiSet(const ::omero::model::ImageRoisSeq&, const ::Ice::Context*);

    virtual void clearRois(const ::Ice::Context*);

    virtual void reloadRois(const ::omero::model::ImagePtr&, const ::Ice::Context*);

    virtual void unloadDatasetLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfDatasetLinks(const ::Ice::Context*);

    virtual ::omero::model::ImageDatasetLinksSeq copyDatasetLinks(const ::Ice::Context*);

    virtual void addDatasetImageLink(const ::omero::model::DatasetImageLinkPtr&, const ::Ice::Context*);

    virtual void addAllDatasetImageLinkSet(const ::omero::model::ImageDatasetLinksSeq&, const ::Ice::Context*);

    virtual void removeDatasetImageLink(const ::omero::model::DatasetImageLinkPtr&, const ::Ice::Context*);

    virtual void removeAllDatasetImageLinkSet(const ::omero::model::ImageDatasetLinksSeq&, const ::Ice::Context*);

    virtual void clearDatasetLinks(const ::Ice::Context*);

    virtual void reloadDatasetLinks(const ::omero::model::ImagePtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getDatasetLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::DatasetImageLinkPtr linkDataset(const ::omero::model::DatasetPtr&, const ::Ice::Context*);

    virtual void addDatasetImageLinkToBoth(const ::omero::model::DatasetImageLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ImageDatasetLinksSeq findDatasetImageLink(const ::omero::model::DatasetPtr&, const ::Ice::Context*);

    virtual void unlinkDataset(const ::omero::model::DatasetPtr&, const ::Ice::Context*);

    virtual void removeDatasetImageLinkFromBoth(const ::omero::model::DatasetImageLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ImageLinkedDatasetSeq linkedDatasetList(const ::Ice::Context*);

    virtual ::omero::model::FilesetPtr getFileset(const ::Ice::Context*);

    virtual void setFileset(const ::omero::model::FilesetPtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::ImageAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addImageAnnotationLink(const ::omero::model::ImageAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllImageAnnotationLinkSet(const ::omero::model::ImageAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeImageAnnotationLink(const ::omero::model::ImageAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllImageAnnotationLinkSet(const ::omero::model::ImageAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::ImagePtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::ImageAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addImageAnnotationLinkToBoth(const ::omero::model::ImageAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ImageAnnotationLinksSeq findImageAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeImageAnnotationLinkFromBoth(const ::omero::model::ImageAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ImageLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);

    virtual ::omero::RStringPtr getName(const ::Ice::Context*);

    virtual void setName(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getDescription(const ::Ice::Context*);

    virtual void setDescription(const ::omero::RStringPtr&, const ::Ice::Context*);
};

}

}

}

namespace IceDelegateD
{

namespace omero
{

namespace model
{

class Image : virtual public ::IceDelegate::omero::model::Image,
              virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getAcquisitionDate(const ::Ice::Context*);

    virtual void setAcquisitionDate(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual ::omero::RBoolPtr getArchived(const ::Ice::Context*);

    virtual void setArchived(const ::omero::RBoolPtr&, const ::Ice::Context*);

    virtual ::omero::RBoolPtr getPartial(const ::Ice::Context*);

    virtual void setPartial(const ::omero::RBoolPtr&, const ::Ice::Context*);

    virtual ::omero::model::FormatPtr getFormat(const ::Ice::Context*);

    virtual void setFormat(const ::omero::model::FormatPtr&, const ::Ice::Context*);

    virtual ::omero::model::ImagingEnvironmentPtr getImagingEnvironment(const ::Ice::Context*);

    virtual void setImagingEnvironment(const ::omero::model::ImagingEnvironmentPtr&, const ::Ice::Context*);

    virtual ::omero::model::ObjectiveSettingsPtr getObjectiveSettings(const ::Ice::Context*);

    virtual void setObjectiveSettings(const ::omero::model::ObjectiveSettingsPtr&, const ::Ice::Context*);

    virtual ::omero::model::InstrumentPtr getInstrument(const ::Ice::Context*);

    virtual void setInstrument(const ::omero::model::InstrumentPtr&, const ::Ice::Context*);

    virtual ::omero::model::StageLabelPtr getStageLabel(const ::Ice::Context*);

    virtual void setStageLabel(const ::omero::model::StageLabelPtr&, const ::Ice::Context*);

    virtual ::omero::model::ExperimentPtr getExperiment(const ::Ice::Context*);

    virtual void setExperiment(const ::omero::model::ExperimentPtr&, const ::Ice::Context*);

    virtual void unloadPixels(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfPixels(const ::Ice::Context*);

    virtual ::omero::model::ImagePixelsSeq copyPixels(const ::Ice::Context*);

    virtual void addPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual void addAllPixelsSet(const ::omero::model::ImagePixelsSeq&, const ::Ice::Context*);

    virtual void removePixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual void removeAllPixelsSet(const ::omero::model::ImagePixelsSeq&, const ::Ice::Context*);

    virtual void clearPixels(const ::Ice::Context*);

    virtual void reloadPixels(const ::omero::model::ImagePtr&, const ::Ice::Context*);

    virtual ::omero::model::PixelsPtr getPixels(::Ice::Int, const ::Ice::Context*);

    virtual ::omero::model::PixelsPtr setPixels(::Ice::Int, const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual ::omero::model::PixelsPtr getPrimaryPixels(const ::Ice::Context*);

    virtual ::omero::model::PixelsPtr setPrimaryPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual void unloadWellSamples(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfWellSamples(const ::Ice::Context*);

    virtual ::omero::model::ImageWellSamplesSeq copyWellSamples(const ::Ice::Context*);

    virtual void addWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Context*);

    virtual void addAllWellSampleSet(const ::omero::model::ImageWellSamplesSeq&, const ::Ice::Context*);

    virtual void removeWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Context*);

    virtual void removeAllWellSampleSet(const ::omero::model::ImageWellSamplesSeq&, const ::Ice::Context*);

    virtual void clearWellSamples(const ::Ice::Context*);

    virtual void reloadWellSamples(const ::omero::model::ImagePtr&, const ::Ice::Context*);

    virtual void unloadRois(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfRois(const ::Ice::Context*);

    virtual ::omero::model::ImageRoisSeq copyRois(const ::Ice::Context*);

    virtual void addRoi(const ::omero::model::RoiPtr&, const ::Ice::Context*);

    virtual void addAllRoiSet(const ::omero::model::ImageRoisSeq&, const ::Ice::Context*);

    virtual void removeRoi(const ::omero::model::RoiPtr&, const ::Ice::Context*);

    virtual void removeAllRoiSet(const ::omero::model::ImageRoisSeq&, const ::Ice::Context*);

    virtual void clearRois(const ::Ice::Context*);

    virtual void reloadRois(const ::omero::model::ImagePtr&, const ::Ice::Context*);

    virtual void unloadDatasetLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfDatasetLinks(const ::Ice::Context*);

    virtual ::omero::model::ImageDatasetLinksSeq copyDatasetLinks(const ::Ice::Context*);

    virtual void addDatasetImageLink(const ::omero::model::DatasetImageLinkPtr&, const ::Ice::Context*);

    virtual void addAllDatasetImageLinkSet(const ::omero::model::ImageDatasetLinksSeq&, const ::Ice::Context*);

    virtual void removeDatasetImageLink(const ::omero::model::DatasetImageLinkPtr&, const ::Ice::Context*);

    virtual void removeAllDatasetImageLinkSet(const ::omero::model::ImageDatasetLinksSeq&, const ::Ice::Context*);

    virtual void clearDatasetLinks(const ::Ice::Context*);

    virtual void reloadDatasetLinks(const ::omero::model::ImagePtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getDatasetLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::DatasetImageLinkPtr linkDataset(const ::omero::model::DatasetPtr&, const ::Ice::Context*);

    virtual void addDatasetImageLinkToBoth(const ::omero::model::DatasetImageLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ImageDatasetLinksSeq findDatasetImageLink(const ::omero::model::DatasetPtr&, const ::Ice::Context*);

    virtual void unlinkDataset(const ::omero::model::DatasetPtr&, const ::Ice::Context*);

    virtual void removeDatasetImageLinkFromBoth(const ::omero::model::DatasetImageLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ImageLinkedDatasetSeq linkedDatasetList(const ::Ice::Context*);

    virtual ::omero::model::FilesetPtr getFileset(const ::Ice::Context*);

    virtual void setFileset(const ::omero::model::FilesetPtr&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::ImageAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addImageAnnotationLink(const ::omero::model::ImageAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllImageAnnotationLinkSet(const ::omero::model::ImageAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeImageAnnotationLink(const ::omero::model::ImageAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllImageAnnotationLinkSet(const ::omero::model::ImageAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::ImagePtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::ImageAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addImageAnnotationLinkToBoth(const ::omero::model::ImageAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ImageAnnotationLinksSeq findImageAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeImageAnnotationLinkFromBoth(const ::omero::model::ImageAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::ImageLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);

    virtual ::omero::RStringPtr getName(const ::Ice::Context*);

    virtual void setName(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getDescription(const ::Ice::Context*);

    virtual void setDescription(const ::omero::RStringPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class Image : virtual public ::omero::model::IObject
{
public:

    typedef ImagePrx ProxyType;
    typedef ImagePtr PointerType;
    
    Image() {}
    Image(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::RTimePtr&, const ::omero::RBoolPtr&, const ::omero::RBoolPtr&, const ::omero::model::FormatPtr&, const ::omero::model::ImagingEnvironmentPtr&, const ::omero::model::ObjectiveSettingsPtr&, const ::omero::model::InstrumentPtr&, const ::omero::model::StageLabelPtr&, const ::omero::model::ExperimentPtr&, const ::omero::model::ImagePixelsSeq&, bool, const ::omero::model::ImageWellSamplesSeq&, bool, const ::omero::model::ImageRoisSeq&, bool, const ::omero::model::ImageDatasetLinksSeq&, bool, const ::omero::sys::CountMap&, const ::omero::model::FilesetPtr&, const ::omero::model::ImageAnnotationLinksSeq&, bool, const ::omero::sys::CountMap&, const ::omero::RStringPtr&, const ::omero::RStringPtr&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual ::omero::RIntPtr getVersion(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getVersion(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setVersion(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RTimePtr getAcquisitionDate(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAcquisitionDate(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setAcquisitionDate(const ::omero::RTimePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setAcquisitionDate(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RBoolPtr getArchived(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getArchived(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setArchived(const ::omero::RBoolPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setArchived(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RBoolPtr getPartial(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPartial(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPartial(const ::omero::RBoolPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPartial(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FormatPtr getFormat(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFormat(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setFormat(const ::omero::model::FormatPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setFormat(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ImagingEnvironmentPtr getImagingEnvironment(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getImagingEnvironment(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setImagingEnvironment(const ::omero::model::ImagingEnvironmentPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setImagingEnvironment(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ObjectiveSettingsPtr getObjectiveSettings(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getObjectiveSettings(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setObjectiveSettings(const ::omero::model::ObjectiveSettingsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setObjectiveSettings(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::InstrumentPtr getInstrument(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getInstrument(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setInstrument(const ::omero::model::InstrumentPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setInstrument(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::StageLabelPtr getStageLabel(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getStageLabel(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setStageLabel(const ::omero::model::StageLabelPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setStageLabel(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ExperimentPtr getExperiment(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getExperiment(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setExperiment(const ::omero::model::ExperimentPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setExperiment(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadPixels(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadPixels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfPixels(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfPixels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ImagePixelsSeq copyPixels(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyPixels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addPixels(const ::omero::model::PixelsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addPixels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllPixelsSet(const ::omero::model::ImagePixelsSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllPixelsSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removePixels(const ::omero::model::PixelsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removePixels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllPixelsSet(const ::omero::model::ImagePixelsSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllPixelsSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearPixels(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearPixels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadPixels(const ::omero::model::ImagePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadPixels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PixelsPtr getPixels(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPixels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PixelsPtr setPixels(::Ice::Int, const ::omero::model::PixelsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPixels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PixelsPtr getPrimaryPixels(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPrimaryPixels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PixelsPtr setPrimaryPixels(const ::omero::model::PixelsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPrimaryPixels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadWellSamples(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadWellSamples(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfWellSamples(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfWellSamples(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ImageWellSamplesSeq copyWellSamples(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyWellSamples(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addWellSample(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllWellSampleSet(const ::omero::model::ImageWellSamplesSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllWellSampleSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeWellSample(const ::omero::model::WellSamplePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeWellSample(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllWellSampleSet(const ::omero::model::ImageWellSamplesSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllWellSampleSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearWellSamples(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearWellSamples(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadWellSamples(const ::omero::model::ImagePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadWellSamples(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadRois(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadRois(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfRois(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfRois(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ImageRoisSeq copyRois(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyRois(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addRoi(const ::omero::model::RoiPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addRoi(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllRoiSet(const ::omero::model::ImageRoisSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllRoiSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeRoi(const ::omero::model::RoiPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeRoi(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllRoiSet(const ::omero::model::ImageRoisSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllRoiSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearRois(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearRois(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadRois(const ::omero::model::ImagePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadRois(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadDatasetLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadDatasetLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfDatasetLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfDatasetLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ImageDatasetLinksSeq copyDatasetLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyDatasetLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addDatasetImageLink(const ::omero::model::DatasetImageLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addDatasetImageLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllDatasetImageLinkSet(const ::omero::model::ImageDatasetLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllDatasetImageLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeDatasetImageLink(const ::omero::model::DatasetImageLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeDatasetImageLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllDatasetImageLinkSet(const ::omero::model::ImageDatasetLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllDatasetImageLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearDatasetLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearDatasetLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadDatasetLinks(const ::omero::model::ImagePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadDatasetLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getDatasetLinksCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getDatasetLinksCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::DatasetImageLinkPtr linkDataset(const ::omero::model::DatasetPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkDataset(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addDatasetImageLinkToBoth(const ::omero::model::DatasetImageLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addDatasetImageLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ImageDatasetLinksSeq findDatasetImageLink(const ::omero::model::DatasetPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findDatasetImageLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkDataset(const ::omero::model::DatasetPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkDataset(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeDatasetImageLinkFromBoth(const ::omero::model::DatasetImageLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeDatasetImageLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ImageLinkedDatasetSeq linkedDatasetList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedDatasetList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FilesetPtr getFileset(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFileset(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setFileset(const ::omero::model::FilesetPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setFileset(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ImageAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addImageAnnotationLink(const ::omero::model::ImageAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addImageAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllImageAnnotationLinkSet(const ::omero::model::ImageAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllImageAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeImageAnnotationLink(const ::omero::model::ImageAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeImageAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllImageAnnotationLinkSet(const ::omero::model::ImageAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllImageAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadAnnotationLinks(const ::omero::model::ImagePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAnnotationLinksCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ImageAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addImageAnnotationLinkToBoth(const ::omero::model::ImageAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addImageAnnotationLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ImageAnnotationLinksSeq findImageAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findImageAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeImageAnnotationLinkFromBoth(const ::omero::model::ImageAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeImageAnnotationLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ImageLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedAnnotationList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getName(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setName(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getDescription(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getDescription(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setDescription(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setDescription(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::RTimePtr acquisitionDate;

    ::omero::RBoolPtr archived;

    ::omero::RBoolPtr partial;

    ::omero::model::FormatPtr format;

    ::omero::model::ImagingEnvironmentPtr imagingEnvironment;

    ::omero::model::ObjectiveSettingsPtr objectiveSettings;

    ::omero::model::InstrumentPtr instrument;

    ::omero::model::StageLabelPtr stageLabel;

    ::omero::model::ExperimentPtr experiment;

    ::omero::model::ImagePixelsSeq pixelsSeq;

    bool pixelsLoaded;

    ::omero::model::ImageWellSamplesSeq wellSamplesSeq;

    bool wellSamplesLoaded;

    ::omero::model::ImageRoisSeq roisSeq;

    bool roisLoaded;

    ::omero::model::ImageDatasetLinksSeq datasetLinksSeq;

    bool datasetLinksLoaded;

    ::omero::sys::CountMap datasetLinksCountPerOwner;

    ::omero::model::FilesetPtr fileset;

    ::omero::model::ImageAnnotationLinksSeq annotationLinksSeq;

    bool annotationLinksLoaded;

    ::omero::sys::CountMap annotationLinksCountPerOwner;

    ::omero::RStringPtr name;

    ::omero::RStringPtr description;
};

}

}

#endif
