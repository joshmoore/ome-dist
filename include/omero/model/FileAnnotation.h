// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `FileAnnotation.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_FileAnnotation_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_FileAnnotation_h__

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
#include <omero/model/TypeAnnotation.h>
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

class OriginalFile;

class AnnotationAnnotationLink;

class Annotation;

class Details;

class FileAnnotation;

}

}

}

namespace omero
{

namespace model
{

class OriginalFile;
bool operator==(const OriginalFile&, const OriginalFile&);
bool operator<(const OriginalFile&, const OriginalFile&);

class AnnotationAnnotationLink;
bool operator==(const AnnotationAnnotationLink&, const AnnotationAnnotationLink&);
bool operator<(const AnnotationAnnotationLink&, const AnnotationAnnotationLink&);

class Annotation;
bool operator==(const Annotation&, const Annotation&);
bool operator<(const Annotation&, const Annotation&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class FileAnnotation;
bool operator==(const FileAnnotation&, const FileAnnotation&);
bool operator<(const FileAnnotation&, const FileAnnotation&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::OriginalFile*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::OriginalFile*);

::Ice::Object* upCast(::omero::model::AnnotationAnnotationLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::AnnotationAnnotationLink*);

::Ice::Object* upCast(::omero::model::Annotation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Annotation*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::FileAnnotation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::FileAnnotation*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::OriginalFile> OriginalFilePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::OriginalFile> OriginalFilePrx;

void __read(::IceInternal::BasicStream*, OriginalFilePrx&);
void __patch__OriginalFilePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::AnnotationAnnotationLink> AnnotationAnnotationLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::AnnotationAnnotationLink> AnnotationAnnotationLinkPrx;

void __read(::IceInternal::BasicStream*, AnnotationAnnotationLinkPrx&);
void __patch__AnnotationAnnotationLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Annotation> AnnotationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Annotation> AnnotationPrx;

void __read(::IceInternal::BasicStream*, AnnotationPrx&);
void __patch__AnnotationPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::FileAnnotation> FileAnnotationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::FileAnnotation> FileAnnotationPrx;

void __read(::IceInternal::BasicStream*, FileAnnotationPrx&);
void __patch__FileAnnotationPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class FileAnnotation : virtual public ::IceProxy::omero::model::TypeAnnotation
{
public:

    ::omero::model::OriginalFilePtr getFile()
    {
        return getFile(0);
    }
    ::omero::model::OriginalFilePtr getFile(const ::Ice::Context& __ctx)
    {
        return getFile(&__ctx);
    }
    
private:

    ::omero::model::OriginalFilePtr getFile(const ::Ice::Context*);
    
public:

    void setFile(const ::omero::model::OriginalFilePtr& theFile)
    {
        setFile(theFile, 0);
    }
    void setFile(const ::omero::model::OriginalFilePtr& theFile, const ::Ice::Context& __ctx)
    {
        setFile(theFile, &__ctx);
    }
    
private:

    void setFile(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<FileAnnotation> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileAnnotation*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<FileAnnotation*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileAnnotation> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileAnnotation*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<FileAnnotation*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileAnnotation> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileAnnotation*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<FileAnnotation*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileAnnotation> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileAnnotation*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<FileAnnotation*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileAnnotation> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileAnnotation*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<FileAnnotation*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileAnnotation> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileAnnotation*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<FileAnnotation*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileAnnotation> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileAnnotation*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<FileAnnotation*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileAnnotation> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileAnnotation*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<FileAnnotation*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileAnnotation> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileAnnotation*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<FileAnnotation*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileAnnotation> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileAnnotation*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<FileAnnotation*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileAnnotation> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileAnnotation*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<FileAnnotation*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileAnnotation> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileAnnotation*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<FileAnnotation*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileAnnotation> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileAnnotation*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<FileAnnotation*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileAnnotation> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileAnnotation*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<FileAnnotation*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileAnnotation> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileAnnotation*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<FileAnnotation*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileAnnotation> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileAnnotation*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<FileAnnotation*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileAnnotation> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileAnnotation*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<FileAnnotation*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileAnnotation> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileAnnotation*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<FileAnnotation*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileAnnotation> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileAnnotation*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<FileAnnotation*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class FileAnnotation : virtual public ::IceDelegate::omero::model::TypeAnnotation
{
public:

    virtual ::omero::model::OriginalFilePtr getFile(const ::Ice::Context*) = 0;

    virtual void setFile(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*) = 0;
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

class FileAnnotation : virtual public ::IceDelegate::omero::model::FileAnnotation,
                       virtual public ::IceDelegateM::omero::model::TypeAnnotation
{
public:

    virtual ::omero::model::OriginalFilePtr getFile(const ::Ice::Context*);

    virtual void setFile(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);
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

class FileAnnotation : virtual public ::IceDelegate::omero::model::FileAnnotation,
                       virtual public ::IceDelegateD::omero::model::TypeAnnotation
{
public:

    virtual ::omero::model::OriginalFilePtr getFile(const ::Ice::Context*);

    virtual void setFile(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class FileAnnotation : virtual public ::omero::model::TypeAnnotation
{
public:

    typedef FileAnnotationPrx ProxyType;
    typedef FileAnnotationPtr PointerType;
    
    FileAnnotation() {}
    FileAnnotation(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::model::AnnotationAnnotationLinksSeq&, bool, const ::omero::sys::CountMap&, const ::omero::model::OriginalFilePtr&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual ::omero::model::OriginalFilePtr getFile(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setFile(const ::omero::model::OriginalFilePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setFile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::model::OriginalFilePtr file;
};

}

}

#endif
