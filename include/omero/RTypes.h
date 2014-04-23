// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `RTypes.ice'

#ifndef __omero__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_RTypes_h__
#define __omero__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_RTypes_h__

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
#include <Ice/StreamF.h>
#include <omero/ModelF.h>
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

class RType;

class RBool;

class RDouble;

class RFloat;

class RInt;

class RLong;

class RString;

class RClass;

class RTime;

class RObject;

class RCollection;

class RArray;

class RList;

class RSet;

class RMap;

}

}

namespace omero
{

class RType;
bool operator==(const RType&, const RType&);
bool operator<(const RType&, const RType&);

class RBool;
bool operator==(const RBool&, const RBool&);
bool operator<(const RBool&, const RBool&);

class RDouble;
bool operator==(const RDouble&, const RDouble&);
bool operator<(const RDouble&, const RDouble&);

class RFloat;
bool operator==(const RFloat&, const RFloat&);
bool operator<(const RFloat&, const RFloat&);

class RInt;
bool operator==(const RInt&, const RInt&);
bool operator<(const RInt&, const RInt&);

class RLong;
bool operator==(const RLong&, const RLong&);
bool operator<(const RLong&, const RLong&);

class RString;
bool operator==(const RString&, const RString&);
bool operator<(const RString&, const RString&);

class RClass;
bool operator==(const RClass&, const RClass&);
bool operator<(const RClass&, const RClass&);

class RTime;
bool operator==(const RTime&, const RTime&);
bool operator<(const RTime&, const RTime&);

class RObject;
bool operator==(const RObject&, const RObject&);
bool operator<(const RObject&, const RObject&);

class RCollection;
bool operator==(const RCollection&, const RCollection&);
bool operator<(const RCollection&, const RCollection&);

class RArray;
bool operator==(const RArray&, const RArray&);
bool operator<(const RArray&, const RArray&);

class RList;
bool operator==(const RList&, const RList&);
bool operator<(const RList&, const RList&);

class RSet;
bool operator==(const RSet&, const RSet&);
bool operator<(const RSet&, const RSet&);

class RMap;
bool operator==(const RMap&, const RMap&);
bool operator<(const RMap&, const RMap&);

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::RType*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::RType*);

::Ice::Object* upCast(::omero::RBool*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::RBool*);

::Ice::Object* upCast(::omero::RDouble*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::RDouble*);

::Ice::Object* upCast(::omero::RFloat*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::RFloat*);

::Ice::Object* upCast(::omero::RInt*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::RInt*);

::Ice::Object* upCast(::omero::RLong*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::RLong*);

::Ice::Object* upCast(::omero::RString*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::RString*);

::Ice::Object* upCast(::omero::RClass*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::RClass*);

::Ice::Object* upCast(::omero::RTime*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::RTime*);

::Ice::Object* upCast(::omero::RObject*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::RObject*);

::Ice::Object* upCast(::omero::RCollection*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::RCollection*);

::Ice::Object* upCast(::omero::RArray*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::RArray*);

::Ice::Object* upCast(::omero::RList*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::RList*);

::Ice::Object* upCast(::omero::RSet*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::RSet*);

::Ice::Object* upCast(::omero::RMap*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::RMap*);

}

namespace omero
{

typedef ::IceInternal::Handle< ::omero::RType> RTypePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::RType> RTypePrx;

void __read(::IceInternal::BasicStream*, RTypePrx&);
void __patch__RTypePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::RBool> RBoolPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::RBool> RBoolPrx;

void __read(::IceInternal::BasicStream*, RBoolPrx&);
void __patch__RBoolPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::RDouble> RDoublePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::RDouble> RDoublePrx;

void __read(::IceInternal::BasicStream*, RDoublePrx&);
void __patch__RDoublePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::RFloat> RFloatPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::RFloat> RFloatPrx;

void __read(::IceInternal::BasicStream*, RFloatPrx&);
void __patch__RFloatPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::RInt> RIntPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::RInt> RIntPrx;

void __read(::IceInternal::BasicStream*, RIntPrx&);
void __patch__RIntPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::RLong> RLongPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::RLong> RLongPrx;

void __read(::IceInternal::BasicStream*, RLongPrx&);
void __patch__RLongPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::RString> RStringPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::RString> RStringPrx;

void __read(::IceInternal::BasicStream*, RStringPrx&);
void __patch__RStringPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::RClass> RClassPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::RClass> RClassPrx;

void __read(::IceInternal::BasicStream*, RClassPrx&);
void __patch__RClassPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::RTime> RTimePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::RTime> RTimePrx;

void __read(::IceInternal::BasicStream*, RTimePrx&);
void __patch__RTimePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::RObject> RObjectPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::RObject> RObjectPrx;

void __read(::IceInternal::BasicStream*, RObjectPrx&);
void __patch__RObjectPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::RCollection> RCollectionPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::RCollection> RCollectionPrx;

void __read(::IceInternal::BasicStream*, RCollectionPrx&);
void __patch__RCollectionPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::RArray> RArrayPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::RArray> RArrayPrx;

void __read(::IceInternal::BasicStream*, RArrayPrx&);
void __patch__RArrayPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::RList> RListPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::RList> RListPrx;

void __read(::IceInternal::BasicStream*, RListPrx&);
void __patch__RListPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::RSet> RSetPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::RSet> RSetPrx;

void __read(::IceInternal::BasicStream*, RSetPrx&);
void __patch__RSetPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::RMap> RMapPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::RMap> RMapPrx;

void __read(::IceInternal::BasicStream*, RMapPrx&);
void __patch__RMapPtr(void*, ::Ice::ObjectPtr&);

}

