# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `RenderingDef.ice'

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

if not _M_omero.model.__dict__.has_key('Pixels'):
    _M_omero.model._t_Pixels = IcePy.declareClass('::omero::model::Pixels')
    _M_omero.model._t_PixelsPrx = IcePy.declareProxy('::omero::model::Pixels')

if not _M_omero.model.__dict__.has_key('RenderingModel'):
    _M_omero.model._t_RenderingModel = IcePy.declareClass('::omero::model::RenderingModel')
    _M_omero.model._t_RenderingModelPrx = IcePy.declareProxy('::omero::model::RenderingModel')

if not _M_omero.model.__dict__.has_key('ChannelBinding'):
    _M_omero.model._t_ChannelBinding = IcePy.declareClass('::omero::model::ChannelBinding')
    _M_omero.model._t_ChannelBindingPrx = IcePy.declareProxy('::omero::model::ChannelBinding')

if not _M_omero.model.__dict__.has_key('QuantumDef'):
    _M_omero.model._t_QuantumDef = IcePy.declareClass('::omero::model::QuantumDef')
    _M_omero.model._t_QuantumDefPrx = IcePy.declareProxy('::omero::model::QuantumDef')

if not _M_omero.model.__dict__.has_key('CodomainMapContext'):
    _M_omero.model._t_CodomainMapContext = IcePy.declareClass('::omero::model::CodomainMapContext')
    _M_omero.model._t_CodomainMapContextPrx = IcePy.declareProxy('::omero::model::CodomainMapContext')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('_t_RenderingDefWaveRenderingSeq'):
    _M_omero.model._t_RenderingDefWaveRenderingSeq = IcePy.defineSequence('::omero::model::RenderingDefWaveRenderingSeq', (), _M_omero.model._t_ChannelBinding)

if not _M_omero.model.__dict__.has_key('_t_RenderingDefSpatialDomainEnhancementSeq'):
    _M_omero.model._t_RenderingDefSpatialDomainEnhancementSeq = IcePy.defineSequence('::omero::model::RenderingDefSpatialDomainEnhancementSeq', (), _M_omero.model._t_CodomainMapContext)

