# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `PlaneSlicingContext.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_model_IObject_ice
import omero_RTypes_ice
import omero_System_ice
import omero_Collections_ice
import omero_model_CodomainMapContext_ice

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

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('PlaneSlicingContext'):
    _M_omero.model.PlaneSlicingContext = Ice.createTempClass()
    class PlaneSlicingContext(_M_omero.model.CodomainMapContext):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _renderingDef=None, _upperLimit=None, _lowerLimit=None, _planeSelected=None, _planePrevious=None, _constant=None):
            if __builtin__.type(self) == _M_omero.model.PlaneSlicingContext:
                raise RuntimeError('omero.model.PlaneSlicingContext is an abstract class')
            _M_omero.model.CodomainMapContext.__init__(self, _id, _details, _loaded, _version, _renderingDef)
            self._upperLimit = _upperLimit
            self._lowerLimit = _lowerLimit
            self._planeSelected = _planeSelected
            self._planePrevious = _planePrevious
            self._constant = _constant

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::CodomainMapContext', '::omero::model::IObject', '::omero::model::PlaneSlicingContext')

        def ice_id(self, current=None):
            return '::omero::model::PlaneSlicingContext'

        def ice_staticId():
            return '::omero::model::PlaneSlicingContext'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getUpperLimit(self, current=None):
        # def setUpperLimit(self, theUpperLimit, current=None):
        # def getLowerLimit(self, current=None):
        # def setLowerLimit(self, theLowerLimit, current=None):
        # def getPlaneSelected(self, current=None):
        # def setPlaneSelected(self, thePlaneSelected, current=None):
        # def getPlanePrevious(self, current=None):
        # def setPlanePrevious(self, thePlanePrevious, current=None):
        # def getConstant(self, current=None):
        # def setConstant(self, theConstant, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_PlaneSlicingContext)

        __repr__ = __str__

    _M_omero.model.PlaneSlicingContextPrx = Ice.createTempClass()
    class PlaneSlicingContextPrx(_M_omero.model.CodomainMapContextPrx):

        def getUpperLimit(self, _ctx=None):
            return _M_omero.model.PlaneSlicingContext._op_getUpperLimit.invoke(self, ((), _ctx))

        def setUpperLimit(self, theUpperLimit, _ctx=None):
            return _M_omero.model.PlaneSlicingContext._op_setUpperLimit.invoke(self, ((theUpperLimit, ), _ctx))

        def getLowerLimit(self, _ctx=None):
            return _M_omero.model.PlaneSlicingContext._op_getLowerLimit.invoke(self, ((), _ctx))

        def setLowerLimit(self, theLowerLimit, _ctx=None):
            return _M_omero.model.PlaneSlicingContext._op_setLowerLimit.invoke(self, ((theLowerLimit, ), _ctx))

        def getPlaneSelected(self, _ctx=None):
            return _M_omero.model.PlaneSlicingContext._op_getPlaneSelected.invoke(self, ((), _ctx))

        def setPlaneSelected(self, thePlaneSelected, _ctx=None):
            return _M_omero.model.PlaneSlicingContext._op_setPlaneSelected.invoke(self, ((thePlaneSelected, ), _ctx))

        def getPlanePrevious(self, _ctx=None):
            return _M_omero.model.PlaneSlicingContext._op_getPlanePrevious.invoke(self, ((), _ctx))

        def setPlanePrevious(self, thePlanePrevious, _ctx=None):
            return _M_omero.model.PlaneSlicingContext._op_setPlanePrevious.invoke(self, ((thePlanePrevious, ), _ctx))

        def getConstant(self, _ctx=None):
            return _M_omero.model.PlaneSlicingContext._op_getConstant.invoke(self, ((), _ctx))

        def setConstant(self, theConstant, _ctx=None):
            return _M_omero.model.PlaneSlicingContext._op_setConstant.invoke(self, ((theConstant, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.PlaneSlicingContextPrx.ice_checkedCast(proxy, '::omero::model::PlaneSlicingContext', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.PlaneSlicingContextPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_PlaneSlicingContextPrx = IcePy.defineProxy('::omero::model::PlaneSlicingContext', PlaneSlicingContextPrx)

    _M_omero.model._t_PlaneSlicingContext = IcePy.declareClass('::omero::model::PlaneSlicingContext')

    _M_omero.model._t_PlaneSlicingContext = IcePy.defineClass('::omero::model::PlaneSlicingContext', PlaneSlicingContext, (), True, _M_omero.model._t_CodomainMapContext, (), (
        ('_upperLimit', (), _M_omero._t_RInt),
        ('_lowerLimit', (), _M_omero._t_RInt),
        ('_planeSelected', (), _M_omero._t_RInt),
        ('_planePrevious', (), _M_omero._t_RInt),
        ('_constant', (), _M_omero._t_RBool)
    ))
    PlaneSlicingContext.ice_type = _M_omero.model._t_PlaneSlicingContext

    PlaneSlicingContext._op_getUpperLimit = IcePy.Operation('getUpperLimit', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    PlaneSlicingContext._op_setUpperLimit = IcePy.Operation('setUpperLimit', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    PlaneSlicingContext._op_getLowerLimit = IcePy.Operation('getLowerLimit', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    PlaneSlicingContext._op_setLowerLimit = IcePy.Operation('setLowerLimit', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    PlaneSlicingContext._op_getPlaneSelected = IcePy.Operation('getPlaneSelected', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    PlaneSlicingContext._op_setPlaneSelected = IcePy.Operation('setPlaneSelected', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    PlaneSlicingContext._op_getPlanePrevious = IcePy.Operation('getPlanePrevious', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    PlaneSlicingContext._op_setPlanePrevious = IcePy.Operation('setPlanePrevious', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    PlaneSlicingContext._op_getConstant = IcePy.Operation('getConstant', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RBool, ())
    PlaneSlicingContext._op_setConstant = IcePy.Operation('setConstant', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RBool),), (), None, ())

    _M_omero.model.PlaneSlicingContext = PlaneSlicingContext
    del PlaneSlicingContext

    _M_omero.model.PlaneSlicingContextPrx = PlaneSlicingContextPrx
    del PlaneSlicingContextPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
