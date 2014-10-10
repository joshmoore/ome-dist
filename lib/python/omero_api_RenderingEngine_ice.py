# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `RenderingEngine.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_ModelF_ice
import omero_Collections_ice
import omero_ROMIO_ice
import omero_Constants_ice
import omero_api_PyramidService_ice

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

# Included module omero.romio
_M_omero.romio = Ice.openModule('omero.romio')

# Included module omero.constants
_M_omero.constants = Ice.openModule('omero.constants')

# Included module omero.constants.cluster
_M_omero.constants.cluster = Ice.openModule('omero.constants.cluster')

# Included module omero.constants.annotation
_M_omero.constants.annotation = Ice.openModule('omero.constants.annotation')

# Included module omero.constants.annotation.file
_M_omero.constants.annotation.file = Ice.openModule('omero.constants.annotation.file')

# Included module omero.constants.data
_M_omero.constants.data = Ice.openModule('omero.constants.data')

# Included module omero.constants.metadata
_M_omero.constants.metadata = Ice.openModule('omero.constants.metadata')

# Included module omero.constants.namespaces
_M_omero.constants.namespaces = Ice.openModule('omero.constants.namespaces')

# Included module omero.constants.analysis
_M_omero.constants.analysis = Ice.openModule('omero.constants.analysis')

# Included module omero.constants.analysis.flim
_M_omero.constants.analysis.flim = Ice.openModule('omero.constants.analysis.flim')

# Included module omero.constants.jobs
_M_omero.constants.jobs = Ice.openModule('omero.constants.jobs')

# Included module omero.constants.permissions
_M_omero.constants.permissions = Ice.openModule('omero.constants.permissions')

# Included module omero.constants.projection
_M_omero.constants.projection = Ice.openModule('omero.constants.projection')

# Included module omero.constants.topics
_M_omero.constants.topics = Ice.openModule('omero.constants.topics')

# Included module omero.constants.categories
_M_omero.constants.categories = Ice.openModule('omero.constants.categories')

# Included module omero.grid
_M_omero.grid = Ice.openModule('omero.grid')

# Start of module omero
__name__ = 'omero'

# Start of module omero.api
__name__ = 'omero.api'

