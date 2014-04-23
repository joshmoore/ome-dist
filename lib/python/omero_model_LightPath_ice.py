# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `LightPath.ice'

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

if not _M_omero.model.__dict__.has_key('LightPathExcitationFilterLink'):
    _M_omero.model._t_LightPathExcitationFilterLink = IcePy.declareClass('::omero::model::LightPathExcitationFilterLink')
    _M_omero.model._t_LightPathExcitationFilterLinkPrx = IcePy.declareProxy('::omero::model::LightPathExcitationFilterLink')

if not _M_omero.model.__dict__.has_key('Filter'):
    _M_omero.model._t_Filter = IcePy.declareClass('::omero::model::Filter')
    _M_omero.model._t_FilterPrx = IcePy.declareProxy('::omero::model::Filter')

if not _M_omero.model.__dict__.has_key('Dichroic'):
    _M_omero.model._t_Dichroic = IcePy.declareClass('::omero::model::Dichroic')
    _M_omero.model._t_DichroicPrx = IcePy.declareProxy('::omero::model::Dichroic')

if not _M_omero.model.__dict__.has_key('LightPathEmissionFilterLink'):
    _M_omero.model._t_LightPathEmissionFilterLink = IcePy.declareClass('::omero::model::LightPathEmissionFilterLink')
    _M_omero.model._t_LightPathEmissionFilterLinkPrx = IcePy.declareProxy('::omero::model::LightPathEmissionFilterLink')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('_t_LightPathExcitationFilterLinkSeq'):
    _M_omero.model._t_LightPathExcitationFilterLinkSeq = IcePy.defineSequence('::omero::model::LightPathExcitationFilterLinkSeq', (), _M_omero.model._t_LightPathExcitationFilterLink)

if not _M_omero.model.__dict__.has_key('_t_LightPathLinkedExcitationFilterSeq'):
    _M_omero.model._t_LightPathLinkedExcitationFilterSeq = IcePy.defineSequence('::omero::model::LightPathLinkedExcitationFilterSeq', (), _M_omero.model._t_Filter)

if not _M_omero.model.__dict__.has_key('_t_LightPathEmissionFilterLinkSeq'):
    _M_omero.model._t_LightPathEmissionFilterLinkSeq = IcePy.defineSequence('::omero::model::LightPathEmissionFilterLinkSeq', (), _M_omero.model._t_LightPathEmissionFilterLink)

if not _M_omero.model.__dict__.has_key('_t_LightPathLinkedEmissionFilterSeq'):
    _M_omero.model._t_LightPathLinkedEmissionFilterSeq = IcePy.defineSequence('::omero::model::LightPathLinkedEmissionFilterSeq', (), _M_omero.model._t_Filter)

