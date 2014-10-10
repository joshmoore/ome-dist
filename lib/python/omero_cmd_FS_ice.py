# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `FS.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
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

if not _M_omero.cmd.__dict__.has_key('OriginalMetadataRequest'):
    _M_omero.cmd.OriginalMetadataRequest = Ice.createTempClass()
    class OriginalMetadataRequest(_M_omero.cmd.Request):
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

    _M_omero.cmd._t_OriginalMetadataRequestPrx = IcePy.defineProxy('::omero::cmd::OriginalMetadataRequest', OriginalMetadataRequestPrx)

    _M_omero.cmd._t_OriginalMetadataRequest = IcePy.defineClass('::omero::cmd::OriginalMetadataRequest', OriginalMetadataRequest, (), False, _M_omero.cmd._t_Request, (), (('imageId', (), IcePy._t_long),))
    OriginalMetadataRequest.ice_type = _M_omero.cmd._t_OriginalMetadataRequest

    _M_omero.cmd.OriginalMetadataRequest = OriginalMetadataRequest
    del OriginalMetadataRequest

    _M_omero.cmd.OriginalMetadataRequestPrx = OriginalMetadataRequestPrx
    del OriginalMetadataRequestPrx

if not _M_omero.cmd.__dict__.has_key('OriginalMetadataResponse'):
    _M_omero.cmd.OriginalMetadataResponse = Ice.createTempClass()
    class OriginalMetadataResponse(_M_omero.cmd.Response):
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

    _M_omero.cmd._t_OriginalMetadataResponsePrx = IcePy.defineProxy('::omero::cmd::OriginalMetadataResponse', OriginalMetadataResponsePrx)

    _M_omero.cmd._t_OriginalMetadataResponse = IcePy.declareClass('::omero::cmd::OriginalMetadataResponse')

    _M_omero.cmd._t_OriginalMetadataResponse = IcePy.defineClass('::omero::cmd::OriginalMetadataResponse', OriginalMetadataResponse, (), False, _M_omero.cmd._t_Response, (), (
        ('filesetId', (), _M_omero._t_RLong),
        ('fileAnnotationId', (), _M_omero._t_RLong),
        ('globalMetadata', (), _M_omero._t_RTypeDict),
        ('seriesMetadata', (), _M_omero._t_RTypeDict)
    ))
    OriginalMetadataResponse.ice_type = _M_omero.cmd._t_OriginalMetadataResponse

    _M_omero.cmd.OriginalMetadataResponse = OriginalMetadataResponse
    del OriginalMetadataResponse

    _M_omero.cmd.OriginalMetadataResponsePrx = OriginalMetadataResponsePrx
    del OriginalMetadataResponsePrx

if not _M_omero.cmd.__dict__.has_key('ManageImageBinaries'):
    _M_omero.cmd.ManageImageBinaries = Ice.createTempClass()
    class ManageImageBinaries(_M_omero.cmd.Request):
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

    _M_omero.cmd._t_ManageImageBinariesPrx = IcePy.defineProxy('::omero::cmd::ManageImageBinaries', ManageImageBinariesPrx)

    _M_omero.cmd._t_ManageImageBinaries = IcePy.defineClass('::omero::cmd::ManageImageBinaries', ManageImageBinaries, (), False, _M_omero.cmd._t_Request, (), (
        ('imageId', (), IcePy._t_long),
        ('togglePixels', (), IcePy._t_bool),
        ('deletePyramid', (), IcePy._t_bool)
    ))
    ManageImageBinaries.ice_type = _M_omero.cmd._t_ManageImageBinaries

    _M_omero.cmd.ManageImageBinaries = ManageImageBinaries
    del ManageImageBinaries

    _M_omero.cmd.ManageImageBinariesPrx = ManageImageBinariesPrx
    del ManageImageBinariesPrx

if not _M_omero.cmd.__dict__.has_key('ManageImageBinariesResponse'):
    _M_omero.cmd.ManageImageBinariesResponse = Ice.createTempClass()
    class ManageImageBinariesResponse(_M_omero.cmd.Response):
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

    _M_omero.cmd._t_ManageImageBinariesResponsePrx = IcePy.defineProxy('::omero::cmd::ManageImageBinariesResponse', ManageImageBinariesResponsePrx)

    _M_omero.cmd._t_ManageImageBinariesResponse = IcePy.declareClass('::omero::cmd::ManageImageBinariesResponse')

    _M_omero.cmd._t_ManageImageBinariesResponse = IcePy.defineClass('::omero::cmd::ManageImageBinariesResponse', ManageImageBinariesResponse, (), False, _M_omero.cmd._t_Response, (), (
        ('filesetId', (), _M_omero._t_RLong),
        ('archivedFiles', (), _M_omero.api._t_LongList),
        ('pixelsPresent', (), IcePy._t_bool),
        ('pyramidPresent', (), IcePy._t_bool),
        ('archivedSize', (), IcePy._t_long),
        ('pixelSize', (), IcePy._t_long),
        ('pyramidSize', (), IcePy._t_long),
        ('thumbnailSize', (), IcePy._t_long)
    ))
    ManageImageBinariesResponse.ice_type = _M_omero.cmd._t_ManageImageBinariesResponse

    _M_omero.cmd.ManageImageBinariesResponse = ManageImageBinariesResponse
    del ManageImageBinariesResponse

    _M_omero.cmd.ManageImageBinariesResponsePrx = ManageImageBinariesResponsePrx
    del ManageImageBinariesResponsePrx

# End of module omero.cmd

__name__ = 'omero'

# End of module omero
