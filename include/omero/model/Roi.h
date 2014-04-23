// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Roi.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Roi_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Roi_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/Incoming.h>
#include <Ice/Direct.h>
#include <Ice/FactoryTable.h>
#include <Ice/StreamF.h>
#include <omero/model/IObject.h>
#include <omero/RTypes.h>
#include <omero/System.h>
#include <omero/Collections.h>
#include <Ice/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 303
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

namespace IceProxy
{

namespace omero
{

namespace model
{

class Shape;

class Image;

class OriginalFile;

class RoiAnnotationLink;

class Annotation;

class Details;

class Roi;

}

}

}

namespace omero
{

namespace model
{

class Shape;
bool operator==(const Shape&, const Shape&);
bool operator<(const Shape&, const Shape&);

class Image;
bool operator==(const Image&, const Image&);
bool operator<(const Image&, const Image&);

class OriginalFile;
bool operator==(const OriginalFile&, const OriginalFile&);
bool operator<(const OriginalFile&, const OriginalFile&);

class RoiAnnotationLink;
bool operator==(const RoiAnnotationLink&, const RoiAnnotationLink&);
bool operator<(const RoiAnnotationLink&, const RoiAnnotationLink&);

class Annotation;
bool operator==(const Annotation&, const Annotation&);
bool operator<(const Annotation&, const Annotation&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class Roi;
bool operator==(const Roi&, const Roi&);
bool operator<(const Roi&, const Roi&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Shape*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Shape*);

::Ice::Object* upCast(::omero::model::Image*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Image*);

::Ice::Object* upCast(::omero::model::OriginalFile*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::OriginalFile*);

::Ice::Object* upCast(::omero::model::RoiAnnotationLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::RoiAnnotationLink*);

::Ice::Object* upCast(::omero::model::Annotation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Annotation*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::Roi*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Roi*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Shape> ShapePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Shape> ShapePrx;

void __read(::IceInternal::BasicStream*, ShapePrx&);
void __patch__ShapePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Image> ImagePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Image> ImagePrx;

void __read(::IceInternal::BasicStream*, ImagePrx&);
void __patch__ImagePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::OriginalFile> OriginalFilePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::OriginalFile> OriginalFilePrx;

void __read(::IceInternal::BasicStream*, OriginalFilePrx&);
void __patch__OriginalFilePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::RoiAnnotationLink> RoiAnnotationLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::RoiAnnotationLink> RoiAnnotationLinkPrx;

void __read(::IceInternal::BasicStream*, RoiAnnotationLinkPrx&);
void __patch__RoiAnnotationLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Annotation> AnnotationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Annotation> AnnotationPrx;

void __read(::IceInternal::BasicStream*, AnnotationPrx&);
void __patch__AnnotationPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Roi> RoiPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Roi> RoiPrx;

void __read(::IceInternal::BasicStream*, RoiPrx&);
void __patch__RoiPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

typedef ::std::vector< ::omero::model::ShapePtr> RoiShapesSeq;
void __writeRoiShapesSeq(::IceInternal::BasicStream*, const ::omero::model::ShapePtr*, const ::omero::model::ShapePtr*);
void __readRoiShapesSeq(::IceInternal::BasicStream*, RoiShapesSeq&);

typedef ::std::vector< ::omero::model::RoiAnnotationLinkPtr> RoiAnnotationLinksSeq;
void __writeRoiAnnotationLinksSeq(::IceInternal::BasicStream*, const ::omero::model::RoiAnnotationLinkPtr*, const ::omero::model::RoiAnnotationLinkPtr*);
void __readRoiAnnotationLinksSeq(::IceInternal::BasicStream*, RoiAnnotationLinksSeq&);

typedef ::std::vector< ::omero::model::AnnotationPtr> RoiLinkedAnnotationSeq;
void __writeRoiLinkedAnnotationSeq(::IceInternal::BasicStream*, const ::omero::model::AnnotationPtr*, const ::omero::model::AnnotationPtr*);
void __readRoiLinkedAnnotationSeq(::IceInternal::BasicStream*, RoiLinkedAnnotationSeq&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Roi : virtual public ::IceProxy::omero::model::IObject
{
public:

    ::omero::RIntPtr getVersion()
    {
        return getVersion(0);
    }
    ::omero::RIntPtr getVersion(const ::Ice::Context& __ctx)
    {
        return getVersion(&__ctx);
    }
    
private:

    ::omero::RIntPtr getVersion(const ::Ice::Context*);
    
public:

    void setVersion(const ::omero::RIntPtr& theVersion)
    {
        setVersion(theVersion, 0);
    }
    void setVersion(const ::omero::RIntPtr& theVersion, const ::Ice::Context& __ctx)
    {
        setVersion(theVersion, &__ctx);
    }
    
private:

    void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    void unloadShapes()
    {
        unloadShapes(0);
    }
    void unloadShapes(const ::Ice::Context& __ctx)
    {
        unloadShapes(&__ctx);
    }
    
private:

    void unloadShapes(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfShapes()
    {
        return sizeOfShapes(0);
    }
    ::Ice::Int sizeOfShapes(const ::Ice::Context& __ctx)
    {
        return sizeOfShapes(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfShapes(const ::Ice::Context*);
    
public:

    ::omero::model::RoiShapesSeq copyShapes()
    {
        return copyShapes(0);
    }
    ::omero::model::RoiShapesSeq copyShapes(const ::Ice::Context& __ctx)
    {
        return copyShapes(&__ctx);
    }
    
private:

    ::omero::model::RoiShapesSeq copyShapes(const ::Ice::Context*);
    
public:

    void addShape(const ::omero::model::ShapePtr& target)
    {
        addShape(target, 0);
    }
    void addShape(const ::omero::model::ShapePtr& target, const ::Ice::Context& __ctx)
    {
        addShape(target, &__ctx);
    }
    
private:

    void addShape(const ::omero::model::ShapePtr&, const ::Ice::Context*);
    
public:

    void addAllShapeSet(const ::omero::model::RoiShapesSeq& targets)
    {
        addAllShapeSet(targets, 0);
    }
    void addAllShapeSet(const ::omero::model::RoiShapesSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllShapeSet(targets, &__ctx);
    }
    
private:

    void addAllShapeSet(const ::omero::model::RoiShapesSeq&, const ::Ice::Context*);
    
public:

    void removeShape(const ::omero::model::ShapePtr& theTarget)
    {
        removeShape(theTarget, 0);
    }
    void removeShape(const ::omero::model::ShapePtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeShape(theTarget, &__ctx);
    }
    
private:

    void removeShape(const ::omero::model::ShapePtr&, const ::Ice::Context*);
    
public:

    void removeAllShapeSet(const ::omero::model::RoiShapesSeq& targets)
    {
        removeAllShapeSet(targets, 0);
    }
    void removeAllShapeSet(const ::omero::model::RoiShapesSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllShapeSet(targets, &__ctx);
    }
    
private:

    void removeAllShapeSet(const ::omero::model::RoiShapesSeq&, const ::Ice::Context*);
    
public:

    void clearShapes()
    {
        clearShapes(0);
    }
    void clearShapes(const ::Ice::Context& __ctx)
    {
        clearShapes(&__ctx);
    }
    
private:

    void clearShapes(const ::Ice::Context*);
    
public:

    void reloadShapes(const ::omero::model::RoiPtr& toCopy)
    {
        reloadShapes(toCopy, 0);
    }
    void reloadShapes(const ::omero::model::RoiPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadShapes(toCopy, &__ctx);
    }
    
private:

    void reloadShapes(const ::omero::model::RoiPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::ShapePtr getShape(::Ice::Int index)
    {
        return getShape(index, 0);
    }
    ::omero::model::ShapePtr getShape(::Ice::Int index, const ::Ice::Context& __ctx)
    {
        return getShape(index, &__ctx);
    }
    
private:

    ::omero::model::ShapePtr getShape(::Ice::Int, const ::Ice::Context*);
    
public:

    ::omero::model::ShapePtr setShape(::Ice::Int index, const ::omero::model::ShapePtr& theElement)
    {
        return setShape(index, theElement, 0);
    }
    ::omero::model::ShapePtr setShape(::Ice::Int index, const ::omero::model::ShapePtr& theElement, const ::Ice::Context& __ctx)
    {
        return setShape(index, theElement, &__ctx);
    }
    
private:

    ::omero::model::ShapePtr setShape(::Ice::Int, const ::omero::model::ShapePtr&, const ::Ice::Context*);
    
public:

    ::omero::model::ShapePtr getPrimaryShape()
    {
        return getPrimaryShape(0);
    }
    ::omero::model::ShapePtr getPrimaryShape(const ::Ice::Context& __ctx)
    {
        return getPrimaryShape(&__ctx);
    }
    
private:

    ::omero::model::ShapePtr getPrimaryShape(const ::Ice::Context*);
    
public:

    ::omero::model::ShapePtr setPrimaryShape(const ::omero::model::ShapePtr& theElement)
    {
        return setPrimaryShape(theElement, 0);
    }
    ::omero::model::ShapePtr setPrimaryShape(const ::omero::model::ShapePtr& theElement, const ::Ice::Context& __ctx)
    {
        return setPrimaryShape(theElement, &__ctx);
    }
    
private:

    ::omero::model::ShapePtr setPrimaryShape(const ::omero::model::ShapePtr&, const ::Ice::Context*);
    
public:

    ::omero::model::ImagePtr getImage()
    {
        return getImage(0);
    }
    ::omero::model::ImagePtr getImage(const ::Ice::Context& __ctx)
    {
        return getImage(&__ctx);
    }
    
private:

    ::omero::model::ImagePtr getImage(const ::Ice::Context*);
    
public:

    void setImage(const ::omero::model::ImagePtr& theImage)
    {
        setImage(theImage, 0);
    }
    void setImage(const ::omero::model::ImagePtr& theImage, const ::Ice::Context& __ctx)
    {
        setImage(theImage, &__ctx);
    }
    
private:

    void setImage(const ::omero::model::ImagePtr&, const ::Ice::Context*);
    
public:

    ::omero::model::OriginalFilePtr getSource()
    {
        return getSource(0);
    }
    ::omero::model::OriginalFilePtr getSource(const ::Ice::Context& __ctx)
    {
        return getSource(&__ctx);
    }
    
private:

    ::omero::model::OriginalFilePtr getSource(const ::Ice::Context*);
    
public:

    void setSource(const ::omero::model::OriginalFilePtr& theSource)
    {
        setSource(theSource, 0);
    }
    void setSource(const ::omero::model::OriginalFilePtr& theSource, const ::Ice::Context& __ctx)
    {
        setSource(theSource, &__ctx);
    }
    
private:

    void setSource(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);
    
public:

    ::omero::api::StringArray getNamespaces()
    {
        return getNamespaces(0);
    }
    ::omero::api::StringArray getNamespaces(const ::Ice::Context& __ctx)
    {
        return getNamespaces(&__ctx);
    }
    
private:

    ::omero::api::StringArray getNamespaces(const ::Ice::Context*);
    
public:

    void setNamespaces(const ::omero::api::StringArray& theNamespaces)
    {
        setNamespaces(theNamespaces, 0);
    }
    void setNamespaces(const ::omero::api::StringArray& theNamespaces, const ::Ice::Context& __ctx)
    {
        setNamespaces(theNamespaces, &__ctx);
    }
    
private:

    void setNamespaces(const ::omero::api::StringArray&, const ::Ice::Context*);
    
public:

    ::omero::api::StringArrayArray getKeywords()
    {
        return getKeywords(0);
    }
    ::omero::api::StringArrayArray getKeywords(const ::Ice::Context& __ctx)
    {
        return getKeywords(&__ctx);
    }
    
private:

    ::omero::api::StringArrayArray getKeywords(const ::Ice::Context*);
    
public:

    void setKeywords(const ::omero::api::StringArrayArray& theKeywords)
    {
        setKeywords(theKeywords, 0);
    }
    void setKeywords(const ::omero::api::StringArrayArray& theKeywords, const ::Ice::Context& __ctx)
    {
        setKeywords(theKeywords, &__ctx);
    }
    
private:

    void setKeywords(const ::omero::api::StringArrayArray&, const ::Ice::Context*);
    
public:

    void unloadAnnotationLinks()
    {
        unloadAnnotationLinks(0);
    }
    void unloadAnnotationLinks(const ::Ice::Context& __ctx)
    {
        unloadAnnotationLinks(&__ctx);
    }
    
private:

    void unloadAnnotationLinks(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfAnnotationLinks()
    {
        return sizeOfAnnotationLinks(0);
    }
    ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context& __ctx)
    {
        return sizeOfAnnotationLinks(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);
    
public:

    ::omero::model::RoiAnnotationLinksSeq copyAnnotationLinks()
    {
        return copyAnnotationLinks(0);
    }
    ::omero::model::RoiAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context& __ctx)
    {
        return copyAnnotationLinks(&__ctx);
    }
    
private:

    ::omero::model::RoiAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);
    
public:

    void addRoiAnnotationLink(const ::omero::model::RoiAnnotationLinkPtr& target)
    {
        addRoiAnnotationLink(target, 0);
    }
    void addRoiAnnotationLink(const ::omero::model::RoiAnnotationLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addRoiAnnotationLink(target, &__ctx);
    }
    
private:

    void addRoiAnnotationLink(const ::omero::model::RoiAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllRoiAnnotationLinkSet(const ::omero::model::RoiAnnotationLinksSeq& targets)
    {
        addAllRoiAnnotationLinkSet(targets, 0);
    }
    void addAllRoiAnnotationLinkSet(const ::omero::model::RoiAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllRoiAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void addAllRoiAnnotationLinkSet(const ::omero::model::RoiAnnotationLinksSeq&, const ::Ice::Context*);
    
public:

    void removeRoiAnnotationLink(const ::omero::model::RoiAnnotationLinkPtr& theTarget)
    {
        removeRoiAnnotationLink(theTarget, 0);
    }
    void removeRoiAnnotationLink(const ::omero::model::RoiAnnotationLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeRoiAnnotationLink(theTarget, &__ctx);
    }
    
private:

    void removeRoiAnnotationLink(const ::omero::model::RoiAnnotationLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllRoiAnnotationLinkSet(const ::omero::model::RoiAnnotationLinksSeq& targets)
    {
        removeAllRoiAnnotationLinkSet(targets, 0);
    }
    void removeAllRoiAnnotationLinkSet(const ::omero::model::RoiAnnotationLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllRoiAnnotationLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllRoiAnnotationLinkSet(const ::omero::model::RoiAnnotationLinksSeq&, const ::Ice::Context*);
    
public:

    void clearAnnotationLinks()
    {
        clearAnnotationLinks(0);
    }
    void clearAnnotationLinks(const ::Ice::Context& __ctx)
    {
        clearAnnotationLinks(&__ctx);
    }
    
private:

    void clearAnnotationLinks(const ::Ice::Context*);
    
public:

    void reloadAnnotationLinks(const ::omero::model::RoiPtr& toCopy)
    {
        reloadAnnotationLinks(toCopy, 0);
    }
    void reloadAnnotationLinks(const ::omero::model::RoiPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadAnnotationLinks(toCopy, &__ctx);
    }
    
private:

    void reloadAnnotationLinks(const ::omero::model::RoiPtr&, const ::Ice::Context*);
    
public:

    ::omero::sys::CountMap getAnnotationLinksCountPerOwner()
    {
        return getAnnotationLinksCountPerOwner(0);
    }
    ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context& __ctx)
    {
        return getAnnotationLinksCountPerOwner(&__ctx);
    }
    
private:

    ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);
    
public:

    ::omero::model::RoiAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition)
    {
        return linkAnnotation(addition, 0);
    }
    ::omero::model::RoiAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkAnnotation(addition, &__ctx);
    }
    
private:

    ::omero::model::RoiAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
public:

    void addRoiAnnotationLinkToBoth(const ::omero::model::RoiAnnotationLinkPtr& link, bool bothSides)
    {
        addRoiAnnotationLinkToBoth(link, bothSides, 0);
    }
    void addRoiAnnotationLinkToBoth(const ::omero::model::RoiAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addRoiAnnotationLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addRoiAnnotationLinkToBoth(const ::omero::model::RoiAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::RoiAnnotationLinksSeq findRoiAnnotationLink(const ::omero::model::AnnotationPtr& removal)
    {
        return findRoiAnnotationLink(removal, 0);
    }
    ::omero::model::RoiAnnotationLinksSeq findRoiAnnotationLink(const ::omero::model::AnnotationPtr& removal, const ::Ice::Context& __ctx)
    {
        return findRoiAnnotationLink(removal, &__ctx);
    }
    
private:

    ::omero::model::RoiAnnotationLinksSeq findRoiAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
public:

    void unlinkAnnotation(const ::omero::model::AnnotationPtr& removal)
    {
        unlinkAnnotation(removal, 0);
    }
    void unlinkAnnotation(const ::omero::model::AnnotationPtr& removal, const ::Ice::Context& __ctx)
    {
        unlinkAnnotation(removal, &__ctx);
    }
    
private:

    void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);
    
public:

    void removeRoiAnnotationLinkFromBoth(const ::omero::model::RoiAnnotationLinkPtr& link, bool bothSides)
    {
        removeRoiAnnotationLinkFromBoth(link, bothSides, 0);
    }
    void removeRoiAnnotationLinkFromBoth(const ::omero::model::RoiAnnotationLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removeRoiAnnotationLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removeRoiAnnotationLinkFromBoth(const ::omero::model::RoiAnnotationLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::RoiLinkedAnnotationSeq linkedAnnotationList()
    {
        return linkedAnnotationList(0);
    }
    ::omero::model::RoiLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context& __ctx)
    {
        return linkedAnnotationList(&__ctx);
    }
    
private:

    ::omero::model::RoiLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getDescription()
    {
        return getDescription(0);
    }
    ::omero::RStringPtr getDescription(const ::Ice::Context& __ctx)
    {
        return getDescription(&__ctx);
    }
    
private:

    ::omero::RStringPtr getDescription(const ::Ice::Context*);
    
public:

    void setDescription(const ::omero::RStringPtr& theDescription)
    {
        setDescription(theDescription, 0);
    }
    void setDescription(const ::omero::RStringPtr& theDescription, const ::Ice::Context& __ctx)
    {
        setDescription(theDescription, &__ctx);
    }
    
private:

    void setDescription(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Roi> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roi*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Roi*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roi> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roi*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Roi*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roi> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roi*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Roi*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roi> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roi*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Roi*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roi> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roi*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Roi*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roi> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roi*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Roi*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roi> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roi*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Roi*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roi> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roi*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Roi*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roi> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roi*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Roi*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roi> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roi*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Roi*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roi> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roi*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Roi*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roi> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roi*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Roi*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roi> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roi*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Roi*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roi> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roi*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Roi*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roi> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roi*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Roi*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roi> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roi*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Roi*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roi> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roi*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Roi*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roi> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roi*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Roi*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Roi> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Roi*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Roi*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

}

namespace IceDelegate
{

namespace omero
{

namespace model
{

class Roi : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual void unloadShapes(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfShapes(const ::Ice::Context*) = 0;

    virtual ::omero::model::RoiShapesSeq copyShapes(const ::Ice::Context*) = 0;

    virtual void addShape(const ::omero::model::ShapePtr&, const ::Ice::Context*) = 0;

    virtual void addAllShapeSet(const ::omero::model::RoiShapesSeq&, const ::Ice::Context*) = 0;

    virtual void removeShape(const ::omero::model::ShapePtr&, const ::Ice::Context*) = 0;

    virtual void removeAllShapeSet(const ::omero::model::RoiShapesSeq&, const ::Ice::Context*) = 0;

    virtual void clearShapes(const ::Ice::Context*) = 0;

    virtual void reloadShapes(const ::omero::model::RoiPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::ShapePtr getShape(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::omero::model::ShapePtr setShape(::Ice::Int, const ::omero::model::ShapePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::ShapePtr getPrimaryShape(const ::Ice::Context*) = 0;

    virtual ::omero::model::ShapePtr setPrimaryShape(const ::omero::model::ShapePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::ImagePtr getImage(const ::Ice::Context*) = 0;

    virtual void setImage(const ::omero::model::ImagePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::OriginalFilePtr getSource(const ::Ice::Context*) = 0;

    virtual void setSource(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::api::StringArray getNamespaces(const ::Ice::Context*) = 0;

    virtual void setNamespaces(const ::omero::api::StringArray&, const ::Ice::Context*) = 0;

    virtual ::omero::api::StringArrayArray getKeywords(const ::Ice::Context*) = 0;

    virtual void setKeywords(const ::omero::api::StringArrayArray&, const ::Ice::Context*) = 0;

    virtual void unloadAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*) = 0;

    virtual ::omero::model::RoiAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void addRoiAnnotationLink(const ::omero::model::RoiAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllRoiAnnotationLinkSet(const ::omero::model::RoiAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void removeRoiAnnotationLink(const ::omero::model::RoiAnnotationLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllRoiAnnotationLinkSet(const ::omero::model::RoiAnnotationLinksSeq&, const ::Ice::Context*) = 0;

    virtual void clearAnnotationLinks(const ::Ice::Context*) = 0;

    virtual void reloadAnnotationLinks(const ::omero::model::RoiPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::RoiAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void addRoiAnnotationLinkToBoth(const ::omero::model::RoiAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::RoiAnnotationLinksSeq findRoiAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*) = 0;

    virtual void removeRoiAnnotationLinkFromBoth(const ::omero::model::RoiAnnotationLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::RoiLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getDescription(const ::Ice::Context*) = 0;

    virtual void setDescription(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;
};

}

}

}

namespace IceDelegateM
{

namespace omero
{

namespace model
{

class Roi : virtual public ::IceDelegate::omero::model::Roi,
            virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual void unloadShapes(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfShapes(const ::Ice::Context*);

    virtual ::omero::model::RoiShapesSeq copyShapes(const ::Ice::Context*);

    virtual void addShape(const ::omero::model::ShapePtr&, const ::Ice::Context*);

    virtual void addAllShapeSet(const ::omero::model::RoiShapesSeq&, const ::Ice::Context*);

    virtual void removeShape(const ::omero::model::ShapePtr&, const ::Ice::Context*);

    virtual void removeAllShapeSet(const ::omero::model::RoiShapesSeq&, const ::Ice::Context*);

    virtual void clearShapes(const ::Ice::Context*);

    virtual void reloadShapes(const ::omero::model::RoiPtr&, const ::Ice::Context*);

    virtual ::omero::model::ShapePtr getShape(::Ice::Int, const ::Ice::Context*);

    virtual ::omero::model::ShapePtr setShape(::Ice::Int, const ::omero::model::ShapePtr&, const ::Ice::Context*);

    virtual ::omero::model::ShapePtr getPrimaryShape(const ::Ice::Context*);

    virtual ::omero::model::ShapePtr setPrimaryShape(const ::omero::model::ShapePtr&, const ::Ice::Context*);

    virtual ::omero::model::ImagePtr getImage(const ::Ice::Context*);

    virtual void setImage(const ::omero::model::ImagePtr&, const ::Ice::Context*);

    virtual ::omero::model::OriginalFilePtr getSource(const ::Ice::Context*);

    virtual void setSource(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

    virtual ::omero::api::StringArray getNamespaces(const ::Ice::Context*);

    virtual void setNamespaces(const ::omero::api::StringArray&, const ::Ice::Context*);

    virtual ::omero::api::StringArrayArray getKeywords(const ::Ice::Context*);

    virtual void setKeywords(const ::omero::api::StringArrayArray&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::RoiAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addRoiAnnotationLink(const ::omero::model::RoiAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllRoiAnnotationLinkSet(const ::omero::model::RoiAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeRoiAnnotationLink(const ::omero::model::RoiAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllRoiAnnotationLinkSet(const ::omero::model::RoiAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::RoiPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::RoiAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addRoiAnnotationLinkToBoth(const ::omero::model::RoiAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::RoiAnnotationLinksSeq findRoiAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeRoiAnnotationLinkFromBoth(const ::omero::model::RoiAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::RoiLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);

    virtual ::omero::RStringPtr getDescription(const ::Ice::Context*);

    virtual void setDescription(const ::omero::RStringPtr&, const ::Ice::Context*);
};

}

}

}

namespace IceDelegateD
{

namespace omero
{

namespace model
{

class Roi : virtual public ::IceDelegate::omero::model::Roi,
            virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual void unloadShapes(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfShapes(const ::Ice::Context*);

    virtual ::omero::model::RoiShapesSeq copyShapes(const ::Ice::Context*);

    virtual void addShape(const ::omero::model::ShapePtr&, const ::Ice::Context*);

    virtual void addAllShapeSet(const ::omero::model::RoiShapesSeq&, const ::Ice::Context*);

    virtual void removeShape(const ::omero::model::ShapePtr&, const ::Ice::Context*);

    virtual void removeAllShapeSet(const ::omero::model::RoiShapesSeq&, const ::Ice::Context*);

    virtual void clearShapes(const ::Ice::Context*);

    virtual void reloadShapes(const ::omero::model::RoiPtr&, const ::Ice::Context*);

    virtual ::omero::model::ShapePtr getShape(::Ice::Int, const ::Ice::Context*);

    virtual ::omero::model::ShapePtr setShape(::Ice::Int, const ::omero::model::ShapePtr&, const ::Ice::Context*);

    virtual ::omero::model::ShapePtr getPrimaryShape(const ::Ice::Context*);

    virtual ::omero::model::ShapePtr setPrimaryShape(const ::omero::model::ShapePtr&, const ::Ice::Context*);

    virtual ::omero::model::ImagePtr getImage(const ::Ice::Context*);

    virtual void setImage(const ::omero::model::ImagePtr&, const ::Ice::Context*);

    virtual ::omero::model::OriginalFilePtr getSource(const ::Ice::Context*);

    virtual void setSource(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

    virtual ::omero::api::StringArray getNamespaces(const ::Ice::Context*);

    virtual void setNamespaces(const ::omero::api::StringArray&, const ::Ice::Context*);

    virtual ::omero::api::StringArrayArray getKeywords(const ::Ice::Context*);

    virtual void setKeywords(const ::omero::api::StringArrayArray&, const ::Ice::Context*);

    virtual void unloadAnnotationLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Context*);

    virtual ::omero::model::RoiAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Context*);

    virtual void addRoiAnnotationLink(const ::omero::model::RoiAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void addAllRoiAnnotationLinkSet(const ::omero::model::RoiAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void removeRoiAnnotationLink(const ::omero::model::RoiAnnotationLinkPtr&, const ::Ice::Context*);

    virtual void removeAllRoiAnnotationLinkSet(const ::omero::model::RoiAnnotationLinksSeq&, const ::Ice::Context*);

    virtual void clearAnnotationLinks(const ::Ice::Context*);

    virtual void reloadAnnotationLinks(const ::omero::model::RoiPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::RoiAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void addRoiAnnotationLinkToBoth(const ::omero::model::RoiAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::RoiAnnotationLinksSeq findRoiAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Context*);

    virtual void removeRoiAnnotationLinkFromBoth(const ::omero::model::RoiAnnotationLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::RoiLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Context*);

    virtual ::omero::RStringPtr getDescription(const ::Ice::Context*);

    virtual void setDescription(const ::omero::RStringPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class Roi : virtual public ::omero::model::IObject
{
public:

    typedef RoiPrx ProxyType;
    typedef RoiPtr PointerType;
    
    Roi() {}
    Roi(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::model::RoiShapesSeq&, bool, const ::omero::model::ImagePtr&, const ::omero::model::OriginalFilePtr&, const ::omero::api::StringArray&, const ::omero::api::StringArrayArray&, const ::omero::model::RoiAnnotationLinksSeq&, bool, const ::omero::sys::CountMap&, const ::omero::RStringPtr&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual ::omero::RIntPtr getVersion(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getVersion(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setVersion(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadShapes(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadShapes(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfShapes(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfShapes(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::RoiShapesSeq copyShapes(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyShapes(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addShape(const ::omero::model::ShapePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addShape(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllShapeSet(const ::omero::model::RoiShapesSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllShapeSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeShape(const ::omero::model::ShapePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeShape(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllShapeSet(const ::omero::model::RoiShapesSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllShapeSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearShapes(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearShapes(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadShapes(const ::omero::model::RoiPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadShapes(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ShapePtr getShape(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getShape(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ShapePtr setShape(::Ice::Int, const ::omero::model::ShapePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setShape(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ShapePtr getPrimaryShape(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPrimaryShape(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ShapePtr setPrimaryShape(const ::omero::model::ShapePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPrimaryShape(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ImagePtr getImage(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getImage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setImage(const ::omero::model::ImagePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setImage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::OriginalFilePtr getSource(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getSource(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setSource(const ::omero::model::OriginalFilePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setSource(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::StringArray getNamespaces(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getNamespaces(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setNamespaces(const ::omero::api::StringArray&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setNamespaces(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::api::StringArrayArray getKeywords(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getKeywords(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setKeywords(const ::omero::api::StringArrayArray&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setKeywords(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::RoiAnnotationLinksSeq copyAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addRoiAnnotationLink(const ::omero::model::RoiAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addRoiAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllRoiAnnotationLinkSet(const ::omero::model::RoiAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllRoiAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeRoiAnnotationLink(const ::omero::model::RoiAnnotationLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeRoiAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllRoiAnnotationLinkSet(const ::omero::model::RoiAnnotationLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllRoiAnnotationLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearAnnotationLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadAnnotationLinks(const ::omero::model::RoiPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadAnnotationLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getAnnotationLinksCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAnnotationLinksCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::RoiAnnotationLinkPtr linkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addRoiAnnotationLinkToBoth(const ::omero::model::RoiAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addRoiAnnotationLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::RoiAnnotationLinksSeq findRoiAnnotationLink(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findRoiAnnotationLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkAnnotation(const ::omero::model::AnnotationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkAnnotation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeRoiAnnotationLinkFromBoth(const ::omero::model::RoiAnnotationLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeRoiAnnotationLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::RoiLinkedAnnotationSeq linkedAnnotationList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedAnnotationList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getDescription(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getDescription(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setDescription(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setDescription(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::model::RoiShapesSeq shapesSeq;

    bool shapesLoaded;

    ::omero::model::ImagePtr image;

    ::omero::model::OriginalFilePtr source;

    ::omero::api::StringArray namespaces;

    ::omero::api::StringArrayArray keywords;

    ::omero::model::RoiAnnotationLinksSeq annotationLinksSeq;

    bool annotationLinksLoaded;

    ::omero::sys::CountMap annotationLinksCountPerOwner;

    ::omero::RStringPtr description;
};

}

}

#endif
