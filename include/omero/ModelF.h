// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `ModelF.ice'

#ifndef __omero__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_ModelF_h__
#define __omero__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_ModelF_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
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

class Annotation;

class Arc;

class BooleanAnnotation;

class ChecksumAlgorithm;

class Dataset;

class Details;

class Event;

class EventLog;

class Experimenter;

class ExperimenterGroup;

class ExternalInfo;

class Family;

class Filament;

class Fileset;

class FilesetJobLink;

class Format;

class IObject;

class Image;

class Instrument;

class Job;

class JobStatus;

class Laser;

class LogicalChannel;

class OriginalFile;

class Permissions;

class Pixels;

class PixelsType;

class PlaneInfo;

class Plate;

class Project;

class QuantumDef;

class RenderingDef;

class RenderingModel;

class Roi;

class Screen;

class ScriptJob;

class Shape;

class Session;

class Share;

class TextAnnotation;

class Well;

}

}

}

namespace omero
{

namespace model
{

class Annotation;
bool operator==(const Annotation&, const Annotation&);
bool operator<(const Annotation&, const Annotation&);

class Arc;
bool operator==(const Arc&, const Arc&);
bool operator<(const Arc&, const Arc&);

class BooleanAnnotation;
bool operator==(const BooleanAnnotation&, const BooleanAnnotation&);
bool operator<(const BooleanAnnotation&, const BooleanAnnotation&);

class ChecksumAlgorithm;
bool operator==(const ChecksumAlgorithm&, const ChecksumAlgorithm&);
bool operator<(const ChecksumAlgorithm&, const ChecksumAlgorithm&);

class Dataset;
bool operator==(const Dataset&, const Dataset&);
bool operator<(const Dataset&, const Dataset&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class Event;
bool operator==(const Event&, const Event&);
bool operator<(const Event&, const Event&);

class EventLog;
bool operator==(const EventLog&, const EventLog&);
bool operator<(const EventLog&, const EventLog&);

class Experimenter;
bool operator==(const Experimenter&, const Experimenter&);
bool operator<(const Experimenter&, const Experimenter&);

class ExperimenterGroup;
bool operator==(const ExperimenterGroup&, const ExperimenterGroup&);
bool operator<(const ExperimenterGroup&, const ExperimenterGroup&);

class ExternalInfo;
bool operator==(const ExternalInfo&, const ExternalInfo&);
bool operator<(const ExternalInfo&, const ExternalInfo&);

class Family;
bool operator==(const Family&, const Family&);
bool operator<(const Family&, const Family&);

class Filament;
bool operator==(const Filament&, const Filament&);
bool operator<(const Filament&, const Filament&);

class Fileset;
bool operator==(const Fileset&, const Fileset&);
bool operator<(const Fileset&, const Fileset&);

class FilesetJobLink;
bool operator==(const FilesetJobLink&, const FilesetJobLink&);
bool operator<(const FilesetJobLink&, const FilesetJobLink&);

class Format;
bool operator==(const Format&, const Format&);
bool operator<(const Format&, const Format&);

class IObject;
bool operator==(const IObject&, const IObject&);
bool operator<(const IObject&, const IObject&);

class Image;
bool operator==(const Image&, const Image&);
bool operator<(const Image&, const Image&);

class Instrument;
bool operator==(const Instrument&, const Instrument&);
bool operator<(const Instrument&, const Instrument&);

class Job;
bool operator==(const Job&, const Job&);
bool operator<(const Job&, const Job&);

class JobStatus;
bool operator==(const JobStatus&, const JobStatus&);
bool operator<(const JobStatus&, const JobStatus&);

class Laser;
bool operator==(const Laser&, const Laser&);
bool operator<(const Laser&, const Laser&);

class LogicalChannel;
bool operator==(const LogicalChannel&, const LogicalChannel&);
bool operator<(const LogicalChannel&, const LogicalChannel&);

class OriginalFile;
bool operator==(const OriginalFile&, const OriginalFile&);
bool operator<(const OriginalFile&, const OriginalFile&);

class Permissions;
bool operator==(const Permissions&, const Permissions&);
bool operator<(const Permissions&, const Permissions&);

class Pixels;
bool operator==(const Pixels&, const Pixels&);
bool operator<(const Pixels&, const Pixels&);

class PixelsType;
bool operator==(const PixelsType&, const PixelsType&);
bool operator<(const PixelsType&, const PixelsType&);

class PlaneInfo;
bool operator==(const PlaneInfo&, const PlaneInfo&);
bool operator<(const PlaneInfo&, const PlaneInfo&);

class Plate;
bool operator==(const Plate&, const Plate&);
bool operator<(const Plate&, const Plate&);

class Project;
bool operator==(const Project&, const Project&);
bool operator<(const Project&, const Project&);

class QuantumDef;
bool operator==(const QuantumDef&, const QuantumDef&);
bool operator<(const QuantumDef&, const QuantumDef&);

class RenderingDef;
bool operator==(const RenderingDef&, const RenderingDef&);
bool operator<(const RenderingDef&, const RenderingDef&);

class RenderingModel;
bool operator==(const RenderingModel&, const RenderingModel&);
bool operator<(const RenderingModel&, const RenderingModel&);

class Roi;
bool operator==(const Roi&, const Roi&);
bool operator<(const Roi&, const Roi&);

class Screen;
bool operator==(const Screen&, const Screen&);
bool operator<(const Screen&, const Screen&);

class ScriptJob;
bool operator==(const ScriptJob&, const ScriptJob&);
bool operator<(const ScriptJob&, const ScriptJob&);

class Shape;
bool operator==(const Shape&, const Shape&);
bool operator<(const Shape&, const Shape&);

class Session;
bool operator==(const Session&, const Session&);
bool operator<(const Session&, const Session&);

class Share;
bool operator==(const Share&, const Share&);
bool operator<(const Share&, const Share&);

class TextAnnotation;
bool operator==(const TextAnnotation&, const TextAnnotation&);
bool operator<(const TextAnnotation&, const TextAnnotation&);

class Well;
bool operator==(const Well&, const Well&);
bool operator<(const Well&, const Well&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Annotation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Annotation*);

::Ice::Object* upCast(::omero::model::Arc*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Arc*);

::Ice::Object* upCast(::omero::model::BooleanAnnotation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::BooleanAnnotation*);

::Ice::Object* upCast(::omero::model::ChecksumAlgorithm*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::ChecksumAlgorithm*);

::Ice::Object* upCast(::omero::model::Dataset*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Dataset*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::Event*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Event*);

::Ice::Object* upCast(::omero::model::EventLog*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::EventLog*);

::Ice::Object* upCast(::omero::model::Experimenter*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Experimenter*);

::Ice::Object* upCast(::omero::model::ExperimenterGroup*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::ExperimenterGroup*);

::Ice::Object* upCast(::omero::model::ExternalInfo*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::ExternalInfo*);

::Ice::Object* upCast(::omero::model::Family*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Family*);

::Ice::Object* upCast(::omero::model::Filament*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Filament*);

::Ice::Object* upCast(::omero::model::Fileset*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Fileset*);

::Ice::Object* upCast(::omero::model::FilesetJobLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::FilesetJobLink*);

::Ice::Object* upCast(::omero::model::Format*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Format*);

::Ice::Object* upCast(::omero::model::IObject*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::IObject*);

::Ice::Object* upCast(::omero::model::Image*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Image*);

::Ice::Object* upCast(::omero::model::Instrument*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Instrument*);

::Ice::Object* upCast(::omero::model::Job*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Job*);

::Ice::Object* upCast(::omero::model::JobStatus*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::JobStatus*);

::Ice::Object* upCast(::omero::model::Laser*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Laser*);

::Ice::Object* upCast(::omero::model::LogicalChannel*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::LogicalChannel*);

::Ice::Object* upCast(::omero::model::OriginalFile*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::OriginalFile*);

::Ice::Object* upCast(::omero::model::Permissions*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Permissions*);

::Ice::Object* upCast(::omero::model::Pixels*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Pixels*);

::Ice::Object* upCast(::omero::model::PixelsType*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::PixelsType*);

::Ice::Object* upCast(::omero::model::PlaneInfo*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::PlaneInfo*);

::Ice::Object* upCast(::omero::model::Plate*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Plate*);

::Ice::Object* upCast(::omero::model::Project*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Project*);

::Ice::Object* upCast(::omero::model::QuantumDef*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::QuantumDef*);

::Ice::Object* upCast(::omero::model::RenderingDef*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::RenderingDef*);

::Ice::Object* upCast(::omero::model::RenderingModel*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::RenderingModel*);

::Ice::Object* upCast(::omero::model::Roi*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Roi*);

::Ice::Object* upCast(::omero::model::Screen*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Screen*);

::Ice::Object* upCast(::omero::model::ScriptJob*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::ScriptJob*);

::Ice::Object* upCast(::omero::model::Shape*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Shape*);

::Ice::Object* upCast(::omero::model::Session*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Session*);

::Ice::Object* upCast(::omero::model::Share*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Share*);

::Ice::Object* upCast(::omero::model::TextAnnotation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::TextAnnotation*);

::Ice::Object* upCast(::omero::model::Well*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Well*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Annotation> AnnotationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Annotation> AnnotationPrx;

void __read(::IceInternal::BasicStream*, AnnotationPrx&);
void __patch__AnnotationPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Arc> ArcPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Arc> ArcPrx;

void __read(::IceInternal::BasicStream*, ArcPrx&);
void __patch__ArcPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::BooleanAnnotation> BooleanAnnotationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::BooleanAnnotation> BooleanAnnotationPrx;

void __read(::IceInternal::BasicStream*, BooleanAnnotationPrx&);
void __patch__BooleanAnnotationPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::ChecksumAlgorithm> ChecksumAlgorithmPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ChecksumAlgorithm> ChecksumAlgorithmPrx;

void __read(::IceInternal::BasicStream*, ChecksumAlgorithmPrx&);
void __patch__ChecksumAlgorithmPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Dataset> DatasetPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Dataset> DatasetPrx;

void __read(::IceInternal::BasicStream*, DatasetPrx&);
void __patch__DatasetPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Event> EventPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Event> EventPrx;

void __read(::IceInternal::BasicStream*, EventPrx&);
void __patch__EventPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::EventLog> EventLogPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::EventLog> EventLogPrx;

void __read(::IceInternal::BasicStream*, EventLogPrx&);
void __patch__EventLogPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Experimenter> ExperimenterPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Experimenter> ExperimenterPrx;

void __read(::IceInternal::BasicStream*, ExperimenterPrx&);
void __patch__ExperimenterPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::ExperimenterGroup> ExperimenterGroupPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ExperimenterGroup> ExperimenterGroupPrx;

void __read(::IceInternal::BasicStream*, ExperimenterGroupPrx&);
void __patch__ExperimenterGroupPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::ExternalInfo> ExternalInfoPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ExternalInfo> ExternalInfoPrx;

void __read(::IceInternal::BasicStream*, ExternalInfoPrx&);
void __patch__ExternalInfoPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Family> FamilyPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Family> FamilyPrx;

void __read(::IceInternal::BasicStream*, FamilyPrx&);
void __patch__FamilyPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Filament> FilamentPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Filament> FilamentPrx;

void __read(::IceInternal::BasicStream*, FilamentPrx&);
void __patch__FilamentPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Fileset> FilesetPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Fileset> FilesetPrx;

void __read(::IceInternal::BasicStream*, FilesetPrx&);
void __patch__FilesetPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::FilesetJobLink> FilesetJobLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::FilesetJobLink> FilesetJobLinkPrx;

void __read(::IceInternal::BasicStream*, FilesetJobLinkPrx&);
void __patch__FilesetJobLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Format> FormatPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Format> FormatPrx;

void __read(::IceInternal::BasicStream*, FormatPrx&);
void __patch__FormatPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::IObject> IObjectPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::IObject> IObjectPrx;

void __read(::IceInternal::BasicStream*, IObjectPrx&);
void __patch__IObjectPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Image> ImagePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Image> ImagePrx;

void __read(::IceInternal::BasicStream*, ImagePrx&);
void __patch__ImagePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Instrument> InstrumentPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Instrument> InstrumentPrx;

void __read(::IceInternal::BasicStream*, InstrumentPrx&);
void __patch__InstrumentPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Job> JobPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Job> JobPrx;

void __read(::IceInternal::BasicStream*, JobPrx&);
void __patch__JobPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::JobStatus> JobStatusPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::JobStatus> JobStatusPrx;

void __read(::IceInternal::BasicStream*, JobStatusPrx&);
void __patch__JobStatusPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Laser> LaserPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Laser> LaserPrx;

void __read(::IceInternal::BasicStream*, LaserPrx&);
void __patch__LaserPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::LogicalChannel> LogicalChannelPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::LogicalChannel> LogicalChannelPrx;

void __read(::IceInternal::BasicStream*, LogicalChannelPrx&);
void __patch__LogicalChannelPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::OriginalFile> OriginalFilePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::OriginalFile> OriginalFilePrx;

void __read(::IceInternal::BasicStream*, OriginalFilePrx&);
void __patch__OriginalFilePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Permissions> PermissionsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Permissions> PermissionsPrx;

void __read(::IceInternal::BasicStream*, PermissionsPrx&);
void __patch__PermissionsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Pixels> PixelsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Pixels> PixelsPrx;

void __read(::IceInternal::BasicStream*, PixelsPrx&);
void __patch__PixelsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::PixelsType> PixelsTypePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::PixelsType> PixelsTypePrx;

void __read(::IceInternal::BasicStream*, PixelsTypePrx&);
void __patch__PixelsTypePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::PlaneInfo> PlaneInfoPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::PlaneInfo> PlaneInfoPrx;

void __read(::IceInternal::BasicStream*, PlaneInfoPrx&);
void __patch__PlaneInfoPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Plate> PlatePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Plate> PlatePrx;

void __read(::IceInternal::BasicStream*, PlatePrx&);
void __patch__PlatePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Project> ProjectPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Project> ProjectPrx;

void __read(::IceInternal::BasicStream*, ProjectPrx&);
void __patch__ProjectPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::QuantumDef> QuantumDefPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::QuantumDef> QuantumDefPrx;

void __read(::IceInternal::BasicStream*, QuantumDefPrx&);
void __patch__QuantumDefPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::RenderingDef> RenderingDefPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::RenderingDef> RenderingDefPrx;

void __read(::IceInternal::BasicStream*, RenderingDefPrx&);
void __patch__RenderingDefPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::RenderingModel> RenderingModelPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::RenderingModel> RenderingModelPrx;

void __read(::IceInternal::BasicStream*, RenderingModelPrx&);
void __patch__RenderingModelPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Roi> RoiPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Roi> RoiPrx;

void __read(::IceInternal::BasicStream*, RoiPrx&);
void __patch__RoiPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Screen> ScreenPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Screen> ScreenPrx;

void __read(::IceInternal::BasicStream*, ScreenPrx&);
void __patch__ScreenPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::ScriptJob> ScriptJobPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ScriptJob> ScriptJobPrx;

void __read(::IceInternal::BasicStream*, ScriptJobPrx&);
void __patch__ScriptJobPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Shape> ShapePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Shape> ShapePrx;

void __read(::IceInternal::BasicStream*, ShapePrx&);
void __patch__ShapePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Session> SessionPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Session> SessionPrx;

void __read(::IceInternal::BasicStream*, SessionPrx&);
void __patch__SessionPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Share> SharePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Share> SharePrx;

void __read(::IceInternal::BasicStream*, SharePrx&);
void __patch__SharePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::TextAnnotation> TextAnnotationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::TextAnnotation> TextAnnotationPrx;

void __read(::IceInternal::BasicStream*, TextAnnotationPrx&);
void __patch__TextAnnotationPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Well> WellPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Well> WellPrx;

void __read(::IceInternal::BasicStream*, WellPrx&);
void __patch__WellPtr(void*, ::Ice::ObjectPtr&);

}

}

#endif
