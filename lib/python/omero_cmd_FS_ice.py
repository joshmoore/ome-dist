# -*- coding: utf-8 -*-
# **********************************************************************
#
# Copyright (c) 2003-2016 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************
#
# Ice version 3.6.3
#
# <auto-generated>
#
# Generated from file `FS.ice'
#
# Warning: do not edit this file.
#
# </auto-generated>
#

from sys import version_info as _version_info_
import Ice, IcePy
import omero_Collections_ice
import omero_cmd_API_ice

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

# Included module Glacier2
_M_Glacier2 = Ice.openModule('Glacier2')

# Included module omero.cmd
_M_omero.cmd = Ice.openModule('omero.cmd')

# Start of module omero
__name__ = 'omero'

# Start of module omero.cmd
__name__ = 'omero.cmd'

if 'OriginalMetadataRequest' not in _M_omero.cmd.__dict__:
    _M_omero.cmd.OriginalMetadataRequest = Ice.createTempClass()
    class OriginalMetadataRequest(_M_omero.cmd.Request):
        """
        Requests the file metadata to be loaded for a given
        image. This should handle both the pre-FS metadata
        in file annotations as well as loading the metadata
        directly from the FS files. A OriginalMetadataResponse
        will be returned under normal conditions, otherwise a ERR
        will be returned.
        """
        def __init__(self, imageId=0):
            _M_omero.cmd.Request.__init__(self)
            self.imageId = imageId

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::OriginalMetadataRequest', '::omero::cmd::Request')

        def ice_id(self, current=None):
            return '::omero::cmd::OriginalMetadataRequest'

        def ice_staticId():
            return '::omero::cmd::OriginalMetadataRequest'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.cmd._t_OriginalMetadataRequest)

        __repr__ = __str__

    _M_omero.cmd.OriginalMetadataRequestPrx = Ice.createTempClass()
    class OriginalMetadataRequestPrx(_M_omero.cmd.RequestPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.cmd.OriginalMetadataRequestPrx.ice_checkedCast(proxy, '::omero::cmd::OriginalMetadataRequest', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.cmd.OriginalMetadataRequestPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

        def ice_staticId():
            return '::omero::cmd::OriginalMetadataRequest'
        ice_staticId = staticmethod(ice_staticId)

    _M_omero.cmd._t_OriginalMetadataRequestPrx = IcePy.defineProxy('::omero::cmd::OriginalMetadataRequest', OriginalMetadataRequestPrx)

    _M_omero.cmd._t_OriginalMetadataRequest = IcePy.defineClass('::omero::cmd::OriginalMetadataRequest', OriginalMetadataRequest, -1, (), False, False, _M_omero.cmd._t_Request, (), (('imageId', (), IcePy._t_long, False, 0),))
    OriginalMetadataRequest._ice_type = _M_omero.cmd._t_OriginalMetadataRequest

    _M_omero.cmd.OriginalMetadataRequest = OriginalMetadataRequest
    del OriginalMetadataRequest

    _M_omero.cmd.OriginalMetadataRequestPrx = OriginalMetadataRequestPrx
    del OriginalMetadataRequestPrx

if 'OriginalMetadataResponse' not in _M_omero.cmd.__dict__:
    _M_omero.cmd.OriginalMetadataResponse = Ice.createTempClass()
    class OriginalMetadataResponse(_M_omero.cmd.Response):
        """
        Successful response for OriginalMetadataRequest. Contains
        both the global and the series metadata as maps. Only one
        of filesetId or filesetAnnotationId will be set.
        Pre-FS images will have filesetAnnotationId set; otherwise
        filesetId will be set.
        Members:
        filesetId -- Set to the id of the omero.model.Fileset that this
        omero.model.Image contained in if one exists.
        fileAnnotationId -- Set to the id of the omero.model.FilesetAnnotation
        linked to this omero.model.Image if one exists.
        globalMetadata -- Metadata which applies to the entire
        omero.model.Fileset
        seriesMetadata -- Metadata specific to the series id of this
        omero.model.Image.
        In the omero.model.Fileset that this
         omero.model.Image] is contained in, there may be a large
        number of other images, but the series metadata applies only to
        this specific one.
        """
        def __init__(self, filesetId=None, fileAnnotationId=None, globalMetadata=None, seriesMetadata=None):
            _M_omero.cmd.Response.__init__(self)
            self.filesetId = filesetId
            self.fileAnnotationId = fileAnnotationId
            self.globalMetadata = globalMetadata
            self.seriesMetadata = seriesMetadata

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::OriginalMetadataResponse', '::omero::cmd::Response')

        def ice_id(self, current=None):
            return '::omero::cmd::OriginalMetadataResponse'

        def ice_staticId():
            return '::omero::cmd::OriginalMetadataResponse'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.cmd._t_OriginalMetadataResponse)

        __repr__ = __str__

    _M_omero.cmd.OriginalMetadataResponsePrx = Ice.createTempClass()
    class OriginalMetadataResponsePrx(_M_omero.cmd.ResponsePrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.cmd.OriginalMetadataResponsePrx.ice_checkedCast(proxy, '::omero::cmd::OriginalMetadataResponse', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.cmd.OriginalMetadataResponsePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

        def ice_staticId():
            return '::omero::cmd::OriginalMetadataResponse'
        ice_staticId = staticmethod(ice_staticId)

    _M_omero.cmd._t_OriginalMetadataResponsePrx = IcePy.defineProxy('::omero::cmd::OriginalMetadataResponse', OriginalMetadataResponsePrx)

    _M_omero.cmd._t_OriginalMetadataResponse = IcePy.declareClass('::omero::cmd::OriginalMetadataResponse')

    _M_omero.cmd._t_OriginalMetadataResponse = IcePy.defineClass('::omero::cmd::OriginalMetadataResponse', OriginalMetadataResponse, -1, (), False, False, _M_omero.cmd._t_Response, (), (
        ('filesetId', (), _M_omero._t_RLong, False, 0),
        ('fileAnnotationId', (), _M_omero._t_RLong, False, 0),
        ('globalMetadata', (), _M_omero._t_RTypeDict, False, 0),
        ('seriesMetadata', (), _M_omero._t_RTypeDict, False, 0)
    ))
    OriginalMetadataResponse._ice_type = _M_omero.cmd._t_OriginalMetadataResponse

    _M_omero.cmd.OriginalMetadataResponse = OriginalMetadataResponse
    del OriginalMetadataResponse

    _M_omero.cmd.OriginalMetadataResponsePrx = OriginalMetadataResponsePrx
    del OriginalMetadataResponsePrx

if 'UsedFilesRequest' not in _M_omero.cmd.__dict__:
    _M_omero.cmd.UsedFilesRequest = Ice.createTempClass()
    class UsedFilesRequest(_M_omero.cmd.Request):
        """
        Request to determine the original files associated with the given
        image. The image must have an associated Pixels object. Different
        response objects are returned depending on if the image is FS or
        pre-FS.
        Members:
        imageId -- an image ID
        """
        def __init__(self, imageId=0):
            _M_omero.cmd.Request.__init__(self)
            self.imageId = imageId

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::Request', '::omero::cmd::UsedFilesRequest')

        def ice_id(self, current=None):
            return '::omero::cmd::UsedFilesRequest'

        def ice_staticId():
            return '::omero::cmd::UsedFilesRequest'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.cmd._t_UsedFilesRequest)

        __repr__ = __str__

    _M_omero.cmd.UsedFilesRequestPrx = Ice.createTempClass()
    class UsedFilesRequestPrx(_M_omero.cmd.RequestPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.cmd.UsedFilesRequestPrx.ice_checkedCast(proxy, '::omero::cmd::UsedFilesRequest', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.cmd.UsedFilesRequestPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

        def ice_staticId():
            return '::omero::cmd::UsedFilesRequest'
        ice_staticId = staticmethod(ice_staticId)

    _M_omero.cmd._t_UsedFilesRequestPrx = IcePy.defineProxy('::omero::cmd::UsedFilesRequest', UsedFilesRequestPrx)

    _M_omero.cmd._t_UsedFilesRequest = IcePy.defineClass('::omero::cmd::UsedFilesRequest', UsedFilesRequest, -1, (), False, False, _M_omero.cmd._t_Request, (), (('imageId', (), IcePy._t_long, False, 0),))
    UsedFilesRequest._ice_type = _M_omero.cmd._t_UsedFilesRequest

    _M_omero.cmd.UsedFilesRequest = UsedFilesRequest
    del UsedFilesRequest

    _M_omero.cmd.UsedFilesRequestPrx = UsedFilesRequestPrx
    del UsedFilesRequestPrx

if 'UsedFilesResponsePreFs' not in _M_omero.cmd.__dict__:
    _M_omero.cmd.UsedFilesResponsePreFs = Ice.createTempClass()
    class UsedFilesResponsePreFs(_M_omero.cmd.Response):
        """
        The used files associated with a pre-FS image.
        Members:
        archivedFiles -- The original file IDs of any archived files associated with
        the image.
        companionFiles -- The original file IDs of any companion files associated with
        the image.
        originalMetadataFiles -- The original file IDs of any original metadata files associated
        with the image.
        """
        def __init__(self, archivedFiles=None, companionFiles=None, originalMetadataFiles=None):
            _M_omero.cmd.Response.__init__(self)
            self.archivedFiles = archivedFiles
            self.companionFiles = companionFiles
            self.originalMetadataFiles = originalMetadataFiles

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::Response', '::omero::cmd::UsedFilesResponsePreFs')

        def ice_id(self, current=None):
            return '::omero::cmd::UsedFilesResponsePreFs'

        def ice_staticId():
            return '::omero::cmd::UsedFilesResponsePreFs'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.cmd._t_UsedFilesResponsePreFs)

        __repr__ = __str__

    _M_omero.cmd.UsedFilesResponsePreFsPrx = Ice.createTempClass()
    class UsedFilesResponsePreFsPrx(_M_omero.cmd.ResponsePrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.cmd.UsedFilesResponsePreFsPrx.ice_checkedCast(proxy, '::omero::cmd::UsedFilesResponsePreFs', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.cmd.UsedFilesResponsePreFsPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

        def ice_staticId():
            return '::omero::cmd::UsedFilesResponsePreFs'
        ice_staticId = staticmethod(ice_staticId)

    _M_omero.cmd._t_UsedFilesResponsePreFsPrx = IcePy.defineProxy('::omero::cmd::UsedFilesResponsePreFs', UsedFilesResponsePreFsPrx)

    _M_omero.cmd._t_UsedFilesResponsePreFs = IcePy.defineClass('::omero::cmd::UsedFilesResponsePreFs', UsedFilesResponsePreFs, -1, (), False, False, _M_omero.cmd._t_Response, (), (
        ('archivedFiles', (), _M_omero.api._t_LongList, False, 0),
        ('companionFiles', (), _M_omero.api._t_LongList, False, 0),
        ('originalMetadataFiles', (), _M_omero.api._t_LongList, False, 0)
    ))
    UsedFilesResponsePreFs._ice_type = _M_omero.cmd._t_UsedFilesResponsePreFs

    _M_omero.cmd.UsedFilesResponsePreFs = UsedFilesResponsePreFs
    del UsedFilesResponsePreFs

    _M_omero.cmd.UsedFilesResponsePreFsPrx = UsedFilesResponsePreFsPrx
    del UsedFilesResponsePreFsPrx

if 'UsedFilesResponse' not in _M_omero.cmd.__dict__:
    _M_omero.cmd.UsedFilesResponse = Ice.createTempClass()
    class UsedFilesResponse(_M_omero.cmd.Response):
        """
        The used files associated with an FS image.
        Members:
        binaryFilesThisSeries -- The original file IDs of any binary files associated with the
        image's particular series.
        binaryFilesOtherSeries -- The original file IDs of any binary files associated with the
        image's fileset but not with its particular series.
        companionFilesThisSeries -- The original file IDs of any companion files associated with the
        image's particular series.
        companionFilesOtherSeries -- The original file IDs of any companion files associated with the
        image's fileset but not with its particular series.
        """
        def __init__(self, binaryFilesThisSeries=None, binaryFilesOtherSeries=None, companionFilesThisSeries=None, companionFilesOtherSeries=None):
            _M_omero.cmd.Response.__init__(self)
            self.binaryFilesThisSeries = binaryFilesThisSeries
            self.binaryFilesOtherSeries = binaryFilesOtherSeries
            self.companionFilesThisSeries = companionFilesThisSeries
            self.companionFilesOtherSeries = companionFilesOtherSeries

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::Response', '::omero::cmd::UsedFilesResponse')

        def ice_id(self, current=None):
            return '::omero::cmd::UsedFilesResponse'

        def ice_staticId():
            return '::omero::cmd::UsedFilesResponse'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.cmd._t_UsedFilesResponse)

        __repr__ = __str__

    _M_omero.cmd.UsedFilesResponsePrx = Ice.createTempClass()
    class UsedFilesResponsePrx(_M_omero.cmd.ResponsePrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.cmd.UsedFilesResponsePrx.ice_checkedCast(proxy, '::omero::cmd::UsedFilesResponse', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.cmd.UsedFilesResponsePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

        def ice_staticId():
            return '::omero::cmd::UsedFilesResponse'
        ice_staticId = staticmethod(ice_staticId)

    _M_omero.cmd._t_UsedFilesResponsePrx = IcePy.defineProxy('::omero::cmd::UsedFilesResponse', UsedFilesResponsePrx)

    _M_omero.cmd._t_UsedFilesResponse = IcePy.defineClass('::omero::cmd::UsedFilesResponse', UsedFilesResponse, -1, (), False, False, _M_omero.cmd._t_Response, (), (
        ('binaryFilesThisSeries', (), _M_omero.api._t_LongList, False, 0),
        ('binaryFilesOtherSeries', (), _M_omero.api._t_LongList, False, 0),
        ('companionFilesThisSeries', (), _M_omero.api._t_LongList, False, 0),
        ('companionFilesOtherSeries', (), _M_omero.api._t_LongList, False, 0)
    ))
    UsedFilesResponse._ice_type = _M_omero.cmd._t_UsedFilesResponse

    _M_omero.cmd.UsedFilesResponse = UsedFilesResponse
    del UsedFilesResponse

    _M_omero.cmd.UsedFilesResponsePrx = UsedFilesResponsePrx
    del UsedFilesResponsePrx

if 'ManageImageBinaries' not in _M_omero.cmd.__dict__:
    _M_omero.cmd.ManageImageBinaries = Ice.createTempClass()
    class ManageImageBinaries(_M_omero.cmd.Request):
        """
        Queries and modifies the various binary artifacts
        which may be linked to an omero.model.Image.
        This can be useful, e.g., after converting pre-OMERO-5
        archived original files into omero.model.Fileset.
        The command works in several stages:
        1. loads an omero.model.Image by id, failing if none
        present.
        2. renames Pixels file to '*_bak'
        3. deletes existing Pyramidfiles if present;
        This command can be run multiple times with different settings
        to iteratively test if the migration is working.
        """
        def __init__(self, imageId=0, togglePixels=False, deletePyramid=False):
            _M_omero.cmd.Request.__init__(self)
            self.imageId = imageId
            self.togglePixels = togglePixels
            self.deletePyramid = deletePyramid

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::ManageImageBinaries', '::omero::cmd::Request')

        def ice_id(self, current=None):
            return '::omero::cmd::ManageImageBinaries'

        def ice_staticId():
            return '::omero::cmd::ManageImageBinaries'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.cmd._t_ManageImageBinaries)

        __repr__ = __str__

    _M_omero.cmd.ManageImageBinariesPrx = Ice.createTempClass()
    class ManageImageBinariesPrx(_M_omero.cmd.RequestPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.cmd.ManageImageBinariesPrx.ice_checkedCast(proxy, '::omero::cmd::ManageImageBinaries', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.cmd.ManageImageBinariesPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

        def ice_staticId():
            return '::omero::cmd::ManageImageBinaries'
        ice_staticId = staticmethod(ice_staticId)

    _M_omero.cmd._t_ManageImageBinariesPrx = IcePy.defineProxy('::omero::cmd::ManageImageBinaries', ManageImageBinariesPrx)

    _M_omero.cmd._t_ManageImageBinaries = IcePy.defineClass('::omero::cmd::ManageImageBinaries', ManageImageBinaries, -1, (), False, False, _M_omero.cmd._t_Request, (), (
        ('imageId', (), IcePy._t_long, False, 0),
        ('togglePixels', (), IcePy._t_bool, False, 0),
        ('deletePyramid', (), IcePy._t_bool, False, 0)
    ))
    ManageImageBinaries._ice_type = _M_omero.cmd._t_ManageImageBinaries

    _M_omero.cmd.ManageImageBinaries = ManageImageBinaries
    del ManageImageBinaries

    _M_omero.cmd.ManageImageBinariesPrx = ManageImageBinariesPrx
    del ManageImageBinariesPrx

if 'ManageImageBinariesResponse' not in _M_omero.cmd.__dict__:
    _M_omero.cmd.ManageImageBinariesResponse = Ice.createTempClass()
    class ManageImageBinariesResponse(_M_omero.cmd.Response):
        """
        Response from a ManageImageBinaries Request.
        If no action is requested, then the fields of this
        instance can be examined to see what would be done
        if requested.
        """
        def __init__(self, filesetId=None, archivedFiles=None, pixelsPresent=False, pyramidPresent=False, archivedSize=0, pixelSize=0, pyramidSize=0, thumbnailSize=0):
            _M_omero.cmd.Response.__init__(self)
            self.filesetId = filesetId
            self.archivedFiles = archivedFiles
            self.pixelsPresent = pixelsPresent
            self.pyramidPresent = pyramidPresent
            self.archivedSize = archivedSize
            self.pixelSize = pixelSize
            self.pyramidSize = pyramidSize
            self.thumbnailSize = thumbnailSize

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::ManageImageBinariesResponse', '::omero::cmd::Response')

        def ice_id(self, current=None):
            return '::omero::cmd::ManageImageBinariesResponse'

        def ice_staticId():
            return '::omero::cmd::ManageImageBinariesResponse'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.cmd._t_ManageImageBinariesResponse)

        __repr__ = __str__

    _M_omero.cmd.ManageImageBinariesResponsePrx = Ice.createTempClass()
    class ManageImageBinariesResponsePrx(_M_omero.cmd.ResponsePrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.cmd.ManageImageBinariesResponsePrx.ice_checkedCast(proxy, '::omero::cmd::ManageImageBinariesResponse', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.cmd.ManageImageBinariesResponsePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

        def ice_staticId():
            return '::omero::cmd::ManageImageBinariesResponse'
        ice_staticId = staticmethod(ice_staticId)

    _M_omero.cmd._t_ManageImageBinariesResponsePrx = IcePy.defineProxy('::omero::cmd::ManageImageBinariesResponse', ManageImageBinariesResponsePrx)

    _M_omero.cmd._t_ManageImageBinariesResponse = IcePy.declareClass('::omero::cmd::ManageImageBinariesResponse')

    _M_omero.cmd._t_ManageImageBinariesResponse = IcePy.defineClass('::omero::cmd::ManageImageBinariesResponse', ManageImageBinariesResponse, -1, (), False, False, _M_omero.cmd._t_Response, (), (
        ('filesetId', (), _M_omero._t_RLong, False, 0),
        ('archivedFiles', (), _M_omero.api._t_LongList, False, 0),
        ('pixelsPresent', (), IcePy._t_bool, False, 0),
        ('pyramidPresent', (), IcePy._t_bool, False, 0),
        ('archivedSize', (), IcePy._t_long, False, 0),
        ('pixelSize', (), IcePy._t_long, False, 0),
        ('pyramidSize', (), IcePy._t_long, False, 0),
        ('thumbnailSize', (), IcePy._t_long, False, 0)
    ))
    ManageImageBinariesResponse._ice_type = _M_omero.cmd._t_ManageImageBinariesResponse

    _M_omero.cmd.ManageImageBinariesResponse = ManageImageBinariesResponse
    del ManageImageBinariesResponse

    _M_omero.cmd.ManageImageBinariesResponsePrx = ManageImageBinariesResponsePrx
    del ManageImageBinariesResponsePrx

if 'DiskUsage' not in _M_omero.cmd.__dict__:
    _M_omero.cmd.DiskUsage = Ice.createTempClass()
    class DiskUsage(_M_omero.cmd.Request):
        """
        Request to determine the disk usage of the given objects
        and their contents. File-system paths used by multiple objects
        are de-duplicated in the total count. Specifying a class is
        equivalent to specifying all its instances as objects.
        Permissible classes include:
        ExperimenterGroup, Experimenter, Project, Dataset,
        Screen, Plate, Well, WellSample,
        Image, Pixels, Annotation, Job, Fileset, OriginalFile.
        """
        def __init__(self, classes=None, objects=None):
            _M_omero.cmd.Request.__init__(self)
            self.classes = classes
            self.objects = objects

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::DiskUsage', '::omero::cmd::Request')

        def ice_id(self, current=None):
            return '::omero::cmd::DiskUsage'

        def ice_staticId():
            return '::omero::cmd::DiskUsage'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.cmd._t_DiskUsage)

        __repr__ = __str__

    _M_omero.cmd.DiskUsagePrx = Ice.createTempClass()
    class DiskUsagePrx(_M_omero.cmd.RequestPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.cmd.DiskUsagePrx.ice_checkedCast(proxy, '::omero::cmd::DiskUsage', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.cmd.DiskUsagePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

        def ice_staticId():
            return '::omero::cmd::DiskUsage'
        ice_staticId = staticmethod(ice_staticId)

    _M_omero.cmd._t_DiskUsagePrx = IcePy.defineProxy('::omero::cmd::DiskUsage', DiskUsagePrx)

    _M_omero.cmd._t_DiskUsage = IcePy.defineClass('::omero::cmd::DiskUsage', DiskUsage, -1, (), False, False, _M_omero.cmd._t_Request, (), (
        ('classes', (), _M_omero.api._t_StringSet, False, 0),
        ('objects', (), _M_omero.api._t_StringLongListMap, False, 0)
    ))
    DiskUsage._ice_type = _M_omero.cmd._t_DiskUsage

    _M_omero.cmd.DiskUsage = DiskUsage
    del DiskUsage

    _M_omero.cmd.DiskUsagePrx = DiskUsagePrx
    del DiskUsagePrx

if 'DiskUsageResponse' not in _M_omero.cmd.__dict__:
    _M_omero.cmd.DiskUsageResponse = Ice.createTempClass()
    class DiskUsageResponse(_M_omero.cmd.Response):
        """
        Disk usage report: bytes used and non-empty file counts on the
        repository file-system for specific objects. The counts from the
        maps may sum to more than the total if different types of object
        refer to the same file. Common referers include:
        Annotation for file annotations
        FilesetEntry for OMERO 5 image files (OMERO.fs)
        Job for import logs
        Pixels for pyramids and OMERO 4 images and archived files
        Thumbnail for the image thumbnails
        The above map values are broken down by owner-group keys.
        """
        def __init__(self, fileCountByReferer=None, bytesUsedByReferer=None, totalFileCount=None, totalBytesUsed=None):
            _M_omero.cmd.Response.__init__(self)
            self.fileCountByReferer = fileCountByReferer
            self.bytesUsedByReferer = bytesUsedByReferer
            self.totalFileCount = totalFileCount
            self.totalBytesUsed = totalBytesUsed

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::DiskUsageResponse', '::omero::cmd::Response')

        def ice_id(self, current=None):
            return '::omero::cmd::DiskUsageResponse'

        def ice_staticId():
            return '::omero::cmd::DiskUsageResponse'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.cmd._t_DiskUsageResponse)

        __repr__ = __str__

    _M_omero.cmd.DiskUsageResponsePrx = Ice.createTempClass()
    class DiskUsageResponsePrx(_M_omero.cmd.ResponsePrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.cmd.DiskUsageResponsePrx.ice_checkedCast(proxy, '::omero::cmd::DiskUsageResponse', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.cmd.DiskUsageResponsePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

        def ice_staticId():
            return '::omero::cmd::DiskUsageResponse'
        ice_staticId = staticmethod(ice_staticId)

    _M_omero.cmd._t_DiskUsageResponsePrx = IcePy.defineProxy('::omero::cmd::DiskUsageResponse', DiskUsageResponsePrx)

    _M_omero.cmd._t_DiskUsageResponse = IcePy.defineClass('::omero::cmd::DiskUsageResponse', DiskUsageResponse, -1, (), False, False, _M_omero.cmd._t_Response, (), (
        ('fileCountByReferer', (), _M_omero.api._t_LongPairToStringIntMap, False, 0),
        ('bytesUsedByReferer', (), _M_omero.api._t_LongPairToStringLongMap, False, 0),
        ('totalFileCount', (), _M_omero.api._t_LongPairIntMap, False, 0),
        ('totalBytesUsed', (), _M_omero.api._t_LongPairLongMap, False, 0)
    ))
    DiskUsageResponse._ice_type = _M_omero.cmd._t_DiskUsageResponse

    _M_omero.cmd.DiskUsageResponse = DiskUsageResponse
    del DiskUsageResponse

    _M_omero.cmd.DiskUsageResponsePrx = DiskUsageResponsePrx
    del DiskUsageResponsePrx

# End of module omero.cmd

__name__ = 'omero'

# End of module omero
