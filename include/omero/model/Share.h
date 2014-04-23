// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Share.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Share_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Share_h__

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
#include <omero/model/Session.h>
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

class ExperimenterGroup;

class Node;

class Experimenter;

class Event;

class SessionAnnotationLink;

class Annotation;

class Details;

class Share;

}

}

}

namespace omero
{

namespace model
{

class ExperimenterGroup;
bool operator==(const ExperimenterGroup&, const ExperimenterGroup&);
bool operator<(const ExperimenterGroup&, const ExperimenterGroup&);

class Node;
bool operator==(const Node&, const Node&);
bool operator<(const Node&, const Node&);

class Experimenter;
bool operator==(const Experimenter&, const Experimenter&);
bool operator<(const Experimenter&, const Experimenter&);

class Event;
bool operator==(const Event&, const Event&);
bool operator<(const Event&, const Event&);

class SessionAnnotationLink;
bool operator==(const SessionAnnotationLink&, const SessionAnnotationLink&);
bool operator<(const SessionAnnotationLink&, const SessionAnnotationLink&);

class Annotation;
bool operator==(const Annotation&, const Annotation&);
bool operator<(const Annotation&, const Annotation&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class Share;
bool operator==(const Share&, const Share&);
bool operator<(const Share&, const Share&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::ExperimenterGroup*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::ExperimenterGroup*);

::Ice::Object* upCast(::omero::model::Node*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Node*);

::Ice::Object* upCast(::omero::model::Experimenter*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Experimenter*);

::Ice::Object* upCast(::omero::model::Event*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Event*);

::Ice::Object* upCast(::omero::model::SessionAnnotationLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::SessionAnnotationLink*);

::Ice::Object* upCast(::omero::model::Annotation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Annotation*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::Share*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Share*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::ExperimenterGroup> ExperimenterGroupPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ExperimenterGroup> ExperimenterGroupPrx;

void __read(::IceInternal::BasicStream*, ExperimenterGroupPrx&);
void __patch__ExperimenterGroupPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Node> NodePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Node> NodePrx;

void __read(::IceInternal::BasicStream*, NodePrx&);
void __patch__NodePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Experimenter> ExperimenterPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Experimenter> ExperimenterPrx;

void __read(::IceInternal::BasicStream*, ExperimenterPrx&);
void __patch__ExperimenterPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Event> EventPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Event> EventPrx;

void __read(::IceInternal::BasicStream*, EventPrx&);
void __patch__EventPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::SessionAnnotationLink> SessionAnnotationLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::SessionAnnotationLink> SessionAnnotationLinkPrx;

void __read(::IceInternal::BasicStream*, SessionAnnotationLinkPrx&);
void __patch__SessionAnnotationLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Annotation> AnnotationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Annotation> AnnotationPrx;

void __read(::IceInternal::BasicStream*, AnnotationPrx&);
void __patch__AnnotationPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Share> SharePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Share> SharePrx;

void __read(::IceInternal::BasicStream*, SharePrx&);
void __patch__SharePtr(void*, ::Ice::ObjectPtr&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Share : virtual public ::IceProxy::omero::model::Session
{
public:

    ::omero::model::ExperimenterGroupPtr getGroup()
    {
        return getGroup(0);
    }
    ::omero::model::ExperimenterGroupPtr getGroup(const ::Ice::Context& __ctx)
    {
        return getGroup(&__ctx);
    }
    
private:

    ::omero::model::ExperimenterGroupPtr getGroup(const ::Ice::Context*);
    
public:

    void setGroup(const ::omero::model::ExperimenterGroupPtr& theGroup)
    {
        setGroup(theGroup, 0);
    }
    void setGroup(const ::omero::model::ExperimenterGroupPtr& theGroup, const ::Ice::Context& __ctx)
    {
        setGroup(theGroup, &__ctx);
    }
    
private:

    void setGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);
    
public:

    ::omero::RLongPtr getItemCount()
    {
        return getItemCount(0);
    }
    ::omero::RLongPtr getItemCount(const ::Ice::Context& __ctx)
    {
        return getItemCount(&__ctx);
    }
    
private:

    ::omero::RLongPtr getItemCount(const ::Ice::Context*);
    
public:

    void setItemCount(const ::omero::RLongPtr& theItemCount)
    {
        setItemCount(theItemCount, 0);
    }
    void setItemCount(const ::omero::RLongPtr& theItemCount, const ::Ice::Context& __ctx)
    {
        setItemCount(theItemCount, &__ctx);
    }
    
private:

    void setItemCount(const ::omero::RLongPtr&, const ::Ice::Context*);
    
public:

    ::omero::RBoolPtr getActive()
    {
        return getActive(0);
    }
    ::omero::RBoolPtr getActive(const ::Ice::Context& __ctx)
    {
        return getActive(&__ctx);
    }
    
private:

    ::omero::RBoolPtr getActive(const ::Ice::Context*);
    
public:

    void setActive(const ::omero::RBoolPtr& theActive)
    {
        setActive(theActive, 0);
    }
    void setActive(const ::omero::RBoolPtr& theActive, const ::Ice::Context& __ctx)
    {
        setActive(theActive, &__ctx);
    }
    
private:

    void setActive(const ::omero::RBoolPtr&, const ::Ice::Context*);
    
public:

    ::Ice::ByteSeq getData()
    {
        return getData(0);
    }
    ::Ice::ByteSeq getData(const ::Ice::Context& __ctx)
    {
        return getData(&__ctx);
    }
    
private:

    ::Ice::ByteSeq getData(const ::Ice::Context*);
    
public:

    void setData(const ::Ice::ByteSeq& theData)
    {
        setData(theData, 0);
    }
    void setData(const ::Ice::ByteSeq& theData, const ::Ice::Context& __ctx)
    {
        setData(theData, &__ctx);
    }
    
private:

    void setData(const ::Ice::ByteSeq&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Share> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Share*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Share*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Share> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Share*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Share*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Share> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Share*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Share*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Share> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Share*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Share*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Share> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Share*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Share*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Share> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Share*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Share*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Share> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Share*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Share*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Share> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Share*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Share*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Share> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Share*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Share*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Share> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Share*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Share*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Share> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Share*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Share*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Share> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Share*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Share*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Share> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Share*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Share*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Share> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Share*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Share*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Share> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Share*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Share*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Share> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Share*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Share*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Share> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Share*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Share*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Share> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Share*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Share*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Share> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Share*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Share*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Share : virtual public ::IceDelegate::omero::model::Session
{
public:

    virtual ::omero::model::ExperimenterGroupPtr getGroup(const ::Ice::Context*) = 0;

    virtual void setGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RLongPtr getItemCount(const ::Ice::Context*) = 0;

    virtual void setItemCount(const ::omero::RLongPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RBoolPtr getActive(const ::Ice::Context*) = 0;

    virtual void setActive(const ::omero::RBoolPtr&, const ::Ice::Context*) = 0;

    virtual ::Ice::ByteSeq getData(const ::Ice::Context*) = 0;

    virtual void setData(const ::Ice::ByteSeq&, const ::Ice::Context*) = 0;
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

class Share : virtual public ::IceDelegate::omero::model::Share,
              virtual public ::IceDelegateM::omero::model::Session
{
public:

    virtual ::omero::model::ExperimenterGroupPtr getGroup(const ::Ice::Context*);

    virtual void setGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);

    virtual ::omero::RLongPtr getItemCount(const ::Ice::Context*);

    virtual void setItemCount(const ::omero::RLongPtr&, const ::Ice::Context*);

    virtual ::omero::RBoolPtr getActive(const ::Ice::Context*);

    virtual void setActive(const ::omero::RBoolPtr&, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getData(const ::Ice::Context*);

    virtual void setData(const ::Ice::ByteSeq&, const ::Ice::Context*);
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

class Share : virtual public ::IceDelegate::omero::model::Share,
              virtual public ::IceDelegateD::omero::model::Session
{
public:

    virtual ::omero::model::ExperimenterGroupPtr getGroup(const ::Ice::Context*);

    virtual void setGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Context*);

    virtual ::omero::RLongPtr getItemCount(const ::Ice::Context*);

    virtual void setItemCount(const ::omero::RLongPtr&, const ::Ice::Context*);

    virtual ::omero::RBoolPtr getActive(const ::Ice::Context*);

    virtual void setActive(const ::omero::RBoolPtr&, const ::Ice::Context*);

    virtual ::Ice::ByteSeq getData(const ::Ice::Context*);

    virtual void setData(const ::Ice::ByteSeq&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class Share : virtual public ::omero::model::Session
{
public:

    typedef SharePrx ProxyType;
    typedef SharePtr PointerType;
    
    Share() {}
    Share(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::model::NodePtr&, const ::omero::RStringPtr&, const ::omero::model::ExperimenterPtr&, const ::omero::RLongPtr&, const ::omero::RLongPtr&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::model::SessionEventsSeq&, bool, const ::omero::model::SessionAnnotationLinksSeq&, bool, const ::omero::sys::CountMap&, const ::omero::model::ExperimenterGroupPtr&, const ::omero::RLongPtr&, const ::omero::RBoolPtr&, const ::Ice::ByteSeq&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual ::omero::model::ExperimenterGroupPtr getGroup(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setGroup(const ::omero::model::ExperimenterGroupPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setGroup(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RLongPtr getItemCount(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getItemCount(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setItemCount(const ::omero::RLongPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setItemCount(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RBoolPtr getActive(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getActive(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setActive(const ::omero::RBoolPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setActive(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::ByteSeq getData(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getData(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setData(const ::Ice::ByteSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setData(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::model::ExperimenterGroupPtr group;

    ::omero::RLongPtr itemCount;

    ::omero::RBoolPtr active;

    ::Ice::ByteSeq data;
};

}

}

#endif
