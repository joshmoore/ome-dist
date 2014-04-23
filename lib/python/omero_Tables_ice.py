# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Tables.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_ModelF_ice
import omero_RTypes_ice
import omero_System_ice
import omero_Collections_ice
import omero_Repositories_ice
import omero_ServerErrors_ice

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

# Included module Glacier2
_M_Glacier2 = Ice.openModule('Glacier2')

# Included module omero.grid
_M_omero.grid = Ice.openModule('omero.grid')

# Included module omero.cmd
_M_omero.cmd = Ice.openModule('omero.cmd')

# Start of module omero
__name__ = 'omero'

# Start of module omero.api
__name__ = 'omero.api'

if not _M_omero.api.__dict__.has_key('ServiceFactory'):
    _M_omero.api._t_ServiceFactory = IcePy.declareClass('::omero::api::ServiceFactory')
    _M_omero.api._t_ServiceFactoryPrx = IcePy.declareProxy('::omero::api::ServiceFactory')

# End of module omero.api

__name__ = 'omero'

# Start of module omero.grid
__name__ = 'omero.grid'

if not _M_omero.grid.__dict__.has_key('Column'):
    _M_omero.grid.Column = Ice.createTempClass()
    class Column(Ice.Object):
        def __init__(self, name='', description=''):
            self.name = name
            self.description = description

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::Column')

        def ice_id(self, current=None):
            return '::omero::grid::Column'

        def ice_staticId():
            return '::omero::grid::Column'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_Column)

        __repr__ = __str__

    _M_omero.grid.ColumnPrx = Ice.createTempClass()
    class ColumnPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.ColumnPrx.ice_checkedCast(proxy, '::omero::grid::Column', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.ColumnPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_ColumnPrx = IcePy.defineProxy('::omero::grid::Column', ColumnPrx)

    _M_omero.grid._t_Column = IcePy.defineClass('::omero::grid::Column', Column, (), False, None, (), (
        ('name', (), IcePy._t_string),
        ('description', (), IcePy._t_string)
    ))
    Column.ice_type = _M_omero.grid._t_Column

    _M_omero.grid.Column = Column
    del Column

    _M_omero.grid.ColumnPrx = ColumnPrx
    del ColumnPrx

if not _M_omero.grid.__dict__.has_key('FileColumn'):
    _M_omero.grid.FileColumn = Ice.createTempClass()
    class FileColumn(_M_omero.grid.Column):
        def __init__(self, name='', description='', values=None):
            _M_omero.grid.Column.__init__(self, name, description)
            self.values = values

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::Column', '::omero::grid::FileColumn')

        def ice_id(self, current=None):
            return '::omero::grid::FileColumn'

        def ice_staticId():
            return '::omero::grid::FileColumn'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_FileColumn)

        __repr__ = __str__

    _M_omero.grid.FileColumnPrx = Ice.createTempClass()
    class FileColumnPrx(_M_omero.grid.ColumnPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.FileColumnPrx.ice_checkedCast(proxy, '::omero::grid::FileColumn', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.FileColumnPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_FileColumnPrx = IcePy.defineProxy('::omero::grid::FileColumn', FileColumnPrx)

    _M_omero.grid._t_FileColumn = IcePy.defineClass('::omero::grid::FileColumn', FileColumn, (), False, _M_omero.grid._t_Column, (), (('values', (), _M_omero.api._t_LongArray),))
    FileColumn.ice_type = _M_omero.grid._t_FileColumn

    _M_omero.grid.FileColumn = FileColumn
    del FileColumn

    _M_omero.grid.FileColumnPrx = FileColumnPrx
    del FileColumnPrx

if not _M_omero.grid.__dict__.has_key('ImageColumn'):
    _M_omero.grid.ImageColumn = Ice.createTempClass()
    class ImageColumn(_M_omero.grid.Column):
        def __init__(self, name='', description='', values=None):
            _M_omero.grid.Column.__init__(self, name, description)
            self.values = values

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::Column', '::omero::grid::ImageColumn')

        def ice_id(self, current=None):
            return '::omero::grid::ImageColumn'

        def ice_staticId():
            return '::omero::grid::ImageColumn'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_ImageColumn)

        __repr__ = __str__

    _M_omero.grid.ImageColumnPrx = Ice.createTempClass()
    class ImageColumnPrx(_M_omero.grid.ColumnPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.ImageColumnPrx.ice_checkedCast(proxy, '::omero::grid::ImageColumn', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.ImageColumnPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_ImageColumnPrx = IcePy.defineProxy('::omero::grid::ImageColumn', ImageColumnPrx)

    _M_omero.grid._t_ImageColumn = IcePy.defineClass('::omero::grid::ImageColumn', ImageColumn, (), False, _M_omero.grid._t_Column, (), (('values', (), _M_omero.api._t_LongArray),))
    ImageColumn.ice_type = _M_omero.grid._t_ImageColumn

    _M_omero.grid.ImageColumn = ImageColumn
    del ImageColumn

    _M_omero.grid.ImageColumnPrx = ImageColumnPrx
    del ImageColumnPrx

if not _M_omero.grid.__dict__.has_key('RoiColumn'):
    _M_omero.grid.RoiColumn = Ice.createTempClass()
    class RoiColumn(_M_omero.grid.Column):
        def __init__(self, name='', description='', values=None):
            _M_omero.grid.Column.__init__(self, name, description)
            self.values = values

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::Column', '::omero::grid::RoiColumn')

        def ice_id(self, current=None):
            return '::omero::grid::RoiColumn'

        def ice_staticId():
            return '::omero::grid::RoiColumn'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_RoiColumn)

        __repr__ = __str__

    _M_omero.grid.RoiColumnPrx = Ice.createTempClass()
    class RoiColumnPrx(_M_omero.grid.ColumnPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.RoiColumnPrx.ice_checkedCast(proxy, '::omero::grid::RoiColumn', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.RoiColumnPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_RoiColumnPrx = IcePy.defineProxy('::omero::grid::RoiColumn', RoiColumnPrx)

    _M_omero.grid._t_RoiColumn = IcePy.defineClass('::omero::grid::RoiColumn', RoiColumn, (), False, _M_omero.grid._t_Column, (), (('values', (), _M_omero.api._t_LongArray),))
    RoiColumn.ice_type = _M_omero.grid._t_RoiColumn

    _M_omero.grid.RoiColumn = RoiColumn
    del RoiColumn

    _M_omero.grid.RoiColumnPrx = RoiColumnPrx
    del RoiColumnPrx

if not _M_omero.grid.__dict__.has_key('WellColumn'):
    _M_omero.grid.WellColumn = Ice.createTempClass()
    class WellColumn(_M_omero.grid.Column):
        def __init__(self, name='', description='', values=None):
            _M_omero.grid.Column.__init__(self, name, description)
            self.values = values

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::Column', '::omero::grid::WellColumn')

        def ice_id(self, current=None):
            return '::omero::grid::WellColumn'

        def ice_staticId():
            return '::omero::grid::WellColumn'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_WellColumn)

        __repr__ = __str__

    _M_omero.grid.WellColumnPrx = Ice.createTempClass()
    class WellColumnPrx(_M_omero.grid.ColumnPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.WellColumnPrx.ice_checkedCast(proxy, '::omero::grid::WellColumn', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.WellColumnPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_WellColumnPrx = IcePy.defineProxy('::omero::grid::WellColumn', WellColumnPrx)

    _M_omero.grid._t_WellColumn = IcePy.defineClass('::omero::grid::WellColumn', WellColumn, (), False, _M_omero.grid._t_Column, (), (('values', (), _M_omero.api._t_LongArray),))
    WellColumn.ice_type = _M_omero.grid._t_WellColumn

    _M_omero.grid.WellColumn = WellColumn
    del WellColumn

    _M_omero.grid.WellColumnPrx = WellColumnPrx
    del WellColumnPrx

if not _M_omero.grid.__dict__.has_key('PlateColumn'):
    _M_omero.grid.PlateColumn = Ice.createTempClass()
    class PlateColumn(_M_omero.grid.Column):
        def __init__(self, name='', description='', values=None):
            _M_omero.grid.Column.__init__(self, name, description)
            self.values = values

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::Column', '::omero::grid::PlateColumn')

        def ice_id(self, current=None):
            return '::omero::grid::PlateColumn'

        def ice_staticId():
            return '::omero::grid::PlateColumn'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_PlateColumn)

        __repr__ = __str__

    _M_omero.grid.PlateColumnPrx = Ice.createTempClass()
    class PlateColumnPrx(_M_omero.grid.ColumnPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.PlateColumnPrx.ice_checkedCast(proxy, '::omero::grid::PlateColumn', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.PlateColumnPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_PlateColumnPrx = IcePy.defineProxy('::omero::grid::PlateColumn', PlateColumnPrx)

    _M_omero.grid._t_PlateColumn = IcePy.defineClass('::omero::grid::PlateColumn', PlateColumn, (), False, _M_omero.grid._t_Column, (), (('values', (), _M_omero.api._t_LongArray),))
    PlateColumn.ice_type = _M_omero.grid._t_PlateColumn

    _M_omero.grid.PlateColumn = PlateColumn
    del PlateColumn

    _M_omero.grid.PlateColumnPrx = PlateColumnPrx
    del PlateColumnPrx

if not _M_omero.grid.__dict__.has_key('BoolColumn'):
    _M_omero.grid.BoolColumn = Ice.createTempClass()
    class BoolColumn(_M_omero.grid.Column):
        def __init__(self, name='', description='', values=None):
            _M_omero.grid.Column.__init__(self, name, description)
            self.values = values

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::BoolColumn', '::omero::grid::Column')

        def ice_id(self, current=None):
            return '::omero::grid::BoolColumn'

        def ice_staticId():
            return '::omero::grid::BoolColumn'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_BoolColumn)

        __repr__ = __str__

    _M_omero.grid.BoolColumnPrx = Ice.createTempClass()
    class BoolColumnPrx(_M_omero.grid.ColumnPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.BoolColumnPrx.ice_checkedCast(proxy, '::omero::grid::BoolColumn', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.BoolColumnPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_BoolColumnPrx = IcePy.defineProxy('::omero::grid::BoolColumn', BoolColumnPrx)

    _M_omero.grid._t_BoolColumn = IcePy.defineClass('::omero::grid::BoolColumn', BoolColumn, (), False, _M_omero.grid._t_Column, (), (('values', (), _M_omero.api._t_BoolArray),))
    BoolColumn.ice_type = _M_omero.grid._t_BoolColumn

    _M_omero.grid.BoolColumn = BoolColumn
    del BoolColumn

    _M_omero.grid.BoolColumnPrx = BoolColumnPrx
    del BoolColumnPrx

if not _M_omero.grid.__dict__.has_key('DoubleColumn'):
    _M_omero.grid.DoubleColumn = Ice.createTempClass()
    class DoubleColumn(_M_omero.grid.Column):
        def __init__(self, name='', description='', values=None):
            _M_omero.grid.Column.__init__(self, name, description)
            self.values = values

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::Column', '::omero::grid::DoubleColumn')

        def ice_id(self, current=None):
            return '::omero::grid::DoubleColumn'

        def ice_staticId():
            return '::omero::grid::DoubleColumn'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_DoubleColumn)

        __repr__ = __str__

    _M_omero.grid.DoubleColumnPrx = Ice.createTempClass()
    class DoubleColumnPrx(_M_omero.grid.ColumnPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.DoubleColumnPrx.ice_checkedCast(proxy, '::omero::grid::DoubleColumn', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.DoubleColumnPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_DoubleColumnPrx = IcePy.defineProxy('::omero::grid::DoubleColumn', DoubleColumnPrx)

    _M_omero.grid._t_DoubleColumn = IcePy.defineClass('::omero::grid::DoubleColumn', DoubleColumn, (), False, _M_omero.grid._t_Column, (), (('values', (), _M_omero.api._t_DoubleArray),))
    DoubleColumn.ice_type = _M_omero.grid._t_DoubleColumn

    _M_omero.grid.DoubleColumn = DoubleColumn
    del DoubleColumn

    _M_omero.grid.DoubleColumnPrx = DoubleColumnPrx
    del DoubleColumnPrx

if not _M_omero.grid.__dict__.has_key('LongColumn'):
    _M_omero.grid.LongColumn = Ice.createTempClass()
    class LongColumn(_M_omero.grid.Column):
        def __init__(self, name='', description='', values=None):
            _M_omero.grid.Column.__init__(self, name, description)
            self.values = values

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::Column', '::omero::grid::LongColumn')

        def ice_id(self, current=None):
            return '::omero::grid::LongColumn'

        def ice_staticId():
            return '::omero::grid::LongColumn'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_LongColumn)

        __repr__ = __str__

    _M_omero.grid.LongColumnPrx = Ice.createTempClass()
    class LongColumnPrx(_M_omero.grid.ColumnPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.LongColumnPrx.ice_checkedCast(proxy, '::omero::grid::LongColumn', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.LongColumnPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_LongColumnPrx = IcePy.defineProxy('::omero::grid::LongColumn', LongColumnPrx)

    _M_omero.grid._t_LongColumn = IcePy.defineClass('::omero::grid::LongColumn', LongColumn, (), False, _M_omero.grid._t_Column, (), (('values', (), _M_omero.api._t_LongArray),))
    LongColumn.ice_type = _M_omero.grid._t_LongColumn

    _M_omero.grid.LongColumn = LongColumn
    del LongColumn

    _M_omero.grid.LongColumnPrx = LongColumnPrx
    del LongColumnPrx

if not _M_omero.grid.__dict__.has_key('StringColumn'):
    _M_omero.grid.StringColumn = Ice.createTempClass()
    class StringColumn(_M_omero.grid.Column):
        def __init__(self, name='', description='', size=0, values=None):
            _M_omero.grid.Column.__init__(self, name, description)
            self.size = size
            self.values = values

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::Column', '::omero::grid::StringColumn')

        def ice_id(self, current=None):
            return '::omero::grid::StringColumn'

        def ice_staticId():
            return '::omero::grid::StringColumn'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_StringColumn)

        __repr__ = __str__

    _M_omero.grid.StringColumnPrx = Ice.createTempClass()
    class StringColumnPrx(_M_omero.grid.ColumnPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.StringColumnPrx.ice_checkedCast(proxy, '::omero::grid::StringColumn', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.StringColumnPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_StringColumnPrx = IcePy.defineProxy('::omero::grid::StringColumn', StringColumnPrx)

    _M_omero.grid._t_StringColumn = IcePy.defineClass('::omero::grid::StringColumn', StringColumn, (), False, _M_omero.grid._t_Column, (), (
        ('size', (), IcePy._t_long),
        ('values', (), _M_omero.api._t_StringArray)
    ))
    StringColumn.ice_type = _M_omero.grid._t_StringColumn

    _M_omero.grid.StringColumn = StringColumn
    del StringColumn

    _M_omero.grid.StringColumnPrx = StringColumnPrx
    del StringColumnPrx

if not _M_omero.grid.__dict__.has_key('FloatArrayColumn'):
    _M_omero.grid.FloatArrayColumn = Ice.createTempClass()
    class FloatArrayColumn(_M_omero.grid.Column):
        def __init__(self, name='', description='', size=0, values=None):
            _M_omero.grid.Column.__init__(self, name, description)
            self.size = size
            self.values = values

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::Column', '::omero::grid::FloatArrayColumn')

        def ice_id(self, current=None):
            return '::omero::grid::FloatArrayColumn'

        def ice_staticId():
            return '::omero::grid::FloatArrayColumn'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_FloatArrayColumn)

        __repr__ = __str__

    _M_omero.grid.FloatArrayColumnPrx = Ice.createTempClass()
    class FloatArrayColumnPrx(_M_omero.grid.ColumnPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.FloatArrayColumnPrx.ice_checkedCast(proxy, '::omero::grid::FloatArrayColumn', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.FloatArrayColumnPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_FloatArrayColumnPrx = IcePy.defineProxy('::omero::grid::FloatArrayColumn', FloatArrayColumnPrx)

    _M_omero.grid._t_FloatArrayColumn = IcePy.defineClass('::omero::grid::FloatArrayColumn', FloatArrayColumn, (), False, _M_omero.grid._t_Column, (), (
        ('size', (), IcePy._t_long),
        ('values', (), _M_omero.api._t_FloatArrayArray)
    ))
    FloatArrayColumn.ice_type = _M_omero.grid._t_FloatArrayColumn

    _M_omero.grid.FloatArrayColumn = FloatArrayColumn
    del FloatArrayColumn

    _M_omero.grid.FloatArrayColumnPrx = FloatArrayColumnPrx
    del FloatArrayColumnPrx

if not _M_omero.grid.__dict__.has_key('DoubleArrayColumn'):
    _M_omero.grid.DoubleArrayColumn = Ice.createTempClass()
    class DoubleArrayColumn(_M_omero.grid.Column):
        def __init__(self, name='', description='', size=0, values=None):
            _M_omero.grid.Column.__init__(self, name, description)
            self.size = size
            self.values = values

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::Column', '::omero::grid::DoubleArrayColumn')

        def ice_id(self, current=None):
            return '::omero::grid::DoubleArrayColumn'

        def ice_staticId():
            return '::omero::grid::DoubleArrayColumn'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_DoubleArrayColumn)

        __repr__ = __str__

    _M_omero.grid.DoubleArrayColumnPrx = Ice.createTempClass()
    class DoubleArrayColumnPrx(_M_omero.grid.ColumnPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.DoubleArrayColumnPrx.ice_checkedCast(proxy, '::omero::grid::DoubleArrayColumn', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.DoubleArrayColumnPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_DoubleArrayColumnPrx = IcePy.defineProxy('::omero::grid::DoubleArrayColumn', DoubleArrayColumnPrx)

    _M_omero.grid._t_DoubleArrayColumn = IcePy.defineClass('::omero::grid::DoubleArrayColumn', DoubleArrayColumn, (), False, _M_omero.grid._t_Column, (), (
        ('size', (), IcePy._t_long),
        ('values', (), _M_omero.api._t_DoubleArrayArray)
    ))
    DoubleArrayColumn.ice_type = _M_omero.grid._t_DoubleArrayColumn

    _M_omero.grid.DoubleArrayColumn = DoubleArrayColumn
    del DoubleArrayColumn

    _M_omero.grid.DoubleArrayColumnPrx = DoubleArrayColumnPrx
    del DoubleArrayColumnPrx

if not _M_omero.grid.__dict__.has_key('LongArrayColumn'):
    _M_omero.grid.LongArrayColumn = Ice.createTempClass()
    class LongArrayColumn(_M_omero.grid.Column):
        def __init__(self, name='', description='', size=0, values=None):
            _M_omero.grid.Column.__init__(self, name, description)
            self.size = size
            self.values = values

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::Column', '::omero::grid::LongArrayColumn')

        def ice_id(self, current=None):
            return '::omero::grid::LongArrayColumn'

        def ice_staticId():
            return '::omero::grid::LongArrayColumn'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_LongArrayColumn)

        __repr__ = __str__

    _M_omero.grid.LongArrayColumnPrx = Ice.createTempClass()
    class LongArrayColumnPrx(_M_omero.grid.ColumnPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.LongArrayColumnPrx.ice_checkedCast(proxy, '::omero::grid::LongArrayColumn', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.LongArrayColumnPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_LongArrayColumnPrx = IcePy.defineProxy('::omero::grid::LongArrayColumn', LongArrayColumnPrx)

    _M_omero.grid._t_LongArrayColumn = IcePy.defineClass('::omero::grid::LongArrayColumn', LongArrayColumn, (), False, _M_omero.grid._t_Column, (), (
        ('size', (), IcePy._t_long),
        ('values', (), _M_omero.api._t_LongArrayArray)
    ))
    LongArrayColumn.ice_type = _M_omero.grid._t_LongArrayColumn

    _M_omero.grid.LongArrayColumn = LongArrayColumn
    del LongArrayColumn

    _M_omero.grid.LongArrayColumnPrx = LongArrayColumnPrx
    del LongArrayColumnPrx

if not _M_omero.grid.__dict__.has_key('MaskColumn'):
    _M_omero.grid.MaskColumn = Ice.createTempClass()
    class MaskColumn(_M_omero.grid.Column):
        def __init__(self, name='', description='', imageId=None, theZ=None, theT=None, x=None, y=None, w=None, h=None, bytes=None):
            _M_omero.grid.Column.__init__(self, name, description)
            self.imageId = imageId
            self.theZ = theZ
            self.theT = theT
            self.x = x
            self.y = y
            self.w = w
            self.h = h
            self.bytes = bytes

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::Column', '::omero::grid::MaskColumn')

        def ice_id(self, current=None):
            return '::omero::grid::MaskColumn'

        def ice_staticId():
            return '::omero::grid::MaskColumn'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_MaskColumn)

        __repr__ = __str__

    _M_omero.grid.MaskColumnPrx = Ice.createTempClass()
    class MaskColumnPrx(_M_omero.grid.ColumnPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.MaskColumnPrx.ice_checkedCast(proxy, '::omero::grid::MaskColumn', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.MaskColumnPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_MaskColumnPrx = IcePy.defineProxy('::omero::grid::MaskColumn', MaskColumnPrx)

    _M_omero.grid._t_MaskColumn = IcePy.defineClass('::omero::grid::MaskColumn', MaskColumn, (), False, _M_omero.grid._t_Column, (), (
        ('imageId', (), _M_omero.api._t_LongArray),
        ('theZ', (), _M_omero.api._t_IntegerArray),
        ('theT', (), _M_omero.api._t_IntegerArray),
        ('x', (), _M_omero.api._t_DoubleArray),
        ('y', (), _M_omero.api._t_DoubleArray),
        ('w', (), _M_omero.api._t_DoubleArray),
        ('h', (), _M_omero.api._t_DoubleArray),
        ('bytes', (), _M_omero.api._t_ByteArrayArray)
    ))
    MaskColumn.ice_type = _M_omero.grid._t_MaskColumn

    _M_omero.grid.MaskColumn = MaskColumn
    del MaskColumn

    _M_omero.grid.MaskColumnPrx = MaskColumnPrx
    del MaskColumnPrx

if not _M_omero.grid.__dict__.has_key('_t_ColumnArray'):
    _M_omero.grid._t_ColumnArray = IcePy.defineSequence('::omero::grid::ColumnArray', (), _M_omero.grid._t_Column)

if not _M_omero.grid.__dict__.has_key('Data'):
    _M_omero.grid.Data = Ice.createTempClass()
    class Data(Ice.Object):
        def __init__(self, lastModification=0, rowNumbers=None, columns=None):
            self.lastModification = lastModification
            self.rowNumbers = rowNumbers
            self.columns = columns

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::Data')

        def ice_id(self, current=None):
            return '::omero::grid::Data'

        def ice_staticId():
            return '::omero::grid::Data'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_Data)

        __repr__ = __str__

    _M_omero.grid.DataPrx = Ice.createTempClass()
    class DataPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.DataPrx.ice_checkedCast(proxy, '::omero::grid::Data', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.DataPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_DataPrx = IcePy.defineProxy('::omero::grid::Data', DataPrx)

    _M_omero.grid._t_Data = IcePy.declareClass('::omero::grid::Data')

    _M_omero.grid._t_Data = IcePy.defineClass('::omero::grid::Data', Data, (), False, None, (), (
        ('lastModification', (), IcePy._t_long),
        ('rowNumbers', (), _M_omero.api._t_LongArray),
        ('columns', (), _M_omero.grid._t_ColumnArray)
    ))
    Data.ice_type = _M_omero.grid._t_Data

    _M_omero.grid.Data = Data
    del Data

    _M_omero.grid.DataPrx = DataPrx
    del DataPrx

if not _M_omero.grid.__dict__.has_key('Table'):
    _M_omero.grid.Table = Ice.createTempClass()
    class Table(Ice.Object):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.grid.Table:
                raise RuntimeError('omero.grid.Table is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::Table')

        def ice_id(self, current=None):
            return '::omero::grid::Table'

        def ice_staticId():
            return '::omero::grid::Table'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getOriginalFile(self, current=None):
        # def getHeaders(self, current=None):
        # def getNumberOfRows(self, current=None):
        # def getWhereList(self, condition, variables, start, stop, step, current=None):
        # def readCoordinates(self, rowNumbers, current=None):
        # def read(self, colNumbers, start, stop, current=None):
        # def slice(self, colNumbers, rowNumbers, current=None):
        # def addData(self, cols, current=None):
        # def update(self, modifiedData, current=None):
        # def getAllMetadata(self, current=None):
        # def getMetadata(self, key, current=None):
        # def setAllMetadata(self, dict, current=None):
        # def setMetadata(self, key, value, current=None):
        # def initialize(self, cols, current=None):
        # def addColumn(self, col, current=None):
        # def delete(self, current=None):
        # def close(self, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_Table)

        __repr__ = __str__

    _M_omero.grid.TablePrx = Ice.createTempClass()
    class TablePrx(Ice.ObjectPrx):

        def getOriginalFile(self, _ctx=None):
            return _M_omero.grid.Table._op_getOriginalFile.invoke(self, ((), _ctx))

        def getOriginalFile_async(self, _cb, _ctx=None):
            return _M_omero.grid.Table._op_getOriginalFile.invokeAsync(self, (_cb, (), _ctx))

        def getHeaders(self, _ctx=None):
            return _M_omero.grid.Table._op_getHeaders.invoke(self, ((), _ctx))

        def getHeaders_async(self, _cb, _ctx=None):
            return _M_omero.grid.Table._op_getHeaders.invokeAsync(self, (_cb, (), _ctx))

        def getNumberOfRows(self, _ctx=None):
            return _M_omero.grid.Table._op_getNumberOfRows.invoke(self, ((), _ctx))

        def getNumberOfRows_async(self, _cb, _ctx=None):
            return _M_omero.grid.Table._op_getNumberOfRows.invokeAsync(self, (_cb, (), _ctx))

        def getWhereList(self, condition, variables, start, stop, step, _ctx=None):
            return _M_omero.grid.Table._op_getWhereList.invoke(self, ((condition, variables, start, stop, step), _ctx))

        def getWhereList_async(self, _cb, condition, variables, start, stop, step, _ctx=None):
            return _M_omero.grid.Table._op_getWhereList.invokeAsync(self, (_cb, (condition, variables, start, stop, step), _ctx))

        def readCoordinates(self, rowNumbers, _ctx=None):
            return _M_omero.grid.Table._op_readCoordinates.invoke(self, ((rowNumbers, ), _ctx))

        def readCoordinates_async(self, _cb, rowNumbers, _ctx=None):
            return _M_omero.grid.Table._op_readCoordinates.invokeAsync(self, (_cb, (rowNumbers, ), _ctx))

        def read(self, colNumbers, start, stop, _ctx=None):
            return _M_omero.grid.Table._op_read.invoke(self, ((colNumbers, start, stop), _ctx))

        def read_async(self, _cb, colNumbers, start, stop, _ctx=None):
            return _M_omero.grid.Table._op_read.invokeAsync(self, (_cb, (colNumbers, start, stop), _ctx))

        def slice(self, colNumbers, rowNumbers, _ctx=None):
            return _M_omero.grid.Table._op_slice.invoke(self, ((colNumbers, rowNumbers), _ctx))

        def slice_async(self, _cb, colNumbers, rowNumbers, _ctx=None):
            return _M_omero.grid.Table._op_slice.invokeAsync(self, (_cb, (colNumbers, rowNumbers), _ctx))

        def addData(self, cols, _ctx=None):
            return _M_omero.grid.Table._op_addData.invoke(self, ((cols, ), _ctx))

        def addData_async(self, _cb, cols, _ctx=None):
            return _M_omero.grid.Table._op_addData.invokeAsync(self, (_cb, (cols, ), _ctx))

        def update(self, modifiedData, _ctx=None):
            return _M_omero.grid.Table._op_update.invoke(self, ((modifiedData, ), _ctx))

        def update_async(self, _cb, modifiedData, _ctx=None):
            return _M_omero.grid.Table._op_update.invokeAsync(self, (_cb, (modifiedData, ), _ctx))

        def getAllMetadata(self, _ctx=None):
            return _M_omero.grid.Table._op_getAllMetadata.invoke(self, ((), _ctx))

        def getAllMetadata_async(self, _cb, _ctx=None):
            return _M_omero.grid.Table._op_getAllMetadata.invokeAsync(self, (_cb, (), _ctx))

        def getMetadata(self, key, _ctx=None):
            return _M_omero.grid.Table._op_getMetadata.invoke(self, ((key, ), _ctx))

        def getMetadata_async(self, _cb, key, _ctx=None):
            return _M_omero.grid.Table._op_getMetadata.invokeAsync(self, (_cb, (key, ), _ctx))

        def setAllMetadata(self, dict, _ctx=None):
            return _M_omero.grid.Table._op_setAllMetadata.invoke(self, ((dict, ), _ctx))

        def setAllMetadata_async(self, _cb, dict, _ctx=None):
            return _M_omero.grid.Table._op_setAllMetadata.invokeAsync(self, (_cb, (dict, ), _ctx))

        def setMetadata(self, key, value, _ctx=None):
            return _M_omero.grid.Table._op_setMetadata.invoke(self, ((key, value), _ctx))

        def setMetadata_async(self, _cb, key, value, _ctx=None):
            return _M_omero.grid.Table._op_setMetadata.invokeAsync(self, (_cb, (key, value), _ctx))

        def initialize(self, cols, _ctx=None):
            return _M_omero.grid.Table._op_initialize.invoke(self, ((cols, ), _ctx))

        def initialize_async(self, _cb, cols, _ctx=None):
            return _M_omero.grid.Table._op_initialize.invokeAsync(self, (_cb, (cols, ), _ctx))

        def addColumn(self, col, _ctx=None):
            return _M_omero.grid.Table._op_addColumn.invoke(self, ((col, ), _ctx))

        def addColumn_async(self, _cb, col, _ctx=None):
            return _M_omero.grid.Table._op_addColumn.invokeAsync(self, (_cb, (col, ), _ctx))

        def delete(self, _ctx=None):
            return _M_omero.grid.Table._op_delete.invoke(self, ((), _ctx))

        def delete_async(self, _cb, _ctx=None):
            return _M_omero.grid.Table._op_delete.invokeAsync(self, (_cb, (), _ctx))

        def close(self, _ctx=None):
            return _M_omero.grid.Table._op_close.invoke(self, ((), _ctx))

        def close_async(self, _cb, _ctx=None):
            return _M_omero.grid.Table._op_close.invokeAsync(self, (_cb, (), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.TablePrx.ice_checkedCast(proxy, '::omero::grid::Table', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.TablePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_TablePrx = IcePy.defineProxy('::omero::grid::Table', TablePrx)

    _M_omero.grid._t_Table = IcePy.defineClass('::omero::grid::Table', Table, (), True, None, (), ())
    Table.ice_type = _M_omero.grid._t_Table

    Table._op_getOriginalFile = IcePy.Operation('getOriginalFile', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_OriginalFile, (_M_omero._t_ServerError,))
    Table._op_getHeaders = IcePy.Operation('getHeaders', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.grid._t_ColumnArray, (_M_omero._t_ServerError,))
    Table._op_getNumberOfRows = IcePy.Operation('getNumberOfRows', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_long, (_M_omero._t_ServerError,))
    Table._op_getWhereList = IcePy.Operation('getWhereList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_string), ((), _M_omero._t_RTypeDict), ((), IcePy._t_long), ((), IcePy._t_long), ((), IcePy._t_long)), (), _M_omero.api._t_LongArray, (_M_omero._t_ServerError,))
    Table._op_readCoordinates = IcePy.Operation('readCoordinates', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.api._t_LongArray),), (), _M_omero.grid._t_Data, (_M_omero._t_ServerError,))
    Table._op_read = IcePy.Operation('read', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.api._t_LongArray), ((), IcePy._t_long), ((), IcePy._t_long)), (), _M_omero.grid._t_Data, (_M_omero._t_ServerError,))
    Table._op_slice = IcePy.Operation('slice', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.api._t_LongArray), ((), _M_omero.api._t_LongArray)), (), _M_omero.grid._t_Data, (_M_omero._t_ServerError,))
    Table._op_addData = IcePy.Operation('addData', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.grid._t_ColumnArray),), (), None, (_M_omero._t_ServerError,))
    Table._op_update = IcePy.Operation('update', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.grid._t_Data),), (), None, (_M_omero._t_ServerError,))
    Table._op_getAllMetadata = IcePy.Operation('getAllMetadata', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RTypeDict, (_M_omero._t_ServerError,))
    Table._op_getMetadata = IcePy.Operation('getMetadata', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_string),), (), _M_omero._t_RType, (_M_omero._t_ServerError,))
    Table._op_setAllMetadata = IcePy.Operation('setAllMetadata', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RTypeDict),), (), None, (_M_omero._t_ServerError,))
    Table._op_setMetadata = IcePy.Operation('setMetadata', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_string), ((), _M_omero._t_RType)), (), None, (_M_omero._t_ServerError,))
    Table._op_initialize = IcePy.Operation('initialize', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.grid._t_ColumnArray),), (), None, (_M_omero._t_ServerError,))
    Table._op_addColumn = IcePy.Operation('addColumn', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.grid._t_Column),), (), IcePy._t_int, (_M_omero._t_ServerError,))
    Table._op_delete = IcePy.Operation('delete', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, (_M_omero._t_ServerError,))
    Table._op_close = IcePy.Operation('close', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, (_M_omero._t_ServerError,))

    _M_omero.grid.Table = Table
    del Table

    _M_omero.grid.TablePrx = TablePrx
    del TablePrx