if not _M_omero.model.__dict__.has_key('RenderingDef'):
    _M_omero.model.RenderingDef = Ice.createTempClass()
    class RenderingDef(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _pixels=None, _defaultZ=None, _defaultT=None, _model=None, _waveRenderingSeq=None, _waveRenderingLoaded=False, _name=None, _compression=None, _quantization=None, _spatialDomainEnhancementSeq=None, _spatialDomainEnhancementLoaded=False):
            if __builtin__.type(self) == _M_omero.model.RenderingDef:
                raise RuntimeError('omero.model.RenderingDef is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._pixels = _pixels
            self._defaultZ = _defaultZ
            self._defaultT = _defaultT
            self._model = _model
            self._waveRenderingSeq = _waveRenderingSeq
            self._waveRenderingLoaded = _waveRenderingLoaded
            self._name = _name
            self._compression = _compression
            self._quantization = _quantization
            self._spatialDomainEnhancementSeq = _spatialDomainEnhancementSeq
            self._spatialDomainEnhancementLoaded = _spatialDomainEnhancementLoaded

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::RenderingDef')

        def ice_id(self, current=None):
            return '::omero::model::RenderingDef'

        def ice_staticId():
            return '::omero::model::RenderingDef'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getPixels(self, current=None):
        # def setPixels(self, thePixels, current=None):
        # def getDefaultZ(self, current=None):
        # def setDefaultZ(self, theDefaultZ, current=None):
        # def getDefaultT(self, current=None):
        # def setDefaultT(self, theDefaultT, current=None):
        # def getModel(self, current=None):
        # def setModel(self, theModel, current=None):
        # def unloadWaveRendering(self, current=None):
        # def sizeOfWaveRendering(self, current=None):
        # def copyWaveRendering(self, current=None):
        # def addChannelBinding(self, target, current=None):
        # def addAllChannelBindingSet(self, targets, current=None):
        # def removeChannelBinding(self, theTarget, current=None):
        # def removeAllChannelBindingSet(self, targets, current=None):
        # def clearWaveRendering(self, current=None):
        # def reloadWaveRendering(self, toCopy, current=None):
        # def getChannelBinding(self, index, current=None):
        # def setChannelBinding(self, index, theElement, current=None):
        # def getPrimaryChannelBinding(self, current=None):
        # def setPrimaryChannelBinding(self, theElement, current=None):
        # def getName(self, current=None):
        # def setName(self, theName, current=None):
        # def getCompression(self, current=None):
        # def setCompression(self, theCompression, current=None):
        # def getQuantization(self, current=None):
        # def setQuantization(self, theQuantization, current=None):
        # def unloadSpatialDomainEnhancement(self, current=None):
        # def sizeOfSpatialDomainEnhancement(self, current=None):
        # def copySpatialDomainEnhancement(self, current=None):
        # def addCodomainMapContext(self, target, current=None):
        # def addAllCodomainMapContextSet(self, targets, current=None):
        # def removeCodomainMapContext(self, theTarget, current=None):
        # def removeAllCodomainMapContextSet(self, targets, current=None):
        # def clearSpatialDomainEnhancement(self, current=None):
        # def reloadSpatialDomainEnhancement(self, toCopy, current=None):
        # def getCodomainMapContext(self, index, current=None):
        # def setCodomainMapContext(self, index, theElement, current=None):
        # def getPrimaryCodomainMapContext(self, current=None):
        # def setPrimaryCodomainMapContext(self, theElement, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_RenderingDef)

        __repr__ = __str__

    _M_omero.model.RenderingDefPrx = Ice.createTempClass()
    class RenderingDefPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.RenderingDef._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.RenderingDef._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getPixels(self, _ctx=None):
            return _M_omero.model.RenderingDef._op_getPixels.invoke(self, ((), _ctx))

        def setPixels(self, thePixels, _ctx=None):
            return _M_omero.model.RenderingDef._op_setPixels.invoke(self, ((thePixels, ), _ctx))

        def getDefaultZ(self, _ctx=None):
            return _M_omero.model.RenderingDef._op_getDefaultZ.invoke(self, ((), _ctx))

        def setDefaultZ(self, theDefaultZ, _ctx=None):
            return _M_omero.model.RenderingDef._op_setDefaultZ.invoke(self, ((theDefaultZ, ), _ctx))

        def getDefaultT(self, _ctx=None):
            return _M_omero.model.RenderingDef._op_getDefaultT.invoke(self, ((), _ctx))

        def setDefaultT(self, theDefaultT, _ctx=None):
            return _M_omero.model.RenderingDef._op_setDefaultT.invoke(self, ((theDefaultT, ), _ctx))

        def getModel(self, _ctx=None):
            return _M_omero.model.RenderingDef._op_getModel.invoke(self, ((), _ctx))

        def setModel(self, theModel, _ctx=None):
            return _M_omero.model.RenderingDef._op_setModel.invoke(self, ((theModel, ), _ctx))

        def unloadWaveRendering(self, _ctx=None):
            return _M_omero.model.RenderingDef._op_unloadWaveRendering.invoke(self, ((), _ctx))

        def sizeOfWaveRendering(self, _ctx=None):
            return _M_omero.model.RenderingDef._op_sizeOfWaveRendering.invoke(self, ((), _ctx))

        def copyWaveRendering(self, _ctx=None):
            return _M_omero.model.RenderingDef._op_copyWaveRendering.invoke(self, ((), _ctx))

        def addChannelBinding(self, target, _ctx=None):
            return _M_omero.model.RenderingDef._op_addChannelBinding.invoke(self, ((target, ), _ctx))

        def addAllChannelBindingSet(self, targets, _ctx=None):
            return _M_omero.model.RenderingDef._op_addAllChannelBindingSet.invoke(self, ((targets, ), _ctx))

        def removeChannelBinding(self, theTarget, _ctx=None):
            return _M_omero.model.RenderingDef._op_removeChannelBinding.invoke(self, ((theTarget, ), _ctx))

        def removeAllChannelBindingSet(self, targets, _ctx=None):
            return _M_omero.model.RenderingDef._op_removeAllChannelBindingSet.invoke(self, ((targets, ), _ctx))

        def clearWaveRendering(self, _ctx=None):
            return _M_omero.model.RenderingDef._op_clearWaveRendering.invoke(self, ((), _ctx))

        def reloadWaveRendering(self, toCopy, _ctx=None):
            return _M_omero.model.RenderingDef._op_reloadWaveRendering.invoke(self, ((toCopy, ), _ctx))

        def getChannelBinding(self, index, _ctx=None):
            return _M_omero.model.RenderingDef._op_getChannelBinding.invoke(self, ((index, ), _ctx))

        def setChannelBinding(self, index, theElement, _ctx=None):
            return _M_omero.model.RenderingDef._op_setChannelBinding.invoke(self, ((index, theElement), _ctx))

        def getPrimaryChannelBinding(self, _ctx=None):
            return _M_omero.model.RenderingDef._op_getPrimaryChannelBinding.invoke(self, ((), _ctx))

        def setPrimaryChannelBinding(self, theElement, _ctx=None):
            return _M_omero.model.RenderingDef._op_setPrimaryChannelBinding.invoke(self, ((theElement, ), _ctx))

        def getName(self, _ctx=None):
            return _M_omero.model.RenderingDef._op_getName.invoke(self, ((), _ctx))

        def setName(self, theName, _ctx=None):
            return _M_omero.model.RenderingDef._op_setName.invoke(self, ((theName, ), _ctx))

        def getCompression(self, _ctx=None):
            return _M_omero.model.RenderingDef._op_getCompression.invoke(self, ((), _ctx))

        def setCompression(self, theCompression, _ctx=None):
            return _M_omero.model.RenderingDef._op_setCompression.invoke(self, ((theCompression, ), _ctx))

        def getQuantization(self, _ctx=None):
            return _M_omero.model.RenderingDef._op_getQuantization.invoke(self, ((), _ctx))

        def setQuantization(self, theQuantization, _ctx=None):
            return _M_omero.model.RenderingDef._op_setQuantization.invoke(self, ((theQuantization, ), _ctx))

        def unloadSpatialDomainEnhancement(self, _ctx=None):
            return _M_omero.model.RenderingDef._op_unloadSpatialDomainEnhancement.invoke(self, ((), _ctx))

        def sizeOfSpatialDomainEnhancement(self, _ctx=None):
            return _M_omero.model.RenderingDef._op_sizeOfSpatialDomainEnhancement.invoke(self, ((), _ctx))

        def copySpatialDomainEnhancement(self, _ctx=None):
            return _M_omero.model.RenderingDef._op_copySpatialDomainEnhancement.invoke(self, ((), _ctx))

        def addCodomainMapContext(self, target, _ctx=None):
            return _M_omero.model.RenderingDef._op_addCodomainMapContext.invoke(self, ((target, ), _ctx))

        def addAllCodomainMapContextSet(self, targets, _ctx=None):
            return _M_omero.model.RenderingDef._op_addAllCodomainMapContextSet.invoke(self, ((targets, ), _ctx))

        def removeCodomainMapContext(self, theTarget, _ctx=None):
            return _M_omero.model.RenderingDef._op_removeCodomainMapContext.invoke(self, ((theTarget, ), _ctx))

        def removeAllCodomainMapContextSet(self, targets, _ctx=None):
            return _M_omero.model.RenderingDef._op_removeAllCodomainMapContextSet.invoke(self, ((targets, ), _ctx))

        def clearSpatialDomainEnhancement(self, _ctx=None):
            return _M_omero.model.RenderingDef._op_clearSpatialDomainEnhancement.invoke(self, ((), _ctx))

        def reloadSpatialDomainEnhancement(self, toCopy, _ctx=None):
            return _M_omero.model.RenderingDef._op_reloadSpatialDomainEnhancement.invoke(self, ((toCopy, ), _ctx))

        def getCodomainMapContext(self, index, _ctx=None):
            return _M_omero.model.RenderingDef._op_getCodomainMapContext.invoke(self, ((index, ), _ctx))

        def setCodomainMapContext(self, index, theElement, _ctx=None):
            return _M_omero.model.RenderingDef._op_setCodomainMapContext.invoke(self, ((index, theElement), _ctx))

        def getPrimaryCodomainMapContext(self, _ctx=None):
            return _M_omero.model.RenderingDef._op_getPrimaryCodomainMapContext.invoke(self, ((), _ctx))

        def setPrimaryCodomainMapContext(self, theElement, _ctx=None):
            return _M_omero.model.RenderingDef._op_setPrimaryCodomainMapContext.invoke(self, ((theElement, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.RenderingDefPrx.ice_checkedCast(proxy, '::omero::model::RenderingDef', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.RenderingDefPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_RenderingDefPrx = IcePy.defineProxy('::omero::model::RenderingDef', RenderingDefPrx)

    _M_omero.model._t_RenderingDef = IcePy.declareClass('::omero::model::RenderingDef')

    _M_omero.model._t_RenderingDef = IcePy.defineClass('::omero::model::RenderingDef', RenderingDef, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_pixels', (), _M_omero.model._t_Pixels),
        ('_defaultZ', (), _M_omero._t_RInt),
        ('_defaultT', (), _M_omero._t_RInt),
        ('_model', (), _M_omero.model._t_RenderingModel),
        ('_waveRenderingSeq', (), _M_omero.model._t_RenderingDefWaveRenderingSeq),
        ('_waveRenderingLoaded', (), IcePy._t_bool),
        ('_name', (), _M_omero._t_RString),
        ('_compression', (), _M_omero._t_RDouble),
        ('_quantization', (), _M_omero.model._t_QuantumDef),
        ('_spatialDomainEnhancementSeq', (), _M_omero.model._t_RenderingDefSpatialDomainEnhancementSeq),
        ('_spatialDomainEnhancementLoaded', (), IcePy._t_bool)
    ))
    RenderingDef.ice_type = _M_omero.model._t_RenderingDef

    RenderingDef._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    RenderingDef._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    RenderingDef._op_getPixels = IcePy.Operation('getPixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Pixels, ())
    RenderingDef._op_setPixels = IcePy.Operation('setPixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Pixels),), (), None, ())
    RenderingDef._op_getDefaultZ = IcePy.Operation('getDefaultZ', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    RenderingDef._op_setDefaultZ = IcePy.Operation('setDefaultZ', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    RenderingDef._op_getDefaultT = IcePy.Operation('getDefaultT', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    RenderingDef._op_setDefaultT = IcePy.Operation('setDefaultT', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    RenderingDef._op_getModel = IcePy.Operation('getModel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_RenderingModel, ())
    RenderingDef._op_setModel = IcePy.Operation('setModel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_RenderingModel),), (), None, ())
    RenderingDef._op_unloadWaveRendering = IcePy.Operation('unloadWaveRendering', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    RenderingDef._op_sizeOfWaveRendering = IcePy.Operation('sizeOfWaveRendering', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    RenderingDef._op_copyWaveRendering = IcePy.Operation('copyWaveRendering', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_RenderingDefWaveRenderingSeq, ())
    RenderingDef._op_addChannelBinding = IcePy.Operation('addChannelBinding', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ChannelBinding),), (), None, ())
    RenderingDef._op_addAllChannelBindingSet = IcePy.Operation('addAllChannelBindingSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_RenderingDefWaveRenderingSeq),), (), None, ())
    RenderingDef._op_removeChannelBinding = IcePy.Operation('removeChannelBinding', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ChannelBinding),), (), None, ())
    RenderingDef._op_removeAllChannelBindingSet = IcePy.Operation('removeAllChannelBindingSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_RenderingDefWaveRenderingSeq),), (), None, ())
    RenderingDef._op_clearWaveRendering = IcePy.Operation('clearWaveRendering', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    RenderingDef._op_reloadWaveRendering = IcePy.Operation('reloadWaveRendering', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_RenderingDef),), (), None, ())
    RenderingDef._op_getChannelBinding = IcePy.Operation('getChannelBinding', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int),), (), _M_omero.model._t_ChannelBinding, ())
    RenderingDef._op_setChannelBinding = IcePy.Operation('setChannelBinding', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int), ((), _M_omero.model._t_ChannelBinding)), (), _M_omero.model._t_ChannelBinding, ())
    RenderingDef._op_getPrimaryChannelBinding = IcePy.Operation('getPrimaryChannelBinding', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ChannelBinding, ())
    RenderingDef._op_setPrimaryChannelBinding = IcePy.Operation('setPrimaryChannelBinding', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ChannelBinding),), (), _M_omero.model._t_ChannelBinding, ())
    RenderingDef._op_getName = IcePy.Operation('getName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    RenderingDef._op_setName = IcePy.Operation('setName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    RenderingDef._op_getCompression = IcePy.Operation('getCompression', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    RenderingDef._op_setCompression = IcePy.Operation('setCompression', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    RenderingDef._op_getQuantization = IcePy.Operation('getQuantization', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_QuantumDef, ())
    RenderingDef._op_setQuantization = IcePy.Operation('setQuantization', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_QuantumDef),), (), None, ())
    RenderingDef._op_unloadSpatialDomainEnhancement = IcePy.Operation('unloadSpatialDomainEnhancement', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    RenderingDef._op_sizeOfSpatialDomainEnhancement = IcePy.Operation('sizeOfSpatialDomainEnhancement', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    RenderingDef._op_copySpatialDomainEnhancement = IcePy.Operation('copySpatialDomainEnhancement', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_RenderingDefSpatialDomainEnhancementSeq, ())
    RenderingDef._op_addCodomainMapContext = IcePy.Operation('addCodomainMapContext', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_CodomainMapContext),), (), None, ())
    RenderingDef._op_addAllCodomainMapContextSet = IcePy.Operation('addAllCodomainMapContextSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_RenderingDefSpatialDomainEnhancementSeq),), (), None, ())
    RenderingDef._op_removeCodomainMapContext = IcePy.Operation('removeCodomainMapContext', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_CodomainMapContext),), (), None, ())
    RenderingDef._op_removeAllCodomainMapContextSet = IcePy.Operation('removeAllCodomainMapContextSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_RenderingDefSpatialDomainEnhancementSeq),), (), None, ())
    RenderingDef._op_clearSpatialDomainEnhancement = IcePy.Operation('clearSpatialDomainEnhancement', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    RenderingDef._op_reloadSpatialDomainEnhancement = IcePy.Operation('reloadSpatialDomainEnhancement', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_RenderingDef),), (), None, ())
    RenderingDef._op_getCodomainMapContext = IcePy.Operation('getCodomainMapContext', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int),), (), _M_omero.model._t_CodomainMapContext, ())
    RenderingDef._op_setCodomainMapContext = IcePy.Operation('setCodomainMapContext', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int), ((), _M_omero.model._t_CodomainMapContext)), (), _M_omero.model._t_CodomainMapContext, ())
    RenderingDef._op_getPrimaryCodomainMapContext = IcePy.Operation('getPrimaryCodomainMapContext', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_CodomainMapContext, ())
    RenderingDef._op_setPrimaryCodomainMapContext = IcePy.Operation('setPrimaryCodomainMapContext', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_CodomainMapContext),), (), _M_omero.model._t_CodomainMapContext, ())

    _M_omero.model.RenderingDef = RenderingDef
    del RenderingDef

    _M_omero.model.RenderingDefPrx = RenderingDefPrx
    del RenderingDefPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
