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
# Generated from file `RTypes.ice'
#
# Warning: do not edit this file.
#
# </auto-generated>
#

import Ice, IcePy

# Start of module omero
_M_omero = Ice.openModule('omero')
__name__ = 'omero'

if 'RType' not in _M_omero.__dict__:
    _M_omero.RType = Ice.createTempClass()
    class RType(Ice.Object):
        '''Simple base ["protected"] class. Essentially abstract.'''
        def __init__(self):
            if Ice.getType(self) == _M_omero.RType:
                raise RuntimeError('omero.RType is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::RType')

        def ice_id(self, current=None):
            return '::omero::RType'

        def ice_staticId():
            return '::omero::RType'
        ice_staticId = staticmethod(ice_staticId)

        def compare(self, rhs, current=None):
            '''Equals-like functionality for all RTypes. A return value
of 0 means they are equivalent and were almost certainly
created by the same constructor call, e.g.

rbool(true).compare(rbool(true)) == 0

This method was originally addd (Oct 2008) to force the
base RType class to be abstract in all languages.'''
            pass

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_RType)

        __repr__ = __str__

    _M_omero.RTypePrx = Ice.createTempClass()
    class RTypePrx(Ice.ObjectPrx):

        '''Equals-like functionality for all RTypes. A return value
of 0 means they are equivalent and were almost certainly
created by the same constructor call, e.g.

rbool(true).compare(rbool(true)) == 0

This method was originally addd (Oct 2008) to force the
base RType class to be abstract in all languages.'''
        def compare(self, rhs, _ctx=None):
            return _M_omero.RType._op_compare.invoke(self, ((rhs, ), _ctx))

        '''Equals-like functionality for all RTypes. A return value
of 0 means they are equivalent and were almost certainly
created by the same constructor call, e.g.

rbool(true).compare(rbool(true)) == 0

This method was originally addd (Oct 2008) to force the
base RType class to be abstract in all languages.'''
        def begin_compare(self, rhs, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.RType._op_compare.begin(self, ((rhs, ), _response, _ex, _sent, _ctx))

        '''Equals-like functionality for all RTypes. A return value
of 0 means they are equivalent and were almost certainly
created by the same constructor call, e.g.

rbool(true).compare(rbool(true)) == 0

This method was originally addd (Oct 2008) to force the
base RType class to be abstract in all languages.'''
        def end_compare(self, _r):
            return _M_omero.RType._op_compare.end(self, _r)

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.RTypePrx.ice_checkedCast(proxy, '::omero::RType', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.RTypePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_RTypePrx = IcePy.defineProxy('::omero::RType', RTypePrx)

    _M_omero._t_RType = IcePy.defineClass('::omero::RType', RType, -1, (), True, False, None, (), ())
    RType._ice_type = _M_omero._t_RType

    RType._op_compare = IcePy.Operation('compare', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_omero._t_RType, False, 0),), (), ((), IcePy._t_int, False, 0), ())

    _M_omero.RType = RType
    del RType

    _M_omero.RTypePrx = RTypePrx
    del RTypePrx

