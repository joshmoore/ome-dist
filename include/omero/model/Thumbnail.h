// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Thumbnail.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Thumbnail_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Thumbnail_h__

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

class Pixels;

class Details;

class Thumbnail;

}

}

}

namespace omero
{

namespace model
{

class Pixels;
bool operator==(const Pixels&, const Pixels&);
bool operator<(const Pixels&, const Pixels&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class Thumbnail;
bool operator==(const Thumbnail&, const Thumbnail&);
bool operator<(const Thumbnail&, const Thumbnail&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Pixels*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Pixels*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::Thumbnail*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Thumbnail*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Pixels> PixelsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Pixels> PixelsPrx;

void __read(::IceInternal::BasicStream*, PixelsPrx&);
void __patch__PixelsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Thumbnail> ThumbnailPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Thumbnail> ThumbnailPrx;

void __read(::IceInternal::BasicStream*, ThumbnailPrx&);
void __patch__ThumbnailPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Thumbnail : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::model::PixelsPtr getPixels()
    {
        return getPixels(0);
    }
    ::omero::model::PixelsPtr getPixels(const ::Ice::Context& __ctx)
    {
        return getPixels(&__ctx);
    }
    
private:

    ::omero::model::PixelsPtr getPixels(const ::Ice::Context*);
    
public:

    void setPixels(const ::omero::model::PixelsPtr& thePixels)
    {
        setPixels(thePixels, 0);
    }
    void setPixels(const ::omero::model::PixelsPtr& thePixels, const ::Ice::Context& __ctx)
    {
        setPixels(thePixels, &__ctx);
    }
    
private:

    void setPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getMimeType()
    {
        return getMimeType(0);
    }
    ::omero::RStringPtr getMimeType(const ::Ice::Context& __ctx)
    {
        return getMimeType(&__ctx);
    }
    
private:

    ::omero::RStringPtr getMimeType(const ::Ice::Context*);
    
public:

    void setMimeType(const ::omero::RStringPtr& theMimeType)
    {
        setMimeType(theMimeType, 0);
    }
    void setMimeType(const ::omero::RStringPtr& theMimeType, const ::Ice::Context& __ctx)
    {
        setMimeType(theMimeType, &__ctx);
    }
    
private:

    void setMimeType(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getSizeX()
    {
        return getSizeX(0);
    }
    ::omero::RIntPtr getSizeX(const ::Ice::Context& __ctx)
    {
        return getSizeX(&__ctx);
    }
    
private:

    ::omero::RIntPtr getSizeX(const ::Ice::Context*);
    
public:

    void setSizeX(const ::omero::RIntPtr& theSizeX)
    {
        setSizeX(theSizeX, 0);
    }
    void setSizeX(const ::omero::RIntPtr& theSizeX, const ::Ice::Context& __ctx)
    {
        setSizeX(theSizeX, &__ctx);
    }
    
private:

    void setSizeX(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getSizeY()
    {
        return getSizeY(0);
    }
    ::omero::RIntPtr getSizeY(const ::Ice::Context& __ctx)
    {
        return getSizeY(&__ctx);
    }
    
private:

    ::omero::RIntPtr getSizeY(const ::Ice::Context*);
    
public:

    void setSizeY(const ::omero::RIntPtr& theSizeY)
    {
        setSizeY(theSizeY, 0);
    }
    void setSizeY(const ::omero::RIntPtr& theSizeY, const ::Ice::Context& __ctx)
    {
        setSizeY(theSizeY, &__ctx);
    }
    
private:

    void setSizeY(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getRef()
    {
        return getRef(0);
    }
    ::omero::RStringPtr getRef(const ::Ice::Context& __ctx)
    {
        return getRef(&__ctx);
    }
    
private:

    ::omero::RStringPtr getRef(const ::Ice::Context*);
    
public:

    void setRef(const ::omero::RStringPtr& theRef)
    {
        setRef(theRef, 0);
    }
    void setRef(const ::omero::RStringPtr& theRef, const ::Ice::Context& __ctx)
    {
        setRef(theRef, &__ctx);
    }
    
private:

    void setRef(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Thumbnail> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Thumbnail*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Thumbnail*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Thumbnail> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Thumbnail*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Thumbnail*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Thumbnail> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Thumbnail*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Thumbnail*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Thumbnail> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Thumbnail*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Thumbnail*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Thumbnail> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Thumbnail*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Thumbnail*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Thumbnail> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Thumbnail*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Thumbnail*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Thumbnail> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Thumbnail*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Thumbnail*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Thumbnail> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Thumbnail*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Thumbnail*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Thumbnail> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Thumbnail*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Thumbnail*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Thumbnail> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Thumbnail*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Thumbnail*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Thumbnail> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Thumbnail*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Thumbnail*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Thumbnail> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Thumbnail*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Thumbnail*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Thumbnail> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Thumbnail*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Thumbnail*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Thumbnail> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Thumbnail*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Thumbnail*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Thumbnail> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Thumbnail*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Thumbnail*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Thumbnail> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Thumbnail*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Thumbnail*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Thumbnail> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Thumbnail*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Thumbnail*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Thumbnail> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Thumbnail*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Thumbnail*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Thumbnail> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Thumbnail*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Thumbnail*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Thumbnail : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::PixelsPtr getPixels(const ::Ice::Context*) = 0;

    virtual void setPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getMimeType(const ::Ice::Context*) = 0;

    virtual void setMimeType(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getSizeX(const ::Ice::Context*) = 0;

    virtual void setSizeX(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getSizeY(const ::Ice::Context*) = 0;

    virtual void setSizeY(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getRef(const ::Ice::Context*) = 0;

    virtual void setRef(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;
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

class Thumbnail : virtual public ::IceDelegate::omero::model::Thumbnail,
                  virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::PixelsPtr getPixels(const ::Ice::Context*);

    virtual void setPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getMimeType(const ::Ice::Context*);

    virtual void setMimeType(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getSizeX(const ::Ice::Context*);

    virtual void setSizeX(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getSizeY(const ::Ice::Context*);

    virtual void setSizeY(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getRef(const ::Ice::Context*);

    virtual void setRef(const ::omero::RStringPtr&, const ::Ice::Context*);
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

class Thumbnail : virtual public ::IceDelegate::omero::model::Thumbnail,
                  virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::PixelsPtr getPixels(const ::Ice::Context*);

    virtual void setPixels(const ::omero::model::PixelsPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getMimeType(const ::Ice::Context*);

    virtual void setMimeType(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getSizeX(const ::Ice::Context*);

    virtual void setSizeX(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getSizeY(const ::Ice::Context*);

    virtual void setSizeY(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getRef(const ::Ice::Context*);

    virtual void setRef(const ::omero::RStringPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class Thumbnail : virtual public ::omero::model::IObject
{
public:

    typedef ThumbnailPrx ProxyType;
    typedef ThumbnailPtr PointerType;
    
    Thumbnail() {}
    Thumbnail(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::model::PixelsPtr&, const ::omero::RStringPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RStringPtr&);
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

    virtual ::omero::model::PixelsPtr getPixels(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPixels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPixels(const ::omero::model::PixelsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPixels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getMimeType(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMimeType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setMimeType(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setMimeType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getSizeX(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getSizeX(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setSizeX(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setSizeX(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getSizeY(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getSizeY(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setSizeY(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setSizeY(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getRef(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRef(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setRef(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setRef(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::model::PixelsPtr pixels;

    ::omero::RStringPtr mimeType;

    ::omero::RIntPtr sizeX;

    ::omero::RIntPtr sizeY;

    ::omero::RStringPtr ref;
};

}

}

#endif
