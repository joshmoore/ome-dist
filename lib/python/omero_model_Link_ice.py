# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Link.ice'

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

if not _M_omero.model.__dict__.has_key('Link'):
    _M_omero.model.Link = Ice.createTempClass()
    class Link(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None):
            if __builtin__.type(self) == _M_omero.model.Link:
                raise RuntimeError('omero.model.Link is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::Link')

        def ice_id(self, current=None):
            return '::omero::model::Link'

        def ice_staticId():
            return '::omero::model::Link'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Link)

        __repr__ = __str__

    _M_omero.model.LinkPrx = Ice.createTempClass()
    class LinkPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.Link._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.Link._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.LinkPrx.ice_checkedCast(proxy, '::omero::model::Link', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.LinkPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_LinkPrx = IcePy.defineProxy('::omero::model::Link', LinkPrx)

    _M_omero.model._t_Link = IcePy.declareClass('::omero::model::Link')

    _M_omero.model._t_Link = IcePy.defineClass('::omero::model::Link', Link, (), True, _M_omero.model._t_IObject, (), (('_version', (), _M_omero._t_RInt),))
    Link.ice_type = _M_omero.model._t_Link

    Link._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Link._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())

    _M_omero.model.Link = Link
    del Link

    _M_omero.model.LinkPrx = LinkPrx
    del LinkPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
