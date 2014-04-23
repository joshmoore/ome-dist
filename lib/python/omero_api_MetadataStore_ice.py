# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `MetadataStore.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import Ice_BuiltinSequences_ice
import omero_ModelF_ice
import omero_ServicesF_ice
import omero_Scripts_ice
import omero_Repositories_ice

# Included module Ice
_M_Ice = Ice.openModule('Ice')

# Included module omero
_M_omero = Ice.openModule('omero')

# Included module omero.model
_M_omero.model = Ice.openModule('omero.model')

# Included module Glacier2
_M_Glacier2 = Ice.openModule('Glacier2')

# Included module omero.sys
_M_omero.sys = Ice.openModule('omero.sys')

# Included module omero.api
_M_omero.api = Ice.openModule('omero.api')

# Included module omero.grid
_M_omero.grid = Ice.openModule('omero.grid')

# Included module omero.cmd
_M_omero.cmd = Ice.openModule('omero.cmd')

# Start of module omero
__name__ = 'omero'

# Start of module omero.constants
_M_omero.constants = Ice.openModule('omero.constants')
__name__ = 'omero.constants'

_M_omero.constants.METADATASTORE = "omero.api.MetadataStore"

# End of module omero.constants

__name__ = 'omero'

# Start of module omero.metadatastore
_M_omero.metadatastore = Ice.openModule('omero.metadatastore')
__name__ = 'omero.metadatastore'

