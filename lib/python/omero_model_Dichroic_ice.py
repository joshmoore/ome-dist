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
# Generated from file `Dichroic.ice'
#
# Warning: do not edit this file.
#
# </auto-generated>
#

import Ice, IcePy
import omero_model_IObject_ice
import omero_RTypes_ice
import omero_model_RTypes_ice
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

if 'Instrument' not in _M_omero.model.__dict__:
    _M_omero.model._t_Instrument = IcePy.declareClass('::omero::model::Instrument')
    _M_omero.model._t_InstrumentPrx = IcePy.declareProxy('::omero::model::Instrument')

if 'DichroicAnnotationLink' not in _M_omero.model.__dict__:
    _M_omero.model._t_DichroicAnnotationLink = IcePy.declareClass('::omero::model::DichroicAnnotationLink')
    _M_omero.model._t_DichroicAnnotationLinkPrx = IcePy.declareProxy('::omero::model::DichroicAnnotationLink')

if 'Annotation' not in _M_omero.model.__dict__:
    _M_omero.model._t_Annotation = IcePy.declareClass('::omero::model::Annotation')
    _M_omero.model._t_AnnotationPrx = IcePy.declareProxy('::omero::model::Annotation')

if 'Details' not in _M_omero.model.__dict__:
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if '_t_DichroicAnnotationLinksSeq' not in _M_omero.model.__dict__:
    _M_omero.model._t_DichroicAnnotationLinksSeq = IcePy.defineSequence('::omero::model::DichroicAnnotationLinksSeq', (), _M_omero.model._t_DichroicAnnotationLink)

if '_t_DichroicLinkedAnnotationSeq' not in _M_omero.model.__dict__:
    _M_omero.model._t_DichroicLinkedAnnotationSeq = IcePy.defineSequence('::omero::model::DichroicLinkedAnnotationSeq', (), _M_omero.model._t_Annotation)

