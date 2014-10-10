# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Search.ice'

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

if not _M_omero.api.__dict__.has_key('Search'):
    _M_omero.api.Search = Ice.createTempClass()
    class Search(_M_omero.api.StatefulServiceInterface):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.api.Search:
                raise RuntimeError('omero.api.Search is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::Search', '::omero::api::ServiceInterface', '::omero::api::StatefulServiceInterface')

        def ice_id(self, current=None):
            return '::omero::api::Search'

        def ice_staticId():
            return '::omero::api::Search'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def activeQueries_async(self, _cb, current=None):
        # def setBatchSize_async(self, _cb, size, current=None):
        # def getBatchSize_async(self, _cb, current=None):
        # def setMergedBatches_async(self, _cb, merge, current=None):
        # def isMergedBatches_async(self, _cb, current=None):
        # def setCaseSentivice_async(self, _cb, caseSensitive, current=None):
        # def isCaseSensitive_async(self, _cb, current=None):
        # def setUseProjections_async(self, _cb, useProjections, current=None):
        # def isUseProjections_async(self, _cb, current=None):
        # def setReturnUnloaded_async(self, _cb, returnUnloaded, current=None):
        # def isReturnUnloaded_async(self, _cb, current=None):
        # def setAllowLeadingWildcard_async(self, _cb, allowLeadingWildcard, current=None):
        # def isAllowLeadingWildcard_async(self, _cb, current=None):
        # def onlyType_async(self, _cb, klass, current=None):
        # def onlyTypes_async(self, _cb, classes, current=None):
        # def allTypes_async(self, _cb, current=None):
        # def onlyIds_async(self, _cb, ids, current=None):
        # def onlyOwnedBy_async(self, _cb, d, current=None):
        # def notOwnedBy_async(self, _cb, d, current=None):
        # def onlyCreatedBetween_async(self, _cb, start, stop, current=None):
        # def onlyModifiedBetween_async(self, _cb, start, stop, current=None):
        # def onlyAnnotatedBetween_async(self, _cb, start, stop, current=None):
        # def onlyAnnotatedBy_async(self, _cb, d, current=None):
        # def notAnnotatedBy_async(self, _cb, d, current=None):
        # def onlyAnnotatedWith_async(self, _cb, classes, current=None):
        # def addOrderByAsc_async(self, _cb, path, current=None):
        # def addOrderByDesc_async(self, _cb, path, current=None):
        # def unordered_async(self, _cb, current=None):
        # def fetchAnnotations_async(self, _cb, classes, current=None):
        # def fetchAlso_async(self, _cb, fetches, current=None):
        # def resetDefaults_async(self, _cb, current=None):
        # def byGroupForTags_async(self, _cb, group, current=None):
        # def byTagForGroups_async(self, _cb, tag, current=None):
        # def byFullText_async(self, _cb, query, current=None):
        # def byLuceneQueryBuilder_async(self, _cb, fields, _from, to, dateType, query, current=None):
        # def bySimilarTerms_async(self, _cb, terms, current=None):
        # def byHqlQuery_async(self, _cb, query, params, current=None):
        # def bySomeMustNone_async(self, _cb, some, must, none, current=None):
        # def byAnnotatedWith_async(self, _cb, examples, current=None):
        # def clearQueries_async(self, _cb, current=None):
        # def _and_async(self, _cb, current=None):
        # def _or_async(self, _cb, current=None):
        # def _not_async(self, _cb, current=None):
        # def hasNext_async(self, _cb, current=None):
        # def next_async(self, _cb, current=None):
        # def results_async(self, _cb, current=None):
        # def currentMetadata_async(self, _cb, current=None):
        # def currentMetadataList_async(self, _cb, current=None):
        # def remove_async(self, _cb, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_Search)

        __repr__ = __str__

    _M_omero.api.SearchPrx = Ice.createTempClass()
    class SearchPrx(_M_omero.api.StatefulServiceInterfacePrx):

        def activeQueries(self, _ctx=None):
            return _M_omero.api.Search._op_activeQueries.invoke(self, ((), _ctx))

        def activeQueries_async(self, _cb, _ctx=None):
            return _M_omero.api.Search._op_activeQueries.invokeAsync(self, (_cb, (), _ctx))

        def setBatchSize(self, size, _ctx=None):
            return _M_omero.api.Search._op_setBatchSize.invoke(self, ((size, ), _ctx))

        def setBatchSize_async(self, _cb, size, _ctx=None):
            return _M_omero.api.Search._op_setBatchSize.invokeAsync(self, (_cb, (size, ), _ctx))

        def getBatchSize(self, _ctx=None):
            return _M_omero.api.Search._op_getBatchSize.invoke(self, ((), _ctx))

        def getBatchSize_async(self, _cb, _ctx=None):
            return _M_omero.api.Search._op_getBatchSize.invokeAsync(self, (_cb, (), _ctx))

        def setMergedBatches(self, merge, _ctx=None):
            return _M_omero.api.Search._op_setMergedBatches.invoke(self, ((merge, ), _ctx))

        def setMergedBatches_async(self, _cb, merge, _ctx=None):
            return _M_omero.api.Search._op_setMergedBatches.invokeAsync(self, (_cb, (merge, ), _ctx))

        def isMergedBatches(self, _ctx=None):
            return _M_omero.api.Search._op_isMergedBatches.invoke(self, ((), _ctx))

        def isMergedBatches_async(self, _cb, _ctx=None):
            return _M_omero.api.Search._op_isMergedBatches.invokeAsync(self, (_cb, (), _ctx))

        def setCaseSentivice(self, caseSensitive, _ctx=None):
            return _M_omero.api.Search._op_setCaseSentivice.invoke(self, ((caseSensitive, ), _ctx))

        def setCaseSentivice_async(self, _cb, caseSensitive, _ctx=None):
            return _M_omero.api.Search._op_setCaseSentivice.invokeAsync(self, (_cb, (caseSensitive, ), _ctx))

        def isCaseSensitive(self, _ctx=None):
            return _M_omero.api.Search._op_isCaseSensitive.invoke(self, ((), _ctx))

        def isCaseSensitive_async(self, _cb, _ctx=None):
            return _M_omero.api.Search._op_isCaseSensitive.invokeAsync(self, (_cb, (), _ctx))

        def setUseProjections(self, useProjections, _ctx=None):
            return _M_omero.api.Search._op_setUseProjections.invoke(self, ((useProjections, ), _ctx))

        def setUseProjections_async(self, _cb, useProjections, _ctx=None):
            return _M_omero.api.Search._op_setUseProjections.invokeAsync(self, (_cb, (useProjections, ), _ctx))

        def isUseProjections(self, _ctx=None):
            return _M_omero.api.Search._op_isUseProjections.invoke(self, ((), _ctx))

        def isUseProjections_async(self, _cb, _ctx=None):
            return _M_omero.api.Search._op_isUseProjections.invokeAsync(self, (_cb, (), _ctx))

        def setReturnUnloaded(self, returnUnloaded, _ctx=None):
            return _M_omero.api.Search._op_setReturnUnloaded.invoke(self, ((returnUnloaded, ), _ctx))

        def setReturnUnloaded_async(self, _cb, returnUnloaded, _ctx=None):
            return _M_omero.api.Search._op_setReturnUnloaded.invokeAsync(self, (_cb, (returnUnloaded, ), _ctx))

        def isReturnUnloaded(self, _ctx=None):
            return _M_omero.api.Search._op_isReturnUnloaded.invoke(self, ((), _ctx))

        def isReturnUnloaded_async(self, _cb, _ctx=None):
            return _M_omero.api.Search._op_isReturnUnloaded.invokeAsync(self, (_cb, (), _ctx))

        def setAllowLeadingWildcard(self, allowLeadingWildcard, _ctx=None):
            return _M_omero.api.Search._op_setAllowLeadingWildcard.invoke(self, ((allowLeadingWildcard, ), _ctx))

        def setAllowLeadingWildcard_async(self, _cb, allowLeadingWildcard, _ctx=None):
            return _M_omero.api.Search._op_setAllowLeadingWildcard.invokeAsync(self, (_cb, (allowLeadingWildcard, ), _ctx))

        def isAllowLeadingWildcard(self, _ctx=None):
            return _M_omero.api.Search._op_isAllowLeadingWildcard.invoke(self, ((), _ctx))

        def isAllowLeadingWildcard_async(self, _cb, _ctx=None):
            return _M_omero.api.Search._op_isAllowLeadingWildcard.invokeAsync(self, (_cb, (), _ctx))

        def onlyType(self, klass, _ctx=None):
            return _M_omero.api.Search._op_onlyType.invoke(self, ((klass, ), _ctx))

        def onlyType_async(self, _cb, klass, _ctx=None):
            return _M_omero.api.Search._op_onlyType.invokeAsync(self, (_cb, (klass, ), _ctx))

        def onlyTypes(self, classes, _ctx=None):
            return _M_omero.api.Search._op_onlyTypes.invoke(self, ((classes, ), _ctx))

        def onlyTypes_async(self, _cb, classes, _ctx=None):
            return _M_omero.api.Search._op_onlyTypes.invokeAsync(self, (_cb, (classes, ), _ctx))

        def allTypes(self, _ctx=None):
            return _M_omero.api.Search._op_allTypes.invoke(self, ((), _ctx))

        def allTypes_async(self, _cb, _ctx=None):
            return _M_omero.api.Search._op_allTypes.invokeAsync(self, (_cb, (), _ctx))

        def onlyIds(self, ids, _ctx=None):
            return _M_omero.api.Search._op_onlyIds.invoke(self, ((ids, ), _ctx))

        def onlyIds_async(self, _cb, ids, _ctx=None):
            return _M_omero.api.Search._op_onlyIds.invokeAsync(self, (_cb, (ids, ), _ctx))

        def onlyOwnedBy(self, d, _ctx=None):
            return _M_omero.api.Search._op_onlyOwnedBy.invoke(self, ((d, ), _ctx))

        def onlyOwnedBy_async(self, _cb, d, _ctx=None):
            return _M_omero.api.Search._op_onlyOwnedBy.invokeAsync(self, (_cb, (d, ), _ctx))

        def notOwnedBy(self, d, _ctx=None):
            return _M_omero.api.Search._op_notOwnedBy.invoke(self, ((d, ), _ctx))

        def notOwnedBy_async(self, _cb, d, _ctx=None):
            return _M_omero.api.Search._op_notOwnedBy.invokeAsync(self, (_cb, (d, ), _ctx))

        def onlyCreatedBetween(self, start, stop, _ctx=None):
            return _M_omero.api.Search._op_onlyCreatedBetween.invoke(self, ((start, stop), _ctx))

        def onlyCreatedBetween_async(self, _cb, start, stop, _ctx=None):
            return _M_omero.api.Search._op_onlyCreatedBetween.invokeAsync(self, (_cb, (start, stop), _ctx))

        def onlyModifiedBetween(self, start, stop, _ctx=None):
            return _M_omero.api.Search._op_onlyModifiedBetween.invoke(self, ((start, stop), _ctx))

        def onlyModifiedBetween_async(self, _cb, start, stop, _ctx=None):
            return _M_omero.api.Search._op_onlyModifiedBetween.invokeAsync(self, (_cb, (start, stop), _ctx))

        def onlyAnnotatedBetween(self, start, stop, _ctx=None):
            return _M_omero.api.Search._op_onlyAnnotatedBetween.invoke(self, ((start, stop), _ctx))

        def onlyAnnotatedBetween_async(self, _cb, start, stop, _ctx=None):
            return _M_omero.api.Search._op_onlyAnnotatedBetween.invokeAsync(self, (_cb, (start, stop), _ctx))

        def onlyAnnotatedBy(self, d, _ctx=None):
            return _M_omero.api.Search._op_onlyAnnotatedBy.invoke(self, ((d, ), _ctx))

        def onlyAnnotatedBy_async(self, _cb, d, _ctx=None):
            return _M_omero.api.Search._op_onlyAnnotatedBy.invokeAsync(self, (_cb, (d, ), _ctx))

        def notAnnotatedBy(self, d, _ctx=None):
            return _M_omero.api.Search._op_notAnnotatedBy.invoke(self, ((d, ), _ctx))

        def notAnnotatedBy_async(self, _cb, d, _ctx=None):
            return _M_omero.api.Search._op_notAnnotatedBy.invokeAsync(self, (_cb, (d, ), _ctx))

        def onlyAnnotatedWith(self, classes, _ctx=None):
            return _M_omero.api.Search._op_onlyAnnotatedWith.invoke(self, ((classes, ), _ctx))

        def onlyAnnotatedWith_async(self, _cb, classes, _ctx=None):
            return _M_omero.api.Search._op_onlyAnnotatedWith.invokeAsync(self, (_cb, (classes, ), _ctx))

        def addOrderByAsc(self, path, _ctx=None):
            return _M_omero.api.Search._op_addOrderByAsc.invoke(self, ((path, ), _ctx))

        def addOrderByAsc_async(self, _cb, path, _ctx=None):
            return _M_omero.api.Search._op_addOrderByAsc.invokeAsync(self, (_cb, (path, ), _ctx))

        def addOrderByDesc(self, path, _ctx=None):
            return _M_omero.api.Search._op_addOrderByDesc.invoke(self, ((path, ), _ctx))

        def addOrderByDesc_async(self, _cb, path, _ctx=None):
            return _M_omero.api.Search._op_addOrderByDesc.invokeAsync(self, (_cb, (path, ), _ctx))

        def unordered(self, _ctx=None):
            return _M_omero.api.Search._op_unordered.invoke(self, ((), _ctx))

        def unordered_async(self, _cb, _ctx=None):
            return _M_omero.api.Search._op_unordered.invokeAsync(self, (_cb, (), _ctx))

        def fetchAnnotations(self, classes, _ctx=None):
            return _M_omero.api.Search._op_fetchAnnotations.invoke(self, ((classes, ), _ctx))

        def fetchAnnotations_async(self, _cb, classes, _ctx=None):
            return _M_omero.api.Search._op_fetchAnnotations.invokeAsync(self, (_cb, (classes, ), _ctx))

        def fetchAlso(self, fetches, _ctx=None):
            return _M_omero.api.Search._op_fetchAlso.invoke(self, ((fetches, ), _ctx))

        def fetchAlso_async(self, _cb, fetches, _ctx=None):
            return _M_omero.api.Search._op_fetchAlso.invokeAsync(self, (_cb, (fetches, ), _ctx))

        def resetDefaults(self, _ctx=None):
            return _M_omero.api.Search._op_resetDefaults.invoke(self, ((), _ctx))

        def resetDefaults_async(self, _cb, _ctx=None):
            return _M_omero.api.Search._op_resetDefaults.invokeAsync(self, (_cb, (), _ctx))

        def byGroupForTags(self, group, _ctx=None):
            return _M_omero.api.Search._op_byGroupForTags.invoke(self, ((group, ), _ctx))

        def byGroupForTags_async(self, _cb, group, _ctx=None):
            return _M_omero.api.Search._op_byGroupForTags.invokeAsync(self, (_cb, (group, ), _ctx))

        def byTagForGroups(self, tag, _ctx=None):
            return _M_omero.api.Search._op_byTagForGroups.invoke(self, ((tag, ), _ctx))

        def byTagForGroups_async(self, _cb, tag, _ctx=None):
            return _M_omero.api.Search._op_byTagForGroups.invokeAsync(self, (_cb, (tag, ), _ctx))

        def byFullText(self, query, _ctx=None):
            return _M_omero.api.Search._op_byFullText.invoke(self, ((query, ), _ctx))

        def byFullText_async(self, _cb, query, _ctx=None):
            return _M_omero.api.Search._op_byFullText.invokeAsync(self, (_cb, (query, ), _ctx))

        def byLuceneQueryBuilder(self, fields, _from, to, dateType, query, _ctx=None):
            return _M_omero.api.Search._op_byLuceneQueryBuilder.invoke(self, ((fields, _from, to, dateType, query), _ctx))

        def byLuceneQueryBuilder_async(self, _cb, fields, _from, to, dateType, query, _ctx=None):
            return _M_omero.api.Search._op_byLuceneQueryBuilder.invokeAsync(self, (_cb, (fields, _from, to, dateType, query), _ctx))

        def bySimilarTerms(self, terms, _ctx=None):
            return _M_omero.api.Search._op_bySimilarTerms.invoke(self, ((terms, ), _ctx))

        def bySimilarTerms_async(self, _cb, terms, _ctx=None):
            return _M_omero.api.Search._op_bySimilarTerms.invokeAsync(self, (_cb, (terms, ), _ctx))

        def byHqlQuery(self, query, params, _ctx=None):
            return _M_omero.api.Search._op_byHqlQuery.invoke(self, ((query, params), _ctx))

        def byHqlQuery_async(self, _cb, query, params, _ctx=None):
            return _M_omero.api.Search._op_byHqlQuery.invokeAsync(self, (_cb, (query, params), _ctx))

        def bySomeMustNone(self, some, must, none, _ctx=None):
            return _M_omero.api.Search._op_bySomeMustNone.invoke(self, ((some, must, none), _ctx))

        def bySomeMustNone_async(self, _cb, some, must, none, _ctx=None):
            return _M_omero.api.Search._op_bySomeMustNone.invokeAsync(self, (_cb, (some, must, none), _ctx))

        def byAnnotatedWith(self, examples, _ctx=None):
            return _M_omero.api.Search._op_byAnnotatedWith.invoke(self, ((examples, ), _ctx))

        def byAnnotatedWith_async(self, _cb, examples, _ctx=None):
            return _M_omero.api.Search._op_byAnnotatedWith.invokeAsync(self, (_cb, (examples, ), _ctx))

        def clearQueries(self, _ctx=None):
            return _M_omero.api.Search._op_clearQueries.invoke(self, ((), _ctx))

        def clearQueries_async(self, _cb, _ctx=None):
            return _M_omero.api.Search._op_clearQueries.invokeAsync(self, (_cb, (), _ctx))

        def _and(self, _ctx=None):
            return _M_omero.api.Search._op_and.invoke(self, ((), _ctx))

        def _and_async(self, _cb, _ctx=None):
            return _M_omero.api.Search._op_and.invokeAsync(self, (_cb, (), _ctx))

        def _or(self, _ctx=None):
            return _M_omero.api.Search._op_or.invoke(self, ((), _ctx))

        def _or_async(self, _cb, _ctx=None):
            return _M_omero.api.Search._op_or.invokeAsync(self, (_cb, (), _ctx))

        def _not(self, _ctx=None):
            return _M_omero.api.Search._op_not.invoke(self, ((), _ctx))

        def _not_async(self, _cb, _ctx=None):
            return _M_omero.api.Search._op_not.invokeAsync(self, (_cb, (), _ctx))

        def hasNext(self, _ctx=None):
            return _M_omero.api.Search._op_hasNext.invoke(self, ((), _ctx))

        def hasNext_async(self, _cb, _ctx=None):
            return _M_omero.api.Search._op_hasNext.invokeAsync(self, (_cb, (), _ctx))

        def next(self, _ctx=None):
            return _M_omero.api.Search._op_next.invoke(self, ((), _ctx))

        def next_async(self, _cb, _ctx=None):
            return _M_omero.api.Search._op_next.invokeAsync(self, (_cb, (), _ctx))

        def results(self, _ctx=None):
            return _M_omero.api.Search._op_results.invoke(self, ((), _ctx))

        def results_async(self, _cb, _ctx=None):
            return _M_omero.api.Search._op_results.invokeAsync(self, (_cb, (), _ctx))

        def currentMetadata(self, _ctx=None):
            return _M_omero.api.Search._op_currentMetadata.invoke(self, ((), _ctx))

        def currentMetadata_async(self, _cb, _ctx=None):
            return _M_omero.api.Search._op_currentMetadata.invokeAsync(self, (_cb, (), _ctx))

        def currentMetadataList(self, _ctx=None):
            return _M_omero.api.Search._op_currentMetadataList.invoke(self, ((), _ctx))

        def currentMetadataList_async(self, _cb, _ctx=None):
            return _M_omero.api.Search._op_currentMetadataList.invokeAsync(self, (_cb, (), _ctx))

        def remove(self, _ctx=None):
            return _M_omero.api.Search._op_remove.invoke(self, ((), _ctx))

        def remove_async(self, _cb, _ctx=None):
            return _M_omero.api.Search._op_remove.invokeAsync(self, (_cb, (), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.SearchPrx.ice_checkedCast(proxy, '::omero::api::Search', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.SearchPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_SearchPrx = IcePy.defineProxy('::omero::api::Search', SearchPrx)

    _M_omero.api._t_Search = IcePy.defineClass('::omero::api::Search', Search, (), True, None, (_M_omero.api._t_StatefulServiceInterface,), ())
    Search.ice_type = _M_omero.api._t_Search

    Search._op_activeQueries = IcePy.Operation('activeQueries', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), IcePy._t_int, (_M_omero._t_ServerError,))
    Search._op_setBatchSize = IcePy.Operation('setBatchSize', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_int),), (), None, (_M_omero._t_ServerError,))
    Search._op_getBatchSize = IcePy.Operation('getBatchSize', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), IcePy._t_int, (_M_omero._t_ServerError,))
    Search._op_setMergedBatches = IcePy.Operation('setMergedBatches', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_bool),), (), None, (_M_omero._t_ServerError,))
    Search._op_isMergedBatches = IcePy.Operation('isMergedBatches', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    Search._op_setCaseSentivice = IcePy.Operation('setCaseSentivice', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_bool),), (), None, (_M_omero._t_ServerError,))
    Search._op_isCaseSensitive = IcePy.Operation('isCaseSensitive', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    Search._op_setUseProjections = IcePy.Operation('setUseProjections', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_bool),), (), None, (_M_omero._t_ServerError,))
    Search._op_isUseProjections = IcePy.Operation('isUseProjections', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    Search._op_setReturnUnloaded = IcePy.Operation('setReturnUnloaded', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_bool),), (), None, (_M_omero._t_ServerError,))
    Search._op_isReturnUnloaded = IcePy.Operation('isReturnUnloaded', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    Search._op_setAllowLeadingWildcard = IcePy.Operation('setAllowLeadingWildcard', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_bool),), (), None, (_M_omero._t_ServerError,))
    Search._op_isAllowLeadingWildcard = IcePy.Operation('isAllowLeadingWildcard', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    Search._op_onlyType = IcePy.Operation('onlyType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string),), (), None, (_M_omero._t_ServerError,))
    Search._op_onlyTypes = IcePy.Operation('onlyTypes', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.api._t_StringSet),), (), None, (_M_omero._t_ServerError,))
    Search._op_allTypes = IcePy.Operation('allTypes', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), None, (_M_omero._t_ServerError,))
    Search._op_onlyIds = IcePy.Operation('onlyIds', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.sys._t_LongList),), (), None, (_M_omero._t_ServerError,))
    Search._op_onlyOwnedBy = IcePy.Operation('onlyOwnedBy', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_Details),), (), None, (_M_omero._t_ServerError,))
    Search._op_notOwnedBy = IcePy.Operation('notOwnedBy', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_Details),), (), None, (_M_omero._t_ServerError,))
    Search._op_onlyCreatedBetween = IcePy.Operation('onlyCreatedBetween', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero._t_RTime), ((), _M_omero._t_RTime)), (), None, (_M_omero._t_ServerError,))
    Search._op_onlyModifiedBetween = IcePy.Operation('onlyModifiedBetween', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero._t_RTime), ((), _M_omero._t_RTime)), (), None, (_M_omero._t_ServerError,))
    Search._op_onlyAnnotatedBetween = IcePy.Operation('onlyAnnotatedBetween', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero._t_RTime), ((), _M_omero._t_RTime)), (), None, (_M_omero._t_ServerError,))
    Search._op_onlyAnnotatedBy = IcePy.Operation('onlyAnnotatedBy', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_Details),), (), None, (_M_omero._t_ServerError,))
    Search._op_notAnnotatedBy = IcePy.Operation('notAnnotatedBy', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_Details),), (), None, (_M_omero._t_ServerError,))
    Search._op_onlyAnnotatedWith = IcePy.Operation('onlyAnnotatedWith', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.api._t_StringSet),), (), None, (_M_omero._t_ServerError,))
    Search._op_addOrderByAsc = IcePy.Operation('addOrderByAsc', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string),), (), None, (_M_omero._t_ServerError,))
    Search._op_addOrderByDesc = IcePy.Operation('addOrderByDesc', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string),), (), None, (_M_omero._t_ServerError,))
    Search._op_unordered = IcePy.Operation('unordered', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), None, (_M_omero._t_ServerError,))
    Search._op_fetchAnnotations = IcePy.Operation('fetchAnnotations', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.api._t_StringSet),), (), None, (_M_omero._t_ServerError,))
    Search._op_fetchAlso = IcePy.Operation('fetchAlso', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.api._t_StringSet),), (), None, (_M_omero._t_ServerError,))
    Search._op_resetDefaults = IcePy.Operation('resetDefaults', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), None, (_M_omero._t_ServerError,))
    Search._op_byGroupForTags = IcePy.Operation('byGroupForTags', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string),), (), None, (_M_omero._t_ServerError,))
    Search._op_byTagForGroups = IcePy.Operation('byTagForGroups', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string),), (), None, (_M_omero._t_ServerError,))
    Search._op_byFullText = IcePy.Operation('byFullText', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string),), (), None, (_M_omero._t_ServerError,))
    Search._op_byLuceneQueryBuilder = IcePy.Operation('byLuceneQueryBuilder', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string), ((), IcePy._t_string), ((), IcePy._t_string), ((), IcePy._t_string), ((), IcePy._t_string)), (), None, (_M_omero._t_ServerError,))
    Search._op_bySimilarTerms = IcePy.Operation('bySimilarTerms', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.api._t_StringSet),), (), None, (_M_omero._t_ServerError,))
    Search._op_byHqlQuery = IcePy.Operation('byHqlQuery', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string), ((), _M_omero.sys._t_Parameters)), (), None, (_M_omero._t_ServerError,))
    Search._op_bySomeMustNone = IcePy.Operation('bySomeMustNone', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.api._t_StringSet), ((), _M_omero.api._t_StringSet), ((), _M_omero.api._t_StringSet)), (), None, (_M_omero._t_ServerError,))
    Search._op_byAnnotatedWith = IcePy.Operation('byAnnotatedWith', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.api._t_AnnotationList),), (), None, (_M_omero._t_ServerError,))
    Search._op_clearQueries = IcePy.Operation('clearQueries', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), None, (_M_omero._t_ServerError,))
    Search._op_and = IcePy.Operation('and', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), None, (_M_omero._t_ServerError,))
    Search._op_or = IcePy.Operation('or', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), None, (_M_omero._t_ServerError,))
    Search._op_not = IcePy.Operation('not', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), None, (_M_omero._t_ServerError,))
    Search._op_hasNext = IcePy.Operation('hasNext', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    Search._op_next = IcePy.Operation('next', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), _M_omero.model._t_IObject, (_M_omero._t_ServerError,))
    Search._op_results = IcePy.Operation('results', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), _M_omero.api._t_IObjectList, (_M_omero._t_ServerError,))
    Search._op_currentMetadata = IcePy.Operation('currentMetadata', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), _M_omero.api._t_SearchMetadata, (_M_omero._t_ServerError,))
    Search._op_currentMetadataList = IcePy.Operation('currentMetadataList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), _M_omero.api._t_SearchMetadataList, (_M_omero._t_ServerError,))
    Search._op_remove = IcePy.Operation('remove', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), None, (_M_omero._t_ServerError,))

    _M_omero.api.Search = Search
    del Search

    _M_omero.api.SearchPrx = SearchPrx
    del SearchPrx

# End of module omero.api

__name__ = 'omero'

# End of module omero
