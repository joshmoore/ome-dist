# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Exporter.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_ServerErrors_ice
import omero_ServicesF_ice

# Included module Ice
_M_Ice = Ice.openModule('Ice')

# Included module Glacier2
_M_Glacier2 = Ice.openModule('Glacier2')

# Included module omero
_M_omero = Ice.openModule('omero')

# Included module omero.model
_M_omero.model = Ice.openModule('omero.model')

# Included module omero.sys
_M_omero.sys = Ice.openModule('omero.sys')

# Included module omero.api
_M_omero.api = Ice.openModule('omero.api')

# Included module omero.grid
_M_omero.grid = Ice.openModule('omero.grid')

# Start of module omero
__name__ = 'omero'

# Start of module omero.api
__name__ = 'omero.api'

if not _M_omero.api.__dict__.has_key('Exporter'):
    _M_omero.api.Exporter = Ice.createTempClass()
    class Exporter(_M_omero.api.StatefulServiceInterface):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.api.Exporter:
                raise RuntimeError('omero.api.Exporter is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::Exporter', '::omero::api::ServiceInterface', '::omero::api::StatefulServiceInterface')

        def ice_id(self, current=None):
            return '::omero::api::Exporter'

        def ice_staticId():
            return '::omero::api::Exporter'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def addImage_async(self, _cb, id, current=None):
        # def generateXml_async(self, _cb, current=None):
        # def generateTiff_async(self, _cb, current=None):
        # def read_async(self, _cb, position, length, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_Exporter)

        __repr__ = __str__

    _M_omero.api.ExporterPrx = Ice.createTempClass()
    class ExporterPrx(_M_omero.api.StatefulServiceInterfacePrx):

        def addImage(self, id, _ctx=None):
            return _M_omero.api.Exporter._op_addImage.invoke(self, ((id, ), _ctx))

        def addImage_async(self, _cb, id, _ctx=None):
            return _M_omero.api.Exporter._op_addImage.invokeAsync(self, (_cb, (id, ), _ctx))

        def generateXml(self, _ctx=None):
            return _M_omero.api.Exporter._op_generateXml.invoke(self, ((), _ctx))

        def generateXml_async(self, _cb, _ctx=None):
            return _M_omero.api.Exporter._op_generateXml.invokeAsync(self, (_cb, (), _ctx))

        def generateTiff(self, _ctx=None):
            return _M_omero.api.Exporter._op_generateTiff.invoke(self, ((), _ctx))

        def generateTiff_async(self, _cb, _ctx=None):
            return _M_omero.api.Exporter._op_generateTiff.invokeAsync(self, (_cb, (), _ctx))

        def read(self, position, length, _ctx=None):
            return _M_omero.api.Exporter._op_read.invoke(self, ((position, length), _ctx))

        def read_async(self, _cb, position, length, _ctx=None):
            return _M_omero.api.Exporter._op_read.invokeAsync(self, (_cb, (position, length), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.ExporterPrx.ice_checkedCast(proxy, '::omero::api::Exporter', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.ExporterPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_ExporterPrx = IcePy.defineProxy('::omero::api::Exporter', ExporterPrx)

    _M_omero.api._t_Exporter = IcePy.defineClass('::omero::api::Exporter', Exporter, (), True, None, (_M_omero.api._t_StatefulServiceInterface,), ())
    Exporter.ice_type = _M_omero.api._t_Exporter

    Exporter._op_addImage = IcePy.Operation('addImage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), None, (_M_omero._t_ServerError,))
    Exporter._op_generateXml = IcePy.Operation('generateXml', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), IcePy._t_long, (_M_omero._t_ServerError,))
    Exporter._op_generateTiff = IcePy.Operation('generateTiff', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), IcePy._t_long, (_M_omero._t_ServerError,))
    Exporter._op_read = IcePy.Operation('read', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_long), ((), IcePy._t_int)), (), _M_Ice._t_ByteSeq, (_M_omero._t_ServerError,))

    _M_omero.api.Exporter = Exporter
    del Exporter

    _M_omero.api.ExporterPrx = ExporterPrx
    del ExporterPrx

# End of module omero.api

__name__ = 'omero'

# End of module omero