if not _M_omero.api.__dict__.has_key('RenderingEngine'):
    _M_omero.api.RenderingEngine = Ice.createTempClass()
    class RenderingEngine(_M_omero.api.PyramidService):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.api.RenderingEngine:
                raise RuntimeError('omero.api.RenderingEngine is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::PyramidService', '::omero::api::RenderingEngine', '::omero::api::ServiceInterface', '::omero::api::StatefulServiceInterface')

        def ice_id(self, current=None):
            return '::omero::api::RenderingEngine'

        def ice_staticId():
            return '::omero::api::RenderingEngine'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def render_async(self, _cb, _def, current=None):
        # def renderAsPackedInt_async(self, _cb, _def, current=None):
        # def renderAsPackedIntAsRGBA_async(self, _cb, _def, current=None):
        # def renderProjectedAsPackedInt_async(self, _cb, algorithm, timepoint, stepping, start, end, current=None):
        # def renderCompressed_async(self, _cb, _def, current=None):
        # def renderProjectedCompressed_async(self, _cb, algorithm, timepoint, stepping, start, end, current=None):
        # def getRenderingDefId_async(self, _cb, current=None):
        # def lookupPixels_async(self, _cb, pixelsId, current=None):
        # def lookupRenderingDef_async(self, _cb, pixelsId, current=None):
        # def loadRenderingDef_async(self, _cb, renderingDefId, current=None):
        # def setOverlays_async(self, _cb, tablesId, imageId, rowColorMap, current=None):
        # def load_async(self, _cb, current=None):
        # def setModel_async(self, _cb, model, current=None):
        # def getModel_async(self, _cb, current=None):
        # def getDefaultZ_async(self, _cb, current=None):
        # def getDefaultT_async(self, _cb, current=None):
        # def setDefaultZ_async(self, _cb, z, current=None):
        # def setDefaultT_async(self, _cb, t, current=None):
        # def getPixels_async(self, _cb, current=None):
        # def getAvailableModels_async(self, _cb, current=None):
        # def getAvailableFamilies_async(self, _cb, current=None):
        # def setQuantumStrategy_async(self, _cb, bitResolution, current=None):
        # def setCodomainInterval_async(self, _cb, start, end, current=None):
        # def getQuantumDef_async(self, _cb, current=None):
        # def setQuantizationMap_async(self, _cb, w, fam, coefficient, noiseReduction, current=None):
        # def getChannelFamily_async(self, _cb, w, current=None):
        # def getChannelNoiseReduction_async(self, _cb, w, current=None):
        # def getChannelStats_async(self, _cb, w, current=None):
        # def getChannelCurveCoefficient_async(self, _cb, w, current=None):
        # def setChannelWindow_async(self, _cb, w, start, end, current=None):
        # def getChannelWindowStart_async(self, _cb, w, current=None):
        # def getChannelWindowEnd_async(self, _cb, w, current=None):
        # def setRGBA_async(self, _cb, w, red, green, blue, alpha, current=None):
        # def getRGBA_async(self, _cb, w, current=None):
        # def setActive_async(self, _cb, w, active, current=None):
        # def isActive_async(self, _cb, w, current=None):
        # def addCodomainMap_async(self, _cb, mapCtx, current=None):
        # def updateCodomainMap_async(self, _cb, mapCtx, current=None):
        # def removeCodomainMap_async(self, _cb, mapCtx, current=None):
        # def saveCurrentSettings_async(self, _cb, current=None):
        # def saveAsNewSettings_async(self, _cb, current=None):
        # def resetDefaults_async(self, _cb, current=None):
        # def resetDefaultsNoSave_async(self, _cb, current=None):
        # def resetDefaultsSettings_async(self, _cb, save, current=None):
        # def setCompressionLevel_async(self, _cb, percentage, current=None):
        # def getCompressionLevel_async(self, _cb, current=None):
        # def isPixelsTypeSigned_async(self, _cb, current=None):
        # def getPixelsTypeUpperBound_async(self, _cb, w, current=None):
        # def getPixelsTypeLowerBound_async(self, _cb, w, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_RenderingEngine)

        __repr__ = __str__

    _M_omero.api.RenderingEnginePrx = Ice.createTempClass()
    class RenderingEnginePrx(_M_omero.api.PyramidServicePrx):

        def render(self, _def, _ctx=None):
            return _M_omero.api.RenderingEngine._op_render.invoke(self, ((_def, ), _ctx))

        def render_async(self, _cb, _def, _ctx=None):
            return _M_omero.api.RenderingEngine._op_render.invokeAsync(self, (_cb, (_def, ), _ctx))

        def renderAsPackedInt(self, _def, _ctx=None):
            return _M_omero.api.RenderingEngine._op_renderAsPackedInt.invoke(self, ((_def, ), _ctx))

        def renderAsPackedInt_async(self, _cb, _def, _ctx=None):
            return _M_omero.api.RenderingEngine._op_renderAsPackedInt.invokeAsync(self, (_cb, (_def, ), _ctx))

        def renderAsPackedIntAsRGBA(self, _def, _ctx=None):
            return _M_omero.api.RenderingEngine._op_renderAsPackedIntAsRGBA.invoke(self, ((_def, ), _ctx))

        def renderAsPackedIntAsRGBA_async(self, _cb, _def, _ctx=None):
            return _M_omero.api.RenderingEngine._op_renderAsPackedIntAsRGBA.invokeAsync(self, (_cb, (_def, ), _ctx))

        def renderProjectedAsPackedInt(self, algorithm, timepoint, stepping, start, end, _ctx=None):
            return _M_omero.api.RenderingEngine._op_renderProjectedAsPackedInt.invoke(self, ((algorithm, timepoint, stepping, start, end), _ctx))

        def renderProjectedAsPackedInt_async(self, _cb, algorithm, timepoint, stepping, start, end, _ctx=None):
            return _M_omero.api.RenderingEngine._op_renderProjectedAsPackedInt.invokeAsync(self, (_cb, (algorithm, timepoint, stepping, start, end), _ctx))

        def renderCompressed(self, _def, _ctx=None):
            return _M_omero.api.RenderingEngine._op_renderCompressed.invoke(self, ((_def, ), _ctx))

        def renderCompressed_async(self, _cb, _def, _ctx=None):
            return _M_omero.api.RenderingEngine._op_renderCompressed.invokeAsync(self, (_cb, (_def, ), _ctx))

        def renderProjectedCompressed(self, algorithm, timepoint, stepping, start, end, _ctx=None):
            return _M_omero.api.RenderingEngine._op_renderProjectedCompressed.invoke(self, ((algorithm, timepoint, stepping, start, end), _ctx))

        def renderProjectedCompressed_async(self, _cb, algorithm, timepoint, stepping, start, end, _ctx=None):
            return _M_omero.api.RenderingEngine._op_renderProjectedCompressed.invokeAsync(self, (_cb, (algorithm, timepoint, stepping, start, end), _ctx))

        def getRenderingDefId(self, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getRenderingDefId.invoke(self, ((), _ctx))

        def getRenderingDefId_async(self, _cb, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getRenderingDefId.invokeAsync(self, (_cb, (), _ctx))

        def lookupPixels(self, pixelsId, _ctx=None):
            return _M_omero.api.RenderingEngine._op_lookupPixels.invoke(self, ((pixelsId, ), _ctx))

        def lookupPixels_async(self, _cb, pixelsId, _ctx=None):
            return _M_omero.api.RenderingEngine._op_lookupPixels.invokeAsync(self, (_cb, (pixelsId, ), _ctx))

        def lookupRenderingDef(self, pixelsId, _ctx=None):
            return _M_omero.api.RenderingEngine._op_lookupRenderingDef.invoke(self, ((pixelsId, ), _ctx))

        def lookupRenderingDef_async(self, _cb, pixelsId, _ctx=None):
            return _M_omero.api.RenderingEngine._op_lookupRenderingDef.invokeAsync(self, (_cb, (pixelsId, ), _ctx))

        def loadRenderingDef(self, renderingDefId, _ctx=None):
            return _M_omero.api.RenderingEngine._op_loadRenderingDef.invoke(self, ((renderingDefId, ), _ctx))

        def loadRenderingDef_async(self, _cb, renderingDefId, _ctx=None):
            return _M_omero.api.RenderingEngine._op_loadRenderingDef.invokeAsync(self, (_cb, (renderingDefId, ), _ctx))

        def setOverlays(self, tablesId, imageId, rowColorMap, _ctx=None):
            return _M_omero.api.RenderingEngine._op_setOverlays.invoke(self, ((tablesId, imageId, rowColorMap), _ctx))

        def setOverlays_async(self, _cb, tablesId, imageId, rowColorMap, _ctx=None):
            return _M_omero.api.RenderingEngine._op_setOverlays.invokeAsync(self, (_cb, (tablesId, imageId, rowColorMap), _ctx))

        def load(self, _ctx=None):
            return _M_omero.api.RenderingEngine._op_load.invoke(self, ((), _ctx))

        def load_async(self, _cb, _ctx=None):
            return _M_omero.api.RenderingEngine._op_load.invokeAsync(self, (_cb, (), _ctx))

        def setModel(self, model, _ctx=None):
            return _M_omero.api.RenderingEngine._op_setModel.invoke(self, ((model, ), _ctx))

        def setModel_async(self, _cb, model, _ctx=None):
            return _M_omero.api.RenderingEngine._op_setModel.invokeAsync(self, (_cb, (model, ), _ctx))

        def getModel(self, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getModel.invoke(self, ((), _ctx))

        def getModel_async(self, _cb, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getModel.invokeAsync(self, (_cb, (), _ctx))

        def getDefaultZ(self, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getDefaultZ.invoke(self, ((), _ctx))

        def getDefaultZ_async(self, _cb, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getDefaultZ.invokeAsync(self, (_cb, (), _ctx))

        def getDefaultT(self, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getDefaultT.invoke(self, ((), _ctx))

        def getDefaultT_async(self, _cb, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getDefaultT.invokeAsync(self, (_cb, (), _ctx))

        def setDefaultZ(self, z, _ctx=None):
            return _M_omero.api.RenderingEngine._op_setDefaultZ.invoke(self, ((z, ), _ctx))

        def setDefaultZ_async(self, _cb, z, _ctx=None):
            return _M_omero.api.RenderingEngine._op_setDefaultZ.invokeAsync(self, (_cb, (z, ), _ctx))

        def setDefaultT(self, t, _ctx=None):
            return _M_omero.api.RenderingEngine._op_setDefaultT.invoke(self, ((t, ), _ctx))

        def setDefaultT_async(self, _cb, t, _ctx=None):
            return _M_omero.api.RenderingEngine._op_setDefaultT.invokeAsync(self, (_cb, (t, ), _ctx))

        def getPixels(self, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getPixels.invoke(self, ((), _ctx))

        def getPixels_async(self, _cb, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getPixels.invokeAsync(self, (_cb, (), _ctx))

        def getAvailableModels(self, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getAvailableModels.invoke(self, ((), _ctx))

        def getAvailableModels_async(self, _cb, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getAvailableModels.invokeAsync(self, (_cb, (), _ctx))

        def getAvailableFamilies(self, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getAvailableFamilies.invoke(self, ((), _ctx))

        def getAvailableFamilies_async(self, _cb, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getAvailableFamilies.invokeAsync(self, (_cb, (), _ctx))

        def setQuantumStrategy(self, bitResolution, _ctx=None):
            return _M_omero.api.RenderingEngine._op_setQuantumStrategy.invoke(self, ((bitResolution, ), _ctx))

        def setQuantumStrategy_async(self, _cb, bitResolution, _ctx=None):
            return _M_omero.api.RenderingEngine._op_setQuantumStrategy.invokeAsync(self, (_cb, (bitResolution, ), _ctx))

        def setCodomainInterval(self, start, end, _ctx=None):
            return _M_omero.api.RenderingEngine._op_setCodomainInterval.invoke(self, ((start, end), _ctx))

        def setCodomainInterval_async(self, _cb, start, end, _ctx=None):
            return _M_omero.api.RenderingEngine._op_setCodomainInterval.invokeAsync(self, (_cb, (start, end), _ctx))

        def getQuantumDef(self, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getQuantumDef.invoke(self, ((), _ctx))

        def getQuantumDef_async(self, _cb, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getQuantumDef.invokeAsync(self, (_cb, (), _ctx))

        def setQuantizationMap(self, w, fam, coefficient, noiseReduction, _ctx=None):
            return _M_omero.api.RenderingEngine._op_setQuantizationMap.invoke(self, ((w, fam, coefficient, noiseReduction), _ctx))

        def setQuantizationMap_async(self, _cb, w, fam, coefficient, noiseReduction, _ctx=None):
            return _M_omero.api.RenderingEngine._op_setQuantizationMap.invokeAsync(self, (_cb, (w, fam, coefficient, noiseReduction), _ctx))

        def getChannelFamily(self, w, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getChannelFamily.invoke(self, ((w, ), _ctx))

        def getChannelFamily_async(self, _cb, w, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getChannelFamily.invokeAsync(self, (_cb, (w, ), _ctx))

        def getChannelNoiseReduction(self, w, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getChannelNoiseReduction.invoke(self, ((w, ), _ctx))

        def getChannelNoiseReduction_async(self, _cb, w, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getChannelNoiseReduction.invokeAsync(self, (_cb, (w, ), _ctx))

        def getChannelStats(self, w, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getChannelStats.invoke(self, ((w, ), _ctx))

        def getChannelStats_async(self, _cb, w, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getChannelStats.invokeAsync(self, (_cb, (w, ), _ctx))

        def getChannelCurveCoefficient(self, w, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getChannelCurveCoefficient.invoke(self, ((w, ), _ctx))

        def getChannelCurveCoefficient_async(self, _cb, w, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getChannelCurveCoefficient.invokeAsync(self, (_cb, (w, ), _ctx))

        def setChannelWindow(self, w, start, end, _ctx=None):
            return _M_omero.api.RenderingEngine._op_setChannelWindow.invoke(self, ((w, start, end), _ctx))

        def setChannelWindow_async(self, _cb, w, start, end, _ctx=None):
            return _M_omero.api.RenderingEngine._op_setChannelWindow.invokeAsync(self, (_cb, (w, start, end), _ctx))

        def getChannelWindowStart(self, w, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getChannelWindowStart.invoke(self, ((w, ), _ctx))

        def getChannelWindowStart_async(self, _cb, w, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getChannelWindowStart.invokeAsync(self, (_cb, (w, ), _ctx))

        def getChannelWindowEnd(self, w, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getChannelWindowEnd.invoke(self, ((w, ), _ctx))

        def getChannelWindowEnd_async(self, _cb, w, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getChannelWindowEnd.invokeAsync(self, (_cb, (w, ), _ctx))

        def setRGBA(self, w, red, green, blue, alpha, _ctx=None):
            return _M_omero.api.RenderingEngine._op_setRGBA.invoke(self, ((w, red, green, blue, alpha), _ctx))

        def setRGBA_async(self, _cb, w, red, green, blue, alpha, _ctx=None):
            return _M_omero.api.RenderingEngine._op_setRGBA.invokeAsync(self, (_cb, (w, red, green, blue, alpha), _ctx))

        def getRGBA(self, w, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getRGBA.invoke(self, ((w, ), _ctx))

        def getRGBA_async(self, _cb, w, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getRGBA.invokeAsync(self, (_cb, (w, ), _ctx))

        def setActive(self, w, active, _ctx=None):
            return _M_omero.api.RenderingEngine._op_setActive.invoke(self, ((w, active), _ctx))

        def setActive_async(self, _cb, w, active, _ctx=None):
            return _M_omero.api.RenderingEngine._op_setActive.invokeAsync(self, (_cb, (w, active), _ctx))

        def isActive(self, w, _ctx=None):
            return _M_omero.api.RenderingEngine._op_isActive.invoke(self, ((w, ), _ctx))

        def isActive_async(self, _cb, w, _ctx=None):
            return _M_omero.api.RenderingEngine._op_isActive.invokeAsync(self, (_cb, (w, ), _ctx))

        def addCodomainMap(self, mapCtx, _ctx=None):
            return _M_omero.api.RenderingEngine._op_addCodomainMap.invoke(self, ((mapCtx, ), _ctx))

        def addCodomainMap_async(self, _cb, mapCtx, _ctx=None):
            return _M_omero.api.RenderingEngine._op_addCodomainMap.invokeAsync(self, (_cb, (mapCtx, ), _ctx))

        def updateCodomainMap(self, mapCtx, _ctx=None):
            return _M_omero.api.RenderingEngine._op_updateCodomainMap.invoke(self, ((mapCtx, ), _ctx))

        def updateCodomainMap_async(self, _cb, mapCtx, _ctx=None):
            return _M_omero.api.RenderingEngine._op_updateCodomainMap.invokeAsync(self, (_cb, (mapCtx, ), _ctx))

        def removeCodomainMap(self, mapCtx, _ctx=None):
            return _M_omero.api.RenderingEngine._op_removeCodomainMap.invoke(self, ((mapCtx, ), _ctx))

        def removeCodomainMap_async(self, _cb, mapCtx, _ctx=None):
            return _M_omero.api.RenderingEngine._op_removeCodomainMap.invokeAsync(self, (_cb, (mapCtx, ), _ctx))

        def saveCurrentSettings(self, _ctx=None):
            return _M_omero.api.RenderingEngine._op_saveCurrentSettings.invoke(self, ((), _ctx))

        def saveCurrentSettings_async(self, _cb, _ctx=None):
            return _M_omero.api.RenderingEngine._op_saveCurrentSettings.invokeAsync(self, (_cb, (), _ctx))

        def saveAsNewSettings(self, _ctx=None):
            return _M_omero.api.RenderingEngine._op_saveAsNewSettings.invoke(self, ((), _ctx))

        def saveAsNewSettings_async(self, _cb, _ctx=None):
            return _M_omero.api.RenderingEngine._op_saveAsNewSettings.invokeAsync(self, (_cb, (), _ctx))

        def resetDefaults(self, _ctx=None):
            return _M_omero.api.RenderingEngine._op_resetDefaults.invoke(self, ((), _ctx))

        def resetDefaults_async(self, _cb, _ctx=None):
            return _M_omero.api.RenderingEngine._op_resetDefaults.invokeAsync(self, (_cb, (), _ctx))

        def resetDefaultsNoSave(self, _ctx=None):
            return _M_omero.api.RenderingEngine._op_resetDefaultsNoSave.invoke(self, ((), _ctx))

        def resetDefaultsNoSave_async(self, _cb, _ctx=None):
            return _M_omero.api.RenderingEngine._op_resetDefaultsNoSave.invokeAsync(self, (_cb, (), _ctx))

        def resetDefaultsSettings(self, save, _ctx=None):
            return _M_omero.api.RenderingEngine._op_resetDefaultsSettings.invoke(self, ((save, ), _ctx))

        def resetDefaultsSettings_async(self, _cb, save, _ctx=None):
            return _M_omero.api.RenderingEngine._op_resetDefaultsSettings.invokeAsync(self, (_cb, (save, ), _ctx))

        def setCompressionLevel(self, percentage, _ctx=None):
            return _M_omero.api.RenderingEngine._op_setCompressionLevel.invoke(self, ((percentage, ), _ctx))

        def setCompressionLevel_async(self, _cb, percentage, _ctx=None):
            return _M_omero.api.RenderingEngine._op_setCompressionLevel.invokeAsync(self, (_cb, (percentage, ), _ctx))

        def getCompressionLevel(self, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getCompressionLevel.invoke(self, ((), _ctx))

        def getCompressionLevel_async(self, _cb, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getCompressionLevel.invokeAsync(self, (_cb, (), _ctx))

        def isPixelsTypeSigned(self, _ctx=None):
            return _M_omero.api.RenderingEngine._op_isPixelsTypeSigned.invoke(self, ((), _ctx))

        def isPixelsTypeSigned_async(self, _cb, _ctx=None):
            return _M_omero.api.RenderingEngine._op_isPixelsTypeSigned.invokeAsync(self, (_cb, (), _ctx))

        def getPixelsTypeUpperBound(self, w, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getPixelsTypeUpperBound.invoke(self, ((w, ), _ctx))

        def getPixelsTypeUpperBound_async(self, _cb, w, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getPixelsTypeUpperBound.invokeAsync(self, (_cb, (w, ), _ctx))

        def getPixelsTypeLowerBound(self, w, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getPixelsTypeLowerBound.invoke(self, ((w, ), _ctx))

        def getPixelsTypeLowerBound_async(self, _cb, w, _ctx=None):
            return _M_omero.api.RenderingEngine._op_getPixelsTypeLowerBound.invokeAsync(self, (_cb, (w, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.RenderingEnginePrx.ice_checkedCast(proxy, '::omero::api::RenderingEngine', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.RenderingEnginePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_RenderingEnginePrx = IcePy.defineProxy('::omero::api::RenderingEngine', RenderingEnginePrx)

    _M_omero.api._t_RenderingEngine = IcePy.defineClass('::omero::api::RenderingEngine', RenderingEngine, (), True, None, (_M_omero.api._t_PyramidService,), ())
    RenderingEngine.ice_type = _M_omero.api._t_RenderingEngine

    RenderingEngine._op_render = IcePy.Operation('render', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.romio._t_PlaneDef),), (), _M_omero.romio._t_RGBBuffer, (_M_omero._t_ServerError,))
    RenderingEngine._op_renderAsPackedInt = IcePy.Operation('renderAsPackedInt', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.romio._t_PlaneDef),), (), _M_Ice._t_IntSeq, (_M_omero._t_ServerError,))
    RenderingEngine._op_renderAsPackedIntAsRGBA = IcePy.Operation('renderAsPackedIntAsRGBA', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.romio._t_PlaneDef),), (), _M_Ice._t_IntSeq, (_M_omero._t_ServerError,))
    RenderingEngine._op_renderAsPackedIntAsRGBA.deprecate("renderAsPackedIntAsRGBA() is deprecated")
    RenderingEngine._op_renderProjectedAsPackedInt = IcePy.Operation('renderProjectedAsPackedInt', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.constants.projection._t_ProjectionType), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int)), (), _M_Ice._t_IntSeq, (_M_omero._t_ServerError,))
    RenderingEngine._op_renderCompressed = IcePy.Operation('renderCompressed', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.romio._t_PlaneDef),), (), _M_Ice._t_ByteSeq, (_M_omero._t_ServerError,))
    RenderingEngine._op_renderProjectedCompressed = IcePy.Operation('renderProjectedCompressed', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.constants.projection._t_ProjectionType), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int)), (), _M_Ice._t_ByteSeq, (_M_omero._t_ServerError,))
    RenderingEngine._op_getRenderingDefId = IcePy.Operation('getRenderingDefId', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), IcePy._t_long, (_M_omero._t_ServerError,))
    RenderingEngine._op_lookupPixels = IcePy.Operation('lookupPixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), None, (_M_omero._t_ServerError,))
    RenderingEngine._op_lookupRenderingDef = IcePy.Operation('lookupRenderingDef', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    RenderingEngine._op_loadRenderingDef = IcePy.Operation('loadRenderingDef', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), None, (_M_omero._t_ServerError,))
    RenderingEngine._op_setOverlays = IcePy.Operation('setOverlays', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero._t_RLong), ((), _M_omero._t_RLong), ((), _M_omero.api._t_LongIntMap)), (), None, (_M_omero._t_ServerError,))
    RenderingEngine._op_load = IcePy.Operation('load', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), None, (_M_omero._t_ServerError,))
    RenderingEngine._op_setModel = IcePy.Operation('setModel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_RenderingModel),), (), None, (_M_omero._t_ServerError,))
    RenderingEngine._op_getModel = IcePy.Operation('getModel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), _M_omero.model._t_RenderingModel, (_M_omero._t_ServerError,))
    RenderingEngine._op_getDefaultZ = IcePy.Operation('getDefaultZ', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), IcePy._t_int, (_M_omero._t_ServerError,))
    RenderingEngine._op_getDefaultT = IcePy.Operation('getDefaultT', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), IcePy._t_int, (_M_omero._t_ServerError,))
    RenderingEngine._op_setDefaultZ = IcePy.Operation('setDefaultZ', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_int),), (), None, (_M_omero._t_ServerError,))
    RenderingEngine._op_setDefaultT = IcePy.Operation('setDefaultT', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_int),), (), None, (_M_omero._t_ServerError,))
    RenderingEngine._op_getPixels = IcePy.Operation('getPixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), _M_omero.model._t_Pixels, (_M_omero._t_ServerError,))
    RenderingEngine._op_getAvailableModels = IcePy.Operation('getAvailableModels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), _M_omero.api._t_IObjectList, (_M_omero._t_ServerError,))
    RenderingEngine._op_getAvailableFamilies = IcePy.Operation('getAvailableFamilies', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), _M_omero.api._t_IObjectList, (_M_omero._t_ServerError,))
    RenderingEngine._op_setQuantumStrategy = IcePy.Operation('setQuantumStrategy', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_int),), (), None, (_M_omero._t_ServerError,))
    RenderingEngine._op_setCodomainInterval = IcePy.Operation('setCodomainInterval', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_int), ((), IcePy._t_int)), (), None, (_M_omero._t_ServerError,))
    RenderingEngine._op_getQuantumDef = IcePy.Operation('getQuantumDef', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), _M_omero.model._t_QuantumDef, (_M_omero._t_ServerError,))
    RenderingEngine._op_setQuantizationMap = IcePy.Operation('setQuantizationMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_int), ((), _M_omero.model._t_Family), ((), IcePy._t_double), ((), IcePy._t_bool)), (), None, (_M_omero._t_ServerError,))
    RenderingEngine._op_getChannelFamily = IcePy.Operation('getChannelFamily', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_int),), (), _M_omero.model._t_Family, (_M_omero._t_ServerError,))
    RenderingEngine._op_getChannelNoiseReduction = IcePy.Operation('getChannelNoiseReduction', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_int),), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    RenderingEngine._op_getChannelStats = IcePy.Operation('getChannelStats', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_int),), (), _M_Ice._t_DoubleSeq, (_M_omero._t_ServerError,))
    RenderingEngine._op_getChannelCurveCoefficient = IcePy.Operation('getChannelCurveCoefficient', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_int),), (), IcePy._t_double, (_M_omero._t_ServerError,))
    RenderingEngine._op_setChannelWindow = IcePy.Operation('setChannelWindow', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_int), ((), IcePy._t_double), ((), IcePy._t_double)), (), None, (_M_omero._t_ServerError,))
    RenderingEngine._op_getChannelWindowStart = IcePy.Operation('getChannelWindowStart', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_int),), (), IcePy._t_double, (_M_omero._t_ServerError,))
    RenderingEngine._op_getChannelWindowEnd = IcePy.Operation('getChannelWindowEnd', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_int),), (), IcePy._t_double, (_M_omero._t_ServerError,))
    RenderingEngine._op_setRGBA = IcePy.Operation('setRGBA', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int)), (), None, (_M_omero._t_ServerError,))
    RenderingEngine._op_getRGBA = IcePy.Operation('getRGBA', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_int),), (), _M_Ice._t_IntSeq, (_M_omero._t_ServerError,))
    RenderingEngine._op_setActive = IcePy.Operation('setActive', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_int), ((), IcePy._t_bool)), (), None, (_M_omero._t_ServerError,))
    RenderingEngine._op_isActive = IcePy.Operation('isActive', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_int),), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    RenderingEngine._op_addCodomainMap = IcePy.Operation('addCodomainMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.romio._t_CodomainMapContext),), (), None, (_M_omero._t_ServerError,))
    RenderingEngine._op_updateCodomainMap = IcePy.Operation('updateCodomainMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.romio._t_CodomainMapContext),), (), None, (_M_omero._t_ServerError,))
    RenderingEngine._op_removeCodomainMap = IcePy.Operation('removeCodomainMap', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.romio._t_CodomainMapContext),), (), None, (_M_omero._t_ServerError,))
    RenderingEngine._op_saveCurrentSettings = IcePy.Operation('saveCurrentSettings', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), None, (_M_omero._t_ServerError,))
    RenderingEngine._op_saveAsNewSettings = IcePy.Operation('saveAsNewSettings', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), IcePy._t_long, (_M_omero._t_ServerError,))
    RenderingEngine._op_resetDefaults = IcePy.Operation('resetDefaults', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), None, (_M_omero._t_ServerError,))
    RenderingEngine._op_resetDefaults.deprecate("resetDefaults() is deprecated")
    RenderingEngine._op_resetDefaultsNoSave = IcePy.Operation('resetDefaultsNoSave', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), None, (_M_omero._t_ServerError,))
    RenderingEngine._op_resetDefaultsNoSave.deprecate("resetDefaultsNoSave() is deprecated")
    RenderingEngine._op_resetDefaultsSettings = IcePy.Operation('resetDefaultsSettings', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_bool),), (), IcePy._t_long, (_M_omero._t_ServerError,))
    RenderingEngine._op_setCompressionLevel = IcePy.Operation('setCompressionLevel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_float),), (), None, (_M_omero._t_ServerError,))
    RenderingEngine._op_getCompressionLevel = IcePy.Operation('getCompressionLevel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), IcePy._t_float, (_M_omero._t_ServerError,))
    RenderingEngine._op_isPixelsTypeSigned = IcePy.Operation('isPixelsTypeSigned', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    RenderingEngine._op_getPixelsTypeUpperBound = IcePy.Operation('getPixelsTypeUpperBound', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_int),), (), IcePy._t_double, (_M_omero._t_ServerError,))
    RenderingEngine._op_getPixelsTypeLowerBound = IcePy.Operation('getPixelsTypeLowerBound', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_int),), (), IcePy._t_double, (_M_omero._t_ServerError,))

    _M_omero.api.RenderingEngine = RenderingEngine
    del RenderingEngine

    _M_omero.api.RenderingEnginePrx = RenderingEnginePrx
    del RenderingEnginePrx

# End of module omero.api

__name__ = 'omero'

# End of module omero