if not _M_omero.grid.__dict__.has_key('Tables'):
    _M_omero.grid.Tables = Ice.createTempClass()
    class Tables(Ice.Object):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.grid.Tables:
                raise RuntimeError('omero.grid.Tables is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::grid::Tables')

        def ice_id(self, current=None):
            return '::omero::grid::Tables'

        def ice_staticId():
            return '::omero::grid::Tables'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getRepository(self, current=None):
        # def getTable(self, file, sf, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.grid._t_Tables)

        __repr__ = __str__

    _M_omero.grid.TablesPrx = Ice.createTempClass()
    class TablesPrx(Ice.ObjectPrx):

        def getRepository(self, _ctx=None):
            return _M_omero.grid.Tables._op_getRepository.invoke(self, ((), _ctx))

        def getRepository_async(self, _cb, _ctx=None):
            return _M_omero.grid.Tables._op_getRepository.invokeAsync(self, (_cb, (), _ctx))

        def getTable(self, file, sf, _ctx=None):
            return _M_omero.grid.Tables._op_getTable.invoke(self, ((file, sf), _ctx))

        def getTable_async(self, _cb, file, sf, _ctx=None):
            return _M_omero.grid.Tables._op_getTable.invokeAsync(self, (_cb, (file, sf), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.grid.TablesPrx.ice_checkedCast(proxy, '::omero::grid::Tables', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.grid.TablesPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.grid._t_TablesPrx = IcePy.defineProxy('::omero::grid::Tables', TablesPrx)

    _M_omero.grid._t_Tables = IcePy.defineClass('::omero::grid::Tables', Tables, (), True, None, (), ())
    Tables.ice_type = _M_omero.grid._t_Tables

    Tables._op_getRepository = IcePy.Operation('getRepository', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.grid._t_RepositoryPrx, (_M_omero._t_ServerError,))
    Tables._op_getTable = IcePy.Operation('getTable', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_OriginalFile), ((), _M_omero.api._t_ServiceFactoryPrx)), (), _M_omero.grid._t_TablePrx, (_M_omero._t_ServerError,))

    _M_omero.grid.Tables = Tables
    del Tables

    _M_omero.grid.TablesPrx = TablesPrx
    del TablesPrx

# End of module omero.grid

__name__ = 'omero'

# End of module omero
