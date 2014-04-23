# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `DBPatch.ice'

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

if not _M_omero.model.__dict__.has_key('DBPatch'):
    _M_omero.model.DBPatch = Ice.createTempClass()
    class DBPatch(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _currentVersion=None, _currentPatch=None, _previousVersion=None, _previousPatch=None, _finished=None, _message=None):
            if __builtin__.type(self) == _M_omero.model.DBPatch:
                raise RuntimeError('omero.model.DBPatch is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._currentVersion = _currentVersion
            self._currentPatch = _currentPatch
            self._previousVersion = _previousVersion
            self._previousPatch = _previousPatch
            self._finished = _finished
            self._message = _message

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::DBPatch', '::omero::model::IObject')

        def ice_id(self, current=None):
            return '::omero::model::DBPatch'

        def ice_staticId():
            return '::omero::model::DBPatch'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getCurrentVersion(self, current=None):
        # def setCurrentVersion(self, theCurrentVersion, current=None):
        # def getCurrentPatch(self, current=None):
        # def setCurrentPatch(self, theCurrentPatch, current=None):
        # def getPreviousVersion(self, current=None):
        # def setPreviousVersion(self, thePreviousVersion, current=None):
        # def getPreviousPatch(self, current=None):
        # def setPreviousPatch(self, thePreviousPatch, current=None):
        # def getFinished(self, current=None):
        # def setFinished(self, theFinished, current=None):
        # def getMessage(self, current=None):
        # def setMessage(self, theMessage, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_DBPatch)

        __repr__ = __str__

    _M_omero.model.DBPatchPrx = Ice.createTempClass()
    class DBPatchPrx(_M_omero.model.IObjectPrx):

        def getCurrentVersion(self, _ctx=None):
            return _M_omero.model.DBPatch._op_getCurrentVersion.invoke(self, ((), _ctx))

        def setCurrentVersion(self, theCurrentVersion, _ctx=None):
            return _M_omero.model.DBPatch._op_setCurrentVersion.invoke(self, ((theCurrentVersion, ), _ctx))

        def getCurrentPatch(self, _ctx=None):
            return _M_omero.model.DBPatch._op_getCurrentPatch.invoke(self, ((), _ctx))

        def setCurrentPatch(self, theCurrentPatch, _ctx=None):
            return _M_omero.model.DBPatch._op_setCurrentPatch.invoke(self, ((theCurrentPatch, ), _ctx))

        def getPreviousVersion(self, _ctx=None):
            return _M_omero.model.DBPatch._op_getPreviousVersion.invoke(self, ((), _ctx))

        def setPreviousVersion(self, thePreviousVersion, _ctx=None):
            return _M_omero.model.DBPatch._op_setPreviousVersion.invoke(self, ((thePreviousVersion, ), _ctx))

        def getPreviousPatch(self, _ctx=None):
            return _M_omero.model.DBPatch._op_getPreviousPatch.invoke(self, ((), _ctx))

        def setPreviousPatch(self, thePreviousPatch, _ctx=None):
            return _M_omero.model.DBPatch._op_setPreviousPatch.invoke(self, ((thePreviousPatch, ), _ctx))

        def getFinished(self, _ctx=None):
            return _M_omero.model.DBPatch._op_getFinished.invoke(self, ((), _ctx))

        def setFinished(self, theFinished, _ctx=None):
            return _M_omero.model.DBPatch._op_setFinished.invoke(self, ((theFinished, ), _ctx))

        def getMessage(self, _ctx=None):
            return _M_omero.model.DBPatch._op_getMessage.invoke(self, ((), _ctx))

        def setMessage(self, theMessage, _ctx=None):
            return _M_omero.model.DBPatch._op_setMessage.invoke(self, ((theMessage, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.DBPatchPrx.ice_checkedCast(proxy, '::omero::model::DBPatch', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.DBPatchPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_DBPatchPrx = IcePy.defineProxy('::omero::model::DBPatch', DBPatchPrx)

    _M_omero.model._t_DBPatch = IcePy.declareClass('::omero::model::DBPatch')

    _M_omero.model._t_DBPatch = IcePy.defineClass('::omero::model::DBPatch', DBPatch, (), True, _M_omero.model._t_IObject, (), (
        ('_currentVersion', (), _M_omero._t_RString),
        ('_currentPatch', (), _M_omero._t_RInt),
        ('_previousVersion', (), _M_omero._t_RString),
        ('_previousPatch', (), _M_omero._t_RInt),
        ('_finished', (), _M_omero._t_RTime),
        ('_message', (), _M_omero._t_RString)
    ))
    DBPatch.ice_type = _M_omero.model._t_DBPatch

    DBPatch._op_getCurrentVersion = IcePy.Operation('getCurrentVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    DBPatch._op_setCurrentVersion = IcePy.Operation('setCurrentVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    DBPatch._op_getCurrentPatch = IcePy.Operation('getCurrentPatch', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    DBPatch._op_setCurrentPatch = IcePy.Operation('setCurrentPatch', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    DBPatch._op_getPreviousVersion = IcePy.Operation('getPreviousVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    DBPatch._op_setPreviousVersion = IcePy.Operation('setPreviousVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    DBPatch._op_getPreviousPatch = IcePy.Operation('getPreviousPatch', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    DBPatch._op_setPreviousPatch = IcePy.Operation('setPreviousPatch', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    DBPatch._op_getFinished = IcePy.Operation('getFinished', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RTime, ())
    DBPatch._op_setFinished = IcePy.Operation('setFinished', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RTime),), (), None, ())
    DBPatch._op_getMessage = IcePy.Operation('getMessage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    DBPatch._op_setMessage = IcePy.Operation('setMessage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.DBPatch = DBPatch
    del DBPatch

    _M_omero.model.DBPatchPrx = DBPatchPrx
    del DBPatchPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
