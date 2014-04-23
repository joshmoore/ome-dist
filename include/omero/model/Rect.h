// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Rect.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Rect_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Rect_h__

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
#include <omero/model/Shape.h>
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

class Roi;

class Details;

class Rect;

}

}

}

namespace omero
{

namespace model
{

class Roi;
bool operator==(const Roi&, const Roi&);
bool operator<(const Roi&, const Roi&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class Rect;
bool operator==(const Rect&, const Rect&);
bool operator<(const Rect&, const Rect&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Roi*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Roi*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::Rect*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Rect*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Roi> RoiPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Roi> RoiPrx;

void __read(::IceInternal::BasicStream*, RoiPrx&);
void __patch__RoiPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Rect> RectPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Rect> RectPrx;

void __read(::IceInternal::BasicStream*, RectPrx&);
void __patch__RectPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Rect : virtual public ::IceProxy::omero::model::Shape
{
public:

    ::omero::RDoublePtr getX()
    {
        return getX(0);
    }
    ::omero::RDoublePtr getX(const ::Ice::Context& __ctx)
    {
        return getX(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getX(const ::Ice::Context*);
    
public:

    void setX(const ::omero::RDoublePtr& theX)
    {
        setX(theX, 0);
    }
    void setX(const ::omero::RDoublePtr& theX, const ::Ice::Context& __ctx)
    {
        setX(theX, &__ctx);
    }
    
private:

    void setX(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getY()
    {
        return getY(0);
    }
    ::omero::RDoublePtr getY(const ::Ice::Context& __ctx)
    {
        return getY(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getY(const ::Ice::Context*);
    
public:

    void setY(const ::omero::RDoublePtr& theY)
    {
        setY(theY, 0);
    }
    void setY(const ::omero::RDoublePtr& theY, const ::Ice::Context& __ctx)
    {
        setY(theY, &__ctx);
    }
    
private:

    void setY(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getWidth()
    {
        return getWidth(0);
    }
    ::omero::RDoublePtr getWidth(const ::Ice::Context& __ctx)
    {
        return getWidth(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getWidth(const ::Ice::Context*);
    
public:

    void setWidth(const ::omero::RDoublePtr& theWidth)
    {
        setWidth(theWidth, 0);
    }
    void setWidth(const ::omero::RDoublePtr& theWidth, const ::Ice::Context& __ctx)
    {
        setWidth(theWidth, &__ctx);
    }
    
private:

    void setWidth(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getHeight()
    {
        return getHeight(0);
    }
    ::omero::RDoublePtr getHeight(const ::Ice::Context& __ctx)
    {
        return getHeight(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getHeight(const ::Ice::Context*);
    
public:

    void setHeight(const ::omero::RDoublePtr& theHeight)
    {
        setHeight(theHeight, 0);
    }
    void setHeight(const ::omero::RDoublePtr& theHeight, const ::Ice::Context& __ctx)
    {
        setHeight(theHeight, &__ctx);
    }
    
private:

    void setHeight(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getRx()
    {
        return getRx(0);
    }
    ::omero::RDoublePtr getRx(const ::Ice::Context& __ctx)
    {
        return getRx(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getRx(const ::Ice::Context*);
    
public:

    void setRx(const ::omero::RDoublePtr& theRx)
    {
        setRx(theRx, 0);
    }
    void setRx(const ::omero::RDoublePtr& theRx, const ::Ice::Context& __ctx)
    {
        setRx(theRx, &__ctx);
    }
    
private:

    void setRx(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getTextValue()
    {
        return getTextValue(0);
    }
    ::omero::RStringPtr getTextValue(const ::Ice::Context& __ctx)
    {
        return getTextValue(&__ctx);
    }
    
private:

    ::omero::RStringPtr getTextValue(const ::Ice::Context*);
    
public:

    void setTextValue(const ::omero::RStringPtr& theTextValue)
    {
        setTextValue(theTextValue, 0);
    }
    void setTextValue(const ::omero::RStringPtr& theTextValue, const ::Ice::Context& __ctx)
    {
        setTextValue(theTextValue, &__ctx);
    }
    
private:

    void setTextValue(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Rect> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Rect*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Rect*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Rect> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Rect*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Rect*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Rect> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Rect*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Rect*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Rect> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Rect*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Rect*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Rect> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Rect*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Rect*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Rect> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Rect*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Rect*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Rect> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Rect*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Rect*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Rect> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Rect*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Rect*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Rect> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Rect*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Rect*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Rect> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Rect*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Rect*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Rect> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Rect*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Rect*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Rect> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Rect*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Rect*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Rect> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Rect*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Rect*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Rect> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Rect*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Rect*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Rect> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Rect*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Rect*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Rect> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Rect*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Rect*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Rect> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Rect*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Rect*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Rect> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Rect*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Rect*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Rect> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Rect*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Rect*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Rect : virtual public ::IceDelegate::omero::model::Shape
{
public:

    virtual ::omero::RDoublePtr getX(const ::Ice::Context*) = 0;

    virtual void setX(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getY(const ::Ice::Context*) = 0;

    virtual void setY(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getWidth(const ::Ice::Context*) = 0;

    virtual void setWidth(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getHeight(const ::Ice::Context*) = 0;

    virtual void setHeight(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getRx(const ::Ice::Context*) = 0;

    virtual void setRx(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getTextValue(const ::Ice::Context*) = 0;

    virtual void setTextValue(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;
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

class Rect : virtual public ::IceDelegate::omero::model::Rect,
             virtual public ::IceDelegateM::omero::model::Shape
{
public:

    virtual ::omero::RDoublePtr getX(const ::Ice::Context*);

    virtual void setX(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getY(const ::Ice::Context*);

    virtual void setY(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getWidth(const ::Ice::Context*);

    virtual void setWidth(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getHeight(const ::Ice::Context*);

    virtual void setHeight(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getRx(const ::Ice::Context*);

    virtual void setRx(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getTextValue(const ::Ice::Context*);

    virtual void setTextValue(const ::omero::RStringPtr&, const ::Ice::Context*);
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

class Rect : virtual public ::IceDelegate::omero::model::Rect,
             virtual public ::IceDelegateD::omero::model::Shape
{
public:

    virtual ::omero::RDoublePtr getX(const ::Ice::Context*);

    virtual void setX(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getY(const ::Ice::Context*);

    virtual void setY(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getWidth(const ::Ice::Context*);

    virtual void setWidth(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getHeight(const ::Ice::Context*);

    virtual void setHeight(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getRx(const ::Ice::Context*);

    virtual void setRx(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getTextValue(const ::Ice::Context*);

    virtual void setTextValue(const ::omero::RStringPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class Rect : virtual public ::omero::model::Shape
{
public:

    typedef RectPrx ProxyType;
    typedef RectPtr PointerType;
    
    Rect() {}
    Rect(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::model::RoiPtr&, const ::omero::RBoolPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RBoolPtr&, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RDoublePtr&, const ::omero::RDoublePtr&, const ::omero::RDoublePtr&, const ::omero::RDoublePtr&, const ::omero::RDoublePtr&, const ::omero::RStringPtr&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual ::omero::RDoublePtr getX(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getX(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setX(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setX(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getY(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getY(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setY(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setY(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getWidth(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getWidth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setWidth(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setWidth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getHeight(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getHeight(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setHeight(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setHeight(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getRx(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRx(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setRx(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setRx(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getTextValue(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getTextValue(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setTextValue(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setTextValue(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RDoublePtr x;

    ::omero::RDoublePtr y;

    ::omero::RDoublePtr width;

    ::omero::RDoublePtr height;

    ::omero::RDoublePtr rx;

    ::omero::RStringPtr textValue;
};

}

}

#endif
