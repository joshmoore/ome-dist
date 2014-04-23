# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `IObject.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_RTypes_ice

# Included module omero
_M_omero = Ice.openModule('omero')

# Included module omero.model
_M_omero.model = Ice.openModule('omero.model')

# Start of module omero
__name__ = 'omero'

# Start of module omero.model
__name__ = 'omero.model'

if not _M_omero.model.__dict__.has_key('IObject'):
    _M_omero.model.IObject = Ice.createTempClass()
    class IObject(Ice.Object):
        def __init__(self, _id=None, _details=None, _loaded=False):
            if __builtin__.type(self) == _M_omero.model.IObject:
                raise RuntimeError('omero.model.IObject is an abstract class')
            self._id = _id
            self._details = _details
            self._loaded = _loaded

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject')

        def ice_id(self, current=None):
            return '::omero::model::IObject'

        def ice_staticId():
            return '::omero::model::IObject'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getId(self, current=None):
        # def setId(self, id, current=None):
        # def getDetails(self, current=None):
        # def proxy(self, current=None):
        # def shallowCopy(self, current=None):
        # def unload(self, current=None):
        # def unloadCollections(self, current=None):
        # def unloadDetails(self, current=None):
        # def isLoaded(self, current=None):
        # def isGlobal(self, current=None):
        # def isLink(self, current=None):
        # def isMutable(self, current=None):
        # def isAnnotated(self, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_IObject)

        __repr__ = __str__

    _M_omero.model.IObjectPrx = Ice.createTempClass()
    class IObjectPrx(Ice.ObjectPrx):

        def getId(self, _ctx=None):
            return _M_omero.model.IObject._op_getId.invoke(self, ((), _ctx))

        def setId(self, id, _ctx=None):
            return _M_omero.model.IObject._op_setId.invoke(self, ((id, ), _ctx))

        def getDetails(self, _ctx=None):
            return _M_omero.model.IObject._op_getDetails.invoke(self, ((), _ctx))

        def proxy(self, _ctx=None):
            return _M_omero.model.IObject._op_proxy.invoke(self, ((), _ctx))

        def shallowCopy(self, _ctx=None):
            return _M_omero.model.IObject._op_shallowCopy.invoke(self, ((), _ctx))

        def unload(self, _ctx=None):
            return _M_omero.model.IObject._op_unload.invoke(self, ((), _ctx))

        def unloadCollections(self, _ctx=None):
            return _M_omero.model.IObject._op_unloadCollections.invoke(self, ((), _ctx))

        def unloadDetails(self, _ctx=None):
            return _M_omero.model.IObject._op_unloadDetails.invoke(self, ((), _ctx))

        def isLoaded(self, _ctx=None):
            return _M_omero.model.IObject._op_isLoaded.invoke(self, ((), _ctx))

        def isGlobal(self, _ctx=None):
            return _M_omero.model.IObject._op_isGlobal.invoke(self, ((), _ctx))

        def isLink(self, _ctx=None):
            return _M_omero.model.IObject._op_isLink.invoke(self, ((), _ctx))

        def isMutable(self, _ctx=None):
            return _M_omero.model.IObject._op_isMutable.invoke(self, ((), _ctx))

        def isAnnotated(self, _ctx=None):
            return _M_omero.model.IObject._op_isAnnotated.invoke(self, ((), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.IObjectPrx.ice_checkedCast(proxy, '::omero::model::IObject', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.IObjectPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_IObjectPrx = IcePy.defineProxy('::omero::model::IObject', IObjectPrx)

    _M_omero.model._t_IObject = IcePy.declareClass('::omero::model::IObject')

    _M_omero.model._t_IObject = IcePy.defineClass('::omero::model::IObject', IObject, (), True, None, (), (
        ('_id', (), _M_omero._t_RLong),
        ('_details', (), _M_omero.model._t_Details),
        ('_loaded', (), IcePy._t_bool)
    ))
    IObject.ice_type = _M_omero.model._t_IObject

    IObject._op_getId = IcePy.Operation('getId', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RLong, ())
    IObject._op_setId = IcePy.Operation('setId', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RLong),), (), None, ())
    IObject._op_getDetails = IcePy.Operation('getDetails', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Details, ())
    IObject._op_proxy = IcePy.Operation('proxy', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_IObject, ())
    IObject._op_shallowCopy = IcePy.Operation('shallowCopy', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_IObject, ())
    IObject._op_unload = IcePy.Operation('unload', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    IObject._op_unloadCollections = IcePy.Operation('unloadCollections', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    IObject._op_unloadDetails = IcePy.Operation('unloadDetails', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    IObject._op_isLoaded = IcePy.Operation('isLoaded', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_bool, ())
    IObject._op_isGlobal = IcePy.Operation('isGlobal', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_bool, ())
    IObject._op_isLink = IcePy.Operation('isLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_bool, ())
    IObject._op_isMutable = IcePy.Operation('isMutable', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_bool, ())
    IObject._op_isAnnotated = IcePy.Operation('isAnnotated', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_bool, ())

    _M_omero.model.IObject = IObject
    del IObject

    _M_omero.model.IObjectPrx = IObjectPrx
    del IObjectPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
