# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `IRenderingSettings.ice'

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

if not _M_omero.api.__dict__.has_key('IRenderingSettings'):
    _M_omero.api.IRenderingSettings = Ice.createTempClass()
    class IRenderingSettings(_M_omero.api.ServiceInterface):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.api.IRenderingSettings:
                raise RuntimeError('omero.api.IRenderingSettings is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::IRenderingSettings', '::omero::api::ServiceInterface')

        def ice_id(self, current=None):
            return '::omero::api::IRenderingSettings'

        def ice_staticId():
            return '::omero::api::IRenderingSettings'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def sanityCheckPixels_async(self, _cb, pFrom, pTo, current=None):
        # def getRenderingSettings_async(self, _cb, pixelsId, current=None):
        # def createNewRenderingDef_async(self, _cb, pixels, current=None):
        # def resetDefaults_async(self, _cb, _def, pixels, current=None):
        # def resetDefaultsNoSave_async(self, _cb, _def, pixels, current=None):
        # def resetDefaultsInImage_async(self, _cb, imageId, current=None):
        # def resetDefaultsForPixels_async(self, _cb, pixelsId, current=None):
        # def resetDefaultsInDataset_async(self, _cb, dataSetId, current=None):
        # def resetDefaultsInSet_async(self, _cb, type, nodeIds, current=None):
        # def resetDefaultsByOwnerInSet_async(self, _cb, type, nodeIds, current=None):
        # def resetMinMaxInSet_async(self, _cb, type, nodeIds, current=None):
        # def applySettingsToSet_async(self, _cb, _from, toType, to, current=None):
        # def applySettingsToProject_async(self, _cb, _from, to, current=None):
        # def applySettingsToDataset_async(self, _cb, _from, to, current=None):
        # def applySettingsToImages_async(self, _cb, _from, to, current=None):
        # def applySettingsToImage_async(self, _cb, _from, to, current=None):
        # def applySettingsToPixels_async(self, _cb, _from, to, current=None):
        # def setOriginalSettingsInImage_async(self, _cb, imageId, current=None):
        # def setOriginalSettingsForPixels_async(self, _cb, pixelsId, current=None):
        # def setOriginalSettingsInDataset_async(self, _cb, dataSetId, current=None):
        # def setOriginalSettingsInSet_async(self, _cb, type, nodeIds, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_IRenderingSettings)

        __repr__ = __str__

    _M_omero.api.IRenderingSettingsPrx = Ice.createTempClass()
    class IRenderingSettingsPrx(_M_omero.api.ServiceInterfacePrx):

        def sanityCheckPixels(self, pFrom, pTo, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_sanityCheckPixels.invoke(self, ((pFrom, pTo), _ctx))

        def sanityCheckPixels_async(self, _cb, pFrom, pTo, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_sanityCheckPixels.invokeAsync(self, (_cb, (pFrom, pTo), _ctx))

        def getRenderingSettings(self, pixelsId, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_getRenderingSettings.invoke(self, ((pixelsId, ), _ctx))

        def getRenderingSettings_async(self, _cb, pixelsId, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_getRenderingSettings.invokeAsync(self, (_cb, (pixelsId, ), _ctx))

        def createNewRenderingDef(self, pixels, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_createNewRenderingDef.invoke(self, ((pixels, ), _ctx))

        def createNewRenderingDef_async(self, _cb, pixels, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_createNewRenderingDef.invokeAsync(self, (_cb, (pixels, ), _ctx))

        def resetDefaults(self, _def, pixels, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_resetDefaults.invoke(self, ((_def, pixels), _ctx))

        def resetDefaults_async(self, _cb, _def, pixels, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_resetDefaults.invokeAsync(self, (_cb, (_def, pixels), _ctx))

        def resetDefaultsNoSave(self, _def, pixels, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_resetDefaultsNoSave.invoke(self, ((_def, pixels), _ctx))

        def resetDefaultsNoSave_async(self, _cb, _def, pixels, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_resetDefaultsNoSave.invokeAsync(self, (_cb, (_def, pixels), _ctx))

        def resetDefaultsInImage(self, imageId, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_resetDefaultsInImage.invoke(self, ((imageId, ), _ctx))

        def resetDefaultsInImage_async(self, _cb, imageId, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_resetDefaultsInImage.invokeAsync(self, (_cb, (imageId, ), _ctx))

        def resetDefaultsForPixels(self, pixelsId, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_resetDefaultsForPixels.invoke(self, ((pixelsId, ), _ctx))

        def resetDefaultsForPixels_async(self, _cb, pixelsId, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_resetDefaultsForPixels.invokeAsync(self, (_cb, (pixelsId, ), _ctx))

        def resetDefaultsInDataset(self, dataSetId, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_resetDefaultsInDataset.invoke(self, ((dataSetId, ), _ctx))

        def resetDefaultsInDataset_async(self, _cb, dataSetId, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_resetDefaultsInDataset.invokeAsync(self, (_cb, (dataSetId, ), _ctx))

        def resetDefaultsInSet(self, type, nodeIds, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_resetDefaultsInSet.invoke(self, ((type, nodeIds), _ctx))

        def resetDefaultsInSet_async(self, _cb, type, nodeIds, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_resetDefaultsInSet.invokeAsync(self, (_cb, (type, nodeIds), _ctx))

        def resetDefaultsByOwnerInSet(self, type, nodeIds, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_resetDefaultsByOwnerInSet.invoke(self, ((type, nodeIds), _ctx))

        def resetDefaultsByOwnerInSet_async(self, _cb, type, nodeIds, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_resetDefaultsByOwnerInSet.invokeAsync(self, (_cb, (type, nodeIds), _ctx))

        def resetMinMaxInSet(self, type, nodeIds, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_resetMinMaxInSet.invoke(self, ((type, nodeIds), _ctx))

        def resetMinMaxInSet_async(self, _cb, type, nodeIds, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_resetMinMaxInSet.invokeAsync(self, (_cb, (type, nodeIds), _ctx))

        def applySettingsToSet(self, _from, toType, to, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_applySettingsToSet.invoke(self, ((_from, toType, to), _ctx))

        def applySettingsToSet_async(self, _cb, _from, toType, to, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_applySettingsToSet.invokeAsync(self, (_cb, (_from, toType, to), _ctx))

        def applySettingsToProject(self, _from, to, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_applySettingsToProject.invoke(self, ((_from, to), _ctx))

        def applySettingsToProject_async(self, _cb, _from, to, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_applySettingsToProject.invokeAsync(self, (_cb, (_from, to), _ctx))

        def applySettingsToDataset(self, _from, to, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_applySettingsToDataset.invoke(self, ((_from, to), _ctx))

        def applySettingsToDataset_async(self, _cb, _from, to, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_applySettingsToDataset.invokeAsync(self, (_cb, (_from, to), _ctx))

        def applySettingsToImages(self, _from, to, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_applySettingsToImages.invoke(self, ((_from, to), _ctx))

        def applySettingsToImages_async(self, _cb, _from, to, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_applySettingsToImages.invokeAsync(self, (_cb, (_from, to), _ctx))

        def applySettingsToImage(self, _from, to, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_applySettingsToImage.invoke(self, ((_from, to), _ctx))

        def applySettingsToImage_async(self, _cb, _from, to, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_applySettingsToImage.invokeAsync(self, (_cb, (_from, to), _ctx))

        def applySettingsToPixels(self, _from, to, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_applySettingsToPixels.invoke(self, ((_from, to), _ctx))

        def applySettingsToPixels_async(self, _cb, _from, to, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_applySettingsToPixels.invokeAsync(self, (_cb, (_from, to), _ctx))

        def setOriginalSettingsInImage(self, imageId, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_setOriginalSettingsInImage.invoke(self, ((imageId, ), _ctx))

        def setOriginalSettingsInImage_async(self, _cb, imageId, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_setOriginalSettingsInImage.invokeAsync(self, (_cb, (imageId, ), _ctx))

        def setOriginalSettingsForPixels(self, pixelsId, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_setOriginalSettingsForPixels.invoke(self, ((pixelsId, ), _ctx))

        def setOriginalSettingsForPixels_async(self, _cb, pixelsId, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_setOriginalSettingsForPixels.invokeAsync(self, (_cb, (pixelsId, ), _ctx))

        def setOriginalSettingsInDataset(self, dataSetId, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_setOriginalSettingsInDataset.invoke(self, ((dataSetId, ), _ctx))

        def setOriginalSettingsInDataset_async(self, _cb, dataSetId, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_setOriginalSettingsInDataset.invokeAsync(self, (_cb, (dataSetId, ), _ctx))

        def setOriginalSettingsInSet(self, type, nodeIds, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_setOriginalSettingsInSet.invoke(self, ((type, nodeIds), _ctx))

        def setOriginalSettingsInSet_async(self, _cb, type, nodeIds, _ctx=None):
            return _M_omero.api.IRenderingSettings._op_setOriginalSettingsInSet.invokeAsync(self, (_cb, (type, nodeIds), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.IRenderingSettingsPrx.ice_checkedCast(proxy, '::omero::api::IRenderingSettings', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.IRenderingSettingsPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_IRenderingSettingsPrx = IcePy.defineProxy('::omero::api::IRenderingSettings', IRenderingSettingsPrx)

    _M_omero.api._t_IRenderingSettings = IcePy.defineClass('::omero::api::IRenderingSettings', IRenderingSettings, (), True, None, (_M_omero.api._t_ServiceInterface,), ())
    IRenderingSettings.ice_type = _M_omero.api._t_IRenderingSettings

    IRenderingSettings._op_sanityCheckPixels = IcePy.Operation('sanityCheckPixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_Pixels), ((), _M_omero.model._t_Pixels)), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    IRenderingSettings._op_getRenderingSettings = IcePy.Operation('getRenderingSettings', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), _M_omero.model._t_RenderingDef, (_M_omero._t_ServerError,))
    IRenderingSettings._op_createNewRenderingDef = IcePy.Operation('createNewRenderingDef', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_Pixels),), (), _M_omero.model._t_RenderingDef, (_M_omero._t_ServerError,))
    IRenderingSettings._op_resetDefaults = IcePy.Operation('resetDefaults', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_RenderingDef), ((), _M_omero.model._t_Pixels)), (), None, (_M_omero._t_ServerError,))
    IRenderingSettings._op_resetDefaultsNoSave = IcePy.Operation('resetDefaultsNoSave', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_RenderingDef), ((), _M_omero.model._t_Pixels)), (), _M_omero.model._t_RenderingDef, (_M_omero._t_ServerError,))
    IRenderingSettings._op_resetDefaultsInImage = IcePy.Operation('resetDefaultsInImage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), None, (_M_omero._t_ServerError,))
    IRenderingSettings._op_resetDefaultsForPixels = IcePy.Operation('resetDefaultsForPixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), None, (_M_omero._t_ServerError,))
    IRenderingSettings._op_resetDefaultsInDataset = IcePy.Operation('resetDefaultsInDataset', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), _M_omero.sys._t_LongList, (_M_omero._t_ServerError,))
    IRenderingSettings._op_resetDefaultsInSet = IcePy.Operation('resetDefaultsInSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string), ((), _M_omero.sys._t_LongList)), (), _M_omero.sys._t_LongList, (_M_omero._t_ServerError,))
    IRenderingSettings._op_resetDefaultsByOwnerInSet = IcePy.Operation('resetDefaultsByOwnerInSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string), ((), _M_omero.sys._t_LongList)), (), _M_omero.sys._t_LongList, (_M_omero._t_ServerError,))
    IRenderingSettings._op_resetMinMaxInSet = IcePy.Operation('resetMinMaxInSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string), ((), _M_omero.sys._t_LongList)), (), _M_omero.sys._t_LongList, (_M_omero._t_ServerError,))
    IRenderingSettings._op_applySettingsToSet = IcePy.Operation('applySettingsToSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), IcePy._t_string), ((), _M_omero.sys._t_LongList)), (), _M_omero.api._t_BooleanIdListMap, (_M_omero._t_ServerError,))
    IRenderingSettings._op_applySettingsToProject = IcePy.Operation('applySettingsToProject', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), IcePy._t_long)), (), _M_omero.api._t_BooleanIdListMap, (_M_omero._t_ServerError,))
    IRenderingSettings._op_applySettingsToDataset = IcePy.Operation('applySettingsToDataset', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), IcePy._t_long)), (), _M_omero.api._t_BooleanIdListMap, (_M_omero._t_ServerError,))
    IRenderingSettings._op_applySettingsToImages = IcePy.Operation('applySettingsToImages', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), _M_omero.sys._t_LongList)), (), _M_omero.api._t_BooleanIdListMap, (_M_omero._t_ServerError,))
    IRenderingSettings._op_applySettingsToImage = IcePy.Operation('applySettingsToImage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), IcePy._t_long)), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    IRenderingSettings._op_applySettingsToPixels = IcePy.Operation('applySettingsToPixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), IcePy._t_long)), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    IRenderingSettings._op_setOriginalSettingsInImage = IcePy.Operation('setOriginalSettingsInImage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), None, (_M_omero._t_ServerError,))
    IRenderingSettings._op_setOriginalSettingsForPixels = IcePy.Operation('setOriginalSettingsForPixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), None, (_M_omero._t_ServerError,))
    IRenderingSettings._op_setOriginalSettingsInDataset = IcePy.Operation('setOriginalSettingsInDataset', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), _M_omero.sys._t_LongList, (_M_omero._t_ServerError,))
    IRenderingSettings._op_setOriginalSettingsInSet = IcePy.Operation('setOriginalSettingsInSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string), ((), _M_omero.sys._t_LongList)), (), _M_omero.sys._t_LongList, (_M_omero._t_ServerError,))

    _M_omero.api.IRenderingSettings = IRenderingSettings
    del IRenderingSettings

    _M_omero.api.IRenderingSettingsPrx = IRenderingSettingsPrx
    del IRenderingSettingsPrx

# End of module omero.api

__name__ = 'omero'

# End of module omero
