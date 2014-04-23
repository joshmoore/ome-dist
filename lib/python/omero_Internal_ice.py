# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Internal.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()

# Start of module omero
_M_omero = Ice.openModule('omero')
__name__ = 'omero'

# Start of module omero.grid
_M_omero.grid = Ice.openModule('omero.grid')
__name__ = 'omero.grid'

if not _M_omero.grid.__dict__.has_key('ClusterNode'):
    _M_omero.grid.ClusterNode = Ice.createTempClass()
    class ClusterNode(Ice.Object):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.grid.ClusterNode:
                raise RuntimeError('omero.grid.ClusterNode is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::ClusterNode')

        def ice_id(self, current=None):
            return '::omero::grid::ClusterNode'

        def ice_staticId():
            return '::omero::grid::ClusterNode'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getNodeUuid(self, current=None):
        # def down(self, uuid, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_ClusterNode)

        __repr__ = __str__

    _M_omero.grid.ClusterNodePrx = Ice.createTempClass()
    class ClusterNodePrx(Ice.ObjectPrx):

        def getNodeUuid(self, _ctx=None):
            return _M_omero.grid.ClusterNode._op_getNodeUuid.invoke(self, ((), _ctx))

        def down(self, uuid, _ctx=None):
            return _M_omero.grid.ClusterNode._op_down.invoke(self, ((uuid, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.ClusterNodePrx.ice_checkedCast(proxy, '::omero::grid::ClusterNode', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.ClusterNodePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_ClusterNodePrx = IcePy.defineProxy('::omero::grid::ClusterNode', ClusterNodePrx)

    _M_omero.grid._t_ClusterNode = IcePy.defineClass('::omero::grid::ClusterNode', ClusterNode, (), True, None, (), ())
    ClusterNode.ice_type = _M_omero.grid._t_ClusterNode

    ClusterNode._op_getNodeUuid = IcePy.Operation('getNodeUuid', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_string, ())
    ClusterNode._op_down = IcePy.Operation('down', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_string),), (), None, ())

    _M_omero.grid.ClusterNode = ClusterNode
    del ClusterNode

    _M_omero.grid.ClusterNodePrx = ClusterNodePrx
    del ClusterNodePrx

# End of module omero.grid

__name__ = 'omero'

# End of module omero
