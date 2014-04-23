# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `DetectorSettings.ice'

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

if not _M_omero.model.__dict__.has_key('Binning'):
    _M_omero.model._t_Binning = IcePy.declareClass('::omero::model::Binning')
    _M_omero.model._t_BinningPrx = IcePy.declareProxy('::omero::model::Binning')

if not _M_omero.model.__dict__.has_key('Detector'):
    _M_omero.model._t_Detector = IcePy.declareClass('::omero::model::Detector')
    _M_omero.model._t_DetectorPrx = IcePy.declareProxy('::omero::model::Detector')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('DetectorSettings'):
    _M_omero.model.DetectorSettings = Ice.createTempClass()
    class DetectorSettings(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _voltage=None, _gain=None, _offsetValue=None, _readOutRate=None, _binning=None, _integration=None, _zoom=None, _detector=None):
            if __builtin__.type(self) == _M_omero.model.DetectorSettings:
                raise RuntimeError('omero.model.DetectorSettings is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._voltage = _voltage
            self._gain = _gain
            self._offsetValue = _offsetValue
            self._readOutRate = _readOutRate
            self._binning = _binning
            self._integration = _integration
            self._zoom = _zoom
            self._detector = _detector

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::DetectorSettings', '::omero::model::IObject')

        def ice_id(self, current=None):
            return '::omero::model::DetectorSettings'

        def ice_staticId():
            return '::omero::model::DetectorSettings'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getVoltage(self, current=None):
        # def setVoltage(self, theVoltage, current=None):
        # def getGain(self, current=None):
        # def setGain(self, theGain, current=None):
        # def getOffsetValue(self, current=None):
        # def setOffsetValue(self, theOffsetValue, current=None):
        # def getReadOutRate(self, current=None):
        # def setReadOutRate(self, theReadOutRate, current=None):
        # def getBinning(self, current=None):
        # def setBinning(self, theBinning, current=None):
        # def getIntegration(self, current=None):
        # def setIntegration(self, theIntegration, current=None):
        # def getZoom(self, current=None):
        # def setZoom(self, theZoom, current=None):
        # def getDetector(self, current=None):
        # def setDetector(self, theDetector, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_DetectorSettings)

        __repr__ = __str__

    _M_omero.model.DetectorSettingsPrx = Ice.createTempClass()
    class DetectorSettingsPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.DetectorSettings._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.DetectorSettings._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getVoltage(self, _ctx=None):
            return _M_omero.model.DetectorSettings._op_getVoltage.invoke(self, ((), _ctx))

        def setVoltage(self, theVoltage, _ctx=None):
            return _M_omero.model.DetectorSettings._op_setVoltage.invoke(self, ((theVoltage, ), _ctx))

        def getGain(self, _ctx=None):
            return _M_omero.model.DetectorSettings._op_getGain.invoke(self, ((), _ctx))

        def setGain(self, theGain, _ctx=None):
            return _M_omero.model.DetectorSettings._op_setGain.invoke(self, ((theGain, ), _ctx))

        def getOffsetValue(self, _ctx=None):
            return _M_omero.model.DetectorSettings._op_getOffsetValue.invoke(self, ((), _ctx))

        def setOffsetValue(self, theOffsetValue, _ctx=None):
            return _M_omero.model.DetectorSettings._op_setOffsetValue.invoke(self, ((theOffsetValue, ), _ctx))

        def getReadOutRate(self, _ctx=None):
            return _M_omero.model.DetectorSettings._op_getReadOutRate.invoke(self, ((), _ctx))

        def setReadOutRate(self, theReadOutRate, _ctx=None):
            return _M_omero.model.DetectorSettings._op_setReadOutRate.invoke(self, ((theReadOutRate, ), _ctx))

        def getBinning(self, _ctx=None):
            return _M_omero.model.DetectorSettings._op_getBinning.invoke(self, ((), _ctx))

        def setBinning(self, theBinning, _ctx=None):
            return _M_omero.model.DetectorSettings._op_setBinning.invoke(self, ((theBinning, ), _ctx))

        def getIntegration(self, _ctx=None):
            return _M_omero.model.DetectorSettings._op_getIntegration.invoke(self, ((), _ctx))

        def setIntegration(self, theIntegration, _ctx=None):
            return _M_omero.model.DetectorSettings._op_setIntegration.invoke(self, ((theIntegration, ), _ctx))

        def getZoom(self, _ctx=None):
            return _M_omero.model.DetectorSettings._op_getZoom.invoke(self, ((), _ctx))

        def setZoom(self, theZoom, _ctx=None):
            return _M_omero.model.DetectorSettings._op_setZoom.invoke(self, ((theZoom, ), _ctx))

        def getDetector(self, _ctx=None):
            return _M_omero.model.DetectorSettings._op_getDetector.invoke(self, ((), _ctx))

        def setDetector(self, theDetector, _ctx=None):
            return _M_omero.model.DetectorSettings._op_setDetector.invoke(self, ((theDetector, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.DetectorSettingsPrx.ice_checkedCast(proxy, '::omero::model::DetectorSettings', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.DetectorSettingsPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_DetectorSettingsPrx = IcePy.defineProxy('::omero::model::DetectorSettings', DetectorSettingsPrx)

    _M_omero.model._t_DetectorSettings = IcePy.declareClass('::omero::model::DetectorSettings')

    _M_omero.model._t_DetectorSettings = IcePy.defineClass('::omero::model::DetectorSettings', DetectorSettings, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_voltage', (), _M_omero._t_RDouble),
        ('_gain', (), _M_omero._t_RDouble),
        ('_offsetValue', (), _M_omero._t_RDouble),
        ('_readOutRate', (), _M_omero._t_RDouble),
        ('_binning', (), _M_omero.model._t_Binning),
        ('_integration', (), _M_omero._t_RInt),
        ('_zoom', (), _M_omero._t_RDouble),
        ('_detector', (), _M_omero.model._t_Detector)
    ))
    DetectorSettings.ice_type = _M_omero.model._t_DetectorSettings

    DetectorSettings._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    DetectorSettings._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    DetectorSettings._op_getVoltage = IcePy.Operation('getVoltage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    DetectorSettings._op_setVoltage = IcePy.Operation('setVoltage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    DetectorSettings._op_getGain = IcePy.Operation('getGain', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    DetectorSettings._op_setGain = IcePy.Operation('setGain', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    DetectorSettings._op_getOffsetValue = IcePy.Operation('getOffsetValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    DetectorSettings._op_setOffsetValue = IcePy.Operation('setOffsetValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    DetectorSettings._op_getReadOutRate = IcePy.Operation('getReadOutRate', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    DetectorSettings._op_setReadOutRate = IcePy.Operation('setReadOutRate', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    DetectorSettings._op_getBinning = IcePy.Operation('getBinning', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Binning, ())
    DetectorSettings._op_setBinning = IcePy.Operation('setBinning', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Binning),), (), None, ())
    DetectorSettings._op_getIntegration = IcePy.Operation('getIntegration', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    DetectorSettings._op_setIntegration = IcePy.Operation('setIntegration', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    DetectorSettings._op_getZoom = IcePy.Operation('getZoom', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    DetectorSettings._op_setZoom = IcePy.Operation('setZoom', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    DetectorSettings._op_getDetector = IcePy.Operation('getDetector', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Detector, ())
    DetectorSettings._op_setDetector = IcePy.Operation('setDetector', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Detector),), (), None, ())

    _M_omero.model.DetectorSettings = DetectorSettings
    del DetectorSettings

    _M_omero.model.DetectorSettingsPrx = DetectorSettingsPrx
    del DetectorSettingsPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