if 'Dichroic' not in _M_omero.model.__dict__:
    _M_omero.model.Dichroic = Ice.createTempClass()
    class Dichroic(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _manufacturer=None, _model=None, _lotNumber=None, _serialNumber=None, _instrument=None, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None):
            if Ice.getType(self) == _M_omero.model.Dichroic:
                raise RuntimeError('omero.model.Dichroic is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._manufacturer = _manufacturer
            self._model = _model
            self._lotNumber = _lotNumber
            self._serialNumber = _serialNumber
            self._instrument = _instrument
            self._annotationLinksSeq = _annotationLinksSeq
            self._annotationLinksLoaded = _annotationLinksLoaded
            self._annotationLinksCountPerOwner = _annotationLinksCountPerOwner

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::Dichroic', '::omero::model::IObject')

        def ice_id(self, current=None):
            return '::omero::model::Dichroic'

        def ice_staticId():
            return '::omero::model::Dichroic'
        ice_staticId = staticmethod(ice_staticId)

        def getVersion(self, current=None):
            pass

        def setVersion(self, theVersion, current=None):
            pass

        def getManufacturer(self, current=None):
            pass

        def setManufacturer(self, theManufacturer, current=None):
            pass

        def getModel(self, current=None):
            pass

        def setModel(self, theModel, current=None):
            pass

        def getLotNumber(self, current=None):
            pass

        def setLotNumber(self, theLotNumber, current=None):
            pass

        def getSerialNumber(self, current=None):
            pass

        def setSerialNumber(self, theSerialNumber, current=None):
            pass

        def getInstrument(self, current=None):
            pass

        def setInstrument(self, theInstrument, current=None):
            pass

        def unloadAnnotationLinks(self, current=None):
            pass

        def sizeOfAnnotationLinks(self, current=None):
            pass

        def copyAnnotationLinks(self, current=None):
            pass

        def addDichroicAnnotationLink(self, target, current=None):
            pass

        def addAllDichroicAnnotationLinkSet(self, targets, current=None):
            pass

        def removeDichroicAnnotationLink(self, theTarget, current=None):
            pass

        def removeAllDichroicAnnotationLinkSet(self, targets, current=None):
            pass

        def clearAnnotationLinks(self, current=None):
            pass

        def reloadAnnotationLinks(self, toCopy, current=None):
            pass

        def getAnnotationLinksCountPerOwner(self, current=None):
            pass

        def linkAnnotation(self, addition, current=None):
            pass

        def addDichroicAnnotationLinkToBoth(self, link, bothSides, current=None):
            pass

        def findDichroicAnnotationLink(self, removal, current=None):
            pass

        def unlinkAnnotation(self, removal, current=None):
            pass

        def removeDichroicAnnotationLinkFromBoth(self, link, bothSides, current=None):
            pass

        def linkedAnnotationList(self, current=None):
            pass

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Dichroic)

        __repr__ = __str__

    _M_omero.model.DichroicPrx = Ice.createTempClass()
    class DichroicPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.Dichroic._op_getVersion.invoke(self, ((), _ctx))

        def begin_getVersion(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Dichroic._op_getVersion.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_getVersion(self, _r):
            return _M_omero.model.Dichroic._op_getVersion.end(self, _r)

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.Dichroic._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def begin_setVersion(self, theVersion, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Dichroic._op_setVersion.begin(self, ((theVersion, ), _response, _ex, _sent, _ctx))

        def end_setVersion(self, _r):
            return _M_omero.model.Dichroic._op_setVersion.end(self, _r)

        def getManufacturer(self, _ctx=None):
            return _M_omero.model.Dichroic._op_getManufacturer.invoke(self, ((), _ctx))

        def begin_getManufacturer(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Dichroic._op_getManufacturer.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_getManufacturer(self, _r):
            return _M_omero.model.Dichroic._op_getManufacturer.end(self, _r)

        def setManufacturer(self, theManufacturer, _ctx=None):
            return _M_omero.model.Dichroic._op_setManufacturer.invoke(self, ((theManufacturer, ), _ctx))

        def begin_setManufacturer(self, theManufacturer, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Dichroic._op_setManufacturer.begin(self, ((theManufacturer, ), _response, _ex, _sent, _ctx))

        def end_setManufacturer(self, _r):
            return _M_omero.model.Dichroic._op_setManufacturer.end(self, _r)

        def getModel(self, _ctx=None):
            return _M_omero.model.Dichroic._op_getModel.invoke(self, ((), _ctx))

        def begin_getModel(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Dichroic._op_getModel.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_getModel(self, _r):
            return _M_omero.model.Dichroic._op_getModel.end(self, _r)

        def setModel(self, theModel, _ctx=None):
            return _M_omero.model.Dichroic._op_setModel.invoke(self, ((theModel, ), _ctx))

        def begin_setModel(self, theModel, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Dichroic._op_setModel.begin(self, ((theModel, ), _response, _ex, _sent, _ctx))

        def end_setModel(self, _r):
            return _M_omero.model.Dichroic._op_setModel.end(self, _r)

        def getLotNumber(self, _ctx=None):
            return _M_omero.model.Dichroic._op_getLotNumber.invoke(self, ((), _ctx))

        def begin_getLotNumber(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Dichroic._op_getLotNumber.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_getLotNumber(self, _r):
            return _M_omero.model.Dichroic._op_getLotNumber.end(self, _r)

        def setLotNumber(self, theLotNumber, _ctx=None):
            return _M_omero.model.Dichroic._op_setLotNumber.invoke(self, ((theLotNumber, ), _ctx))

        def begin_setLotNumber(self, theLotNumber, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Dichroic._op_setLotNumber.begin(self, ((theLotNumber, ), _response, _ex, _sent, _ctx))

        def end_setLotNumber(self, _r):
            return _M_omero.model.Dichroic._op_setLotNumber.end(self, _r)

        def getSerialNumber(self, _ctx=None):
            return _M_omero.model.Dichroic._op_getSerialNumber.invoke(self, ((), _ctx))

        def begin_getSerialNumber(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Dichroic._op_getSerialNumber.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_getSerialNumber(self, _r):
            return _M_omero.model.Dichroic._op_getSerialNumber.end(self, _r)

        def setSerialNumber(self, theSerialNumber, _ctx=None):
            return _M_omero.model.Dichroic._op_setSerialNumber.invoke(self, ((theSerialNumber, ), _ctx))

        def begin_setSerialNumber(self, theSerialNumber, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Dichroic._op_setSerialNumber.begin(self, ((theSerialNumber, ), _response, _ex, _sent, _ctx))

        def end_setSerialNumber(self, _r):
            return _M_omero.model.Dichroic._op_setSerialNumber.end(self, _r)

        def getInstrument(self, _ctx=None):
            return _M_omero.model.Dichroic._op_getInstrument.invoke(self, ((), _ctx))

        def begin_getInstrument(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Dichroic._op_getInstrument.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_getInstrument(self, _r):
            return _M_omero.model.Dichroic._op_getInstrument.end(self, _r)

        def setInstrument(self, theInstrument, _ctx=None):
            return _M_omero.model.Dichroic._op_setInstrument.invoke(self, ((theInstrument, ), _ctx))

        def begin_setInstrument(self, theInstrument, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Dichroic._op_setInstrument.begin(self, ((theInstrument, ), _response, _ex, _sent, _ctx))

        def end_setInstrument(self, _r):
            return _M_omero.model.Dichroic._op_setInstrument.end(self, _r)

        def unloadAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Dichroic._op_unloadAnnotationLinks.invoke(self, ((), _ctx))

        def begin_unloadAnnotationLinks(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Dichroic._op_unloadAnnotationLinks.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_unloadAnnotationLinks(self, _r):
            return _M_omero.model.Dichroic._op_unloadAnnotationLinks.end(self, _r)

        def sizeOfAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Dichroic._op_sizeOfAnnotationLinks.invoke(self, ((), _ctx))

        def begin_sizeOfAnnotationLinks(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Dichroic._op_sizeOfAnnotationLinks.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_sizeOfAnnotationLinks(self, _r):
            return _M_omero.model.Dichroic._op_sizeOfAnnotationLinks.end(self, _r)

        def copyAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Dichroic._op_copyAnnotationLinks.invoke(self, ((), _ctx))

        def begin_copyAnnotationLinks(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Dichroic._op_copyAnnotationLinks.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_copyAnnotationLinks(self, _r):
            return _M_omero.model.Dichroic._op_copyAnnotationLinks.end(self, _r)

        def addDichroicAnnotationLink(self, target, _ctx=None):
            return _M_omero.model.Dichroic._op_addDichroicAnnotationLink.invoke(self, ((target, ), _ctx))

        def begin_addDichroicAnnotationLink(self, target, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Dichroic._op_addDichroicAnnotationLink.begin(self, ((target, ), _response, _ex, _sent, _ctx))

        def end_addDichroicAnnotationLink(self, _r):
            return _M_omero.model.Dichroic._op_addDichroicAnnotationLink.end(self, _r)

        def addAllDichroicAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Dichroic._op_addAllDichroicAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def begin_addAllDichroicAnnotationLinkSet(self, targets, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Dichroic._op_addAllDichroicAnnotationLinkSet.begin(self, ((targets, ), _response, _ex, _sent, _ctx))

        def end_addAllDichroicAnnotationLinkSet(self, _r):
            return _M_omero.model.Dichroic._op_addAllDichroicAnnotationLinkSet.end(self, _r)

        def removeDichroicAnnotationLink(self, theTarget, _ctx=None):
            return _M_omero.model.Dichroic._op_removeDichroicAnnotationLink.invoke(self, ((theTarget, ), _ctx))

        def begin_removeDichroicAnnotationLink(self, theTarget, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Dichroic._op_removeDichroicAnnotationLink.begin(self, ((theTarget, ), _response, _ex, _sent, _ctx))

        def end_removeDichroicAnnotationLink(self, _r):
            return _M_omero.model.Dichroic._op_removeDichroicAnnotationLink.end(self, _r)

        def removeAllDichroicAnnotationLinkSet(self, targets, _ctx=None):
            return _M_omero.model.Dichroic._op_removeAllDichroicAnnotationLinkSet.invoke(self, ((targets, ), _ctx))

        def begin_removeAllDichroicAnnotationLinkSet(self, targets, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Dichroic._op_removeAllDichroicAnnotationLinkSet.begin(self, ((targets, ), _response, _ex, _sent, _ctx))

        def end_removeAllDichroicAnnotationLinkSet(self, _r):
            return _M_omero.model.Dichroic._op_removeAllDichroicAnnotationLinkSet.end(self, _r)

        def clearAnnotationLinks(self, _ctx=None):
            return _M_omero.model.Dichroic._op_clearAnnotationLinks.invoke(self, ((), _ctx))

        def begin_clearAnnotationLinks(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Dichroic._op_clearAnnotationLinks.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_clearAnnotationLinks(self, _r):
            return _M_omero.model.Dichroic._op_clearAnnotationLinks.end(self, _r)

        def reloadAnnotationLinks(self, toCopy, _ctx=None):
            return _M_omero.model.Dichroic._op_reloadAnnotationLinks.invoke(self, ((toCopy, ), _ctx))

        def begin_reloadAnnotationLinks(self, toCopy, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Dichroic._op_reloadAnnotationLinks.begin(self, ((toCopy, ), _response, _ex, _sent, _ctx))

        def end_reloadAnnotationLinks(self, _r):
            return _M_omero.model.Dichroic._op_reloadAnnotationLinks.end(self, _r)

        def getAnnotationLinksCountPerOwner(self, _ctx=None):
            return _M_omero.model.Dichroic._op_getAnnotationLinksCountPerOwner.invoke(self, ((), _ctx))

        def begin_getAnnotationLinksCountPerOwner(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Dichroic._op_getAnnotationLinksCountPerOwner.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_getAnnotationLinksCountPerOwner(self, _r):
            return _M_omero.model.Dichroic._op_getAnnotationLinksCountPerOwner.end(self, _r)

        def linkAnnotation(self, addition, _ctx=None):
            return _M_omero.model.Dichroic._op_linkAnnotation.invoke(self, ((addition, ), _ctx))

        def begin_linkAnnotation(self, addition, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Dichroic._op_linkAnnotation.begin(self, ((addition, ), _response, _ex, _sent, _ctx))

        def end_linkAnnotation(self, _r):
            return _M_omero.model.Dichroic._op_linkAnnotation.end(self, _r)

        def addDichroicAnnotationLinkToBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Dichroic._op_addDichroicAnnotationLinkToBoth.invoke(self, ((link, bothSides), _ctx))

        def begin_addDichroicAnnotationLinkToBoth(self, link, bothSides, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Dichroic._op_addDichroicAnnotationLinkToBoth.begin(self, ((link, bothSides), _response, _ex, _sent, _ctx))

        def end_addDichroicAnnotationLinkToBoth(self, _r):
            return _M_omero.model.Dichroic._op_addDichroicAnnotationLinkToBoth.end(self, _r)

        def findDichroicAnnotationLink(self, removal, _ctx=None):
            return _M_omero.model.Dichroic._op_findDichroicAnnotationLink.invoke(self, ((removal, ), _ctx))

        def begin_findDichroicAnnotationLink(self, removal, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Dichroic._op_findDichroicAnnotationLink.begin(self, ((removal, ), _response, _ex, _sent, _ctx))

        def end_findDichroicAnnotationLink(self, _r):
            return _M_omero.model.Dichroic._op_findDichroicAnnotationLink.end(self, _r)

        def unlinkAnnotation(self, removal, _ctx=None):
            return _M_omero.model.Dichroic._op_unlinkAnnotation.invoke(self, ((removal, ), _ctx))

        def begin_unlinkAnnotation(self, removal, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Dichroic._op_unlinkAnnotation.begin(self, ((removal, ), _response, _ex, _sent, _ctx))

        def end_unlinkAnnotation(self, _r):
            return _M_omero.model.Dichroic._op_unlinkAnnotation.end(self, _r)

        def removeDichroicAnnotationLinkFromBoth(self, link, bothSides, _ctx=None):
            return _M_omero.model.Dichroic._op_removeDichroicAnnotationLinkFromBoth.invoke(self, ((link, bothSides), _ctx))

        def begin_removeDichroicAnnotationLinkFromBoth(self, link, bothSides, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Dichroic._op_removeDichroicAnnotationLinkFromBoth.begin(self, ((link, bothSides), _response, _ex, _sent, _ctx))

        def end_removeDichroicAnnotationLinkFromBoth(self, _r):
            return _M_omero.model.Dichroic._op_removeDichroicAnnotationLinkFromBoth.end(self, _r)

        def linkedAnnotationList(self, _ctx=None):
            return _M_omero.model.Dichroic._op_linkedAnnotationList.invoke(self, ((), _ctx))

        def begin_linkedAnnotationList(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.Dichroic._op_linkedAnnotationList.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_linkedAnnotationList(self, _r):
            return _M_omero.model.Dichroic._op_linkedAnnotationList.end(self, _r)

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.DichroicPrx.ice_checkedCast(proxy, '::omero::model::Dichroic', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.DichroicPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_DichroicPrx = IcePy.defineProxy('::omero::model::Dichroic', DichroicPrx)

    _M_omero.model._t_Dichroic = IcePy.declareClass('::omero::model::Dichroic')

    _M_omero.model._t_Dichroic = IcePy.defineClass('::omero::model::Dichroic', Dichroic, -1, (), True, False, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt, False, 0),
        ('_manufacturer', (), _M_omero._t_RString, False, 0),
        ('_model', (), _M_omero._t_RString, False, 0),
        ('_lotNumber', (), _M_omero._t_RString, False, 0),
        ('_serialNumber', (), _M_omero._t_RString, False, 0),
        ('_instrument', (), _M_omero.model._t_Instrument, False, 0),
        ('_annotationLinksSeq', (), _M_omero.model._t_DichroicAnnotationLinksSeq, False, 0),
        ('_annotationLinksLoaded', (), IcePy._t_bool, False, 0),
        ('_annotationLinksCountPerOwner', (), _M_omero.sys._t_CountMap, False, 0)
    ))
    Dichroic._ice_type = _M_omero.model._t_Dichroic

    Dichroic._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), _M_omero._t_RInt, False, 0), ())
    Dichroic._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_omero._t_RInt, False, 0),), (), None, ())
    Dichroic._op_getManufacturer = IcePy.Operation('getManufacturer', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), _M_omero._t_RString, False, 0), ())
    Dichroic._op_setManufacturer = IcePy.Operation('setManufacturer', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_omero._t_RString, False, 0),), (), None, ())
    Dichroic._op_getModel = IcePy.Operation('getModel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), _M_omero._t_RString, False, 0), ())
    Dichroic._op_setModel = IcePy.Operation('setModel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_omero._t_RString, False, 0),), (), None, ())
    Dichroic._op_getLotNumber = IcePy.Operation('getLotNumber', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), _M_omero._t_RString, False, 0), ())
    Dichroic._op_setLotNumber = IcePy.Operation('setLotNumber', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_omero._t_RString, False, 0),), (), None, ())
    Dichroic._op_getSerialNumber = IcePy.Operation('getSerialNumber', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), _M_omero._t_RString, False, 0), ())
    Dichroic._op_setSerialNumber = IcePy.Operation('setSerialNumber', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_omero._t_RString, False, 0),), (), None, ())
    Dichroic._op_getInstrument = IcePy.Operation('getInstrument', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), _M_omero.model._t_Instrument, False, 0), ())
    Dichroic._op_setInstrument = IcePy.Operation('setInstrument', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_omero.model._t_Instrument, False, 0),), (), None, ())
    Dichroic._op_unloadAnnotationLinks = IcePy.Operation('unloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), None, ())
    Dichroic._op_sizeOfAnnotationLinks = IcePy.Operation('sizeOfAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), IcePy._t_int, False, 0), ())
    Dichroic._op_copyAnnotationLinks = IcePy.Operation('copyAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), _M_omero.model._t_DichroicAnnotationLinksSeq, False, 0), ())
    Dichroic._op_addDichroicAnnotationLink = IcePy.Operation('addDichroicAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_omero.model._t_DichroicAnnotationLink, False, 0),), (), None, ())
    Dichroic._op_addAllDichroicAnnotationLinkSet = IcePy.Operation('addAllDichroicAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_omero.model._t_DichroicAnnotationLinksSeq, False, 0),), (), None, ())
    Dichroic._op_removeDichroicAnnotationLink = IcePy.Operation('removeDichroicAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_omero.model._t_DichroicAnnotationLink, False, 0),), (), None, ())
    Dichroic._op_removeAllDichroicAnnotationLinkSet = IcePy.Operation('removeAllDichroicAnnotationLinkSet', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_omero.model._t_DichroicAnnotationLinksSeq, False, 0),), (), None, ())
    Dichroic._op_clearAnnotationLinks = IcePy.Operation('clearAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), None, ())
    Dichroic._op_reloadAnnotationLinks = IcePy.Operation('reloadAnnotationLinks', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_omero.model._t_Dichroic, False, 0),), (), None, ())
    Dichroic._op_getAnnotationLinksCountPerOwner = IcePy.Operation('getAnnotationLinksCountPerOwner', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), _M_omero.sys._t_CountMap, False, 0), ())
    Dichroic._op_linkAnnotation = IcePy.Operation('linkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_omero.model._t_Annotation, False, 0),), (), ((), _M_omero.model._t_DichroicAnnotationLink, False, 0), ())
    Dichroic._op_addDichroicAnnotationLinkToBoth = IcePy.Operation('addDichroicAnnotationLinkToBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_omero.model._t_DichroicAnnotationLink, False, 0), ((), IcePy._t_bool, False, 0)), (), None, ())
    Dichroic._op_findDichroicAnnotationLink = IcePy.Operation('findDichroicAnnotationLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_omero.model._t_Annotation, False, 0),), (), ((), _M_omero.model._t_DichroicAnnotationLinksSeq, False, 0), ())
    Dichroic._op_unlinkAnnotation = IcePy.Operation('unlinkAnnotation', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_omero.model._t_Annotation, False, 0),), (), None, ())
    Dichroic._op_removeDichroicAnnotationLinkFromBoth = IcePy.Operation('removeDichroicAnnotationLinkFromBoth', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_omero.model._t_DichroicAnnotationLink, False, 0), ((), IcePy._t_bool, False, 0)), (), None, ())
    Dichroic._op_linkedAnnotationList = IcePy.Operation('linkedAnnotationList', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), _M_omero.model._t_DichroicLinkedAnnotationSeq, False, 0), ())

    _M_omero.model.Dichroic = Dichroic
    del Dichroic

    _M_omero.model.DichroicPrx = DichroicPrx
    del DichroicPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
