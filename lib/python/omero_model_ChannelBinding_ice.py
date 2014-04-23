# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `ChannelBinding.ice'

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

if not _M_omero.model.__dict__.has_key('RenderingDef'):
    _M_omero.model._t_RenderingDef = IcePy.declareClass('::omero::model::RenderingDef')
    _M_omero.model._t_RenderingDefPrx = IcePy.declareProxy('::omero::model::RenderingDef')

if not _M_omero.model.__dict__.has_key('Family'):
    _M_omero.model._t_Family = IcePy.declareClass('::omero::model::Family')
    _M_omero.model._t_FamilyPrx = IcePy.declareProxy('::omero::model::Family')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('ChannelBinding'):
    _M_omero.model.ChannelBinding = Ice.createTempClass()
    class ChannelBinding(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _renderingDef=None, _family=None, _coefficient=None, _inputStart=None, _inputEnd=None, _active=None, _noiseReduction=None, _red=None, _green=None, _blue=None, _alpha=None):
            if __builtin__.type(self) == _M_omero.model.ChannelBinding:
                raise RuntimeError('omero.model.ChannelBinding is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._renderingDef = _renderingDef
            self._family = _family
            self._coefficient = _coefficient
            self._inputStart = _inputStart
            self._inputEnd = _inputEnd
            self._active = _active
            self._noiseReduction = _noiseReduction
            self._red = _red
            self._green = _green
            self._blue = _blue
            self._alpha = _alpha

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::ChannelBinding', '::omero::model::IObject')

        def ice_id(self, current=None):
            return '::omero::model::ChannelBinding'

        def ice_staticId():
            return '::omero::model::ChannelBinding'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getRenderingDef(self, current=None):
        # def setRenderingDef(self, theRenderingDef, current=None):
        # def getFamily(self, current=None):
        # def setFamily(self, theFamily, current=None):
        # def getCoefficient(self, current=None):
        # def setCoefficient(self, theCoefficient, current=None):
        # def getInputStart(self, current=None):
        # def setInputStart(self, theInputStart, current=None):
        # def getInputEnd(self, current=None):
        # def setInputEnd(self, theInputEnd, current=None):
        # def getActive(self, current=None):
        # def setActive(self, theActive, current=None):
        # def getNoiseReduction(self, current=None):
        # def setNoiseReduction(self, theNoiseReduction, current=None):
        # def getRed(self, current=None):
        # def setRed(self, theRed, current=None):
        # def getGreen(self, current=None):
        # def setGreen(self, theGreen, current=None):
        # def getBlue(self, current=None):
        # def setBlue(self, theBlue, current=None):
        # def getAlpha(self, current=None):
        # def setAlpha(self, theAlpha, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_ChannelBinding)

        __repr__ = __str__

    _M_omero.model.ChannelBindingPrx = Ice.createTempClass()
    class ChannelBindingPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.ChannelBinding._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.ChannelBinding._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getRenderingDef(self, _ctx=None):
            return _M_omero.model.ChannelBinding._op_getRenderingDef.invoke(self, ((), _ctx))

        def setRenderingDef(self, theRenderingDef, _ctx=None):
            return _M_omero.model.ChannelBinding._op_setRenderingDef.invoke(self, ((theRenderingDef, ), _ctx))

        def getFamily(self, _ctx=None):
            return _M_omero.model.ChannelBinding._op_getFamily.invoke(self, ((), _ctx))

        def setFamily(self, theFamily, _ctx=None):
            return _M_omero.model.ChannelBinding._op_setFamily.invoke(self, ((theFamily, ), _ctx))

        def getCoefficient(self, _ctx=None):
            return _M_omero.model.ChannelBinding._op_getCoefficient.invoke(self, ((), _ctx))

        def setCoefficient(self, theCoefficient, _ctx=None):
            return _M_omero.model.ChannelBinding._op_setCoefficient.invoke(self, ((theCoefficient, ), _ctx))

        def getInputStart(self, _ctx=None):
            return _M_omero.model.ChannelBinding._op_getInputStart.invoke(self, ((), _ctx))

        def setInputStart(self, theInputStart, _ctx=None):
            return _M_omero.model.ChannelBinding._op_setInputStart.invoke(self, ((theInputStart, ), _ctx))

        def getInputEnd(self, _ctx=None):
            return _M_omero.model.ChannelBinding._op_getInputEnd.invoke(self, ((), _ctx))

        def setInputEnd(self, theInputEnd, _ctx=None):
            return _M_omero.model.ChannelBinding._op_setInputEnd.invoke(self, ((theInputEnd, ), _ctx))

        def getActive(self, _ctx=None):
            return _M_omero.model.ChannelBinding._op_getActive.invoke(self, ((), _ctx))

        def setActive(self, theActive, _ctx=None):
            return _M_omero.model.ChannelBinding._op_setActive.invoke(self, ((theActive, ), _ctx))

        def getNoiseReduction(self, _ctx=None):
            return _M_omero.model.ChannelBinding._op_getNoiseReduction.invoke(self, ((), _ctx))

        def setNoiseReduction(self, theNoiseReduction, _ctx=None):
            return _M_omero.model.ChannelBinding._op_setNoiseReduction.invoke(self, ((theNoiseReduction, ), _ctx))

        def getRed(self, _ctx=None):
            return _M_omero.model.ChannelBinding._op_getRed.invoke(self, ((), _ctx))

        def setRed(self, theRed, _ctx=None):
            return _M_omero.model.ChannelBinding._op_setRed.invoke(self, ((theRed, ), _ctx))

        def getGreen(self, _ctx=None):
            return _M_omero.model.ChannelBinding._op_getGreen.invoke(self, ((), _ctx))

        def setGreen(self, theGreen, _ctx=None):
            return _M_omero.model.ChannelBinding._op_setGreen.invoke(self, ((theGreen, ), _ctx))

        def getBlue(self, _ctx=None):
            return _M_omero.model.ChannelBinding._op_getBlue.invoke(self, ((), _ctx))

        def setBlue(self, theBlue, _ctx=None):
            return _M_omero.model.ChannelBinding._op_setBlue.invoke(self, ((theBlue, ), _ctx))

        def getAlpha(self, _ctx=None):
            return _M_omero.model.ChannelBinding._op_getAlpha.invoke(self, ((), _ctx))

        def setAlpha(self, theAlpha, _ctx=None):
            return _M_omero.model.ChannelBinding._op_setAlpha.invoke(self, ((theAlpha, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.ChannelBindingPrx.ice_checkedCast(proxy, '::omero::model::ChannelBinding', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.ChannelBindingPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_ChannelBindingPrx = IcePy.defineProxy('::omero::model::ChannelBinding', ChannelBindingPrx)

    _M_omero.model._t_ChannelBinding = IcePy.declareClass('::omero::model::ChannelBinding')

    _M_omero.model._t_ChannelBinding = IcePy.defineClass('::omero::model::ChannelBinding', ChannelBinding, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_renderingDef', (), _M_omero.model._t_RenderingDef),
        ('_family', (), _M_omero.model._t_Family),
        ('_coefficient', (), _M_omero._t_RDouble),
        ('_inputStart', (), _M_omero._t_RDouble),
        ('_inputEnd', (), _M_omero._t_RDouble),
        ('_active', (), _M_omero._t_RBool),
        ('_noiseReduction', (), _M_omero._t_RBool),
        ('_red', (), _M_omero._t_RInt),
        ('_green', (), _M_omero._t_RInt),
        ('_blue', (), _M_omero._t_RInt),
        ('_alpha', (), _M_omero._t_RInt)
    ))
    ChannelBinding.ice_type = _M_omero.model._t_ChannelBinding

    ChannelBinding._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    ChannelBinding._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    ChannelBinding._op_getRenderingDef = IcePy.Operation('getRenderingDef', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_RenderingDef, ())
    ChannelBinding._op_setRenderingDef = IcePy.Operation('setRenderingDef', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_RenderingDef),), (), None, ())
    ChannelBinding._op_getFamily = IcePy.Operation('getFamily', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Family, ())
    ChannelBinding._op_setFamily = IcePy.Operation('setFamily', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Family),), (), None, ())
    ChannelBinding._op_getCoefficient = IcePy.Operation('getCoefficient', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    ChannelBinding._op_setCoefficient = IcePy.Operation('setCoefficient', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    ChannelBinding._op_getInputStart = IcePy.Operation('getInputStart', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    ChannelBinding._op_setInputStart = IcePy.Operation('setInputStart', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    ChannelBinding._op_getInputEnd = IcePy.Operation('getInputEnd', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    ChannelBinding._op_setInputEnd = IcePy.Operation('setInputEnd', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    ChannelBinding._op_getActive = IcePy.Operation('getActive', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RBool, ())
    ChannelBinding._op_setActive = IcePy.Operation('setActive', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RBool),), (), None, ())
    ChannelBinding._op_getNoiseReduction = IcePy.Operation('getNoiseReduction', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RBool, ())
    ChannelBinding._op_setNoiseReduction = IcePy.Operation('setNoiseReduction', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RBool),), (), None, ())
    ChannelBinding._op_getRed = IcePy.Operation('getRed', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    ChannelBinding._op_setRed = IcePy.Operation('setRed', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    ChannelBinding._op_getGreen = IcePy.Operation('getGreen', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    ChannelBinding._op_setGreen = IcePy.Operation('setGreen', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    ChannelBinding._op_getBlue = IcePy.Operation('getBlue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    ChannelBinding._op_setBlue = IcePy.Operation('setBlue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    ChannelBinding._op_getAlpha = IcePy.Operation('getAlpha', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    ChannelBinding._op_setAlpha = IcePy.Operation('setAlpha', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())

    _M_omero.model.ChannelBinding = ChannelBinding
    del ChannelBinding

    _M_omero.model.ChannelBindingPrx = ChannelBindingPrx
    del ChannelBindingPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