namespace omero
{

typedef ::std::vector< ::omero::RTypePtr> RTypeSeq;
void __writeRTypeSeq(::IceInternal::BasicStream*, const ::omero::RTypePtr*, const ::omero::RTypePtr*);
void __readRTypeSeq(::IceInternal::BasicStream*, RTypeSeq&);

typedef ::std::vector< ::omero::RTypeSeq> RTypeSeqSeq;
void __writeRTypeSeqSeq(::IceInternal::BasicStream*, const ::omero::RTypeSeq*, const ::omero::RTypeSeq*);
void __readRTypeSeqSeq(::IceInternal::BasicStream*, RTypeSeqSeq&);

typedef ::std::map< ::std::string, ::omero::RTypePtr> RTypeDict;
void __writeRTypeDict(::IceInternal::BasicStream*, const RTypeDict&);
void __readRTypeDict(::IceInternal::BasicStream*, RTypeDict&);

}

namespace IceProxy
{

namespace omero
{

class RType : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int compare(const ::omero::RTypePtr& rhs)
    {
        return compare(rhs, 0);
    }
    ::Ice::Int compare(const ::omero::RTypePtr& rhs, const ::Ice::Context& __ctx)
    {
        return compare(rhs, &__ctx);
    }
    
private:

    ::Ice::Int compare(const ::omero::RTypePtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<RType> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RType*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RType*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RType> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RType*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RType*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RType> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RType*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RType*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RType> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RType*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RType*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RType> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RType*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RType*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RType> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RType*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RType*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RType> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RType*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RType*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RType> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RType*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RType*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RType> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RType*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RType*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RType> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RType*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RType*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RType> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RType*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RType*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RType> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RType*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RType*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RType> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RType*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RType*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RType> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RType*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RType*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RType> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RType*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RType*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RType> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RType*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RType*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RType> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RType*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RType*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RType> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RType*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RType*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RType> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RType*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RType*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class RBool : virtual public ::IceProxy::omero::RType
{
public:

    bool getValue()
    {
        return getValue(0);
    }
    bool getValue(const ::Ice::Context& __ctx)
    {
        return getValue(&__ctx);
    }
    
private:

    bool getValue(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<RBool> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RBool*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RBool*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RBool> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RBool*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RBool*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RBool> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RBool*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RBool*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RBool> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RBool*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RBool*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RBool> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RBool*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RBool*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RBool> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RBool*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RBool*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RBool> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RBool*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RBool*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RBool> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RBool*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RBool*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RBool> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RBool*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RBool*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RBool> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RBool*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RBool*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RBool> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RBool*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RBool*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RBool> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RBool*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RBool*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RBool> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RBool*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RBool*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RBool> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RBool*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RBool*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RBool> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RBool*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RBool*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RBool> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RBool*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RBool*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RBool> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RBool*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RBool*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RBool> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RBool*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RBool*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RBool> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RBool*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RBool*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class RDouble : virtual public ::IceProxy::omero::RType
{
public:

    ::Ice::Double getValue()
    {
        return getValue(0);
    }
    ::Ice::Double getValue(const ::Ice::Context& __ctx)
    {
        return getValue(&__ctx);
    }
    
private:

    ::Ice::Double getValue(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<RDouble> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RDouble*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RDouble*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RDouble> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RDouble*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RDouble*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RDouble> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RDouble*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RDouble*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RDouble> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RDouble*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RDouble*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RDouble> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RDouble*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RDouble*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RDouble> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RDouble*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RDouble*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RDouble> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RDouble*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RDouble*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RDouble> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RDouble*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RDouble*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RDouble> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RDouble*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RDouble*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RDouble> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RDouble*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RDouble*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RDouble> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RDouble*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RDouble*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RDouble> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RDouble*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RDouble*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RDouble> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RDouble*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RDouble*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RDouble> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RDouble*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RDouble*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RDouble> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RDouble*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RDouble*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RDouble> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RDouble*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RDouble*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RDouble> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RDouble*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RDouble*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RDouble> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RDouble*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RDouble*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RDouble> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RDouble*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RDouble*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class RFloat : virtual public ::IceProxy::omero::RType
{
public:

    ::Ice::Float getValue()
    {
        return getValue(0);
    }
    ::Ice::Float getValue(const ::Ice::Context& __ctx)
    {
        return getValue(&__ctx);
    }
    
private:

    ::Ice::Float getValue(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<RFloat> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RFloat*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RFloat*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RFloat> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RFloat*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RFloat*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RFloat> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RFloat*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RFloat*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RFloat> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RFloat*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RFloat*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RFloat> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RFloat*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RFloat*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RFloat> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RFloat*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RFloat*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RFloat> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RFloat*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RFloat*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RFloat> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RFloat*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RFloat*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RFloat> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RFloat*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RFloat*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RFloat> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RFloat*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RFloat*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RFloat> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RFloat*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RFloat*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RFloat> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RFloat*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RFloat*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RFloat> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RFloat*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RFloat*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RFloat> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RFloat*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RFloat*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RFloat> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RFloat*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RFloat*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RFloat> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RFloat*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RFloat*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RFloat> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RFloat*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RFloat*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RFloat> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RFloat*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RFloat*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RFloat> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RFloat*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RFloat*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class RInt : virtual public ::IceProxy::omero::RType
{
public:

    ::Ice::Int getValue()
    {
        return getValue(0);
    }
    ::Ice::Int getValue(const ::Ice::Context& __ctx)
    {
        return getValue(&__ctx);
    }
    
private:

    ::Ice::Int getValue(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<RInt> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInt*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RInt*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInt> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInt*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RInt*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInt> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInt*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RInt*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInt> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInt*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RInt*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInt> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInt*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RInt*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInt> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInt*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RInt*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInt> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInt*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RInt*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInt> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInt*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RInt*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInt> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInt*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RInt*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInt> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInt*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RInt*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInt> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInt*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RInt*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInt> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInt*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RInt*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInt> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInt*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RInt*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInt> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInt*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RInt*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInt> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInt*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RInt*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInt> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInt*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RInt*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInt> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInt*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RInt*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInt> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInt*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RInt*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RInt> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RInt*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RInt*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class RLong : virtual public ::IceProxy::omero::RType
{
public:

    ::Ice::Long getValue()
    {
        return getValue(0);
    }
    ::Ice::Long getValue(const ::Ice::Context& __ctx)
    {
        return getValue(&__ctx);
    }
    
private:

    ::Ice::Long getValue(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<RLong> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RLong*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RLong*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RLong> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RLong*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RLong*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RLong> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RLong*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RLong*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RLong> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RLong*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RLong*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RLong> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RLong*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RLong*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RLong> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RLong*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RLong*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RLong> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RLong*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RLong*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RLong> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RLong*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RLong*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RLong> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RLong*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RLong*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RLong> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RLong*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RLong*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RLong> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RLong*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RLong*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RLong> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RLong*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RLong*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RLong> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RLong*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RLong*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RLong> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RLong*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RLong*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RLong> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RLong*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RLong*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RLong> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RLong*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RLong*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RLong> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RLong*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RLong*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RLong> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RLong*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RLong*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RLong> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RLong*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RLong*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class RString : virtual public ::IceProxy::omero::RType
{
public:

    ::std::string getValue()
    {
        return getValue(0);
    }
    ::std::string getValue(const ::Ice::Context& __ctx)
    {
        return getValue(&__ctx);
    }
    
private:

    ::std::string getValue(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<RString> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RString*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RString*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RString> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RString*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RString*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RString> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RString*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RString*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RString> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RString*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RString*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RString> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RString*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RString*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RString> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RString*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RString*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RString> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RString*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RString*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RString> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RString*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RString*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RString> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RString*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RString*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RString> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RString*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RString*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RString> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RString*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RString*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RString> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RString*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RString*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RString> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RString*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RString*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RString> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RString*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RString*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RString> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RString*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RString*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RString> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RString*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RString*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RString> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RString*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RString*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RString> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RString*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RString*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RString> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RString*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RString*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class RClass : virtual public ::IceProxy::omero::RString
{
public:
    
    ::IceInternal::ProxyHandle<RClass> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RClass*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RClass*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RClass> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RClass*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RClass*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RClass> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RClass*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RClass*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RClass> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RClass*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RClass*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RClass> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RClass*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RClass*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RClass> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RClass*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RClass*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RClass> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RClass*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RClass*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RClass> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RClass*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RClass*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RClass> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RClass*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RClass*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RClass> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RClass*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RClass*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RClass> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RClass*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RClass*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RClass> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RClass*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RClass*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RClass> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RClass*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RClass*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RClass> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RClass*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RClass*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RClass> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RClass*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RClass*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RClass> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RClass*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RClass*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RClass> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RClass*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RClass*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RClass> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RClass*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RClass*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RClass> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RClass*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RClass*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class RTime : virtual public ::IceProxy::omero::RType
{
public:

    ::Ice::Long getValue()
    {
        return getValue(0);
    }
    ::Ice::Long getValue(const ::Ice::Context& __ctx)
    {
        return getValue(&__ctx);
    }
    
private:

    ::Ice::Long getValue(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<RTime> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RTime*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RTime*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RTime> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RTime*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RTime*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RTime> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RTime*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RTime*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RTime> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RTime*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RTime*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RTime> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RTime*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RTime*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RTime> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RTime*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RTime*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RTime> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RTime*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RTime*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RTime> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RTime*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RTime*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RTime> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RTime*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RTime*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RTime> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RTime*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RTime*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RTime> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RTime*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RTime*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RTime> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RTime*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RTime*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RTime> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RTime*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RTime*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RTime> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RTime*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RTime*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RTime> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RTime*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RTime*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RTime> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RTime*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RTime*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RTime> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RTime*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RTime*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RTime> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RTime*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RTime*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RTime> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RTime*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RTime*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class RObject : virtual public ::IceProxy::omero::RType
{
public:

    ::omero::model::IObjectPtr getValue()
    {
        return getValue(0);
    }
    ::omero::model::IObjectPtr getValue(const ::Ice::Context& __ctx)
    {
        return getValue(&__ctx);
    }
    
private:

    ::omero::model::IObjectPtr getValue(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<RObject> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RObject*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RObject*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RObject> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RObject*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RObject*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RObject> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RObject*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RObject*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RObject> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RObject*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RObject*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RObject> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RObject*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RObject*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RObject> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RObject*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RObject*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RObject> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RObject*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RObject*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RObject> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RObject*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RObject*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RObject> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RObject*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RObject*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RObject> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RObject*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RObject*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RObject> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RObject*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RObject*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RObject> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RObject*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RObject*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RObject> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RObject*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RObject*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RObject> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RObject*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RObject*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RObject> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RObject*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RObject*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RObject> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RObject*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RObject*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RObject> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RObject*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RObject*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RObject> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RObject*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RObject*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RObject> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RObject*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RObject*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class RCollection : virtual public ::IceProxy::omero::RType
{
public:

    ::omero::RTypeSeq getValue()
    {
        return getValue(0);
    }
    ::omero::RTypeSeq getValue(const ::Ice::Context& __ctx)
    {
        return getValue(&__ctx);
    }
    
private:

    ::omero::RTypeSeq getValue(const ::Ice::Context*);
    
public:

    ::Ice::Int size()
    {
        return size(0);
    }
    ::Ice::Int size(const ::Ice::Context& __ctx)
    {
        return size(&__ctx);
    }
    
private:

    ::Ice::Int size(const ::Ice::Context*);
    
public:

    ::omero::RTypePtr get(::Ice::Int index)
    {
        return get(index, 0);
    }
    ::omero::RTypePtr get(::Ice::Int index, const ::Ice::Context& __ctx)
    {
        return get(index, &__ctx);
    }
    
private:

    ::omero::RTypePtr get(::Ice::Int, const ::Ice::Context*);
    
public:

    void add(const ::omero::RTypePtr& value)
    {
        add(value, 0);
    }
    void add(const ::omero::RTypePtr& value, const ::Ice::Context& __ctx)
    {
        add(value, &__ctx);
    }
    
private:

    void add(const ::omero::RTypePtr&, const ::Ice::Context*);
    
public:

    void addAll(const ::omero::RTypeSeq& value)
    {
        addAll(value, 0);
    }
    void addAll(const ::omero::RTypeSeq& value, const ::Ice::Context& __ctx)
    {
        addAll(value, &__ctx);
    }
    
private:

    void addAll(const ::omero::RTypeSeq&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<RCollection> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RCollection*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RCollection*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RCollection> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RCollection*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RCollection*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RCollection> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RCollection*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RCollection*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RCollection> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RCollection*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RCollection*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RCollection> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RCollection*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RCollection*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RCollection> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RCollection*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RCollection*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RCollection> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RCollection*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RCollection*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RCollection> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RCollection*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RCollection*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RCollection> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RCollection*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RCollection*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RCollection> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RCollection*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RCollection*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RCollection> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RCollection*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RCollection*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RCollection> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RCollection*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RCollection*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RCollection> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RCollection*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RCollection*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RCollection> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RCollection*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RCollection*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RCollection> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RCollection*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RCollection*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RCollection> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RCollection*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RCollection*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RCollection> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RCollection*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RCollection*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RCollection> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RCollection*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RCollection*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RCollection> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RCollection*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RCollection*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class RArray : virtual public ::IceProxy::omero::RCollection
{
public:
    
    ::IceInternal::ProxyHandle<RArray> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RArray*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RArray*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RArray> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RArray*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RArray*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RArray> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RArray*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RArray*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RArray> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RArray*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RArray*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RArray> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RArray*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RArray*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RArray> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RArray*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RArray*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RArray> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RArray*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RArray*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RArray> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RArray*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RArray*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RArray> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RArray*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RArray*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RArray> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RArray*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RArray*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RArray> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RArray*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RArray*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RArray> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RArray*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RArray*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RArray> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RArray*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RArray*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RArray> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RArray*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RArray*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RArray> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RArray*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RArray*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RArray> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RArray*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RArray*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RArray> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RArray*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RArray*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RArray> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RArray*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RArray*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RArray> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RArray*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RArray*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class RList : virtual public ::IceProxy::omero::RCollection
{
public:
    
    ::IceInternal::ProxyHandle<RList> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RList*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RList*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RList> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RList*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RList*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RList> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RList*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RList*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RList> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RList*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RList*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RList> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RList*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RList*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RList> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RList*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RList*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RList> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RList*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RList*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RList> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RList*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RList*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RList> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RList*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RList*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RList> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RList*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RList*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RList> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RList*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RList*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RList> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RList*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RList*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RList> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RList*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RList*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RList> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RList*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RList*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RList> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RList*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RList*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RList> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RList*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RList*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RList> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RList*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RList*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RList> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RList*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RList*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RList> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RList*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RList*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class RSet : virtual public ::IceProxy::omero::RCollection
{
public:
    
    ::IceInternal::ProxyHandle<RSet> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RSet*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RSet*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RSet> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RSet*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RSet*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RSet> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RSet*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RSet*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RSet> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RSet*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RSet*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RSet> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RSet*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RSet*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RSet> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RSet*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RSet*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RSet> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RSet*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RSet*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RSet> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RSet*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RSet*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RSet> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RSet*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RSet*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RSet> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RSet*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RSet*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RSet> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RSet*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RSet*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RSet> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RSet*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RSet*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RSet> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RSet*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RSet*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RSet> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RSet*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RSet*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RSet> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RSet*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RSet*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RSet> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RSet*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RSet*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RSet> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RSet*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RSet*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RSet> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RSet*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RSet*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RSet> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RSet*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RSet*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class RMap : virtual public ::IceProxy::omero::RType
{
public:

    ::omero::RTypeDict getValue()
    {
        return getValue(0);
    }
    ::omero::RTypeDict getValue(const ::Ice::Context& __ctx)
    {
        return getValue(&__ctx);
    }
    
private:

    ::omero::RTypeDict getValue(const ::Ice::Context*);
    
public:

    ::Ice::Int size()
    {
        return size(0);
    }
    ::Ice::Int size(const ::Ice::Context& __ctx)
    {
        return size(&__ctx);
    }
    
private:

    ::Ice::Int size(const ::Ice::Context*);
    
public:

    ::omero::RTypePtr get(const ::std::string& key)
    {
        return get(key, 0);
    }
    ::omero::RTypePtr get(const ::std::string& key, const ::Ice::Context& __ctx)
    {
        return get(key, &__ctx);
    }
    
private:

    ::omero::RTypePtr get(const ::std::string&, const ::Ice::Context*);
    
public:

    void put(const ::std::string& key, const ::omero::RTypePtr& value)
    {
        put(key, value, 0);
    }
    void put(const ::std::string& key, const ::omero::RTypePtr& value, const ::Ice::Context& __ctx)
    {
        put(key, value, &__ctx);
    }
    
private:

    void put(const ::std::string&, const ::omero::RTypePtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<RMap> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RMap*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RMap*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RMap> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RMap*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RMap*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RMap> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RMap*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RMap*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RMap> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RMap*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RMap*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RMap> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RMap*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RMap*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RMap> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RMap*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RMap*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RMap> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RMap*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RMap*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RMap> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RMap*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RMap*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RMap> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RMap*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RMap*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RMap> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RMap*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RMap*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RMap> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RMap*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RMap*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RMap> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RMap*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RMap*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RMap> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RMap*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RMap*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RMap> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RMap*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RMap*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RMap> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RMap*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RMap*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RMap> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RMap*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RMap*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RMap> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RMap*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RMap*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RMap> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RMap*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RMap*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RMap> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RMap*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RMap*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace IceDelegate
{

namespace omero
{

class RType : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int compare(const ::omero::RTypePtr&, const ::Ice::Context*) = 0;
};

class RBool : virtual public ::IceDelegate::omero::RType
{
public:

    virtual bool getValue(const ::Ice::Context*) = 0;
};

class RDouble : virtual public ::IceDelegate::omero::RType
{
public:

    virtual ::Ice::Double getValue(const ::Ice::Context*) = 0;
};

class RFloat : virtual public ::IceDelegate::omero::RType
{
public:

    virtual ::Ice::Float getValue(const ::Ice::Context*) = 0;
};

class RInt : virtual public ::IceDelegate::omero::RType
{
public:

    virtual ::Ice::Int getValue(const ::Ice::Context*) = 0;
};

class RLong : virtual public ::IceDelegate::omero::RType
{
public:

    virtual ::Ice::Long getValue(const ::Ice::Context*) = 0;
};

class RString : virtual public ::IceDelegate::omero::RType
{
public:

    virtual ::std::string getValue(const ::Ice::Context*) = 0;
};

class RClass : virtual public ::IceDelegate::omero::RString
{
public:
};

class RTime : virtual public ::IceDelegate::omero::RType
{
public:

    virtual ::Ice::Long getValue(const ::Ice::Context*) = 0;
};

class RObject : virtual public ::IceDelegate::omero::RType
{
public:

    virtual ::omero::model::IObjectPtr getValue(const ::Ice::Context*) = 0;
};

class RCollection : virtual public ::IceDelegate::omero::RType
{
public:

    virtual ::omero::RTypeSeq getValue(const ::Ice::Context*) = 0;

    virtual ::Ice::Int size(const ::Ice::Context*) = 0;

    virtual ::omero::RTypePtr get(::Ice::Int, const ::Ice::Context*) = 0;

    virtual void add(const ::omero::RTypePtr&, const ::Ice::Context*) = 0;

    virtual void addAll(const ::omero::RTypeSeq&, const ::Ice::Context*) = 0;
};

class RArray : virtual public ::IceDelegate::omero::RCollection
{
public:
};

class RList : virtual public ::IceDelegate::omero::RCollection
{
public:
};

class RSet : virtual public ::IceDelegate::omero::RCollection
{
public:
};

class RMap : virtual public ::IceDelegate::omero::RType
{
public:

    virtual ::omero::RTypeDict getValue(const ::Ice::Context*) = 0;

    virtual ::Ice::Int size(const ::Ice::Context*) = 0;

    virtual ::omero::RTypePtr get(const ::std::string&, const ::Ice::Context*) = 0;

    virtual void put(const ::std::string&, const ::omero::RTypePtr&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace omero
{

class RType : virtual public ::IceDelegate::omero::RType,
              virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int compare(const ::omero::RTypePtr&, const ::Ice::Context*);
};

class RBool : virtual public ::IceDelegate::omero::RBool,
              virtual public ::IceDelegateM::omero::RType
{
public:

    virtual bool getValue(const ::Ice::Context*);
};

class RDouble : virtual public ::IceDelegate::omero::RDouble,
                virtual public ::IceDelegateM::omero::RType
{
public:

    virtual ::Ice::Double getValue(const ::Ice::Context*);
};

class RFloat : virtual public ::IceDelegate::omero::RFloat,
               virtual public ::IceDelegateM::omero::RType
{
public:

    virtual ::Ice::Float getValue(const ::Ice::Context*);
};

class RInt : virtual public ::IceDelegate::omero::RInt,
             virtual public ::IceDelegateM::omero::RType
{
public:

    virtual ::Ice::Int getValue(const ::Ice::Context*);
};

class RLong : virtual public ::IceDelegate::omero::RLong,
              virtual public ::IceDelegateM::omero::RType
{
public:

    virtual ::Ice::Long getValue(const ::Ice::Context*);
};

class RString : virtual public ::IceDelegate::omero::RString,
                virtual public ::IceDelegateM::omero::RType
{
public:

    virtual ::std::string getValue(const ::Ice::Context*);
};

class RClass : virtual public ::IceDelegate::omero::RClass,
               virtual public ::IceDelegateM::omero::RString
{
public:
};

class RTime : virtual public ::IceDelegate::omero::RTime,
              virtual public ::IceDelegateM::omero::RType
{
public:

    virtual ::Ice::Long getValue(const ::Ice::Context*);
};

class RObject : virtual public ::IceDelegate::omero::RObject,
                virtual public ::IceDelegateM::omero::RType
{
public:

    virtual ::omero::model::IObjectPtr getValue(const ::Ice::Context*);
};

class RCollection : virtual public ::IceDelegate::omero::RCollection,
                    virtual public ::IceDelegateM::omero::RType
{
public:

    virtual ::omero::RTypeSeq getValue(const ::Ice::Context*);

    virtual ::Ice::Int size(const ::Ice::Context*);

    virtual ::omero::RTypePtr get(::Ice::Int, const ::Ice::Context*);

    virtual void add(const ::omero::RTypePtr&, const ::Ice::Context*);

    virtual void addAll(const ::omero::RTypeSeq&, const ::Ice::Context*);
};

class RArray : virtual public ::IceDelegate::omero::RArray,
               virtual public ::IceDelegateM::omero::RCollection
{
public:
};

class RList : virtual public ::IceDelegate::omero::RList,
              virtual public ::IceDelegateM::omero::RCollection
{
public:
};

class RSet : virtual public ::IceDelegate::omero::RSet,
             virtual public ::IceDelegateM::omero::RCollection
{
public:
};

class RMap : virtual public ::IceDelegate::omero::RMap,
             virtual public ::IceDelegateM::omero::RType
{
public:

    virtual ::omero::RTypeDict getValue(const ::Ice::Context*);

    virtual ::Ice::Int size(const ::Ice::Context*);

    virtual ::omero::RTypePtr get(const ::std::string&, const ::Ice::Context*);

    virtual void put(const ::std::string&, const ::omero::RTypePtr&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace omero
{

class RType : virtual public ::IceDelegate::omero::RType,
              virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int compare(const ::omero::RTypePtr&, const ::Ice::Context*);
};

class RBool : virtual public ::IceDelegate::omero::RBool,
              virtual public ::IceDelegateD::omero::RType
{
public:

    virtual bool getValue(const ::Ice::Context*);
};

class RDouble : virtual public ::IceDelegate::omero::RDouble,
                virtual public ::IceDelegateD::omero::RType
{
public:

    virtual ::Ice::Double getValue(const ::Ice::Context*);
};

class RFloat : virtual public ::IceDelegate::omero::RFloat,
               virtual public ::IceDelegateD::omero::RType
{
public:

    virtual ::Ice::Float getValue(const ::Ice::Context*);
};

class RInt : virtual public ::IceDelegate::omero::RInt,
             virtual public ::IceDelegateD::omero::RType
{
public:

    virtual ::Ice::Int getValue(const ::Ice::Context*);
};

class RLong : virtual public ::IceDelegate::omero::RLong,
              virtual public ::IceDelegateD::omero::RType
{
public:

    virtual ::Ice::Long getValue(const ::Ice::Context*);
};

class RString : virtual public ::IceDelegate::omero::RString,
                virtual public ::IceDelegateD::omero::RType
{
public:

    virtual ::std::string getValue(const ::Ice::Context*);
};

class RClass : virtual public ::IceDelegate::omero::RClass,
               virtual public ::IceDelegateD::omero::RString
{
public:
};

class RTime : virtual public ::IceDelegate::omero::RTime,
              virtual public ::IceDelegateD::omero::RType
{
public:

    virtual ::Ice::Long getValue(const ::Ice::Context*);
};

class RObject : virtual public ::IceDelegate::omero::RObject,
                virtual public ::IceDelegateD::omero::RType
{
public:

    virtual ::omero::model::IObjectPtr getValue(const ::Ice::Context*);
};

class RCollection : virtual public ::IceDelegate::omero::RCollection,
                    virtual public ::IceDelegateD::omero::RType
{
public:

    virtual ::omero::RTypeSeq getValue(const ::Ice::Context*);

    virtual ::Ice::Int size(const ::Ice::Context*);

    virtual ::omero::RTypePtr get(::Ice::Int, const ::Ice::Context*);

    virtual void add(const ::omero::RTypePtr&, const ::Ice::Context*);

    virtual void addAll(const ::omero::RTypeSeq&, const ::Ice::Context*);
};

class RArray : virtual public ::IceDelegate::omero::RArray,
               virtual public ::IceDelegateD::omero::RCollection
{
public:
};

class RList : virtual public ::IceDelegate::omero::RList,
              virtual public ::IceDelegateD::omero::RCollection
{
public:
};

class RSet : virtual public ::IceDelegate::omero::RSet,
             virtual public ::IceDelegateD::omero::RCollection
{
public:
};

class RMap : virtual public ::IceDelegate::omero::RMap,
             virtual public ::IceDelegateD::omero::RType
{
public:

    virtual ::omero::RTypeDict getValue(const ::Ice::Context*);

    virtual ::Ice::Int size(const ::Ice::Context*);

    virtual ::omero::RTypePtr get(const ::std::string&, const ::Ice::Context*);

    virtual void put(const ::std::string&, const ::omero::RTypePtr&, const ::Ice::Context*);
};

}

}

namespace omero
{

class RType : virtual public ::Ice::Object
{
public:

    typedef RTypePrx ProxyType;
    typedef RTypePtr PointerType;
    
    RType() {}
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int compare(const ::omero::RTypePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___compare(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class RBool : virtual public ::omero::RType
{
public:

    typedef RBoolPrx ProxyType;
    typedef RBoolPtr PointerType;
    
    RBool() {}
    explicit RBool(bool);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual bool getValue(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getValue(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    bool val;
};

class RDouble : virtual public ::omero::RType
{
public:

    typedef RDoublePrx ProxyType;
    typedef RDoublePtr PointerType;
    
    RDouble() {}
    explicit RDouble(::Ice::Double);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual ::Ice::Double getValue(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getValue(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::Ice::Double val;
};

class RFloat : virtual public ::omero::RType
{
public:

    typedef RFloatPrx ProxyType;
    typedef RFloatPtr PointerType;
    
    RFloat() {}
    explicit RFloat(::Ice::Float);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual ::Ice::Float getValue(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getValue(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::Ice::Float val;
};

class RInt : virtual public ::omero::RType
{
public:

    typedef RIntPrx ProxyType;
    typedef RIntPtr PointerType;
    
    RInt() {}
    explicit RInt(::Ice::Int);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual ::Ice::Int getValue(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getValue(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::Ice::Int val;
};

class RLong : virtual public ::omero::RType
{
public:

    typedef RLongPrx ProxyType;
    typedef RLongPtr PointerType;
    
    RLong() {}
    explicit RLong(::Ice::Long);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual ::Ice::Long getValue(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getValue(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::Ice::Long val;
};

class RString : virtual public ::omero::RType
{
public:

    typedef RStringPrx ProxyType;
    typedef RStringPtr PointerType;
    
    RString() {}
    explicit RString(const ::std::string&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual ::std::string getValue(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getValue(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::std::string val;
};

class RClass : virtual public ::omero::RString
{
public:

    typedef RClassPrx ProxyType;
    typedef RClassPtr PointerType;
    
    RClass() {}
    explicit RClass(const ::std::string&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class RTime : virtual public ::omero::RType
{
public:

    typedef RTimePrx ProxyType;
    typedef RTimePtr PointerType;
    
    RTime() {}
    explicit RTime(::Ice::Long);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual ::Ice::Long getValue(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getValue(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::Ice::Long val;
};

class RObject : virtual public ::omero::RType
{
public:

    typedef RObjectPrx ProxyType;
    typedef RObjectPtr PointerType;
    
    RObject() {}
    explicit RObject(const ::omero::model::IObjectPtr&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __incRef();
    virtual void __decRef();
    virtual void __addObject(::IceInternal::GCCountMap&);
    virtual bool __usesClasses();
    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual ::omero::model::IObjectPtr getValue(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getValue(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::model::IObjectPtr val;
};

class RCollection : virtual public ::omero::RType
{
public:

    typedef RCollectionPrx ProxyType;
    typedef RCollectionPtr PointerType;
    
    RCollection() {}
    explicit RCollection(const ::omero::RTypeSeq&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __incRef();
    virtual void __decRef();
    virtual void __addObject(::IceInternal::GCCountMap&);
    virtual bool __usesClasses();
    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual ::omero::RTypeSeq getValue(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getValue(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int size(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___size(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RTypePtr get(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___get(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void add(const ::omero::RTypePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___add(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAll(const ::omero::RTypeSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAll(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RTypeSeq val;
};

class RArray : virtual public ::omero::RCollection
{
public:

    typedef RArrayPrx ProxyType;
    typedef RArrayPtr PointerType;
    
    RArray() {}
    explicit RArray(const ::omero::RTypeSeq&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();
    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class RList : virtual public ::omero::RCollection
{
public:

    typedef RListPrx ProxyType;
    typedef RListPtr PointerType;
    
    RList() {}
    explicit RList(const ::omero::RTypeSeq&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();
    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class RSet : virtual public ::omero::RCollection
{
public:

    typedef RSetPrx ProxyType;
    typedef RSetPtr PointerType;
    
    RSet() {}
    explicit RSet(const ::omero::RTypeSeq&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();
    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class RMap : virtual public ::omero::RType
{
public:

    typedef RMapPrx ProxyType;
    typedef RMapPtr PointerType;
    
    RMap() {}
    explicit RMap(const ::omero::RTypeDict&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __incRef();
    virtual void __decRef();
    virtual void __addObject(::IceInternal::GCCountMap&);
    virtual bool __usesClasses();
    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual ::omero::RTypeDict getValue(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getValue(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int size(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___size(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RTypePtr get(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___get(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void put(const ::std::string&, const ::omero::RTypePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___put(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RTypeDict val;
};

}

#endif
