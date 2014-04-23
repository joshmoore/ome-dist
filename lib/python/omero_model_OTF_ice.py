# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `OTF.ice'

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

if not _M_omero.model.__dict__.has_key('PixelsType'):
    _M_omero.model._t_PixelsType = IcePy.declareClass('::omero::model::PixelsType')
    _M_omero.model._t_PixelsTypePrx = IcePy.declareProxy('::omero::model::PixelsType')

if not _M_omero.model.__dict__.has_key('FilterSet'):
    _M_omero.model._t_FilterSet = IcePy.declareClass('::omero::model::FilterSet')
    _M_omero.model._t_FilterSetPrx = IcePy.declareProxy('::omero::model::FilterSet')

if not _M_omero.model.__dict__.has_key('Objective'):
    _M_omero.model._t_Objective = IcePy.declareClass('::omero::model::Objective')
    _M_omero.model._t_ObjectivePrx = IcePy.declareProxy('::omero::model::Objective')

if not _M_omero.model.__dict__.has_key('Instrument'):
    _M_omero.model._t_Instrument = IcePy.declareClass('::omero::model::Instrument')
    _M_omero.model._t_InstrumentPrx = IcePy.declareProxy('::omero::model::Instrument')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('OTF'):
    _M_omero.model.OTF = Ice.createTempClass()
    class OTF(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _sizeX=None, _sizeY=None, _opticalAxisAveraged=None, _pixelsType=None, _path=None, _filterSet=None, _objective=None, _instrument=None):
            if __builtin__.type(self) == _M_omero.model.OTF:
                raise RuntimeError('omero.model.OTF is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._sizeX = _sizeX
            self._sizeY = _sizeY
            self._opticalAxisAveraged = _opticalAxisAveraged
            self._pixelsType = _pixelsType
            self._path = _path
            self._filterSet = _filterSet
            self._objective = _objective
            self._instrument = _instrument

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::OTF')

        def ice_id(self, current=None):
            return '::omero::model::OTF'

        def ice_staticId():
            return '::omero::model::OTF'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getSizeX(self, current=None):
        # def setSizeX(self, theSizeX, current=None):
        # def getSizeY(self, current=None):
        # def setSizeY(self, theSizeY, current=None):
        # def getOpticalAxisAveraged(self, current=None):
        # def setOpticalAxisAveraged(self, theOpticalAxisAveraged, current=None):
        # def getPixelsType(self, current=None):
        # def setPixelsType(self, thePixelsType, current=None):
        # def getPath(self, current=None):
        # def setPath(self, thePath, current=None):
        # def getFilterSet(self, current=None):
        # def setFilterSet(self, theFilterSet, current=None):
        # def getObjective(self, current=None):
        # def setObjective(self, theObjective, current=None):
        # def getInstrument(self, current=None):
        # def setInstrument(self, theInstrument, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_OTF)

        __repr__ = __str__

    _M_omero.model.OTFPrx = Ice.createTempClass()
    class OTFPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.OTF._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.OTF._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getSizeX(self, _ctx=None):
            return _M_omero.model.OTF._op_getSizeX.invoke(self, ((), _ctx))

        def setSizeX(self, theSizeX, _ctx=None):
            return _M_omero.model.OTF._op_setSizeX.invoke(self, ((theSizeX, ), _ctx))

        def getSizeY(self, _ctx=None):
            return _M_omero.model.OTF._op_getSizeY.invoke(self, ((), _ctx))

        def setSizeY(self, theSizeY, _ctx=None):
            return _M_omero.model.OTF._op_setSizeY.invoke(self, ((theSizeY, ), _ctx))

        def getOpticalAxisAveraged(self, _ctx=None):
            return _M_omero.model.OTF._op_getOpticalAxisAveraged.invoke(self, ((), _ctx))

        def setOpticalAxisAveraged(self, theOpticalAxisAveraged, _ctx=None):
            return _M_omero.model.OTF._op_setOpticalAxisAveraged.invoke(self, ((theOpticalAxisAveraged, ), _ctx))

        def getPixelsType(self, _ctx=None):
            return _M_omero.model.OTF._op_getPixelsType.invoke(self, ((), _ctx))

        def setPixelsType(self, thePixelsType, _ctx=None):
            return _M_omero.model.OTF._op_setPixelsType.invoke(self, ((thePixelsType, ), _ctx))

        def getPath(self, _ctx=None):
            return _M_omero.model.OTF._op_getPath.invoke(self, ((), _ctx))

        def setPath(self, thePath, _ctx=None):
            return _M_omero.model.OTF._op_setPath.invoke(self, ((thePath, ), _ctx))

        def getFilterSet(self, _ctx=None):
            return _M_omero.model.OTF._op_getFilterSet.invoke(self, ((), _ctx))

        def setFilterSet(self, theFilterSet, _ctx=None):
            return _M_omero.model.OTF._op_setFilterSet.invoke(self, ((theFilterSet, ), _ctx))

        def getObjective(self, _ctx=None):
            return _M_omero.model.OTF._op_getObjective.invoke(self, ((), _ctx))

        def setObjective(self, theObjective, _ctx=None):
            return _M_omero.model.OTF._op_setObjective.invoke(self, ((theObjective, ), _ctx))

        def getInstrument(self, _ctx=None):
            return _M_omero.model.OTF._op_getInstrument.invoke(self, ((), _ctx))

        def setInstrument(self, theInstrument, _ctx=None):
            return _M_omero.model.OTF._op_setInstrument.invoke(self, ((theInstrument, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.OTFPrx.ice_checkedCast(proxy, '::omero::model::OTF', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.OTFPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_OTFPrx = IcePy.defineProxy('::omero::model::OTF', OTFPrx)

    _M_omero.model._t_OTF = IcePy.declareClass('::omero::model::OTF')

    _M_omero.model._t_OTF = IcePy.defineClass('::omero::model::OTF', OTF, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_sizeX', (), _M_omero._t_RInt),
        ('_sizeY', (), _M_omero._t_RInt),
        ('_opticalAxisAveraged', (), _M_omero._t_RBool),
        ('_pixelsType', (), _M_omero.model._t_PixelsType),
        ('_path', (), _M_omero._t_RString),
        ('_filterSet', (), _M_omero.model._t_FilterSet),
        ('_objective', (), _M_omero.model._t_Objective),
        ('_instrument', (), _M_omero.model._t_Instrument)
    ))
    OTF.ice_type = _M_omero.model._t_OTF

    OTF._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    OTF._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    OTF._op_getSizeX = IcePy.Operation('getSizeX', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    OTF._op_setSizeX = IcePy.Operation('setSizeX', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    OTF._op_getSizeY = IcePy.Operation('getSizeY', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    OTF._op_setSizeY = IcePy.Operation('setSizeY', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    OTF._op_getOpticalAxisAveraged = IcePy.Operation('getOpticalAxisAveraged', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RBool, ())
    OTF._op_setOpticalAxisAveraged = IcePy.Operation('setOpticalAxisAveraged', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RBool),), (), None, ())
    OTF._op_getPixelsType = IcePy.Operation('getPixelsType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_PixelsType, ())
    OTF._op_setPixelsType = IcePy.Operation('setPixelsType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PixelsType),), (), None, ())
    OTF._op_getPath = IcePy.Operation('getPath', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    OTF._op_setPath = IcePy.Operation('setPath', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    OTF._op_getFilterSet = IcePy.Operation('getFilterSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_FilterSet, ())
    OTF._op_setFilterSet = IcePy.Operation('setFilterSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_FilterSet),), (), None, ())
    OTF._op_getObjective = IcePy.Operation('getObjective', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Objective, ())
    OTF._op_setObjective = IcePy.Operation('setObjective', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Objective),), (), None, ())
    OTF._op_getInstrument = IcePy.Operation('getInstrument', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Instrument, ())
    OTF._op_setInstrument = IcePy.Operation('setInstrument', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Instrument),), (), None, ())

    _M_omero.model.OTF = OTF
    del OTF

    _M_omero.model.OTFPrx = OTFPrx
    del OTFPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
