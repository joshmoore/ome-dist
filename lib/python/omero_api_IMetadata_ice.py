# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `IMetadata.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_ServicesF_ice
import omero_System_ice
import omero_Collections_ice

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

if not _M_omero.api.__dict__.has_key('IMetadata'):
    _M_omero.api.IMetadata = Ice.createTempClass()
    class IMetadata(_M_omero.api.ServiceInterface):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.api.IMetadata:
                raise RuntimeError('omero.api.IMetadata is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::IMetadata', '::omero::api::ServiceInterface')

        def ice_id(self, current=None):
            return '::omero::api::IMetadata'

        def ice_staticId():
            return '::omero::api::IMetadata'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def loadChannelAcquisitionData_async(self, _cb, ids, current=None):
        # def loadAnnotations_async(self, _cb, rootType, rootIds, annotationTypes, annotatorIds, options, current=None):
        # def loadSpecifiedAnnotations_async(self, _cb, annotationType, include, exclude, options, current=None):
        # def loadTagContent_async(self, _cb, ids, options, current=None):
        # def loadTagSets_async(self, _cb, options, current=None):
        # def getTaggedObjectsCount_async(self, _cb, ids, options, current=None):
        # def countSpecifiedAnnotations_async(self, _cb, annotationType, include, exclude, options, current=None):
        # def loadAnnotation_async(self, _cb, annotationIds, current=None):
        # def loadInstrument_async(self, _cb, id, current=None):
        # def loadAnnotationsUsedNotOwned_async(self, _cb, annotationType, userID, current=None):
        # def countAnnotationsUsedNotOwned_async(self, _cb, annotationType, userID, current=None):
        # def loadSpecifiedAnnotationsLinkedTo_async(self, _cb, annotationType, include, exclude, rootNodeType, rootNodeIds, options, current=None):
        # def loadLogFiles_async(self, _cb, rootType, ids, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_IMetadata)

        __repr__ = __str__

    _M_omero.api.IMetadataPrx = Ice.createTempClass()
    class IMetadataPrx(_M_omero.api.ServiceInterfacePrx):

        def loadChannelAcquisitionData(self, ids, _ctx=None):
            return _M_omero.api.IMetadata._op_loadChannelAcquisitionData.invoke(self, ((ids, ), _ctx))

        def loadChannelAcquisitionData_async(self, _cb, ids, _ctx=None):
            return _M_omero.api.IMetadata._op_loadChannelAcquisitionData.invokeAsync(self, (_cb, (ids, ), _ctx))

        def loadAnnotations(self, rootType, rootIds, annotationTypes, annotatorIds, options, _ctx=None):
            return _M_omero.api.IMetadata._op_loadAnnotations.invoke(self, ((rootType, rootIds, annotationTypes, annotatorIds, options), _ctx))

        def loadAnnotations_async(self, _cb, rootType, rootIds, annotationTypes, annotatorIds, options, _ctx=None):
            return _M_omero.api.IMetadata._op_loadAnnotations.invokeAsync(self, (_cb, (rootType, rootIds, annotationTypes, annotatorIds, options), _ctx))

        def loadSpecifiedAnnotations(self, annotationType, include, exclude, options, _ctx=None):
            return _M_omero.api.IMetadata._op_loadSpecifiedAnnotations.invoke(self, ((annotationType, include, exclude, options), _ctx))

        def loadSpecifiedAnnotations_async(self, _cb, annotationType, include, exclude, options, _ctx=None):
            return _M_omero.api.IMetadata._op_loadSpecifiedAnnotations.invokeAsync(self, (_cb, (annotationType, include, exclude, options), _ctx))

        def loadTagContent(self, ids, options, _ctx=None):
            return _M_omero.api.IMetadata._op_loadTagContent.invoke(self, ((ids, options), _ctx))

        def loadTagContent_async(self, _cb, ids, options, _ctx=None):
            return _M_omero.api.IMetadata._op_loadTagContent.invokeAsync(self, (_cb, (ids, options), _ctx))

        def loadTagSets(self, options, _ctx=None):
            return _M_omero.api.IMetadata._op_loadTagSets.invoke(self, ((options, ), _ctx))

        def loadTagSets_async(self, _cb, options, _ctx=None):
            return _M_omero.api.IMetadata._op_loadTagSets.invokeAsync(self, (_cb, (options, ), _ctx))

        def getTaggedObjectsCount(self, ids, options, _ctx=None):
            return _M_omero.api.IMetadata._op_getTaggedObjectsCount.invoke(self, ((ids, options), _ctx))

        def getTaggedObjectsCount_async(self, _cb, ids, options, _ctx=None):
            return _M_omero.api.IMetadata._op_getTaggedObjectsCount.invokeAsync(self, (_cb, (ids, options), _ctx))

        def countSpecifiedAnnotations(self, annotationType, include, exclude, options, _ctx=None):
            return _M_omero.api.IMetadata._op_countSpecifiedAnnotations.invoke(self, ((annotationType, include, exclude, options), _ctx))

        def countSpecifiedAnnotations_async(self, _cb, annotationType, include, exclude, options, _ctx=None):
            return _M_omero.api.IMetadata._op_countSpecifiedAnnotations.invokeAsync(self, (_cb, (annotationType, include, exclude, options), _ctx))

        def loadAnnotation(self, annotationIds, _ctx=None):
            return _M_omero.api.IMetadata._op_loadAnnotation.invoke(self, ((annotationIds, ), _ctx))

        def loadAnnotation_async(self, _cb, annotationIds, _ctx=None):
            return _M_omero.api.IMetadata._op_loadAnnotation.invokeAsync(self, (_cb, (annotationIds, ), _ctx))

        def loadInstrument(self, id, _ctx=None):
            return _M_omero.api.IMetadata._op_loadInstrument.invoke(self, ((id, ), _ctx))

        def loadInstrument_async(self, _cb, id, _ctx=None):
            return _M_omero.api.IMetadata._op_loadInstrument.invokeAsync(self, (_cb, (id, ), _ctx))

        def loadAnnotationsUsedNotOwned(self, annotationType, userID, _ctx=None):
            return _M_omero.api.IMetadata._op_loadAnnotationsUsedNotOwned.invoke(self, ((annotationType, userID), _ctx))

        def loadAnnotationsUsedNotOwned_async(self, _cb, annotationType, userID, _ctx=None):
            return _M_omero.api.IMetadata._op_loadAnnotationsUsedNotOwned.invokeAsync(self, (_cb, (annotationType, userID), _ctx))

        def countAnnotationsUsedNotOwned(self, annotationType, userID, _ctx=None):
            return _M_omero.api.IMetadata._op_countAnnotationsUsedNotOwned.invoke(self, ((annotationType, userID), _ctx))

        def countAnnotationsUsedNotOwned_async(self, _cb, annotationType, userID, _ctx=None):
            return _M_omero.api.IMetadata._op_countAnnotationsUsedNotOwned.invokeAsync(self, (_cb, (annotationType, userID), _ctx))

        def loadSpecifiedAnnotationsLinkedTo(self, annotationType, include, exclude, rootNodeType, rootNodeIds, options, _ctx=None):
            return _M_omero.api.IMetadata._op_loadSpecifiedAnnotationsLinkedTo.invoke(self, ((annotationType, include, exclude, rootNodeType, rootNodeIds, options), _ctx))

        def loadSpecifiedAnnotationsLinkedTo_async(self, _cb, annotationType, include, exclude, rootNodeType, rootNodeIds, options, _ctx=None):
            return _M_omero.api.IMetadata._op_loadSpecifiedAnnotationsLinkedTo.invokeAsync(self, (_cb, (annotationType, include, exclude, rootNodeType, rootNodeIds, options), _ctx))

        def loadLogFiles(self, rootType, ids, _ctx=None):
            return _M_omero.api.IMetadata._op_loadLogFiles.invoke(self, ((rootType, ids), _ctx))

        def loadLogFiles_async(self, _cb, rootType, ids, _ctx=None):
            return _M_omero.api.IMetadata._op_loadLogFiles.invokeAsync(self, (_cb, (rootType, ids), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.IMetadataPrx.ice_checkedCast(proxy, '::omero::api::IMetadata', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.IMetadataPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_IMetadataPrx = IcePy.defineProxy('::omero::api::IMetadata', IMetadataPrx)

    _M_omero.api._t_IMetadata = IcePy.defineClass('::omero::api::IMetadata', IMetadata, (), True, None, (_M_omero.api._t_ServiceInterface,), ())
    IMetadata.ice_type = _M_omero.api._t_IMetadata

    IMetadata._op_loadChannelAcquisitionData = IcePy.Operation('loadChannelAcquisitionData', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.sys._t_LongList),), (), _M_omero.api._t_LogicalChannelList, (_M_omero._t_ServerError,))
    IMetadata._op_loadAnnotations = IcePy.Operation('loadAnnotations', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string), ((), _M_omero.sys._t_LongList), ((), _M_omero.api._t_StringSet), ((), _M_omero.sys._t_LongList), ((), _M_omero.sys._t_Parameters)), (), _M_omero.api._t_LongIObjectListMap, (_M_omero._t_ServerError,))
    IMetadata._op_loadSpecifiedAnnotations = IcePy.Operation('loadSpecifiedAnnotations', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string), ((), _M_omero.api._t_StringSet), ((), _M_omero.api._t_StringSet), ((), _M_omero.sys._t_Parameters)), (), _M_omero.api._t_AnnotationList, (_M_omero._t_ServerError,))
    IMetadata._op_loadTagContent = IcePy.Operation('loadTagContent', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.sys._t_LongList), ((), _M_omero.sys._t_Parameters)), (), _M_omero.api._t_LongIObjectListMap, (_M_omero._t_ServerError,))
    IMetadata._op_loadTagSets = IcePy.Operation('loadTagSets', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.sys._t_Parameters),), (), _M_omero.api._t_IObjectList, (_M_omero._t_ServerError,))
    IMetadata._op_getTaggedObjectsCount = IcePy.Operation('getTaggedObjectsCount', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.sys._t_LongList), ((), _M_omero.sys._t_Parameters)), (), _M_omero.sys._t_CountMap, (_M_omero._t_ServerError,))
    IMetadata._op_countSpecifiedAnnotations = IcePy.Operation('countSpecifiedAnnotations', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string), ((), _M_omero.api._t_StringSet), ((), _M_omero.api._t_StringSet), ((), _M_omero.sys._t_Parameters)), (), _M_omero._t_RLong, (_M_omero._t_ServerError,))
    IMetadata._op_loadAnnotation = IcePy.Operation('loadAnnotation', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.sys._t_LongList),), (), _M_omero.api._t_AnnotationList, (_M_omero._t_ServerError,))
    IMetadata._op_loadInstrument = IcePy.Operation('loadInstrument', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_long),), (), _M_omero.model._t_Instrument, (_M_omero._t_ServerError,))
    IMetadata._op_loadAnnotationsUsedNotOwned = IcePy.Operation('loadAnnotationsUsedNotOwned', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string), ((), IcePy._t_long)), (), _M_omero.api._t_IObjectList, (_M_omero._t_ServerError,))
    IMetadata._op_countAnnotationsUsedNotOwned = IcePy.Operation('countAnnotationsUsedNotOwned', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string), ((), IcePy._t_long)), (), _M_omero._t_RLong, (_M_omero._t_ServerError,))
    IMetadata._op_loadSpecifiedAnnotationsLinkedTo = IcePy.Operation('loadSpecifiedAnnotationsLinkedTo', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string), ((), _M_omero.api._t_StringSet), ((), _M_omero.api._t_StringSet), ((), IcePy._t_string), ((), _M_omero.sys._t_LongList), ((), _M_omero.sys._t_Parameters)), (), _M_omero.api._t_LongAnnotationListMap, (_M_omero._t_ServerError,))
    IMetadata._op_loadLogFiles = IcePy.Operation('loadLogFiles', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string), ((), _M_omero.sys._t_LongList)), (), _M_omero.api._t_LongIObjectListMap, (_M_omero._t_ServerError,))

    _M_omero.api.IMetadata = IMetadata
    del IMetadata

    _M_omero.api.IMetadataPrx = IMetadataPrx
    del IMetadataPrx

# End of module omero.api

__name__ = 'omero'

# End of module omero
