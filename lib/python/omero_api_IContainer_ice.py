# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `IContainer.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_ModelF_ice
import omero_ServicesF_ice
import omero_System_ice
import omero_Collections_ice

# Included module omero
_M_omero = Ice.openModule('omero')

# Included module omero.model
_M_omero.model = Ice.openModule('omero.model')

# Included module Ice
_M_Ice = Ice.openModule('Ice')

# Included module Glacier2
_M_Glacier2 = Ice.openModule('Glacier2')

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

if not _M_omero.api.__dict__.has_key('IContainer'):
    _M_omero.api.IContainer = Ice.createTempClass()
    class IContainer(_M_omero.api.ServiceInterface):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.api.IContainer:
                raise RuntimeError('omero.api.IContainer is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::IContainer', '::omero::api::ServiceInterface')

        def ice_id(self, current=None):
            return '::omero::api::IContainer'

        def ice_staticId():
            return '::omero::api::IContainer'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def loadContainerHierarchy_async(self, _cb, rootType, rootIds, options, current=None):
        # def findContainerHierarchies_async(self, _cb, rootType, imageIds, options, current=None):
        # def getImages_async(self, _cb, rootType, rootIds, options, current=None):
        # def getUserImages_async(self, _cb, options, current=None):
        # def getImagesByOptions_async(self, _cb, options, current=None):
        # def getImagesBySplitFilesets_async(self, _cb, included, options, current=None):
        # def getCollectionCount_async(self, _cb, type, property, ids, options, current=None):
        # def retrieveCollection_async(self, _cb, obj, collectionName, options, current=None):
        # def createDataObject_async(self, _cb, obj, options, current=None):
        # def createDataObjects_async(self, _cb, dataObjects, options, current=None):
        # def unlink_async(self, _cb, links, options, current=None):
        # def link_async(self, _cb, links, options, current=None):
        # def updateDataObject_async(self, _cb, obj, options, current=None):
        # def updateDataObjects_async(self, _cb, objs, options, current=None):
        # def deleteDataObject_async(self, _cb, obj, options, current=None):
        # def deleteDataObjects_async(self, _cb, objs, options, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_IContainer)

        __repr__ = __str__

    _M_omero.api.IContainerPrx = Ice.createTempClass()
    class IContainerPrx(_M_omero.api.ServiceInterfacePrx):

        def loadContainerHierarchy(self, rootType, rootIds, options, _ctx=None):
            return _M_omero.api.IContainer._op_loadContainerHierarchy.invoke(self, ((rootType, rootIds, options), _ctx))

        def loadContainerHierarchy_async(self, _cb, rootType, rootIds, options, _ctx=None):
            return _M_omero.api.IContainer._op_loadContainerHierarchy.invokeAsync(self, (_cb, (rootType, rootIds, options), _ctx))

        def findContainerHierarchies(self, rootType, imageIds, options, _ctx=None):
            return _M_omero.api.IContainer._op_findContainerHierarchies.invoke(self, ((rootType, imageIds, options), _ctx))

        def findContainerHierarchies_async(self, _cb, rootType, imageIds, options, _ctx=None):
            return _M_omero.api.IContainer._op_findContainerHierarchies.invokeAsync(self, (_cb, (rootType, imageIds, options), _ctx))

        def getImages(self, rootType, rootIds, options, _ctx=None):
            return _M_omero.api.IContainer._op_getImages.invoke(self, ((rootType, rootIds, options), _ctx))

        def getImages_async(self, _cb, rootType, rootIds, options, _ctx=None):
            return _M_omero.api.IContainer._op_getImages.invokeAsync(self, (_cb, (rootType, rootIds, options), _ctx))

        def getUserImages(self, options, _ctx=None):
            return _M_omero.api.IContainer._op_getUserImages.invoke(self, ((options, ), _ctx))

        def getUserImages_async(self, _cb, options, _ctx=None):
            return _M_omero.api.IContainer._op_getUserImages.invokeAsync(self, (_cb, (options, ), _ctx))

        def getImagesByOptions(self, options, _ctx=None):
            return _M_omero.api.IContainer._op_getImagesByOptions.invoke(self, ((options, ), _ctx))

        def getImagesByOptions_async(self, _cb, options, _ctx=None):
            return _M_omero.api.IContainer._op_getImagesByOptions.invokeAsync(self, (_cb, (options, ), _ctx))

        def getImagesBySplitFilesets(self, included, options, _ctx=None):
            return _M_omero.api.IContainer._op_getImagesBySplitFilesets.invoke(self, ((included, options), _ctx))

        def getImagesBySplitFilesets_async(self, _cb, included, options, _ctx=None):
            return _M_omero.api.IContainer._op_getImagesBySplitFilesets.invokeAsync(self, (_cb, (included, options), _ctx))

        def getCollectionCount(self, type, property, ids, options, _ctx=None):
            return _M_omero.api.IContainer._op_getCollectionCount.invoke(self, ((type, property, ids, options), _ctx))

        def getCollectionCount_async(self, _cb, type, property, ids, options, _ctx=None):
            return _M_omero.api.IContainer._op_getCollectionCount.invokeAsync(self, (_cb, (type, property, ids, options), _ctx))

        def retrieveCollection(self, obj, collectionName, options, _ctx=None):
            return _M_omero.api.IContainer._op_retrieveCollection.invoke(self, ((obj, collectionName, options), _ctx))

        def retrieveCollection_async(self, _cb, obj, collectionName, options, _ctx=None):
            return _M_omero.api.IContainer._op_retrieveCollection.invokeAsync(self, (_cb, (obj, collectionName, options), _ctx))

        def createDataObject(self, obj, options, _ctx=None):
            return _M_omero.api.IContainer._op_createDataObject.invoke(self, ((obj, options), _ctx))

        def createDataObject_async(self, _cb, obj, options, _ctx=None):
            return _M_omero.api.IContainer._op_createDataObject.invokeAsync(self, (_cb, (obj, options), _ctx))

        def createDataObjects(self, dataObjects, options, _ctx=None):
            return _M_omero.api.IContainer._op_createDataObjects.invoke(self, ((dataObjects, options), _ctx))

        def createDataObjects_async(self, _cb, dataObjects, options, _ctx=None):
            return _M_omero.api.IContainer._op_createDataObjects.invokeAsync(self, (_cb, (dataObjects, options), _ctx))

        def unlink(self, links, options, _ctx=None):
            return _M_omero.api.IContainer._op_unlink.invoke(self, ((links, options), _ctx))

        def unlink_async(self, _cb, links, options, _ctx=None):
            return _M_omero.api.IContainer._op_unlink.invokeAsync(self, (_cb, (links, options), _ctx))

        def link(self, links, options, _ctx=None):
            return _M_omero.api.IContainer._op_link.invoke(self, ((links, options), _ctx))

        def link_async(self, _cb, links, options, _ctx=None):
            return _M_omero.api.IContainer._op_link.invokeAsync(self, (_cb, (links, options), _ctx))

        def updateDataObject(self, obj, options, _ctx=None):
            return _M_omero.api.IContainer._op_updateDataObject.invoke(self, ((obj, options), _ctx))

        def updateDataObject_async(self, _cb, obj, options, _ctx=None):
            return _M_omero.api.IContainer._op_updateDataObject.invokeAsync(self, (_cb, (obj, options), _ctx))

        def updateDataObjects(self, objs, options, _ctx=None):
            return _M_omero.api.IContainer._op_updateDataObjects.invoke(self, ((objs, options), _ctx))

        def updateDataObjects_async(self, _cb, objs, options, _ctx=None):
            return _M_omero.api.IContainer._op_updateDataObjects.invokeAsync(self, (_cb, (objs, options), _ctx))

        def deleteDataObject(self, obj, options, _ctx=None):
            return _M_omero.api.IContainer._op_deleteDataObject.invoke(self, ((obj, options), _ctx))

        def deleteDataObject_async(self, _cb, obj, options, _ctx=None):
            return _M_omero.api.IContainer._op_deleteDataObject.invokeAsync(self, (_cb, (obj, options), _ctx))

        def deleteDataObjects(self, objs, options, _ctx=None):
            return _M_omero.api.IContainer._op_deleteDataObjects.invoke(self, ((objs, options), _ctx))

        def deleteDataObjects_async(self, _cb, objs, options, _ctx=None):
            return _M_omero.api.IContainer._op_deleteDataObjects.invokeAsync(self, (_cb, (objs, options), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.IContainerPrx.ice_checkedCast(proxy, '::omero::api::IContainer', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.IContainerPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_IContainerPrx = IcePy.defineProxy('::omero::api::IContainer', IContainerPrx)

    _M_omero.api._t_IContainer = IcePy.defineClass('::omero::api::IContainer', IContainer, (), True, None, (_M_omero.api._t_ServiceInterface,), ())
    IContainer.ice_type = _M_omero.api._t_IContainer

    IContainer._op_loadContainerHierarchy = IcePy.Operation('loadContainerHierarchy', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string), ((), _M_omero.sys._t_LongList), ((), _M_omero.sys._t_Parameters)), (), _M_omero.api._t_IObjectList, (_M_omero._t_ServerError,))
    IContainer._op_findContainerHierarchies = IcePy.Operation('findContainerHierarchies', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string), ((), _M_omero.sys._t_LongList), ((), _M_omero.sys._t_Parameters)), (), _M_omero.api._t_IObjectList, (_M_omero._t_ServerError,))
    IContainer._op_getImages = IcePy.Operation('getImages', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string), ((), _M_omero.sys._t_LongList), ((), _M_omero.sys._t_Parameters)), (), _M_omero.api._t_ImageList, (_M_omero._t_ServerError,))
    IContainer._op_getUserImages = IcePy.Operation('getUserImages', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.sys._t_Parameters),), (), _M_omero.api._t_ImageList, (_M_omero._t_ServerError,))
    IContainer._op_getImagesByOptions = IcePy.Operation('getImagesByOptions', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.sys._t_Parameters),), (), _M_omero.api._t_ImageList, (_M_omero._t_ServerError,))
    IContainer._op_getImagesBySplitFilesets = IcePy.Operation('getImagesBySplitFilesets', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.api._t_StringLongListMap), ((), _M_omero.sys._t_Parameters)), (), _M_omero.api._t_IdBooleanLongListMapMap, (_M_omero._t_ServerError,))
    IContainer._op_getCollectionCount = IcePy.Operation('getCollectionCount', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string), ((), IcePy._t_string), ((), _M_omero.sys._t_LongList), ((), _M_omero.sys._t_Parameters)), (), _M_omero.sys._t_CountMap, (_M_omero._t_ServerError,))
    IContainer._op_retrieveCollection = IcePy.Operation('retrieveCollection', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.model._t_IObject), ((), IcePy._t_string), ((), _M_omero.sys._t_Parameters)), (), _M_omero.api._t_IObjectList, (_M_omero._t_ServerError,))
    IContainer._op_createDataObject = IcePy.Operation('createDataObject', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_IObject), ((), _M_omero.sys._t_Parameters)), (), _M_omero.model._t_IObject, (_M_omero._t_ServerError,))
    IContainer._op_createDataObjects = IcePy.Operation('createDataObjects', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.api._t_IObjectList), ((), _M_omero.sys._t_Parameters)), (), _M_omero.api._t_IObjectList, (_M_omero._t_ServerError,))
    IContainer._op_unlink = IcePy.Operation('unlink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.api._t_IObjectList), ((), _M_omero.sys._t_Parameters)), (), None, (_M_omero._t_ServerError,))
    IContainer._op_link = IcePy.Operation('link', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.api._t_IObjectList), ((), _M_omero.sys._t_Parameters)), (), _M_omero.api._t_IObjectList, (_M_omero._t_ServerError,))
    IContainer._op_updateDataObject = IcePy.Operation('updateDataObject', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_IObject), ((), _M_omero.sys._t_Parameters)), (), _M_omero.model._t_IObject, (_M_omero._t_ServerError,))
    IContainer._op_updateDataObjects = IcePy.Operation('updateDataObjects', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.api._t_IObjectList), ((), _M_omero.sys._t_Parameters)), (), _M_omero.api._t_IObjectList, (_M_omero._t_ServerError,))
    IContainer._op_deleteDataObject = IcePy.Operation('deleteDataObject', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_IObject), ((), _M_omero.sys._t_Parameters)), (), None, (_M_omero._t_ServerError,))
    IContainer._op_deleteDataObject.deprecate(" use omero::model::IDelete::queueDelete instead")
    IContainer._op_deleteDataObjects = IcePy.Operation('deleteDataObjects', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.api._t_IObjectList), ((), _M_omero.sys._t_Parameters)), (), None, (_M_omero._t_ServerError,))
    IContainer._op_deleteDataObjects.deprecate(" use omero::model::IDelete::queueDelete instead")

    _M_omero.api.IContainer = IContainer
    del IContainer

    _M_omero.api.IContainerPrx = IContainerPrx
    del IContainerPrx

# End of module omero.api

__name__ = 'omero'

# End of module omero