if 'RBool' not in _M_omero.__dict__:
    _M_omero.RBool = Ice.createTempClass()
    class RBool(_M_omero.RType):
        '''Boolean wrapper.'''
        def __init__(self, _val=False):
            if Ice.getType(self) == _M_omero.RBool:
                raise RuntimeError('omero.RBool is an abstract class')
            _M_omero.RType.__init__(self)
            self._val = _val

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::RBool', '::omero::RType')

        def ice_id(self, current=None):
            return '::omero::RBool'

        def ice_staticId():
            return '::omero::RBool'
        ice_staticId = staticmethod(ice_staticId)

        def getValue(self, current=None):
            pass

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_RBool)

        __repr__ = __str__

    _M_omero.RBoolPrx = Ice.createTempClass()
    class RBoolPrx(_M_omero.RTypePrx):

        def getValue(self, _ctx=None):
            return _M_omero.RBool._op_getValue.invoke(self, ((), _ctx))

        def begin_getValue(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.RBool._op_getValue.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_getValue(self, _r):
            return _M_omero.RBool._op_getValue.end(self, _r)

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.RBoolPrx.ice_checkedCast(proxy, '::omero::RBool', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.RBoolPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_RBoolPrx = IcePy.defineProxy('::omero::RBool', RBoolPrx)

    _M_omero._t_RBool = IcePy.defineClass('::omero::RBool', RBool, -1, (), True, False, _M_omero._t_RType, (), (('_val', (), IcePy._t_bool, False, 0),))
    RBool._ice_type = _M_omero._t_RBool

    RBool._op_getValue = IcePy.Operation('getValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), IcePy._t_bool, False, 0), ())

    _M_omero.RBool = RBool
    del RBool

    _M_omero.RBoolPrx = RBoolPrx
    del RBoolPrx

if 'RDouble' not in _M_omero.__dict__:
    _M_omero.RDouble = Ice.createTempClass()
    class RDouble(_M_omero.RType):
        '''Double wrapper.'''
        def __init__(self, _val=0.0):
            if Ice.getType(self) == _M_omero.RDouble:
                raise RuntimeError('omero.RDouble is an abstract class')
            _M_omero.RType.__init__(self)
            self._val = _val

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::RDouble', '::omero::RType')

        def ice_id(self, current=None):
            return '::omero::RDouble'

        def ice_staticId():
            return '::omero::RDouble'
        ice_staticId = staticmethod(ice_staticId)

        def getValue(self, current=None):
            pass

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_RDouble)

        __repr__ = __str__

    _M_omero.RDoublePrx = Ice.createTempClass()
    class RDoublePrx(_M_omero.RTypePrx):

        def getValue(self, _ctx=None):
            return _M_omero.RDouble._op_getValue.invoke(self, ((), _ctx))

        def begin_getValue(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.RDouble._op_getValue.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_getValue(self, _r):
            return _M_omero.RDouble._op_getValue.end(self, _r)

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.RDoublePrx.ice_checkedCast(proxy, '::omero::RDouble', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.RDoublePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_RDoublePrx = IcePy.defineProxy('::omero::RDouble', RDoublePrx)

    _M_omero._t_RDouble = IcePy.defineClass('::omero::RDouble', RDouble, -1, (), True, False, _M_omero._t_RType, (), (('_val', (), IcePy._t_double, False, 0),))
    RDouble._ice_type = _M_omero._t_RDouble

    RDouble._op_getValue = IcePy.Operation('getValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), IcePy._t_double, False, 0), ())

    _M_omero.RDouble = RDouble
    del RDouble

    _M_omero.RDoublePrx = RDoublePrx
    del RDoublePrx

if 'RFloat' not in _M_omero.__dict__:
    _M_omero.RFloat = Ice.createTempClass()
    class RFloat(_M_omero.RType):
        '''Float wrapper.'''
        def __init__(self, _val=0.0):
            if Ice.getType(self) == _M_omero.RFloat:
                raise RuntimeError('omero.RFloat is an abstract class')
            _M_omero.RType.__init__(self)
            self._val = _val

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::RFloat', '::omero::RType')

        def ice_id(self, current=None):
            return '::omero::RFloat'

        def ice_staticId():
            return '::omero::RFloat'
        ice_staticId = staticmethod(ice_staticId)

        def getValue(self, current=None):
            pass

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_RFloat)

        __repr__ = __str__

    _M_omero.RFloatPrx = Ice.createTempClass()
    class RFloatPrx(_M_omero.RTypePrx):

        def getValue(self, _ctx=None):
            return _M_omero.RFloat._op_getValue.invoke(self, ((), _ctx))

        def begin_getValue(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.RFloat._op_getValue.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_getValue(self, _r):
            return _M_omero.RFloat._op_getValue.end(self, _r)

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.RFloatPrx.ice_checkedCast(proxy, '::omero::RFloat', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.RFloatPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_RFloatPrx = IcePy.defineProxy('::omero::RFloat', RFloatPrx)

    _M_omero._t_RFloat = IcePy.defineClass('::omero::RFloat', RFloat, -1, (), True, False, _M_omero._t_RType, (), (('_val', (), IcePy._t_float, False, 0),))
    RFloat._ice_type = _M_omero._t_RFloat

    RFloat._op_getValue = IcePy.Operation('getValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), IcePy._t_float, False, 0), ())

    _M_omero.RFloat = RFloat
    del RFloat

    _M_omero.RFloatPrx = RFloatPrx
    del RFloatPrx

if 'RInt' not in _M_omero.__dict__:
    _M_omero.RInt = Ice.createTempClass()
    class RInt(_M_omero.RType):
        '''Integer wrapper.'''
        def __init__(self, _val=0):
            if Ice.getType(self) == _M_omero.RInt:
                raise RuntimeError('omero.RInt is an abstract class')
            _M_omero.RType.__init__(self)
            self._val = _val

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::RInt', '::omero::RType')

        def ice_id(self, current=None):
            return '::omero::RInt'

        def ice_staticId():
            return '::omero::RInt'
        ice_staticId = staticmethod(ice_staticId)

        def getValue(self, current=None):
            pass

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_RInt)

        __repr__ = __str__

    _M_omero.RIntPrx = Ice.createTempClass()
    class RIntPrx(_M_omero.RTypePrx):

        def getValue(self, _ctx=None):
            return _M_omero.RInt._op_getValue.invoke(self, ((), _ctx))

        def begin_getValue(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.RInt._op_getValue.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_getValue(self, _r):
            return _M_omero.RInt._op_getValue.end(self, _r)

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.RIntPrx.ice_checkedCast(proxy, '::omero::RInt', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.RIntPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_RIntPrx = IcePy.defineProxy('::omero::RInt', RIntPrx)

    _M_omero._t_RInt = IcePy.defineClass('::omero::RInt', RInt, -1, (), True, False, _M_omero._t_RType, (), (('_val', (), IcePy._t_int, False, 0),))
    RInt._ice_type = _M_omero._t_RInt

    RInt._op_getValue = IcePy.Operation('getValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), IcePy._t_int, False, 0), ())

    _M_omero.RInt = RInt
    del RInt

    _M_omero.RIntPrx = RIntPrx
    del RIntPrx

if 'RLong' not in _M_omero.__dict__:
    _M_omero.RLong = Ice.createTempClass()
    class RLong(_M_omero.RType):
        '''Long Wrapper.'''
        def __init__(self, _val=0):
            if Ice.getType(self) == _M_omero.RLong:
                raise RuntimeError('omero.RLong is an abstract class')
            _M_omero.RType.__init__(self)
            self._val = _val

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::RLong', '::omero::RType')

        def ice_id(self, current=None):
            return '::omero::RLong'

        def ice_staticId():
            return '::omero::RLong'
        ice_staticId = staticmethod(ice_staticId)

        def getValue(self, current=None):
            pass

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_RLong)

        __repr__ = __str__

    _M_omero.RLongPrx = Ice.createTempClass()
    class RLongPrx(_M_omero.RTypePrx):

        def getValue(self, _ctx=None):
            return _M_omero.RLong._op_getValue.invoke(self, ((), _ctx))

        def begin_getValue(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.RLong._op_getValue.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_getValue(self, _r):
            return _M_omero.RLong._op_getValue.end(self, _r)

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.RLongPrx.ice_checkedCast(proxy, '::omero::RLong', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.RLongPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_RLongPrx = IcePy.defineProxy('::omero::RLong', RLongPrx)

    _M_omero._t_RLong = IcePy.defineClass('::omero::RLong', RLong, -1, (), True, False, _M_omero._t_RType, (), (('_val', (), IcePy._t_long, False, 0),))
    RLong._ice_type = _M_omero._t_RLong

    RLong._op_getValue = IcePy.Operation('getValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), IcePy._t_long, False, 0), ())

    _M_omero.RLong = RLong
    del RLong

    _M_omero.RLongPrx = RLongPrx
    del RLongPrx

if 'RString' not in _M_omero.__dict__:
    _M_omero.RString = Ice.createTempClass()
    class RString(_M_omero.RType):
        '''String wrapper.'''
        def __init__(self, _val=''):
            if Ice.getType(self) == _M_omero.RString:
                raise RuntimeError('omero.RString is an abstract class')
            _M_omero.RType.__init__(self)
            self._val = _val

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::RString', '::omero::RType')

        def ice_id(self, current=None):
            return '::omero::RString'

        def ice_staticId():
            return '::omero::RString'
        ice_staticId = staticmethod(ice_staticId)

        def getValue(self, current=None):
            pass

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_RString)

        __repr__ = __str__

    _M_omero.RStringPrx = Ice.createTempClass()
    class RStringPrx(_M_omero.RTypePrx):

        def getValue(self, _ctx=None):
            return _M_omero.RString._op_getValue.invoke(self, ((), _ctx))

        def begin_getValue(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.RString._op_getValue.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_getValue(self, _r):
            return _M_omero.RString._op_getValue.end(self, _r)

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.RStringPrx.ice_checkedCast(proxy, '::omero::RString', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.RStringPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_RStringPrx = IcePy.defineProxy('::omero::RString', RStringPrx)

    _M_omero._t_RString = IcePy.defineClass('::omero::RString', RString, -1, (), True, False, _M_omero._t_RType, (), (('_val', (), IcePy._t_string, False, 0),))
    RString._ice_type = _M_omero._t_RString

    RString._op_getValue = IcePy.Operation('getValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), IcePy._t_string, False, 0), ())

    _M_omero.RString = RString
    del RString

    _M_omero.RStringPrx = RStringPrx
    del RStringPrx

if 'RClass' not in _M_omero.__dict__:
    _M_omero.RClass = Ice.createTempClass()
    class RClass(_M_omero.RString):
        '''Extends RString and simply provides runtime
information to the server that this string
is intended as a ["protected"] class parameter. Used especially
by omero::system::ParamMap (omero/System.ice)

Usage:

omero::RClass c = ...; // from service
if (!c.null && c.val.equals("Image")) { ... }'''
        def __init__(self, _val=''):
            if Ice.getType(self) == _M_omero.RClass:
                raise RuntimeError('omero.RClass is an abstract class')
            _M_omero.RString.__init__(self, _val)

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::RClass', '::omero::RString', '::omero::RType')

        def ice_id(self, current=None):
            return '::omero::RClass'

        def ice_staticId():
            return '::omero::RClass'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_RClass)

        __repr__ = __str__

    _M_omero.RClassPrx = Ice.createTempClass()
    class RClassPrx(_M_omero.RStringPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.RClassPrx.ice_checkedCast(proxy, '::omero::RClass', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.RClassPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_RClassPrx = IcePy.defineProxy('::omero::RClass', RClassPrx)

    _M_omero._t_RClass = IcePy.defineClass('::omero::RClass', RClass, -1, (), True, False, _M_omero._t_RString, (), ())
    RClass._ice_type = _M_omero._t_RClass

    _M_omero.RClass = RClass
    del RClass

    _M_omero.RClassPrx = RClassPrx
    del RClassPrx

if 'RTime' not in _M_omero.__dict__:
    _M_omero.RTime = Ice.createTempClass()
    class RTime(_M_omero.RType):
        '''A simple Time implementation. The long value is the number
of milliseconds since the epoch (January 1, 1970).'''
        def __init__(self, _val=0):
            if Ice.getType(self) == _M_omero.RTime:
                raise RuntimeError('omero.RTime is an abstract class')
            _M_omero.RType.__init__(self)
            self._val = _val

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::RTime', '::omero::RType')

        def ice_id(self, current=None):
            return '::omero::RTime'

        def ice_staticId():
            return '::omero::RTime'
        ice_staticId = staticmethod(ice_staticId)

        def getValue(self, current=None):
            pass

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_RTime)

        __repr__ = __str__

    _M_omero.RTimePrx = Ice.createTempClass()
    class RTimePrx(_M_omero.RTypePrx):

        def getValue(self, _ctx=None):
            return _M_omero.RTime._op_getValue.invoke(self, ((), _ctx))

        def begin_getValue(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.RTime._op_getValue.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_getValue(self, _r):
            return _M_omero.RTime._op_getValue.end(self, _r)

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.RTimePrx.ice_checkedCast(proxy, '::omero::RTime', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.RTimePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_RTimePrx = IcePy.defineProxy('::omero::RTime', RTimePrx)

    _M_omero._t_RTime = IcePy.defineClass('::omero::RTime', RTime, -1, (), True, False, _M_omero._t_RType, (), (('_val', (), IcePy._t_long, False, 0),))
    RTime._ice_type = _M_omero._t_RTime

    RTime._op_getValue = IcePy.Operation('getValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), IcePy._t_long, False, 0), ())

    _M_omero.RTime = RTime
    del RTime

    _M_omero.RTimePrx = RTimePrx
    del RTimePrx

if '_t_RTypeSeq' not in _M_omero.__dict__:
    _M_omero._t_RTypeSeq = IcePy.defineSequence('::omero::RTypeSeq', (), _M_omero._t_RType)

if '_t_RTypeSeqSeq' not in _M_omero.__dict__:
    _M_omero._t_RTypeSeqSeq = IcePy.defineSequence('::omero::RTypeSeqSeq', (), _M_omero._t_RTypeSeq)

if 'RCollection' not in _M_omero.__dict__:
    _M_omero.RCollection = Ice.createTempClass()
    class RCollection(_M_omero.RType):
        '''The collection ["protected"] classes permit the passing of sequences of all
other RTypes (including other collections) and it is itself
nullable. The allows for similar arguments to collections in
languages with a unified inheritance hierarchy (e.g., Java in
which all ["protected"] classes extend from java.lang.Object).

Unlike the other rtypes which are used internally within the
omero.model classes, these types are mutable since they solely
pass through the

This flexible mechanism is not used in all API calls because
the flexibility brings a performance penalty.'''
        def __init__(self, _val=None):
            if Ice.getType(self) == _M_omero.RCollection:
                raise RuntimeError('omero.RCollection is an abstract class')
            _M_omero.RType.__init__(self)
            self._val = _val

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::RCollection', '::omero::RType')

        def ice_id(self, current=None):
            return '::omero::RCollection'

        def ice_staticId():
            return '::omero::RCollection'
        ice_staticId = staticmethod(ice_staticId)

        def getValue(self, current=None):
            pass

        def size(self, current=None):
            pass

        def get(self, index, current=None):
            pass

        def add(self, value, current=None):
            pass

        def addAll(self, value, current=None):
            pass

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_RCollection)

        __repr__ = __str__

    _M_omero.RCollectionPrx = Ice.createTempClass()
    class RCollectionPrx(_M_omero.RTypePrx):

        def getValue(self, _ctx=None):
            return _M_omero.RCollection._op_getValue.invoke(self, ((), _ctx))

        def begin_getValue(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.RCollection._op_getValue.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_getValue(self, _r):
            return _M_omero.RCollection._op_getValue.end(self, _r)

        def size(self, _ctx=None):
            return _M_omero.RCollection._op_size.invoke(self, ((), _ctx))

        def begin_size(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.RCollection._op_size.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_size(self, _r):
            return _M_omero.RCollection._op_size.end(self, _r)

        def get(self, index, _ctx=None):
            return _M_omero.RCollection._op_get.invoke(self, ((index, ), _ctx))

        def begin_get(self, index, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.RCollection._op_get.begin(self, ((index, ), _response, _ex, _sent, _ctx))

        def end_get(self, _r):
            return _M_omero.RCollection._op_get.end(self, _r)

        def add(self, value, _ctx=None):
            return _M_omero.RCollection._op_add.invoke(self, ((value, ), _ctx))

        def begin_add(self, value, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.RCollection._op_add.begin(self, ((value, ), _response, _ex, _sent, _ctx))

        def end_add(self, _r):
            return _M_omero.RCollection._op_add.end(self, _r)

        def addAll(self, value, _ctx=None):
            return _M_omero.RCollection._op_addAll.invoke(self, ((value, ), _ctx))

        def begin_addAll(self, value, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.RCollection._op_addAll.begin(self, ((value, ), _response, _ex, _sent, _ctx))

        def end_addAll(self, _r):
            return _M_omero.RCollection._op_addAll.end(self, _r)

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.RCollectionPrx.ice_checkedCast(proxy, '::omero::RCollection', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.RCollectionPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_RCollectionPrx = IcePy.defineProxy('::omero::RCollection', RCollectionPrx)

    _M_omero._t_RCollection = IcePy.declareClass('::omero::RCollection')

    _M_omero._t_RCollection = IcePy.defineClass('::omero::RCollection', RCollection, -1, (), True, False, _M_omero._t_RType, (), (('_val', (), _M_omero._t_RTypeSeq, False, 0),))
    RCollection._ice_type = _M_omero._t_RCollection

    RCollection._op_getValue = IcePy.Operation('getValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), _M_omero._t_RTypeSeq, False, 0), ())
    RCollection._op_size = IcePy.Operation('size', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), IcePy._t_int, False, 0), ())
    RCollection._op_get = IcePy.Operation('get', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), IcePy._t_int, False, 0),), (), ((), _M_omero._t_RType, False, 0), ())
    RCollection._op_add = IcePy.Operation('add', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_omero._t_RType, False, 0),), (), None, ())
    RCollection._op_addAll = IcePy.Operation('addAll', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_omero._t_RTypeSeq, False, 0),), (), None, ())

    _M_omero.RCollection = RCollection
    del RCollection

    _M_omero.RCollectionPrx = RCollectionPrx
    del RCollectionPrx

if 'RArray' not in _M_omero.__dict__:
    _M_omero.RArray = Ice.createTempClass()
    class RArray(_M_omero.RCollection):
        '''[RCollection] mapped to an array on the server of a type given
by a random member of the RTypeSeq. Only pass consistent arrays!
homogenous lists.'''
        def __init__(self, _val=None):
            if Ice.getType(self) == _M_omero.RArray:
                raise RuntimeError('omero.RArray is an abstract class')
            _M_omero.RCollection.__init__(self, _val)

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::RArray', '::omero::RCollection', '::omero::RType')

        def ice_id(self, current=None):
            return '::omero::RArray'

        def ice_staticId():
            return '::omero::RArray'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_RArray)

        __repr__ = __str__

    _M_omero.RArrayPrx = Ice.createTempClass()
    class RArrayPrx(_M_omero.RCollectionPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.RArrayPrx.ice_checkedCast(proxy, '::omero::RArray', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.RArrayPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_RArrayPrx = IcePy.defineProxy('::omero::RArray', RArrayPrx)

    _M_omero._t_RArray = IcePy.declareClass('::omero::RArray')

    _M_omero._t_RArray = IcePy.defineClass('::omero::RArray', RArray, -1, (), True, False, _M_omero._t_RCollection, (), ())
    RArray._ice_type = _M_omero._t_RArray

    _M_omero.RArray = RArray
    del RArray

    _M_omero.RArrayPrx = RArrayPrx
    del RArrayPrx

if 'RList' not in _M_omero.__dict__:
    _M_omero.RList = Ice.createTempClass()
    class RList(_M_omero.RCollection):
        '''[RCollection] mapped to a java.util.List on the server'''
        def __init__(self, _val=None):
            if Ice.getType(self) == _M_omero.RList:
                raise RuntimeError('omero.RList is an abstract class')
            _M_omero.RCollection.__init__(self, _val)

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::RCollection', '::omero::RList', '::omero::RType')

        def ice_id(self, current=None):
            return '::omero::RList'

        def ice_staticId():
            return '::omero::RList'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_RList)

        __repr__ = __str__

    _M_omero.RListPrx = Ice.createTempClass()
    class RListPrx(_M_omero.RCollectionPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.RListPrx.ice_checkedCast(proxy, '::omero::RList', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.RListPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_RListPrx = IcePy.defineProxy('::omero::RList', RListPrx)

    _M_omero._t_RList = IcePy.declareClass('::omero::RList')

    _M_omero._t_RList = IcePy.defineClass('::omero::RList', RList, -1, (), True, False, _M_omero._t_RCollection, (), ())
    RList._ice_type = _M_omero._t_RList

    _M_omero.RList = RList
    del RList

    _M_omero.RListPrx = RListPrx
    del RListPrx

if 'RSet' not in _M_omero.__dict__:
    _M_omero.RSet = Ice.createTempClass()
    class RSet(_M_omero.RCollection):
        '''[RCollection] mapped to a java.util.HashSet on the server'''
        def __init__(self, _val=None):
            if Ice.getType(self) == _M_omero.RSet:
                raise RuntimeError('omero.RSet is an abstract class')
            _M_omero.RCollection.__init__(self, _val)

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::RCollection', '::omero::RSet', '::omero::RType')

        def ice_id(self, current=None):
            return '::omero::RSet'

        def ice_staticId():
            return '::omero::RSet'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_RSet)

        __repr__ = __str__

    _M_omero.RSetPrx = Ice.createTempClass()
    class RSetPrx(_M_omero.RCollectionPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.RSetPrx.ice_checkedCast(proxy, '::omero::RSet', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.RSetPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_RSetPrx = IcePy.defineProxy('::omero::RSet', RSetPrx)

    _M_omero._t_RSet = IcePy.declareClass('::omero::RSet')

    _M_omero._t_RSet = IcePy.defineClass('::omero::RSet', RSet, -1, (), True, False, _M_omero._t_RCollection, (), ())
    RSet._ice_type = _M_omero._t_RSet

    _M_omero.RSet = RSet
    del RSet

    _M_omero.RSetPrx = RSetPrx
    del RSetPrx

if '_t_RTypeDict' not in _M_omero.__dict__:
    _M_omero._t_RTypeDict = IcePy.defineDictionary('::omero::RTypeDict', (), IcePy._t_string, _M_omero._t_RType)

if 'RMap' not in _M_omero.__dict__:
    _M_omero.RMap = Ice.createTempClass()
    class RMap(_M_omero.RType):
        '''Similar to [RCollection], the [RMap] class permits the passing
of a possible null [RTypeDict] where any other [RType] is
expected.'''
        def __init__(self, _val=None):
            if Ice.getType(self) == _M_omero.RMap:
                raise RuntimeError('omero.RMap is an abstract class')
            _M_omero.RType.__init__(self)
            self._val = _val

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::RMap', '::omero::RType')

        def ice_id(self, current=None):
            return '::omero::RMap'

        def ice_staticId():
            return '::omero::RMap'
        ice_staticId = staticmethod(ice_staticId)

        def getValue(self, current=None):
            pass

        def size(self, current=None):
            pass

        def get(self, key, current=None):
            pass

        def put(self, key, value, current=None):
            pass

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_RMap)

        __repr__ = __str__

    _M_omero.RMapPrx = Ice.createTempClass()
    class RMapPrx(_M_omero.RTypePrx):

        def getValue(self, _ctx=None):
            return _M_omero.RMap._op_getValue.invoke(self, ((), _ctx))

        def begin_getValue(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.RMap._op_getValue.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_getValue(self, _r):
            return _M_omero.RMap._op_getValue.end(self, _r)

        def size(self, _ctx=None):
            return _M_omero.RMap._op_size.invoke(self, ((), _ctx))

        def begin_size(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.RMap._op_size.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_size(self, _r):
            return _M_omero.RMap._op_size.end(self, _r)

        def get(self, key, _ctx=None):
            return _M_omero.RMap._op_get.invoke(self, ((key, ), _ctx))

        def begin_get(self, key, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.RMap._op_get.begin(self, ((key, ), _response, _ex, _sent, _ctx))

        def end_get(self, _r):
            return _M_omero.RMap._op_get.end(self, _r)

        def put(self, key, value, _ctx=None):
            return _M_omero.RMap._op_put.invoke(self, ((key, value), _ctx))

        def begin_put(self, key, value, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.RMap._op_put.begin(self, ((key, value), _response, _ex, _sent, _ctx))

        def end_put(self, _r):
            return _M_omero.RMap._op_put.end(self, _r)

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.RMapPrx.ice_checkedCast(proxy, '::omero::RMap', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.RMapPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_RMapPrx = IcePy.defineProxy('::omero::RMap', RMapPrx)

    _M_omero._t_RMap = IcePy.declareClass('::omero::RMap')

    _M_omero._t_RMap = IcePy.defineClass('::omero::RMap', RMap, -1, (), True, False, _M_omero._t_RType, (), (('_val', (), _M_omero._t_RTypeDict, False, 0),))
    RMap._ice_type = _M_omero._t_RMap

    RMap._op_getValue = IcePy.Operation('getValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), _M_omero._t_RTypeDict, False, 0), ())
    RMap._op_size = IcePy.Operation('size', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), IcePy._t_int, False, 0), ())
    RMap._op_get = IcePy.Operation('get', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), IcePy._t_string, False, 0),), (), ((), _M_omero._t_RType, False, 0), ())
    RMap._op_put = IcePy.Operation('put', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), IcePy._t_string, False, 0), ((), _M_omero._t_RType, False, 0)), (), None, ())

    _M_omero.RMap = RMap
    del RMap

    _M_omero.RMapPrx = RMapPrx
    del RMapPrx

# End of module omero