if not _M_omero.metadatastore.__dict__.has_key('IObjectContainer'):
    _M_omero.metadatastore.IObjectContainer = Ice.createTempClass()
    class IObjectContainer(Ice.Object):
        def __init__(self, LSID='', indexes=None, sourceObject=None):
            self.LSID = LSID
            self.indexes = indexes
            self.sourceObject = sourceObject

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::metadatastore::IObjectContainer')

        def ice_id(self, current=None):
            return '::omero::metadatastore::IObjectContainer'

        def ice_staticId():
            return '::omero::metadatastore::IObjectContainer'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.metadatastore._t_IObjectContainer)

        __repr__ = __str__

    _M_omero.metadatastore.IObjectContainerPrx = Ice.createTempClass()
    class IObjectContainerPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.metadatastore.IObjectContainerPrx.ice_checkedCast(proxy, '::omero::metadatastore::IObjectContainer', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.metadatastore.IObjectContainerPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.metadatastore._t_IObjectContainerPrx = IcePy.defineProxy('::omero::metadatastore::IObjectContainer', IObjectContainerPrx)

    _M_omero.metadatastore._t_IObjectContainer = IcePy.declareClass('::omero::metadatastore::IObjectContainer')

    _M_omero.metadatastore._t_IObjectContainer = IcePy.defineClass('::omero::metadatastore::IObjectContainer', IObjectContainer, (), False, None, (), (
        ('LSID', (), IcePy._t_string),
        ('indexes', (), _M_omero.api._t_StringIntMap),
        ('sourceObject', (), _M_omero.model._t_IObject)
    ))
    IObjectContainer.ice_type = _M_omero.metadatastore._t_IObjectContainer

    _M_omero.metadatastore.IObjectContainer = IObjectContainer
    del IObjectContainer

    _M_omero.metadatastore.IObjectContainerPrx = IObjectContainerPrx
    del IObjectContainerPrx

if not _M_omero.metadatastore.__dict__.has_key('_t_IObjectContainerArray'):
    _M_omero.metadatastore._t_IObjectContainerArray = IcePy.defineSequence('::omero::metadatastore::IObjectContainerArray', (), _M_omero.metadatastore._t_IObjectContainer)

# End of module omero.metadatastore

__name__ = 'omero'

# Start of module omero.api
__name__ = 'omero.api'

if not _M_omero.api.__dict__.has_key('MetadataStore'):
    _M_omero.api.MetadataStore = Ice.createTempClass()
    class MetadataStore(_M_omero.api.StatefulServiceInterface):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.api.MetadataStore:
                raise RuntimeError('omero.api.MetadataStore is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::MetadataStore', '::omero::api::ServiceInterface', '::omero::api::StatefulServiceInterface')

        def ice_id(self, current=None):
            return '::omero::api::MetadataStore'

        def ice_staticId():
            return '::omero::api::MetadataStore'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def createRoot_async(self, _cb, current=None):
        # def updateObjects_async(self, _cb, objects, current=None):
        # def updateReferences_async(self, _cb, references, current=None):
        # def saveToDB_async(self, _cb, activity, current=None):
        # def populateMinMax_async(self, _cb, imageChannelGlobalMinMax, current=None):
        # def setPixelsParams_async(self, _cb, pixelsId, useOriginalFile, params, current=None):
        # def postProcess_async(self, _cb, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_MetadataStore)

        __repr__ = __str__

    _M_omero.api.MetadataStorePrx = Ice.createTempClass()
    class MetadataStorePrx(_M_omero.api.StatefulServiceInterfacePrx):

        def createRoot(self, _ctx=None):
            return _M_omero.api.MetadataStore._op_createRoot.invoke(self, ((), _ctx))

        def createRoot_async(self, _cb, _ctx=None):
            return _M_omero.api.MetadataStore._op_createRoot.invokeAsync(self, (_cb, (), _ctx))

        def updateObjects(self, objects, _ctx=None):
            return _M_omero.api.MetadataStore._op_updateObjects.invoke(self, ((objects, ), _ctx))

        def updateObjects_async(self, _cb, objects, _ctx=None):
            return _M_omero.api.MetadataStore._op_updateObjects.invokeAsync(self, (_cb, (objects, ), _ctx))

        def updateReferences(self, references, _ctx=None):
            return _M_omero.api.MetadataStore._op_updateReferences.invoke(self, ((references, ), _ctx))

        def updateReferences_async(self, _cb, references, _ctx=None):
            return _M_omero.api.MetadataStore._op_updateReferences.invokeAsync(self, (_cb, (references, ), _ctx))

        def saveToDB(self, activity, _ctx=None):
            return _M_omero.api.MetadataStore._op_saveToDB.invoke(self, ((activity, ), _ctx))

        def saveToDB_async(self, _cb, activity, _ctx=None):
            return _M_omero.api.MetadataStore._op_saveToDB.invokeAsync(self, (_cb, (activity, ), _ctx))

        def populateMinMax(self, imageChannelGlobalMinMax, _ctx=None):
            return _M_omero.api.MetadataStore._op_populateMinMax.invoke(self, ((imageChannelGlobalMinMax, ), _ctx))

        def populateMinMax_async(self, _cb, imageChannelGlobalMinMax, _ctx=None):
            return _M_omero.api.MetadataStore._op_populateMinMax.invokeAsync(self, (_cb, (imageChannelGlobalMinMax, ), _ctx))

        def setPixelsParams(self, pixelsId, useOriginalFile, params, _ctx=None):
            return _M_omero.api.MetadataStore._op_setPixelsParams.invoke(self, ((pixelsId, useOriginalFile, params), _ctx))

        def setPixelsParams_async(self, _cb, pixelsId, useOriginalFile, params, _ctx=None):
            return _M_omero.api.MetadataStore._op_setPixelsParams.invokeAsync(self, (_cb, (pixelsId, useOriginalFile, params), _ctx))

        def postProcess(self, _ctx=None):
            return _M_omero.api.MetadataStore._op_postProcess.invoke(self, ((), _ctx))

        def postProcess_async(self, _cb, _ctx=None):
            return _M_omero.api.MetadataStore._op_postProcess.invokeAsync(self, (_cb, (), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.MetadataStorePrx.ice_checkedCast(proxy, '::omero::api::MetadataStore', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.MetadataStorePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_MetadataStorePrx = IcePy.defineProxy('::omero::api::MetadataStore', MetadataStorePrx)

    _M_omero.api._t_MetadataStore = IcePy.defineClass('::omero::api::MetadataStore', MetadataStore, (), True, None, (_M_omero.api._t_StatefulServiceInterface,), ())
    MetadataStore.ice_type = _M_omero.api._t_MetadataStore

    MetadataStore._op_createRoot = IcePy.Operation('createRoot', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), None, (_M_omero._t_ServerError,))
    MetadataStore._op_updateObjects = IcePy.Operation('updateObjects', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.metadatastore._t_IObjectContainerArray),), (), None, (_M_omero._t_ServerError,))
    MetadataStore._op_updateReferences = IcePy.Operation('updateReferences', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.api._t_StringStringArrayMap),), (), None, (_M_omero._t_ServerError,))
    MetadataStore._op_saveToDB = IcePy.Operation('saveToDB', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_FilesetJobLink),), (), _M_omero.api._t_IObjectListMap, (_M_omero._t_ServerError,))
    MetadataStore._op_populateMinMax = IcePy.Operation('populateMinMax', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.api._t_DoubleArrayArrayArray),), (), None, (_M_omero._t_ServerError,))
    MetadataStore._op_setPixelsParams = IcePy.Operation('setPixelsParams', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_long), ((), IcePy._t_bool), ((), _M_omero.api._t_StringStringMap)), (), None, (_M_omero._t_ServerError,))
    MetadataStore._op_postProcess = IcePy.Operation('postProcess', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), _M_omero.grid._t_InteractiveProcessorList, (_M_omero._t_ServerError,))

    _M_omero.api.MetadataStore = MetadataStore
    del MetadataStore

    _M_omero.api.MetadataStorePrx = MetadataStorePrx
    del MetadataStorePrx

# End of module omero.api

__name__ = 'omero'

# End of module omero
