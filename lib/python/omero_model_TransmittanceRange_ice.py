# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `TransmittanceRange.ice'

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

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('TransmittanceRange'):
    _M_omero.model.TransmittanceRange = Ice.createTempClass()
    class TransmittanceRange(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _cutIn=None, _cutOut=None, _cutInTolerance=None, _cutOutTolerance=None, _transmittance=None):
            if __builtin__.type(self) == _M_omero.model.TransmittanceRange:
                raise RuntimeError('omero.model.TransmittanceRange is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._cutIn = _cutIn
            self._cutOut = _cutOut
            self._cutInTolerance = _cutInTolerance
            self._cutOutTolerance = _cutOutTolerance
            self._transmittance = _transmittance

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::TransmittanceRange')

        def ice_id(self, current=None):
            return '::omero::model::TransmittanceRange'

        def ice_staticId():
            return '::omero::model::TransmittanceRange'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getCutIn(self, current=None):
        # def setCutIn(self, theCutIn, current=None):
        # def getCutOut(self, current=None):
        # def setCutOut(self, theCutOut, current=None):
        # def getCutInTolerance(self, current=None):
        # def setCutInTolerance(self, theCutInTolerance, current=None):
        # def getCutOutTolerance(self, current=None):
        # def setCutOutTolerance(self, theCutOutTolerance, current=None):
        # def getTransmittance(self, current=None):
        # def setTransmittance(self, theTransmittance, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_TransmittanceRange)

        __repr__ = __str__

    _M_omero.model.TransmittanceRangePrx = Ice.createTempClass()
    class TransmittanceRangePrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.TransmittanceRange._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.TransmittanceRange._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getCutIn(self, _ctx=None):
            return _M_omero.model.TransmittanceRange._op_getCutIn.invoke(self, ((), _ctx))

        def setCutIn(self, theCutIn, _ctx=None):
            return _M_omero.model.TransmittanceRange._op_setCutIn.invoke(self, ((theCutIn, ), _ctx))

        def getCutOut(self, _ctx=None):
            return _M_omero.model.TransmittanceRange._op_getCutOut.invoke(self, ((), _ctx))

        def setCutOut(self, theCutOut, _ctx=None):
            return _M_omero.model.TransmittanceRange._op_setCutOut.invoke(self, ((theCutOut, ), _ctx))

        def getCutInTolerance(self, _ctx=None):
            return _M_omero.model.TransmittanceRange._op_getCutInTolerance.invoke(self, ((), _ctx))

        def setCutInTolerance(self, theCutInTolerance, _ctx=None):
            return _M_omero.model.TransmittanceRange._op_setCutInTolerance.invoke(self, ((theCutInTolerance, ), _ctx))

        def getCutOutTolerance(self, _ctx=None):
            return _M_omero.model.TransmittanceRange._op_getCutOutTolerance.invoke(self, ((), _ctx))

        def setCutOutTolerance(self, theCutOutTolerance, _ctx=None):
            return _M_omero.model.TransmittanceRange._op_setCutOutTolerance.invoke(self, ((theCutOutTolerance, ), _ctx))

        def getTransmittance(self, _ctx=None):
            return _M_omero.model.TransmittanceRange._op_getTransmittance.invoke(self, ((), _ctx))

        def setTransmittance(self, theTransmittance, _ctx=None):
            return _M_omero.model.TransmittanceRange._op_setTransmittance.invoke(self, ((theTransmittance, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.TransmittanceRangePrx.ice_checkedCast(proxy, '::omero::model::TransmittanceRange', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.TransmittanceRangePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_TransmittanceRangePrx = IcePy.defineProxy('::omero::model::TransmittanceRange', TransmittanceRangePrx)

    _M_omero.model._t_TransmittanceRange = IcePy.declareClass('::omero::model::TransmittanceRange')

    _M_omero.model._t_TransmittanceRange = IcePy.defineClass('::omero::model::TransmittanceRange', TransmittanceRange, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_cutIn', (), _M_omero._t_RInt),
        ('_cutOut', (), _M_omero._t_RInt),
        ('_cutInTolerance', (), _M_omero._t_RInt),
        ('_cutOutTolerance', (), _M_omero._t_RInt),
        ('_transmittance', (), _M_omero._t_RDouble)
    ))
    TransmittanceRange.ice_type = _M_omero.model._t_TransmittanceRange

    TransmittanceRange._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    TransmittanceRange._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    TransmittanceRange._op_getCutIn = IcePy.Operation('getCutIn', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    TransmittanceRange._op_setCutIn = IcePy.Operation('setCutIn', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    TransmittanceRange._op_getCutOut = IcePy.Operation('getCutOut', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    TransmittanceRange._op_setCutOut = IcePy.Operation('setCutOut', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    TransmittanceRange._op_getCutInTolerance = IcePy.Operation('getCutInTolerance', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    TransmittanceRange._op_setCutInTolerance = IcePy.Operation('setCutInTolerance', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    TransmittanceRange._op_getCutOutTolerance = IcePy.Operation('getCutOutTolerance', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    TransmittanceRange._op_setCutOutTolerance = IcePy.Operation('setCutOutTolerance', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    TransmittanceRange._op_getTransmittance = IcePy.Operation('getTransmittance', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    TransmittanceRange._op_setTransmittance = IcePy.Operation('setTransmittance', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())

    _M_omero.model.TransmittanceRange = TransmittanceRange
    del TransmittanceRange

    _M_omero.model.TransmittanceRangePrx = TransmittanceRangePrx
    del TransmittanceRangePrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
