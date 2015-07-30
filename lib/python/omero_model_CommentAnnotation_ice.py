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
# Generated from file `CommentAnnotation.ice'
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
import omero_model_TextAnnotation_ice

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

if 'AnnotationAnnotationLink' not in _M_omero.model.__dict__:
    _M_omero.model._t_AnnotationAnnotationLink = IcePy.declareClass('::omero::model::AnnotationAnnotationLink')
    _M_omero.model._t_AnnotationAnnotationLinkPrx = IcePy.declareProxy('::omero::model::AnnotationAnnotationLink')

if 'Annotation' not in _M_omero.model.__dict__:
    _M_omero.model._t_Annotation = IcePy.declareClass('::omero::model::Annotation')
    _M_omero.model._t_AnnotationPrx = IcePy.declareProxy('::omero::model::Annotation')

if 'Details' not in _M_omero.model.__dict__:
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if 'CommentAnnotation' not in _M_omero.model.__dict__:
    _M_omero.model.CommentAnnotation = Ice.createTempClass()
    class CommentAnnotation(_M_omero.model.TextAnnotation):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _ns=None, _name=None, _description=None, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None, _textValue=None):
            if Ice.getType(self) == _M_omero.model.CommentAnnotation:
                raise RuntimeError('omero.model.CommentAnnotation is an abstract class')
            _M_omero.model.TextAnnotation.__init__(self, _id, _details, _loaded, _version, _ns, _name, _description, _annotationLinksSeq, _annotationLinksLoaded, _annotationLinksCountPerOwner, _textValue)

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::Annotation', '::omero::model::CommentAnnotation', '::omero::model::IObject', '::omero::model::TextAnnotation')

        def ice_id(self, current=None):
            return '::omero::model::CommentAnnotation'

        def ice_staticId():
            return '::omero::model::CommentAnnotation'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_CommentAnnotation)

        __repr__ = __str__

    _M_omero.model.CommentAnnotationPrx = Ice.createTempClass()
    class CommentAnnotationPrx(_M_omero.model.TextAnnotationPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.CommentAnnotationPrx.ice_checkedCast(proxy, '::omero::model::CommentAnnotation', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.CommentAnnotationPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_CommentAnnotationPrx = IcePy.defineProxy('::omero::model::CommentAnnotation', CommentAnnotationPrx)

    _M_omero.model._t_CommentAnnotation = IcePy.declareClass('::omero::model::CommentAnnotation')

    _M_omero.model._t_CommentAnnotation = IcePy.defineClass('::omero::model::CommentAnnotation', CommentAnnotation, -1, (), True, False, _M_omero.model._t_TextAnnotation, (), ())
    CommentAnnotation._ice_type = _M_omero.model._t_CommentAnnotation

    _M_omero.model.CommentAnnotation = CommentAnnotation
    del CommentAnnotation

    _M_omero.model.CommentAnnotationPrx = CommentAnnotationPrx
    del CommentAnnotationPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
