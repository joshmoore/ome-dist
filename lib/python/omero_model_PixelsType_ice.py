# **********************************************************************
#
# Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************
#
# Ice version 3.5.1
#
# <auto-generated>
#
# Generated from file `PixelsType.ice'
#
# Warning: do not edit this file.
#
# </auto-generated>
#

import Ice, IcePy
import omero_model_IObject_ice
import omero_RTypes_ice
import omero_model_RTypes_ice
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

# Start of module omero.model.enums
_M_omero.model.enums = Ice.openModule('omero.model.enums')
__name__ = 'omero.model.enums'

_M_omero.model.enums.PixelsTypebit = "bit"

_M_omero.model.enums.PixelsTypeint8 = "int8"

_M_omero.model.enums.PixelsTypeint16 = "int16"

_M_omero.model.enums.PixelsTypeint32 = "int32"

_M_omero.model.enums.PixelsTypeuint8 = "uint8"

_M_omero.model.enums.PixelsTypeuint16 = "uint16"

_M_omero.model.enums.PixelsTypeuint32 = "uint32"

_M_omero.model.enums.PixelsTypefloat = "float"

_M_omero.model.enums.PixelsTypedouble = "double"

_M_omero.model.enums.PixelsTypecomplex = "complex"

_M_omero.model.enums.PixelsTypedoublecomplex = "double-complex"

# End of module omero.model.enums

__name__ = 'omero.model'

if 'Details' not in _M_omero.model.__dict__:
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if 'PixelsType' not in _M_omero.model.__dict__:
    _M_omero.model.PixelsType = Ice.createTempClass()
    class PixelsType(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _value=None, _bitSize=None):
            if Ice.getType(self) == _M_omero.model.PixelsType:
                raise RuntimeError('omero.model.PixelsType is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._value = _value
            self._bitSize = _bitSize

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::PixelsType')

        def ice_id(self, current=None):
            return '::omero::model::PixelsType'

        def ice_staticId():
            return '::omero::model::PixelsType'
        ice_staticId = staticmethod(ice_staticId)

        def getValue(self, current=None):
            pass

        def setValue(self, theValue, current=None):
            pass

        def getBitSize(self, current=None):
            pass

        def setBitSize(self, theBitSize, current=None):
            pass

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_PixelsType)

        __repr__ = __str__

    _M_omero.model.PixelsTypePrx = Ice.createTempClass()
    class PixelsTypePrx(_M_omero.model.IObjectPrx):

        def getValue(self, _ctx=None):
            return _M_omero.model.PixelsType._op_getValue.invoke(self, ((), _ctx))

        def begin_getValue(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.PixelsType._op_getValue.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_getValue(self, _r):
            return _M_omero.model.PixelsType._op_getValue.end(self, _r)

        def setValue(self, theValue, _ctx=None):
            return _M_omero.model.PixelsType._op_setValue.invoke(self, ((theValue, ), _ctx))

        def begin_setValue(self, theValue, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.PixelsType._op_setValue.begin(self, ((theValue, ), _response, _ex, _sent, _ctx))

        def end_setValue(self, _r):
            return _M_omero.model.PixelsType._op_setValue.end(self, _r)

        def getBitSize(self, _ctx=None):
            return _M_omero.model.PixelsType._op_getBitSize.invoke(self, ((), _ctx))

        def begin_getBitSize(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.PixelsType._op_getBitSize.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_getBitSize(self, _r):
            return _M_omero.model.PixelsType._op_getBitSize.end(self, _r)

        def setBitSize(self, theBitSize, _ctx=None):
            return _M_omero.model.PixelsType._op_setBitSize.invoke(self, ((theBitSize, ), _ctx))

        def begin_setBitSize(self, theBitSize, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.PixelsType._op_setBitSize.begin(self, ((theBitSize, ), _response, _ex, _sent, _ctx))

        def end_setBitSize(self, _r):
            return _M_omero.model.PixelsType._op_setBitSize.end(self, _r)

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.PixelsTypePrx.ice_checkedCast(proxy, '::omero::model::PixelsType', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.PixelsTypePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_PixelsTypePrx = IcePy.defineProxy('::omero::model::PixelsType', PixelsTypePrx)

    _M_omero.model._t_PixelsType = IcePy.declareClass('::omero::model::PixelsType')

    _M_omero.model._t_PixelsType = IcePy.defineClass('::omero::model::PixelsType', PixelsType, -1, (), True, False, _M_omero.model._t_IObject, (), (
        ('_value', (), _M_omero._t_RString, False, 0),
        ('_bitSize', (), _M_omero._t_RInt, False, 0)
    ))
    PixelsType._ice_type = _M_omero.model._t_PixelsType

    PixelsType._op_getValue = IcePy.Operation('getValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), _M_omero._t_RString, False, 0), ())
    PixelsType._op_setValue = IcePy.Operation('setValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_omero._t_RString, False, 0),), (), None, ())
    PixelsType._op_getBitSize = IcePy.Operation('getBitSize', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), _M_omero._t_RInt, False, 0), ())
    PixelsType._op_setBitSize = IcePy.Operation('setBitSize', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_omero._t_RInt, False, 0),), (), None, ())

    _M_omero.model.PixelsType = PixelsType
    del PixelsType

    _M_omero.model.PixelsTypePrx = PixelsTypePrx
    del PixelsTypePrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
