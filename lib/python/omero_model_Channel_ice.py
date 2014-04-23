# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Channel.ice'

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

if not _M_omero.model.__dict__.has_key('StatsInfo'):
    _M_omero.model._t_StatsInfo = IcePy.declareClass('::omero::model::StatsInfo')
    _M_omero.model._t_StatsInfoPrx = IcePy.declareProxy('::omero::model::StatsInfo')

if not _M_omero.model.__dict__.has_key('LogicalChannel'):
    _M_omero.model._t_LogicalChannel = IcePy.declareClass('::omero::model::LogicalChannel')
    _M_omero.model._t_LogicalChannelPrx = IcePy.declareProxy('::omero::model::LogicalChannel')

if not _M_omero.model.__dict__.has_key('Pixels'):
    _M_omero.model._t_Pixels = IcePy.declareClass('::omero::model::Pixels')
    _M_omero.model._t_PixelsPrx = IcePy.declareProxy('::omero::model::Pixels')

if not _M_omero.model.__dict__.has_key('ChannelAnnotationLink'):
    _M_omero.model._t_ChannelAnnotationLink = IcePy.declareClass('::omero::model::ChannelAnnotationLink')
    _M_omero.model._t_ChannelAnnotationLinkPrx = IcePy.declareProxy('::omero::model::ChannelAnnotationLink')

if not _M_omero.model.__dict__.has_key('Annotation'):
    _M_omero.model._t_Annotation = IcePy.declareClass('::omero::model::Annotation')
    _M_omero.model._t_AnnotationPrx = IcePy.declareProxy('::omero::model::Annotation')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('_t_ChannelAnnotationLinksSeq'):
    _M_omero.model._t_ChannelAnnotationLinksSeq = IcePy.defineSequence('::omero::model::ChannelAnnotationLinksSeq', (), _M_omero.model._t_ChannelAnnotationLink)

if not _M_omero.model.__dict__.has_key('_t_ChannelLinkedAnnotationSeq'):
    _M_omero.model._t_ChannelLinkedAnnotationSeq = IcePy.defineSequence('::omero::model::ChannelLinkedAnnotationSeq', (), _M_omero.model._t_Annotation)

