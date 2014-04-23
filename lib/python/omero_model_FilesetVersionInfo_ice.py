# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `FilesetVersionInfo.ice'

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

if not _M_omero.model.__dict__.has_key('FilesetVersionInfo'):
    _M_omero.model.FilesetVersionInfo = Ice.createTempClass()
    class FilesetVersionInfo(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _bioformatsReader=None, _bioformatsVersion=None, _omeroVersion=None, _osArchitecture=None, _osName=None, _osVersion=None, _locale=None):
            if __builtin__.type(self) == _M_omero.model.FilesetVersionInfo:
                raise RuntimeError('omero.model.FilesetVersionInfo is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._bioformatsReader = _bioformatsReader
            self._bioformatsVersion = _bioformatsVersion
            self._omeroVersion = _omeroVersion
            self._osArchitecture = _osArchitecture
            self._osName = _osName
            self._osVersion = _osVersion
            self._locale = _locale

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::FilesetVersionInfo', '::omero::model::IObject')

        def ice_id(self, current=None):
            return '::omero::model::FilesetVersionInfo'

        def ice_staticId():
            return '::omero::model::FilesetVersionInfo'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getBioformatsReader(self, current=None):
        # def setBioformatsReader(self, theBioformatsReader, current=None):
        # def getBioformatsVersion(self, current=None):
        # def setBioformatsVersion(self, theBioformatsVersion, current=None):
        # def getOmeroVersion(self, current=None):
        # def setOmeroVersion(self, theOmeroVersion, current=None):
        # def getOsArchitecture(self, current=None):
        # def setOsArchitecture(self, theOsArchitecture, current=None):
        # def getOsName(self, current=None):
        # def setOsName(self, theOsName, current=None):
        # def getOsVersion(self, current=None):
        # def setOsVersion(self, theOsVersion, current=None):
        # def getLocale(self, current=None):
        # def setLocale(self, theLocale, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_FilesetVersionInfo)

        __repr__ = __str__

    _M_omero.model.FilesetVersionInfoPrx = Ice.createTempClass()
    class FilesetVersionInfoPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.FilesetVersionInfo._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.FilesetVersionInfo._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getBioformatsReader(self, _ctx=None):
            return _M_omero.model.FilesetVersionInfo._op_getBioformatsReader.invoke(self, ((), _ctx))

        def setBioformatsReader(self, theBioformatsReader, _ctx=None):
            return _M_omero.model.FilesetVersionInfo._op_setBioformatsReader.invoke(self, ((theBioformatsReader, ), _ctx))

        def getBioformatsVersion(self, _ctx=None):
            return _M_omero.model.FilesetVersionInfo._op_getBioformatsVersion.invoke(self, ((), _ctx))

        def setBioformatsVersion(self, theBioformatsVersion, _ctx=None):
            return _M_omero.model.FilesetVersionInfo._op_setBioformatsVersion.invoke(self, ((theBioformatsVersion, ), _ctx))

        def getOmeroVersion(self, _ctx=None):
            return _M_omero.model.FilesetVersionInfo._op_getOmeroVersion.invoke(self, ((), _ctx))

        def setOmeroVersion(self, theOmeroVersion, _ctx=None):
            return _M_omero.model.FilesetVersionInfo._op_setOmeroVersion.invoke(self, ((theOmeroVersion, ), _ctx))

        def getOsArchitecture(self, _ctx=None):
            return _M_omero.model.FilesetVersionInfo._op_getOsArchitecture.invoke(self, ((), _ctx))

        def setOsArchitecture(self, theOsArchitecture, _ctx=None):
            return _M_omero.model.FilesetVersionInfo._op_setOsArchitecture.invoke(self, ((theOsArchitecture, ), _ctx))

        def getOsName(self, _ctx=None):
            return _M_omero.model.FilesetVersionInfo._op_getOsName.invoke(self, ((), _ctx))

        def setOsName(self, theOsName, _ctx=None):
            return _M_omero.model.FilesetVersionInfo._op_setOsName.invoke(self, ((theOsName, ), _ctx))

        def getOsVersion(self, _ctx=None):
            return _M_omero.model.FilesetVersionInfo._op_getOsVersion.invoke(self, ((), _ctx))

        def setOsVersion(self, theOsVersion, _ctx=None):
            return _M_omero.model.FilesetVersionInfo._op_setOsVersion.invoke(self, ((theOsVersion, ), _ctx))

        def getLocale(self, _ctx=None):
            return _M_omero.model.FilesetVersionInfo._op_getLocale.invoke(self, ((), _ctx))

        def setLocale(self, theLocale, _ctx=None):
            return _M_omero.model.FilesetVersionInfo._op_setLocale.invoke(self, ((theLocale, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.FilesetVersionInfoPrx.ice_checkedCast(proxy, '::omero::model::FilesetVersionInfo', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.FilesetVersionInfoPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_FilesetVersionInfoPrx = IcePy.defineProxy('::omero::model::FilesetVersionInfo', FilesetVersionInfoPrx)

    _M_omero.model._t_FilesetVersionInfo = IcePy.declareClass('::omero::model::FilesetVersionInfo')

    _M_omero.model._t_FilesetVersionInfo = IcePy.defineClass('::omero::model::FilesetVersionInfo', FilesetVersionInfo, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_bioformatsReader', (), _M_omero._t_RString),
        ('_bioformatsVersion', (), _M_omero._t_RString),
        ('_omeroVersion', (), _M_omero._t_RString),
        ('_osArchitecture', (), _M_omero._t_RString),
        ('_osName', (), _M_omero._t_RString),
        ('_osVersion', (), _M_omero._t_RString),
        ('_locale', (), _M_omero._t_RString)
    ))
    FilesetVersionInfo.ice_type = _M_omero.model._t_FilesetVersionInfo

    FilesetVersionInfo._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    FilesetVersionInfo._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    FilesetVersionInfo._op_getBioformatsReader = IcePy.Operation('getBioformatsReader', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    FilesetVersionInfo._op_setBioformatsReader = IcePy.Operation('setBioformatsReader', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    FilesetVersionInfo._op_getBioformatsVersion = IcePy.Operation('getBioformatsVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    FilesetVersionInfo._op_setBioformatsVersion = IcePy.Operation('setBioformatsVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    FilesetVersionInfo._op_getOmeroVersion = IcePy.Operation('getOmeroVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    FilesetVersionInfo._op_setOmeroVersion = IcePy.Operation('setOmeroVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    FilesetVersionInfo._op_getOsArchitecture = IcePy.Operation('getOsArchitecture', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    FilesetVersionInfo._op_setOsArchitecture = IcePy.Operation('setOsArchitecture', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    FilesetVersionInfo._op_getOsName = IcePy.Operation('getOsName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    FilesetVersionInfo._op_setOsName = IcePy.Operation('setOsName', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    FilesetVersionInfo._op_getOsVersion = IcePy.Operation('getOsVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    FilesetVersionInfo._op_setOsVersion = IcePy.Operation('setOsVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    FilesetVersionInfo._op_getLocale = IcePy.Operation('getLocale', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    FilesetVersionInfo._op_setLocale = IcePy.Operation('setLocale', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.FilesetVersionInfo = FilesetVersionInfo
    del FilesetVersionInfo

    _M_omero.model.FilesetVersionInfoPrx = FilesetVersionInfoPrx
    del FilesetVersionInfoPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