if not _M_omero.model.__dict__.has_key('LightPath'):
    _M_omero.model.LightPath = Ice.createTempClass()
    class LightPath(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _excitationFilterLinkSeq=None, _excitationFilterLinkLoaded=False, _excitationFilterLinkCountPerOwner=None, _dichroic=None, _emissionFilterLinkSeq=None, _emissionFilterLinkLoaded=False, _emissionFilterLinkCountPerOwner=None):
            if __builtin__.type(self) == _M_omero.model.LightPath:
                raise RuntimeError('omero.model.LightPath is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._excitationFilterLinkSeq = _excitationFilterLinkSeq
            self._excitationFilterLinkLoaded = _excitationFilterLinkLoaded
            self._excitationFilterLinkCountPerOwner = _excitationFilterLinkCountPerOwner
            self._dichroic = _dichroic
            self._emissionFilterLinkSeq = _emissionFilterLinkSeq
            self._emissionFilterLinkLoaded = _emissionFilterLinkLoaded
            self._emissionFilterLinkCountPerOwner = _emissionFilterLinkCountPerOwner

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::LightPath')

        def ice_id(self, current=None):
            return '::omero::model::LightPath'

        def ice_staticId():
            return '::omero::model::LightPath'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def unloadExcitationFilterLink(self, current=None):
        # def sizeOfExcitationFilterLink(self, current=None):
        # def copyExcitationFilterLink(self, current=None):
        # def addLightPathExcitationFilterLink(self, target, current=None):
        # def addAllLightPathExcitationFilterLinkSet(self, targets, current=None):
        # def removeLightPathExcitationFilterLink(self, theTarget, current=None):
        # def removeAllLightPathExcitationFilterLinkSet(self, targets, current=None):
        # def clearExcitationFilterLink(self, current=None):
        # def reloadExcitationFilterLink(self, toCopy, current=None):
        # def getLightPathExcitationFilterLink(self, index, current=None):
        # def setLightPathExcitationFilterLink(self, index, theElement, current=None):
        # def getPrimaryLightPathExcitationFilterLink(self, current=None):
        # def setPrimaryLightPathExcitationFilterLink(self, theElement, current=None):
        # def getExcitationFilterLinkCountPerOwner(self, current=None):
        # def linkExcitationFilter(self, addition, current=None):
        # def addLightPathExcitationFilterLinkToBoth(self, link, bothSides, current=None):
        # def findLightPathExcitationFilterLink(self, removal, current=None):
        # def unlinkExcitationFilter(self, removal, current=None):
        # def removeLightPathExcitationFilterLinkFromBoth(self, link, bothSides, current=None):
        # def linkedExcitationFilterList(self, current=None):
        # def getDichroic(self, current=None):
        # def setDichroic(self, theDichroic, current=None):
        # def unloadEmissionFilterLink(self, current=None):
        # def sizeOfEmissionFilterLink(self, current=None):
        # def copyEmissionFilterLink(self, current=None):
        # def addLightPathEmissionFilterLink(self, target, current=None):
        # def addAllLightPathEmissionFilterLinkSet(self, targets, current=None):
        # def removeLightPathEmissionFilterLink(self, theTarget, current=None):
        # def removeAllLightPathEmissionFilterLinkSet(self, targets, current=None):
        # def clearEmissionFilterLink(self, current=None):
        # def reloadEmissionFilterLink(self, toCopy, current=None):
        # def getEmissionFilterLinkCountPerOwner(self, current=None):
        # def linkEmissionFilter(self, addition, current=None):
        # def addLightPathEmissionFilterLinkToBoth(self, link, bothSides, current=None):
        # def findLightPathEmissionFilterLink(self, removal, current=None):
        # def unlinkEmissionFilter(self, removal, current=None):
        # def removeLightPathEmissionFilterLinkFromBoth(self, link, bothSides, current=None):
        # def linkedEmissionFilterList(self, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_LightPath)

        __repr__ = __str__

    _M_omero.model.LightPathPrx = Ice.createTempClass()
    class LightPathPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.LightPath._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.LightPath._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def unloadExcitationFilterLink(self, _ctx=None):
            return _M_omero.model.LightPath._op_unloadExcitationFilterLink.invoke(self, ((), _ctx))

        def sizeOfExcitationFilterLink(self, _ctx=None):
            return _M_omero.model.LightPath._op_sizeOfExcitationFilterLink.invoke(self, ((), _ctx))

        def copyExcitationFilterLink(self, _ctx=None):
            return _M_omero.model.LightPath._op_copyExcitationFilterLink.invoke(self, ((), _ctx))

        def addLightPathExcitationFilterLink(self, target, _ctx=None):
            return _M_omero.model.LightPath._op_addLightPathExcitationFilterLink.invoke(self, ((target, ), _ctx))

        def addAllLightPathExcitationFilterLinkSet(self, targets, _ctx=None):
            return _M_omero.model.LightPath._op_addAllLightPathExcitationFilterLinkSet.invoke(self, ((targets, ), _ctx))

        def removeLightPathExcitationFilterLink(self, theTarget, _ctx=None):
            return _M_omero.model.LightPath._op_removeLightPathExcitationFilterLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllLightPathExcitationFilterLinkSet(self, targets, _ctx=None):
            return _M_omero.model.LightPath._op_removeAllLightPathExcitationFilterLinkSet.invoke(self, ((targets, ), _ctx))

        def clearExcitationFilterLink(self, _ctx=None):
            return _M_omero.model.LightPath._op_clearExcitationFilterLink.invoke(self, ((), _ctx))

        def reloadExcitationFilterLink(self, toCopy, _ctx=None):
            return _M_omero.model.LightPath._op_reloadExcitationFilterLink.invoke(self, ((toCopy, ), _ctx))

        def getLightPathExcitationFilterLink(self, index, _ctx=None):
            return _M_omero.model.LightPath._op_getLightPathExcitationFilterLink.invoke(self, ((index, ), _ctx))

        def setLightPathExcitationFilterLink(self, index, theElement, _ctx=None):
            return _M_omero.model.LightPath._op_setLightPathExcitationFilterLink.invoke(self, ((index, theElement), _ctx))

        def getPrimaryLightPathExcitationFilterLink(self, _ctx=None):
            return _M_omero.model.LightPath._op_getPrimaryLightPathExcitationFilterLink.invoke(self, ((), _ctx))

        def setPrimaryLightPathExcitationFilterLink(self, theElement, _ctx=None):
            return _M_omero.model.LightPath._op_setPrimaryLightPathExcitationFilterLink.invoke(self, ((theElement, ), _ctx))

        def getExcitationFilterLinkCountPerOwner(self, _ctx=None):
            return _M_omero.model.LightPath._op_getExcitationFilterLinkCountPerOwner.invoke(self, ((), _ctx))

        def linkExcitationFilter(self, addition, _ctx=None):
            return _M_omero.model.LightPath._op_linkExcitationFilter.invoke(self, ((addition, ), _ctx))

        def addLightPathExcitationFilterLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.LightPath._op_addLightPathExcitationFilterLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findLightPathExcitationFilterLink(self, removal, _ctx=None):
            return _M_omero.model.LightPath._op_findLightPathExcitationFilterLink.invoke(self, ((removal, ), _ctx))

        def unlinkExcitationFilter(self, removal, _ctx=None):
            return _M_omero.model.LightPath._op_unlinkExcitationFilter.invoke(self, ((removal, ), _ctx))

        def removeLightPathExcitationFilterLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.LightPath._op_removeLightPathExcitationFilterLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedExcitationFilterList(self, _ctx=None):
            return _M_omero.model.LightPath._op_linkedExcitationFilterList.invoke(self, ((), _ctx))

        def getDichroic(self, _ctx=None):
            return _M_omero.model.LightPath._op_getDichroic.invoke(self, ((), _ctx))

        def setDichroic(self, theDichroic, _ctx=None):
            return _M_omero.model.LightPath._op_setDichroic.invoke(self, ((theDichroic, ), _ctx))

        def unloadEmissionFilterLink(self, _ctx=None):
            return _M_omero.model.LightPath._op_unloadEmissionFilterLink.invoke(self, ((), _ctx))

        def sizeOfEmissionFilterLink(self, _ctx=None):
            return _M_omero.model.LightPath._op_sizeOfEmissionFilterLink.invoke(self, ((), _ctx))

        def copyEmissionFilterLink(self, _ctx=None):
            return _M_omero.model.LightPath._op_copyEmissionFilterLink.invoke(self, ((), _ctx))

        def addLightPathEmissionFilterLink(self, target, _ctx=None):
            return _M_omero.model.LightPath._op_addLightPathEmissionFilterLink.invoke(self, ((target, ), _ctx))

        def addAllLightPathEmissionFilterLinkSet(self, targets, _ctx=None):
            return _M_omero.model.LightPath._op_addAllLightPathEmissionFilterLinkSet.invoke(self, ((targets, ), _ctx))

        def removeLightPathEmissionFilterLink(self, theTarget, _ctx=None):
            return _M_omero.model.LightPath._op_removeLightPathEmissionFilterLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllLightPathEmissionFilterLinkSet(self, targets, _ctx=None):
            return _M_omero.model.LightPath._op_removeAllLightPathEmissionFilterLinkSet.invoke(self, ((targets, ), _ctx))

        def clearEmissionFilterLink(self, _ctx=None):
            return _M_omero.model.LightPath._op_clearEmissionFilterLink.invoke(self, ((), _ctx))

        def reloadEmissionFilterLink(self, toCopy, _ctx=None):
            return _M_omero.model.LightPath._op_reloadEmissionFilterLink.invoke(self, ((toCopy, ), _ctx))

        def getEmissionFilterLinkCountPerOwner(self, _ctx=None):
            return _M_omero.model.LightPath._op_getEmissionFilterLinkCountPerOwner.invoke(self, ((), _ctx))

        def linkEmissionFilter(self, addition, _ctx=None):
            return _M_omero.model.LightPath._op_linkEmissionFilter.invoke(self, ((addition, ), _ctx))

        def addLightPathEmissionFilterLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.LightPath._op_addLightPathEmissionFilterLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findLightPathEmissionFilterLink(self, removal, _ctx=None):
            return _M_omero.model.LightPath._op_findLightPathEmissionFilterLink.invoke(self, ((removal, ), _ctx))

        def unlinkEmissionFilter(self, removal, _ctx=None):
            return _M_omero.model.LightPath._op_unlinkEmissionFilter.invoke(self, ((removal, ), _ctx))

        def removeLightPathEmissionFilterLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.LightPath._op_removeLightPathEmissionFilterLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedEmissionFilterList(self, _ctx=None):
            return _M_omero.model.LightPath._op_linkedEmissionFilterList.invoke(self, ((), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.LightPathPrx.ice_checkedCast(proxy, '::omero::model::LightPath', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.LightPathPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_LightPathPrx = IcePy.defineProxy('::omero::model::LightPath', LightPathPrx)

    _M_omero.model._t_LightPath = IcePy.declareClass('::omero::model::LightPath')

    _M_omero.model._t_LightPath = IcePy.defineClass('::omero::model::LightPath', LightPath, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_excitationFilterLinkSeq', (), _M_omero.model._t_LightPathExcitationFilterLinkSeq),
        ('_excitationFilterLinkLoaded', (), IcePy._t_bool),
        ('_excitationFilterLinkCountPerOwner', (), _M_omero.sys._t_CountMap),
        ('_dichroic', (), _M_omero.model._t_Dichroic),
        ('_emissionFilterLinkSeq', (), _M_omero.model._t_LightPathEmissionFilterLinkSeq),
        ('_emissionFilterLinkLoaded', (), IcePy._t_bool),
        ('_emissionFilterLinkCountPerOwner', (), _M_omero.sys._t_CountMap)
    ))
    LightPath.ice_type = _M_omero.model._t_LightPath

    LightPath._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    LightPath._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    LightPath._op_unloadExcitationFilterLink = IcePy.Operation('unloadExcitationFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    LightPath._op_sizeOfExcitationFilterLink = IcePy.Operation('sizeOfExcitationFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    LightPath._op_copyExcitationFilterLink = IcePy.Operation('copyExcitationFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_LightPathExcitationFilterLinkSeq, ())
    LightPath._op_addLightPathExcitationFilterLink = IcePy.Operation('addLightPathExcitationFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_LightPathExcitationFilterLink),), (), None, ())
    LightPath._op_addAllLightPathExcitationFilterLinkSet = IcePy.Operation('addAllLightPathExcitationFilterLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_LightPathExcitationFilterLinkSeq),), (), None, ())
    LightPath._op_removeLightPathExcitationFilterLink = IcePy.Operation('removeLightPathExcitationFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_LightPathExcitationFilterLink),), (), None, ())
    LightPath._op_removeAllLightPathExcitationFilterLinkSet = IcePy.Operation('removeAllLightPathExcitationFilterLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_LightPathExcitationFilterLinkSeq),), (), None, ())
    LightPath._op_clearExcitationFilterLink = IcePy.Operation('clearExcitationFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    LightPath._op_reloadExcitationFilterLink = IcePy.Operation('reloadExcitationFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_LightPath),), (), None, ())
    LightPath._op_getLightPathExcitationFilterLink = IcePy.Operation('getLightPathExcitationFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int),), (), _M_omero.model._t_LightPathExcitationFilterLink, ())
    LightPath._op_setLightPathExcitationFilterLink = IcePy.Operation('setLightPathExcitationFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int), ((), _M_omero.model._t_LightPathExcitationFilterLink)), (), _M_omero.model._t_LightPathExcitationFilterLink, ())
    LightPath._op_getPrimaryLightPathExcitationFilterLink = IcePy.Operation('getPrimaryLightPathExcitationFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_LightPathExcitationFilterLink, ())
    LightPath._op_setPrimaryLightPathExcitationFilterLink = IcePy.Operation('setPrimaryLightPathExcitationFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_LightPathExcitationFilterLink),), (), _M_omero.model._t_LightPathExcitationFilterLink, ())
    LightPath._op_getExcitationFilterLinkCountPerOwner = IcePy.Operation('getExcitationFilterLinkCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    LightPath._op_linkExcitationFilter = IcePy.Operation('linkExcitationFilter', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Filter),), (), _M_omero.model._t_LightPathExcitationFilterLink, ())
    LightPath._op_addLightPathExcitationFilterLinkToBoth = IcePy.Operation('addLightPathExcitationFilterLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_LightPathExcitationFilterLink), ((), IcePy._t_bool)), (), None, ())
    LightPath._op_findLightPathExcitationFilterLink = IcePy.Operation('findLightPathExcitationFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Filter),), (), _M_omero.model._t_LightPathExcitationFilterLinkSeq, ())
    LightPath._op_unlinkExcitationFilter = IcePy.Operation('unlinkExcitationFilter', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Filter),), (), None, ())
    LightPath._op_removeLightPathExcitationFilterLinkFromBoth = IcePy.Operation('removeLightPathExcitationFilterLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_LightPathExcitationFilterLink), ((), IcePy._t_bool)), (), None, ())
    LightPath._op_linkedExcitationFilterList = IcePy.Operation('linkedExcitationFilterList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_LightPathLinkedExcitationFilterSeq, ())
    LightPath._op_getDichroic = IcePy.Operation('getDichroic', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Dichroic, ())
    LightPath._op_setDichroic = IcePy.Operation('setDichroic', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Dichroic),), (), None, ())
    LightPath._op_unloadEmissionFilterLink = IcePy.Operation('unloadEmissionFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    LightPath._op_sizeOfEmissionFilterLink = IcePy.Operation('sizeOfEmissionFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    LightPath._op_copyEmissionFilterLink = IcePy.Operation('copyEmissionFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_LightPathEmissionFilterLinkSeq, ())
    LightPath._op_addLightPathEmissionFilterLink = IcePy.Operation('addLightPathEmissionFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_LightPathEmissionFilterLink),), (), None, ())
    LightPath._op_addAllLightPathEmissionFilterLinkSet = IcePy.Operation('addAllLightPathEmissionFilterLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_LightPathEmissionFilterLinkSeq),), (), None, ())
    LightPath._op_removeLightPathEmissionFilterLink = IcePy.Operation('removeLightPathEmissionFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_LightPathEmissionFilterLink),), (), None, ())
    LightPath._op_removeAllLightPathEmissionFilterLinkSet = IcePy.Operation('removeAllLightPathEmissionFilterLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_LightPathEmissionFilterLinkSeq),), (), None, ())
    LightPath._op_clearEmissionFilterLink = IcePy.Operation('clearEmissionFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    LightPath._op_reloadEmissionFilterLink = IcePy.Operation('reloadEmissionFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_LightPath),), (), None, ())
    LightPath._op_getEmissionFilterLinkCountPerOwner = IcePy.Operation('getEmissionFilterLinkCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    LightPath._op_linkEmissionFilter = IcePy.Operation('linkEmissionFilter', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Filter),), (), _M_omero.model._t_LightPathEmissionFilterLink, ())
    LightPath._op_addLightPathEmissionFilterLinkToBoth = IcePy.Operation('addLightPathEmissionFilterLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_LightPathEmissionFilterLink), ((), IcePy._t_bool)), (), None, ())
    LightPath._op_findLightPathEmissionFilterLink = IcePy.Operation('findLightPathEmissionFilterLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Filter),), (), _M_omero.model._t_LightPathEmissionFilterLinkSeq, ())
    LightPath._op_unlinkEmissionFilter = IcePy.Operation('unlinkEmissionFilter', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Filter),), (), None, ())
    LightPath._op_removeLightPathEmissionFilterLinkFromBoth = IcePy.Operation('removeLightPathEmissionFilterLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_LightPathEmissionFilterLink), ((), IcePy._t_bool)), (), None, ())
    LightPath._op_linkedEmissionFilterList = IcePy.Operation('linkedEmissionFilterList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_LightPathLinkedEmissionFilterSeq, ())

    _M_omero.model.LightPath = LightPath
    del LightPath

    _M_omero.model.LightPathPrx = LightPathPrx
    del LightPathPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