if not _M_omero.model.__dict__.has_key('Channel'):
    _M_omero.model.Channel = Ice.createTempClass()
    class Channel(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _statsInfo=None, _red=None, _green=None, _blue=None, _alpha=None, _logicalChannel=None, _pixels=None, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None):
            if __builtin__.type(self) == _M_omero.model.Channel:
                raise RuntimeError('omero.model.Channel is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._statsInfo = _statsInfo
            self._red = _red
            self._green = _green
            self._blue = _blue
            self._alpha = _alpha
            self._logicalChannel = _logicalChannel
            self._pixels = _pixels
            self._annotationLinksSeq = _annotationLinksSeq
            self._annotationLinksLoaded = _annotationLinksLoaded
            self._annotationLinksCountPerOwner = _annotationLinksCountPerOwner

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::Channel', '::omero::model::IObject')

        def ice_id(self, current=None):
            return '::omero::model::Channel'

        def ice_staticId():
            return '::omero::model::Channel'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getStatsInfo(self, current=None):
        # def setStatsInfo(self, theStatsInfo, current=None):
        # def getRed(self, current=None):
        # def setRed(self, theRed, current=None):
        # def getGreen(self, current=None):
        # def setGreen(self, theGreen, current=None):
        # def getBlue(self, current=None):
        # def setBlue(self, theBlue, current=None):
        # def getAlpha(self, current=None):
        # def setAlpha(self, theAlpha, current=None):
        # def getLogicalChannel(self, current=None):
        # def setLogicalChannel(self, theLogicalChannel, current=None):
        # def getPixels(self, current=None):
        # def setPixels(self, thePixels, current=None):
        # def unloadAnnotationLinks(self, current=None):
        # def sizeOfAnnotationLinks(self, current=None):
        # def copyAnnotationLinks(self, current=None):
        # def addChannelAnnotationLink(self, target, current=None):
        # def addAllChannelAnnotationLinkSet(self, targets, current=None):
        # def removeChannelAnnotationLink(self, theTarget, current=None):
        # def removeAllChannelAnnotationLinkSet(self, targets, current=None):
        # def clearAnnotationLinks(self, current=None):
        # def reloadAnnotationLinks(self, toCopy, current=None):
        # def getAnnotationLinksCountPerOwner(self, current=None):
        # def linkAnnotation(self, addition, current=None):
        # def addChannelAnnotationLinkToBoth(self, link, bothSides, current=None):
        # def findChannelAnnotationLink(self, removal, current=None):
        # def unlinkAnnotation(self, removal, current=None):
        # def removeChannelAnnotationLinkFromBoth(self, link, bothSides, current=None):
        # def linkedAnnotationList(self, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Channel)

        __repr__ = __str__

    _M_omero.model.ChannelPrx = Ice.createTempClass()
    class ChannelPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.Channel._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.Channel._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getStatsInfo(self, _ctx=None):
            return _M_omero.model.Channel._op_getStatsInfo.invoke(self, ((), _ctx))

        def setStatsInfo(self, theStatsInfo, _ctx=None):
            return _M_omero.model.Channel._op_setStatsInfo.invoke(self, ((theStatsInfo, ), _ctx))

        def getRed(self, _ctx=None):
            return _M_omero.model.Channel._op_getRed.invoke(self, ((), _ctx))

        def setRed(self, theRed, _ctx=None):
            return _M_omero.model.Channel._op_setRed.invoke(self, ((theRed, ), _ctx))

        def getGreen(self, _ctx=None):
            return _M_omero.model.Channel._op_getGreen.invoke(self, ((), _ctx))

        def setGreen(self, theGreen, _ctx=None):
            return _M_omero.model.Channel._op_setGreen.invoke(self, ((theGreen, ), _ctx))

        def getBlue(self, _ctx=None):
            return _M_omero.model.Channel._op_getBlue.invoke(self, ((), _ctx))

        def setBlue(self, theBlue, _ctx=None):
            return _M_omero.model.Channel._op_setBlue.invoke(self, ((theBlue, ), _ctx))

        def getAlpha(self, _ctx=None):
            return _M_omero.model.Channel._op_getAlpha.invoke(self, ((), _ctx))

        def setAlpha(self, theAlpha, _ctx=None):
            return _M_omero.model.Channel._op_setAlpha.invoke(self, ((theAlpha, ), _ctx))

        def getLogicalChannel(self, _ctx=None):
            return _M_omero.model.Channel._op_getLogicalChannel.invoke(self, ((), _ctx))

        def setLogicalChannel(self, theLogicalChannel, _ctx=None):
            return _M_omero.model.Channel._op_setLogicalChannel.invoke(self, ((theLogicalChannel, ), _ctx))

        def getPixels(self, _ctx=None):
            return _M_omero.model.Channel._op_getPixels.invoke(self, ((), _ctx))

        def setPixels(self, thePixels, _ctx=None):
            return _M_omero.model.Channel._op_setPixels.invoke(self, ((thePixels, ), _ctx))

        def unloadAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Channel._op_unloadAnnotationLinks.invoke(self, ((), _ctx))

        def sizeOfAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Channel._op_sizeOfAnnotationLinks.invoke(self, ((), _ctx))

        def copyAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Channel._op_copyAnnotationLinks.invoke(self, ((), _ctx))

        def addChannelAnnotationLink(self, target, _ctx=None):
            return _M_omero.model.Channel._op_addChannelAnnotationLink.invoke(self, ((target, ), _ctx))

        def addAllChannelAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Channel._op_addAllChannelAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def removeChannelAnnotationLink(self, theTarget, _ctx=None):
            return _M_omero.model.Channel._op_removeChannelAnnotationLink.invoke(self, ((theTarget, ), _ctx))

        def removeAllChannelAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Channel._op_removeAllChannelAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def clearAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Channel._op_clearAnnotationLinks.invoke(self, ((), _ctx))

        def reloadAnnotationLinks(self, toCopy, _ctx=None):
            return _M_omero.model.Channel._op_reloadAnnotationLinks.invoke(self, ((toCopy, ), _ctx))

        def getAnnotationLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.Channel._op_getAnnotationLinksCountPerOwner.invoke(self, ((), _ctx))

        def linkAnnotation(self, addition, _ctx=None):
            return _M_omero.model.Channel._op_linkAnnotation.invoke(self, ((addition, ), _ctx))

        def addChannelAnnotationLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Channel._op_addChannelAnnotationLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def findChannelAnnotationLink(self, removal, _ctx=None):
            return _M_omero.model.Channel._op_findChannelAnnotationLink.invoke(self, ((removal, ), _ctx))

        def unlinkAnnotation(self, removal, _ctx=None):
            return _M_omero.model.Channel._op_unlinkAnnotation.invoke(self, ((removal, ), _ctx))

        def removeChannelAnnotationLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Channel._op_removeChannelAnnotationLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def linkedAnnotationList(self, _ctx=None):
            return _M_omero.model.Channel._op_linkedAnnotationList.invoke(self, ((), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.ChannelPrx.ice_checkedCast(proxy, '::omero::model::Channel', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.ChannelPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_ChannelPrx = IcePy.defineProxy('::omero::model::Channel', ChannelPrx)

    _M_omero.model._t_Channel = IcePy.declareClass('::omero::model::Channel')

    _M_omero.model._t_Channel = IcePy.defineClass('::omero::model::Channel', Channel, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_statsInfo', (), _M_omero.model._t_StatsInfo),
        ('_red', (), _M_omero._t_RInt),
        ('_green', (), _M_omero._t_RInt),
        ('_blue', (), _M_omero._t_RInt),
        ('_alpha', (), _M_omero._t_RInt),
        ('_logicalChannel', (), _M_omero.model._t_LogicalChannel),
        ('_pixels', (), _M_omero.model._t_Pixels),
        ('_annotationLinksSeq', (), _M_omero.model._t_ChannelAnnotationLinksSeq),
        ('_annotationLinksLoaded', (), IcePy._t_bool),
        ('_annotationLinksCountPerOwner', (), _M_omero.sys._t_CountMap)
    ))
    Channel.ice_type = _M_omero.model._t_Channel

    Channel._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Channel._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Channel._op_getStatsInfo = IcePy.Operation('getStatsInfo', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_StatsInfo, ())
    Channel._op_setStatsInfo = IcePy.Operation('setStatsInfo', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_StatsInfo),), (), None, ())
    Channel._op_getRed = IcePy.Operation('getRed', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Channel._op_setRed = IcePy.Operation('setRed', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Channel._op_getGreen = IcePy.Operation('getGreen', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Channel._op_setGreen = IcePy.Operation('setGreen', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Channel._op_getBlue = IcePy.Operation('getBlue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Channel._op_setBlue = IcePy.Operation('setBlue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Channel._op_getAlpha = IcePy.Operation('getAlpha', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Channel._op_setAlpha = IcePy.Operation('setAlpha', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Channel._op_getLogicalChannel = IcePy.Operation('getLogicalChannel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_LogicalChannel, ())
    Channel._op_setLogicalChannel = IcePy.Operation('setLogicalChannel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_LogicalChannel),), (), None, ())
    Channel._op_getPixels = IcePy.Operation('getPixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Pixels, ())
    Channel._op_setPixels = IcePy.Operation('setPixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Pixels),), (), None, ())
    Channel._op_unloadAnnotationLinks = IcePy.Operation('unloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Channel._op_sizeOfAnnotationLinks = IcePy.Operation('sizeOfAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    Channel._op_copyAnnotationLinks = IcePy.Operation('copyAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ChannelAnnotationLinksSeq, ())
    Channel._op_addChannelAnnotationLink = IcePy.Operation('addChannelAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ChannelAnnotationLink),), (), None, ())
    Channel._op_addAllChannelAnnotationLinkSet = IcePy.Operation('addAllChannelAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ChannelAnnotationLinksSeq),), (), None, ())
    Channel._op_removeChannelAnnotationLink = IcePy.Operation('removeChannelAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ChannelAnnotationLink),), (), None, ())
    Channel._op_removeAllChannelAnnotationLinkSet = IcePy.Operation('removeAllChannelAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ChannelAnnotationLinksSeq),), (), None, ())
    Channel._op_clearAnnotationLinks = IcePy.Operation('clearAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    Channel._op_reloadAnnotationLinks = IcePy.Operation('reloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Channel),), (), None, ())
    Channel._op_getAnnotationLinksCountPerOwner = IcePy.Operation('getAnnotationLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.sys._t_CountMap, ())
    Channel._op_linkAnnotation = IcePy.Operation('linkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_ChannelAnnotationLink, ())
    Channel._op_addChannelAnnotationLinkToBoth = IcePy.Operation('addChannelAnnotationLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ChannelAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Channel._op_findChannelAnnotationLink = IcePy.Operation('findChannelAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), _M_omero.model._t_ChannelAnnotationLinksSeq, ())
    Channel._op_unlinkAnnotation = IcePy.Operation('unlinkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), None, ())
    Channel._op_removeChannelAnnotationLinkFromBoth = IcePy.Operation('removeChannelAnnotationLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ChannelAnnotationLink), ((), IcePy._t_bool)), (), None, ())
    Channel._op_linkedAnnotationList = IcePy.Operation('linkedAnnotationList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ChannelLinkedAnnotationSeq, ())

    _M_omero.model.Channel = Channel
    del Channel

    _M_omero.model.ChannelPrx = ChannelPrx
    del ChannelPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
