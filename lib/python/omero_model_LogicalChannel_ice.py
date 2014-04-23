# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `LogicalChannel.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_model_IObject_ice
import omero_RTypes_ice
import omero_System_ice
import omero_Collections_ice

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

# Start of module omero
__name__ = 'omero'

# Start of module omero.model
__name__ = 'omero.model'

if not _M_omero.model.__dict__.has_key('Illumination'):
    _M_omero.model._t_Illumination = IcePy.declareClass('::omero::model::Illumination')
    _M_omero.model._t_IlluminationPrx = IcePy.declareProxy('::omero::model::Illumination')

if not _M_omero.model.__dict__.has_key('ContrastMethod'):
    _M_omero.model._t_ContrastMethod = IcePy.declareClass('::omero::model::ContrastMethod')
    _M_omero.model._t_ContrastMethodPrx = IcePy.declareProxy('::omero::model::ContrastMethod')

if not _M_omero.model.__dict__.has_key('OTF'):
    _M_omero.model._t_OTF = IcePy.declareClass('::omero::model::OTF')
    _M_omero.model._t_OTFPrx = IcePy.declareProxy('::omero::model::OTF')

if not _M_omero.model.__dict__.has_key('DetectorSettings'):
    _M_omero.model._t_DetectorSettings = IcePy.declareClass('::omero::model::DetectorSettings')
    _M_omero.model._t_DetectorSettingsPrx = IcePy.declareProxy('::omero::model::DetectorSettings')

if not _M_omero.model.__dict__.has_key('LightSettings'):
    _M_omero.model._t_LightSettings = IcePy.declareClass('::omero::model::LightSettings')
    _M_omero.model._t_LightSettingsPrx = IcePy.declareProxy('::omero::model::LightSettings')

if not _M_omero.model.__dict__.has_key('FilterSet'):
    _M_omero.model._t_FilterSet = IcePy.declareClass('::omero::model::FilterSet')
    _M_omero.model._t_FilterSetPrx = IcePy.declareProxy('::omero::model::FilterSet')

if not _M_omero.model.__dict__.has_key('PhotometricInterpretation'):
    _M_omero.model._t_PhotometricInterpretation = IcePy.declareClass('::omero::model::PhotometricInterpretation')
    _M_omero.model._t_PhotometricInterpretationPrx = IcePy.declareProxy('::omero::model::PhotometricInterpretation')

if not _M_omero.model.__dict__.has_key('AcquisitionMode'):
    _M_omero.model._t_AcquisitionMode = IcePy.declareClass('::omero::model::AcquisitionMode')
    _M_omero.model._t_AcquisitionModePrx = IcePy.declareProxy('::omero::model::AcquisitionMode')

if not _M_omero.model.__dict__.has_key('Channel'):
    _M_omero.model._t_Channel = IcePy.declareClass('::omero::model::Channel')
    _M_omero.model._t_ChannelPrx = IcePy.declareProxy('::omero::model::Channel')

if not _M_omero.model.__dict__.has_key('LightPath'):
    _M_omero.model._t_LightPath = IcePy.declareClass('::omero::model::LightPath')
    _M_omero.model._t_LightPathPrx = IcePy.declareProxy('::omero::model::LightPath')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('_t_LogicalChannelChannelsSeq'):
    _M_omero.model._t_LogicalChannelChannelsSeq = IcePy.defineSequence('::omero::model::LogicalChannelChannelsSeq', (), _M_omero.model._t_Channel)

