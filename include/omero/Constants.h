// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Constants.ice'

#ifndef __omero__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_Constants_h__
#define __omero__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_Constants_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
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

namespace omero
{

namespace constants
{

const ::std::string CLIENTUUID = "omero.client.uuid";

const ::std::string SESSIONUUID = "omero.session.uuid";

const ::Ice::Int GCINTERVAL = 60;

const ::Ice::Int GLACIER2PORT = 4064;

const ::Ice::Int MESSAGESIZEMAX = 65536;

const ::Ice::Int DEFAULTBATCHSIZE = 2000;

const ::Ice::Int DEFAULTBLOCKSIZE = 5000000;

const ::Ice::Int CLIENTTHREADPOOLSIZE = 5;

const ::Ice::Int CONNECTTIMEOUT = 5000;

const ::std::string DEFAULTROUTER = "OMERO.Glacier2/router:ssl -p \100omero.port\100 -h \100omero.host\100";

const ::std::string ADMINSERVICE = "omero.api.IAdmin";

const ::std::string ANALYSISSERVICE = "omero.api.IAnalysis";

const ::std::string CONFIGSERVICE = "omero.api.IConfig";

const ::std::string CONTAINERSERVICE = "omero.api.IContainer";

const ::std::string GATEWAYSERVICE = "omero.api.Gateway";

const ::std::string EXPORTERSERVICE = "omero.api.Exporter";

const ::std::string DELETESERVICE = "omero.api.IDelete";

const ::std::string LDAPSERVICE = "omero.api.ILdap";

const ::std::string PIXELSSERVICE = "omero.api.IPixels";

const ::std::string PROJECTIONSERVICE = "omero.api.IProjection";

const ::std::string QUERYSERVICE = "omero.api.IQuery";

const ::std::string SESSIONSERVICE = "omero.api.ISession";

const ::std::string SHARESERVICE = "omero.api.IShare";

const ::std::string TIMELINESERVICE = "omero.api.ITimeline";

const ::std::string TYPESSERVICE = "omero.api.ITypes";

const ::std::string UPDATESERVICE = "omero.api.IUpdate";

const ::std::string JOBHANDLE = "omero.api.JobHandle";

const ::std::string RAWFILESTORE = "omero.api.RawFileStore";

const ::std::string RAWPIXELSSTORE = "omero.api.RawPixelsStore";

const ::std::string RENDERINGENGINE = "omero.api.RenderingEngine";

const ::std::string ROISERVICE = "omero.api.IRoi";

const ::std::string SCRIPTSERVICE = "omero.api.IScript";

const ::std::string SEARCH = "omero.api.Search";

const ::std::string THUMBNAILSTORE = "omero.api.ThumbnailStore";

const ::std::string REPOSITORYINFO = "omero.api.IRepositoryInfo";

const ::std::string RENDERINGSETTINGS = "omero.api.IRenderingSettings";

const ::std::string METADATASERVICE = "omero.api.IMetadata";

const ::std::string SHAREDRESOURCES = "omero.grid.SharedResources";

const ::std::string USERNAME = "omero.user";

const ::std::string PASSWORD = "omero.pass";

const ::std::string GROUP = "omero.group";

const ::std::string EVENT = "omero.event";

const ::std::string AGENT = "omero.agent";

namespace cluster
{

const ::std::string REDIRECT = "omero.cluster.redirect";

}

namespace annotation
{

namespace file
{

const ::std::string ORIGINALMETADATAPREFIX = "/openmicroscopy.org/omero/image_files/";

const ::std::string ORIGINALMETADATA = "original_metadata.txt";

}

}

namespace data
{

const ::std::string NONAMESET = "NO_NAME_SET";

}

namespace metadata
{

const ::std::string NSINSIGHTTAGSET = "openmicroscopy.org/omero/insight/tagset";

const ::std::string NSINSIGHTRATING = "openmicroscopy.org/omero/insight/rating";

const ::std::string NSEDITORPROTOCOL = "openmicroscopy.org/omero/editor/protocol";

const ::std::string NSEDITOREXPERIMENT = "openmicroscopy.org/omero/editor/experiment";

const ::std::string NSMOVIE = "openmicroscopy.org/omero/movie";

}

namespace namespaces
{

const ::std::string NSFSRENAME = "openmicroscopy.org/omero/fs/rename";

const ::std::string NSMEASUREMENT = "openmicroscopy.org/omero/measurement";

const ::std::string NSAUTOCLOSE = "openmicroscopy.org/omero/import/autoClose";

const ::std::string NSCOMPANIONFILE = "openmicroscopy.org/omero/import/companionFile";

const ::std::string NSLOGFILE = "openmicroscopy.org/omero/import/logFile";

const ::std::string NSFILETRANSFER = "openmicroscopy.org/omero/import/fileTransfer";

const ::std::string NSEXPERIMENTERPHOTO = "openmicroscopy.org/omero/experimenter/photo";

const ::std::string NSBULKANNOTATIONS = "openmicroscopy.org/omero/bulk_annotations";

const ::std::string NSOMETIFF = "openmicroscopy.org/omero/ome_tiff";

const ::std::string NSCREATED = "openmicroscopy.org/omero/scripts/results/created";

const ::std::string NSDOWNLOAD = "openmicroscopy.org/omero/scripts/results/download";

const ::std::string NSVIEW = "openmicroscopy.org/omero/scripts/results/view";

const ::std::string NSMODULO = "openmicroscopy.org/omero/dimension/modulo";

}

namespace analysis
{

namespace flim
{

const ::std::string NSFLIM = "openmicroscopy.org/omero/analysis/flim";

const ::std::string KEYWORDFLIMCELL = "Cell";

const ::std::string KEYWORDFLIMBACKGROUND = "Background";

}

}

namespace jobs
{

const ::std::string SUBMITTED = "Submitted";

const ::std::string RESUBMITTED = "Resubmitted";

const ::std::string QUEUED = "Queued";

const ::std::string REQUEUED = "Requeued";

const ::std::string RUNNING = "Running";

const ::std::string ERRORX = "Error";

const ::std::string WAITING = "Waiting";

const ::std::string FINISHED = "Finished";

const ::std::string CANCELLED = "Cancelled";

}

namespace permissions
{

const ::Ice::Int LINKRESTRICTION = 0;

const ::Ice::Int EDITRESTRICTION = 1;

const ::Ice::Int DELETERESTRICTION = 2;

const ::Ice::Int ANNOTATERESTRICTION = 3;

}

namespace projection
{

const ::std::string MAXIMUMINTENSITYMETHODOLOGY = "MAXIMUM_INTENSITY_PROJECTION";

const ::std::string MEANINTENSITYMETHODOLOGY = "MEAN_INTENSITY_PROJECTION";

const ::std::string SUMINTENSITYMETHODOLOGY = "SUM_INTENSITY_PROJECTION";

enum ProjectionType
{
    MAXIMUMINTENSITY,
    MEANINTENSITY,
    SUMINTENSITY
};

void __write(::IceInternal::BasicStream*, ProjectionType);
void __read(::IceInternal::BasicStream*, ProjectionType&);

}

namespace topics
{

const ::std::string PROCESSORACCEPTS = "/internal/ProcessorAccept";

const ::std::string HEARTBEAT = "/public/HeartBeat";

}

namespace categories
{

const ::std::string PROCESSORCALLBACK = "ProcessorCallback";

const ::std::string PROCESSCALLBACK = "ProcessCallback";

}

}

}

#endif
