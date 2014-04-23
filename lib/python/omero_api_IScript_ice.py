# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `IScript.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_ServicesF_ice
import omero_Scripts_ice

# Included module Ice
_M_Ice = Ice.openModule('Ice')

# Included module Glacier2
_M_Glacier2 = Ice.openModule('Glacier2')

# Included module omero
_M_omero = Ice.openModule('omero')

# Included module omero.model
_M_omero.model = Ice.openModule('omero.model')

# Included module omero.sys
_M_omero.sys = Ice.openModule('omero.sys')

# Included module omero.api
_M_omero.api = Ice.openModule('omero.api')

# Included module omero.grid
_M_omero.grid = Ice.openModule('omero.grid')

# Start of module omero
__name__ = 'omero'

# Start of module omero.api
__name__ = 'omero.api'

if not _M_omero.api.__dict__.has_key('IScript'):
    _M_omero.api.IScript = Ice.createTempClass()
    class IScript(_M_omero.api.ServiceInterface):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.api.IScript:
                raise RuntimeError('omero.api.IScript is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::IScript', '::omero::api::ServiceInterface')

        def ice_id(self, current=None):
            return '::omero::api::IScript'

        def ice_staticId():
            return '::omero::api::IScript'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getScripts_async(self, _cb, current=None):
        # def getUserScripts_async(self, _cb, acceptsList, current=None):
        # def getScriptID_async(self, _cb, path, current=None):
        # def getScriptText_async(self, _cb, scriptID, current=None):
        # def uploadScript_async(self, _cb, path, scriptText, current=None):
        # def uploadOfficialScript_async(self, _cb, path, scriptText, current=None):
        # def editScript_async(self, _cb, fileObject, scriptText, current=None):
        # def getScriptWithDetails_async(self, _cb, scriptID, current=None):
        # def getParams_async(self, _cb, scriptID, current=None):
        # def deleteScript_async(self, _cb, scriptID, current=None):
        # def runScript_async(self, _cb, scriptID, inputs, waitSecs, current=None):
        # def canRunScript_async(self, _cb, scriptID, current=None):
        # def validateScript_async(self, _cb, j, acceptsList, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_IScript)

        __repr__ = __str__

    _M_omero.api.IScriptPrx = Ice.createTempClass()
    class IScriptPrx(_M_omero.api.ServiceInterfacePrx):

        def getScripts(self, _ctx=None):
            return _M_omero.api.IScript._op_getScripts.invoke(self, ((), _ctx))

        def getScripts_async(self, _cb, _ctx=None):
            return _M_omero.api.IScript._op_getScripts.invokeAsync(self, (_cb, (), _ctx))

        def getUserScripts(self, acceptsList, _ctx=None):
            return _M_omero.api.IScript._op_getUserScripts.invoke(self, ((acceptsList, ), _ctx))

        def getUserScripts_async(self, _cb, acceptsList, _ctx=None):
            return _M_omero.api.IScript._op_getUserScripts.invokeAsync(self, (_cb, (acceptsList, ), _ctx))

        def getScriptID(self, path, _ctx=None):
            return _M_omero.api.IScript._op_getScriptID.invoke(self, ((path, ), _ctx))

        def getScriptID_async(self, _cb, path, _ctx=None):
            return _M_omero.api.IScript._op_getScriptID.invokeAsync(self, (_cb, (path, ), _ctx))

        def getScriptText(self, scriptID, _ctx=None):
            return _M_omero.api.IScript._op_getScriptText.invoke(self, ((scriptID, ), _ctx))

        def getScriptText_async(self, _cb, scriptID, _ctx=None):
            return _M_omero.api.IScript._op_getScriptText.invokeAsync(self, (_cb, (scriptID, ), _ctx))

        def uploadScript(self, path, scriptText, _ctx=None):
            return _M_omero.api.IScript._op_uploadScript.invoke(self, ((path, scriptText), _ctx))

        def uploadScript_async(self, _cb, path, scriptText, _ctx=None):
            return _M_omero.api.IScript._op_uploadScript.invokeAsync(self, (_cb, (path, scriptText), _ctx))

        def uploadOfficialScript(self, path, scriptText, _ctx=None):
            return _M_omero.api.IScript._op_uploadOfficialScript.invoke(self, ((path, scriptText), _ctx))

        def uploadOfficialScript_async(self, _cb, path, scriptText, _ctx=None):
            return _M_omero.api.IScript._op_uploadOfficialScript.invokeAsync(self, (_cb, (path, scriptText), _ctx))

        def editScript(self, fileObject, scriptText, _ctx=None):
            return _M_omero.api.IScript._op_editScript.invoke(self, ((fileObject, scriptText), _ctx))

        def editScript_async(self, _cb, fileObject, scriptText, _ctx=None):
            return _M_omero.api.IScript._op_editScript.invokeAsync(self, (_cb, (fileObject, scriptText), _ctx))

        def getScriptWithDetails(self, scriptID, _ctx=None):
            return _M_omero.api.IScript._op_getScriptWithDetails.invoke(self, ((scriptID, ), _ctx))

        def getScriptWithDetails_async(self, _cb, scriptID, _ctx=None):
            return _M_omero.api.IScript._op_getScriptWithDetails.invokeAsync(self, (_cb, (scriptID, ), _ctx))

        def getParams(self, scriptID, _ctx=None):
            return _M_omero.api.IScript._op_getParams.invoke(self, ((scriptID, ), _ctx))

        def getParams_async(self, _cb, scriptID, _ctx=None):
            return _M_omero.api.IScript._op_getParams.invokeAsync(self, (_cb, (scriptID, ), _ctx))

        def deleteScript(self, scriptID, _ctx=None):
            return _M_omero.api.IScript._op_deleteScript.invoke(self, ((scriptID, ), _ctx))

        def deleteScript_async(self, _cb, scriptID, _ctx=None):
            return _M_omero.api.IScript._op_deleteScript.invokeAsync(self, (_cb, (scriptID, ), _ctx))

        def runScript(self, scriptID, inputs, waitSecs, _ctx=None):
            return _M_omero.api.IScript._op_runScript.invoke(self, ((scriptID, inputs, waitSecs), _ctx))

        def runScript_async(self, _cb, scriptID, inputs, waitSecs, _ctx=None):
            return _M_omero.api.IScript._op_runScript.invokeAsync(self, (_cb, (scriptID, inputs, waitSecs), _ctx))

        def canRunScript(self, scriptID, _ctx=None):
            return _M_omero.api.IScript._op_canRunScript.invoke(self, ((scriptID, ), _ctx))

        def canRunScript_async(self, _cb, scriptID, _ctx=None):
            return _M_omero.api.IScript._op_canRunScript.invokeAsync(self, (_cb, (scriptID, ), _ctx))

        def validateScript(self, j, acceptsList, _ctx=None):
            return _M_omero.api.IScript._op_validateScript.invoke(self, ((j, acceptsList), _ctx))

        def validateScript_async(self, _cb, j, acceptsList, _ctx=None):
            return _M_omero.api.IScript._op_validateScript.invokeAsync(self, (_cb, (j, acceptsList), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.IScriptPrx.ice_checkedCast(proxy, '::omero::api::IScript', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.IScriptPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_IScriptPrx = IcePy.defineProxy('::omero::api::IScript', IScriptPrx)

    _M_omero.api._t_IScript = IcePy.defineClass('::omero::api::IScript', IScript, (), True, None, (_M_omero.api._t_ServiceInterface,), ())
    IScript.ice_type = _M_omero.api._t_IScript

    IScript._op_getScripts = IcePy.Operation('getScripts', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (), (), _M_omero.api._t_OriginalFileList, (_M_omero._t_ServerError,))
    IScript._op_getUserScripts = IcePy.Operation('getUserScripts', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.api._t_IObjectList),), (), _M_omero.api._t_OriginalFileList, (_M_omero._t_ServerError,))
    IScript._op_getScriptID = IcePy.Operation('getScriptID', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string),), (), IcePy._t_long, (_M_omero._t_ServerError,))
    IScript._op_getScriptText = IcePy.Operation('getScriptText', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_long),), (), IcePy._t_string, (_M_omero._t_ServerError,))
    IScript._op_uploadScript = IcePy.Operation('uploadScript', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string), ((), IcePy._t_string)), (), IcePy._t_long, (_M_omero._t_ServerError,))
    IScript._op_uploadOfficialScript = IcePy.Operation('uploadOfficialScript', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_string), ((), IcePy._t_string)), (), IcePy._t_long, (_M_omero._t_ServerError,))
    IScript._op_editScript = IcePy.Operation('editScript', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_OriginalFile), ((), IcePy._t_string)), (), None, (_M_omero._t_ServerError,))
    IScript._op_getScriptWithDetails = IcePy.Operation('getScriptWithDetails', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_long),), (), _M_omero._t_RTypeDict, (_M_omero._t_ServerError,))
    IScript._op_getParams = IcePy.Operation('getParams', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_long),), (), _M_omero.grid._t_JobParams, (_M_omero._t_ServerError,))
    IScript._op_deleteScript = IcePy.Operation('deleteScript', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), None, (_M_omero._t_ServerError,))
    IScript._op_runScript = IcePy.Operation('runScript', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), _M_omero._t_RTypeDict), ((), _M_omero._t_RInt)), (), _M_omero.grid._t_ScriptProcessPrx, (_M_omero._t_ServerError,))
    IScript._op_canRunScript = IcePy.Operation('canRunScript', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long),), (), IcePy._t_bool, (_M_omero._t_ServerError,))
    IScript._op_validateScript = IcePy.Operation('validateScript', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_Job), ((), _M_omero.api._t_IObjectList)), (), _M_omero.model._t_OriginalFile, (_M_omero._t_ServerError,))

    _M_omero.api.IScript = IScript
    del IScript

    _M_omero.api.IScriptPrx = IScriptPrx
    del IScriptPrx

# End of module omero.api

__name__ = 'omero'

# End of module omero