if not _M_omero.model.__dict__.has_key('LogicalChannel'):
    _M_omero.model.LogicalChannel = Ice.createTempClass()
    class LogicalChannel(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _name=None, _pinHoleSize=None, _illumination=None, _contrastMethod=None, _excitationWave=None, _emissionWave=None, _fluor=None, _ndFilter=None, _otf=None, _detectorSettings=None, _lightSourceSettings=None, _filterSet=None, _samplesPerPixel=None, _photometricInterpretation=None, _mode=None, _pockelCellSetting=None, _channelsSeq=None, _channelsLoaded=False, _lightPath=None):
            if __builtin__.type(self) == _M_omero.model.LogicalChannel:
                raise RuntimeError('omero.model.LogicalChannel is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._name = _name
            self._pinHoleSize = _pinHoleSize
            self._illumination = _illumination
            self._contrastMethod = _contrastMethod
            self._excitationWave = _excitationWave
            self._emissionWave = _emissionWave
            self._fluor = _fluor
            self._ndFilter = _ndFilter
            self._otf = _otf
            self._detectorSettings = _detectorSettings
            self._lightSourceSettings = _lightSourceSettings
            self._filterSet = _filterSet
            self._samplesPerPixel = _samplesPerPixel
            self._photometricInterpretation = _photometricInterpretation
            self._mode = _mode
            self._pockelCellSetting = _pockelCellSetting
            self._channelsSeq = _channelsSeq
            self._channelsLoaded = _channelsLoaded
            self._lightPath = _lightPath

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::LogicalChannel')

        def ice_id(self, current=None):
            return '::omero::model::LogicalChannel'

        def ice_staticId():
            return '::omero::model::LogicalChannel'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getName(self, current=None):
        # def setName(self, theName, current=None):
        # def getPinHoleSize(self, current=None):
        # def setPinHoleSize(self, thePinHoleSize, current=None):
        # def getIllumination(self, current=None):
        # def setIllumination(self, theIllumination, current=None):
        # def getContrastMethod(self, current=None):
        # def setContrastMethod(self, theContrastMethod, current=None):
        # def getExcitationWave(self, current=None):
        # def setExcitationWave(self, theExcitationWave, current=None):
        # def getEmissionWave(self, current=None):
        # def setEmissionWave(self, theEmissionWave, current=None):
        # def getFluor(self, current=None):
        # def setFluor(self, theFluor, current=None):
        # def getNdFilter(self, current=None):
        # def setNdFilter(self, theNdFilter, current=None):
        # def getOtf(self, current=None):
        # def setOtf(self, theOtf, current=None):
        # def getDetectorSettings(self, current=None):
        # def setDetectorSettings(self, theDetectorSettings, current=None):
        # def getLightSourceSettings(self, current=None):
        # def setLightSourceSettings(self, theLightSourceSettings, current=None):
        # def getFilterSet(self, current=None):
        # def setFilterSet(self, theFilterSet, current=None):
        # def getSamplesPerPixel(self, current=None):
        # def setSamplesPerPixel(self, theSamplesPerPixel, current=None):
        # def getPhotometricInterpretation(self, current=None):
        # def setPhotometricInterpretation(self, thePhotometricInterpretation, current=None):
        # def getMode(self, current=None):
        # def setMode(self, theMode, current=None):
        # def getPockelCellSetting(self, current=None):
        # def setPockelCellSetting(self, thePockelCellSetting, current=None):
        # def unloadChannels(self, current=None):
        # def sizeOfChannels(self, current=None):
        # def copyChannels(self, current=None):
        # def addChannel(self, target, current=None):
        # def addAllChannelSet(self, targets, current=None):
        # def removeChannel(self, theTarget, current=None):
        # def removeAllChannelSet(self, targets, current=None):
        # def clearChannels(self, current=None):
        # def reloadChannels(self, toCopy, current=None):
        # def getLightPath(self, current=None):
        # def setLightPath(self, theLightPath, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_LogicalChannel)

        __repr__ = __str__

    _M_omero.model.LogicalChannelPrx = Ice.createTempClass()
    class LogicalChannelPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.LogicalChannel._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.LogicalChannel._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getName(self, _ctx=None):
            return _M_omero.model.LogicalChannel._op_getName.invoke(self, ((), _ctx))

        def setName(self, theName, _ctx=None):
            return _M_omero.model.LogicalChannel._op_setName.invoke(self, ((theName, ), _ctx))

        def getPinHoleSize(self, _ctx=None):
            return _M_omero.model.LogicalChannel._op_getPinHoleSize.invoke(self, ((), _ctx))

        def setPinHoleSize(self, thePinHoleSize, _ctx=None):
            return _M_omero.model.LogicalChannel._op_setPinHoleSize.invoke(self, ((thePinHoleSize, ), _ctx))

        def getIllumination(self, _ctx=None):
            return _M_omero.model.LogicalChannel._op_getIllumination.invoke(self, ((), _ctx))

        def setIllumination(self, theIllumination, _ctx=None):
            return _M_omero.model.LogicalChannel._op_setIllumination.invoke(self, ((theIllumination, ), _ctx))

        def getContrastMethod(self, _ctx=None):
            return _M_omero.model.LogicalChannel._op_getContrastMethod.invoke(self, ((), _ctx))

        def setContrastMethod(self, theContrastMethod, _ctx=None):
            return _M_omero.model.LogicalChannel._op_setContrastMethod.invoke(self, ((theContrastMethod, ), _ctx))

        def getExcitationWave(self, _ctx=None):
            return _M_omero.model.LogicalChannel._op_getExcitationWave.invoke(self, ((), _ctx))

        def setExcitationWave(self, theExcitationWave, _ctx=None):
            return _M_omero.model.LogicalChannel._op_setExcitationWave.invoke(self, ((theExcitationWave, ), _ctx))

        def getEmissionWave(self, _ctx=None):
            return _M_omero.model.LogicalChannel._op_getEmissionWave.invoke(self, ((), _ctx))

        def setEmissionWave(self, theEmissionWave, _ctx=None):
            return _M_omero.model.LogicalChannel._op_setEmissionWave.invoke(self, ((theEmissionWave, ), _ctx))

        def getFluor(self, _ctx=None):
            return _M_omero.model.LogicalChannel._op_getFluor.invoke(self, ((), _ctx))

        def setFluor(self, theFluor, _ctx=None):
            return _M_omero.model.LogicalChannel._op_setFluor.invoke(self, ((theFluor, ), _ctx))

        def getNdFilter(self, _ctx=None):
            return _M_omero.model.LogicalChannel._op_getNdFilter.invoke(self, ((), _ctx))

        def setNdFilter(self, theNdFilter, _ctx=None):
            return _M_omero.model.LogicalChannel._op_setNdFilter.invoke(self, ((theNdFilter, ), _ctx))

        def getOtf(self, _ctx=None):
            return _M_omero.model.LogicalChannel._op_getOtf.invoke(self, ((), _ctx))

        def setOtf(self, theOtf, _ctx=None):
            return _M_omero.model.LogicalChannel._op_setOtf.invoke(self, ((theOtf, ), _ctx))

        def getDetectorSettings(self, _ctx=None):
            return _M_omero.model.LogicalChannel._op_getDetectorSettings.invoke(self, ((), _ctx))

        def setDetectorSettings(self, theDetectorSettings, _ctx=None):
            return _M_omero.model.LogicalChannel._op_setDetectorSettings.invoke(self, ((theDetectorSettings, ), _ctx))

        def getLightSourceSettings(self, _ctx=None):
            return _M_omero.model.LogicalChannel._op_getLightSourceSettings.invoke(self, ((), _ctx))

        def setLightSourceSettings(self, theLightSourceSettings, _ctx=None):
            return _M_omero.model.LogicalChannel._op_setLightSourceSettings.invoke(self, ((theLightSourceSettings, ), _ctx))

        def getFilterSet(self, _ctx=None):
            return _M_omero.model.LogicalChannel._op_getFilterSet.invoke(self, ((), _ctx))

        def setFilterSet(self, theFilterSet, _ctx=None):
            return _M_omero.model.LogicalChannel._op_setFilterSet.invoke(self, ((theFilterSet, ), _ctx))

        def getSamplesPerPixel(self, _ctx=None):
            return _M_omero.model.LogicalChannel._op_getSamplesPerPixel.invoke(self, ((), _ctx))

        def setSamplesPerPixel(self, theSamplesPerPixel, _ctx=None):
            return _M_omero.model.LogicalChannel._op_setSamplesPerPixel.invoke(self, ((theSamplesPerPixel, ), _ctx))

        def getPhotometricInterpretation(self, _ctx=None):
            return _M_omero.model.LogicalChannel._op_getPhotometricInterpretation.invoke(self, ((), _ctx))

        def setPhotometricInterpretation(self, thePhotometricInterpretation, _ctx=None):
            return _M_omero.model.LogicalChannel._op_setPhotometricInterpretation.invoke(self, ((thePhotometricInterpretation, ), _ctx))

        def getMode(self, _ctx=None):
            return _M_omero.model.LogicalChannel._op_getMode.invoke(self, ((), _ctx))

        def setMode(self, theMode, _ctx=None):
            return _M_omero.model.LogicalChannel._op_setMode.invoke(self, ((theMode, ), _ctx))

        def getPockelCellSetting(self, _ctx=None):
            return _M_omero.model.LogicalChannel._op_getPockelCellSetting.invoke(self, ((), _ctx))

        def setPockelCellSetting(self, thePockelCellSetting, _ctx=None):
            return _M_omero.model.LogicalChannel._op_setPockelCellSetting.invoke(self, ((thePockelCellSetting, ), _ctx))

        def unloadChannels(self, _ctx=None):
            return _M_omero.model.LogicalChannel._op_unloadChannels.invoke(self, ((), _ctx))

        def sizeOfChannels(self, _ctx=None):
            return _M_omero.model.LogicalChannel._op_sizeOfChannels.invoke(self, ((), _ctx))

        def copyChannels(self, _ctx=None):
            return _M_omero.model.LogicalChannel._op_copyChannels.invoke(self, ((), _ctx))

        def addChannel(self, target, _ctx=None):
            return _M_omero.model.LogicalChannel._op_addChannel.invoke(self, ((target, ), _ctx))

        def addAllChannelSet(self, targets, _ctx=None):
            return _M_omero.model.LogicalChannel._op_addAllChannelSet.invoke(self, ((targets, ), _ctx))

        def removeChannel(self, theTarget, _ctx=None):
            return _M_omero.model.LogicalChannel._op_removeChannel.invoke(self, ((theTarget, ), _ctx))

        def removeAllChannelSet(self, targets, _ctx=None):
            return _M_omero.model.LogicalChannel._op_removeAllChannelSet.invoke(self, ((targets, ), _ctx))

        def clearChannels(self, _ctx=None):
            return _M_omero.model.LogicalChannel._op_clearChannels.invoke(self, ((), _ctx))

        def reloadChannels(self, toCopy, _ctx=None):
            return _M_omero.model.LogicalChannel._op_reloadChannels.invoke(self, ((toCopy, ), _ctx))

        def getLightPath(self, _ctx=None):
            return _M_omero.model.LogicalChannel._op_getLightPath.invoke(self, ((), _ctx))

        def setLightPath(self, theLightPath, _ctx=None):
            return _M_omero.model.LogicalChannel._op_setLightPath.invoke(self, ((theLightPath, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.LogicalChannelPrx.ice_checkedCast(proxy, '::omero::model::LogicalChannel', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.LogicalChannelPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_LogicalChannelPrx = IcePy.defineProxy('::omero::model::LogicalChannel', LogicalChannelPrx)

    _M_omero.model._t_LogicalChannel = IcePy.declareClass('::omero::model::LogicalChannel')

    _M_omero.model._t_LogicalChannel = IcePy.defineClass('::omero::model::LogicalChannel', LogicalChannel, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_name', (), _M_omero._t_RString),
        ('_pinHoleSize', (), _M_omero._t_RDouble),
        ('_illumination', (), _M_omero.model._t_Illumination),
        ('_contrastMethod', (), _M_omero.model._t_ContrastMethod),
        ('_excitationWave', (), _M_omero._t_RInt),
        ('_emissionWave', (), _M_omero._t_RInt),
        ('_fluor', (), _M_omero._t_RString),
        ('_ndFilter', (), _M_omero._t_RDouble),
        ('_otf', (), _M_omero.model._t_OTF),
        ('_detectorSettings', (), _M_omero.model._t_DetectorSettings),
        ('_lightSourceSettings', (), _M_omero.model._t_LightSettings),
        ('_filterSet', (), _M_omero.model._t_FilterSet),
        ('_samplesPerPixel', (), _M_omero._t_RInt),
        ('_photometricInterpretation', (), _M_omero.model._t_PhotometricInterpretation),
        ('_mode', (), _M_omero.model._t_AcquisitionMode),
        ('_pockelCellSetting', (), _M_omero._t_RInt),
        ('_channelsSeq', (), _M_omero.model._t_LogicalChannelChannelsSeq),
        ('_channelsLoaded', (), IcePy._t_bool),
        ('_lightPath', (), _M_omero.model._t_LightPath)
    ))
    LogicalChannel.ice_type = _M_omero.model._t_LogicalChannel

    LogicalChannel._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    LogicalChannel._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    LogicalChannel._op_getName = IcePy.Operation('getName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    LogicalChannel._op_setName = IcePy.Operation('setName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    LogicalChannel._op_getPinHoleSize = IcePy.Operation('getPinHoleSize', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    LogicalChannel._op_setPinHoleSize = IcePy.Operation('setPinHoleSize', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    LogicalChannel._op_getIllumination = IcePy.Operation('getIllumination', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Illumination, ())
    LogicalChannel._op_setIllumination = IcePy.Operation('setIllumination', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Illumination),), (), None, ())
    LogicalChannel._op_getContrastMethod = IcePy.Operation('getContrastMethod', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ContrastMethod, ())
    LogicalChannel._op_setContrastMethod = IcePy.Operation('setContrastMethod', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ContrastMethod),), (), None, ())
    LogicalChannel._op_getExcitationWave = IcePy.Operation('getExcitationWave', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    LogicalChannel._op_setExcitationWave = IcePy.Operation('setExcitationWave', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    LogicalChannel._op_getEmissionWave = IcePy.Operation('getEmissionWave', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    LogicalChannel._op_setEmissionWave = IcePy.Operation('setEmissionWave', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    LogicalChannel._op_getFluor = IcePy.Operation('getFluor', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    LogicalChannel._op_setFluor = IcePy.Operation('setFluor', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    LogicalChannel._op_getNdFilter = IcePy.Operation('getNdFilter', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    LogicalChannel._op_setNdFilter = IcePy.Operation('setNdFilter', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    LogicalChannel._op_getOtf = IcePy.Operation('getOtf', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_OTF, ())
    LogicalChannel._op_setOtf = IcePy.Operation('setOtf', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_OTF),), (), None, ())
    LogicalChannel._op_getDetectorSettings = IcePy.Operation('getDetectorSettings', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_DetectorSettings, ())
    LogicalChannel._op_setDetectorSettings = IcePy.Operation('setDetectorSettings', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_DetectorSettings),), (), None, ())
    LogicalChannel._op_getLightSourceSettings = IcePy.Operation('getLightSourceSettings', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_LightSettings, ())
    LogicalChannel._op_setLightSourceSettings = IcePy.Operation('setLightSourceSettings', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_LightSettings),), (), None, ())
    LogicalChannel._op_getFilterSet = IcePy.Operation('getFilterSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_FilterSet, ())
    LogicalChannel._op_setFilterSet = IcePy.Operation('setFilterSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilterSet),), (), None, ())
    LogicalChannel._op_getSamplesPerPixel = IcePy.Operation('getSamplesPerPixel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    LogicalChannel._op_setSamplesPerPixel = IcePy.Operation('setSamplesPerPixel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    LogicalChannel._op_getPhotometricInterpretation = IcePy.Operation('getPhotometricInterpretation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_PhotometricInterpretation, ())
    LogicalChannel._op_setPhotometricInterpretation = IcePy.Operation('setPhotometricInterpretation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PhotometricInterpretation),), (), None, ())
    LogicalChannel._op_getMode = IcePy.Operation('getMode', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_AcquisitionMode, ())
    LogicalChannel._op_setMode = IcePy.Operation('setMode', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_AcquisitionMode),), (), None, ())
    LogicalChannel._op_getPockelCellSetting = IcePy.Operation('getPockelCellSetting', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    LogicalChannel._op_setPockelCellSetting = IcePy.Operation('setPockelCellSetting', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    LogicalChannel._op_unloadChannels = IcePy.Operation('unloadChannels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    LogicalChannel._op_sizeOfChannels = IcePy.Operation('sizeOfChannels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    LogicalChannel._op_copyChannels = IcePy.Operation('copyChannels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_LogicalChannelChannelsSeq, ())
    LogicalChannel._op_addChannel = IcePy.Operation('addChannel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Channel),), (), None, ())
    LogicalChannel._op_addAllChannelSet = IcePy.Operation('addAllChannelSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_LogicalChannelChannelsSeq),), (), None, ())
    LogicalChannel._op_removeChannel = IcePy.Operation('removeChannel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Channel),), (), None, ())
    LogicalChannel._op_removeAllChannelSet = IcePy.Operation('removeAllChannelSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_LogicalChannelChannelsSeq),), (), None, ())
    LogicalChannel._op_clearChannels = IcePy.Operation('clearChannels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    LogicalChannel._op_reloadChannels = IcePy.Operation('reloadChannels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_LogicalChannel),), (), None, ())
    LogicalChannel._op_getLightPath = IcePy.Operation('getLightPath', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_LightPath, ())
    LogicalChannel._op_setLightPath = IcePy.Operation('setLightPath', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_LightPath),), (), None, ())

    _M_omero.model.LogicalChannel = LogicalChannel
    del LogicalChannel

    _M_omero.model.LogicalChannelPrx = LogicalChannelPrx
    del LogicalChannelPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
