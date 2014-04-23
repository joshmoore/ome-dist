// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Graphs.ice'

#ifndef __omero_cmd__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_cmd_Graphs_h__
#define __omero_cmd__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_cmd_Graphs_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/OutgoingAsync.h>
#include <Ice/Incoming.h>
#include <Ice/IncomingAsync.h>
#include <Ice/Direct.h>
#include <Ice/UserExceptionFactory.h>
#include <Ice/FactoryTable.h>
#include <Ice/StreamF.h>
#include <omero/cmd/API.h>
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

namespace cmd
{

class GraphModify;

class GraphConstraintERR;

class GraphSpecList;

class GraphSpecListRsp;

class Chgrp;

class ChgrpRsp;

class Chmod;

class ChmodRsp;

class Chown;

class ChownRsp;

class Delete;

class DeleteRsp;

}

}

}

namespace omero
{

namespace cmd
{

class GraphModify;
bool operator==(const GraphModify&, const GraphModify&);
bool operator<(const GraphModify&, const GraphModify&);

class GraphConstraintERR;
bool operator==(const GraphConstraintERR&, const GraphConstraintERR&);
bool operator<(const GraphConstraintERR&, const GraphConstraintERR&);

class GraphSpecList;
bool operator==(const GraphSpecList&, const GraphSpecList&);
bool operator<(const GraphSpecList&, const GraphSpecList&);

class GraphSpecListRsp;
bool operator==(const GraphSpecListRsp&, const GraphSpecListRsp&);
bool operator<(const GraphSpecListRsp&, const GraphSpecListRsp&);

class Chgrp;
bool operator==(const Chgrp&, const Chgrp&);
bool operator<(const Chgrp&, const Chgrp&);

class ChgrpRsp;
bool operator==(const ChgrpRsp&, const ChgrpRsp&);
bool operator<(const ChgrpRsp&, const ChgrpRsp&);

class Chmod;
bool operator==(const Chmod&, const Chmod&);
bool operator<(const Chmod&, const Chmod&);

class ChmodRsp;
bool operator==(const ChmodRsp&, const ChmodRsp&);
bool operator<(const ChmodRsp&, const ChmodRsp&);

class Chown;
bool operator==(const Chown&, const Chown&);
bool operator<(const Chown&, const Chown&);

class ChownRsp;
bool operator==(const ChownRsp&, const ChownRsp&);
bool operator<(const ChownRsp&, const ChownRsp&);

class Delete;
bool operator==(const Delete&, const Delete&);
bool operator<(const Delete&, const Delete&);

class DeleteRsp;
bool operator==(const DeleteRsp&, const DeleteRsp&);
bool operator<(const DeleteRsp&, const DeleteRsp&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::cmd::GraphModify*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::GraphModify*);

::Ice::Object* upCast(::omero::cmd::GraphConstraintERR*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::GraphConstraintERR*);

::Ice::Object* upCast(::omero::cmd::GraphSpecList*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::GraphSpecList*);

::Ice::Object* upCast(::omero::cmd::GraphSpecListRsp*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::GraphSpecListRsp*);

::Ice::Object* upCast(::omero::cmd::Chgrp*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::Chgrp*);

::Ice::Object* upCast(::omero::cmd::ChgrpRsp*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::ChgrpRsp*);

::Ice::Object* upCast(::omero::cmd::Chmod*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::Chmod*);

::Ice::Object* upCast(::omero::cmd::ChmodRsp*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::ChmodRsp*);

::Ice::Object* upCast(::omero::cmd::Chown*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::Chown*);

::Ice::Object* upCast(::omero::cmd::ChownRsp*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::ChownRsp*);

::Ice::Object* upCast(::omero::cmd::Delete*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::Delete*);

::Ice::Object* upCast(::omero::cmd::DeleteRsp*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::DeleteRsp*);

}

namespace omero
{

namespace cmd
{

typedef ::IceInternal::Handle< ::omero::cmd::GraphModify> GraphModifyPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::GraphModify> GraphModifyPrx;

void __read(::IceInternal::BasicStream*, GraphModifyPrx&);
void __patch__GraphModifyPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::cmd::GraphConstraintERR> GraphConstraintERRPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::GraphConstraintERR> GraphConstraintERRPrx;

void __read(::IceInternal::BasicStream*, GraphConstraintERRPrx&);
void __patch__GraphConstraintERRPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::cmd::GraphSpecList> GraphSpecListPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::GraphSpecList> GraphSpecListPrx;

void __read(::IceInternal::BasicStream*, GraphSpecListPrx&);
void __patch__GraphSpecListPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::cmd::GraphSpecListRsp> GraphSpecListRspPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::GraphSpecListRsp> GraphSpecListRspPrx;

void __read(::IceInternal::BasicStream*, GraphSpecListRspPrx&);
void __patch__GraphSpecListRspPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::cmd::Chgrp> ChgrpPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::Chgrp> ChgrpPrx;

void __read(::IceInternal::BasicStream*, ChgrpPrx&);
void __patch__ChgrpPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::cmd::ChgrpRsp> ChgrpRspPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::ChgrpRsp> ChgrpRspPrx;

void __read(::IceInternal::BasicStream*, ChgrpRspPrx&);
void __patch__ChgrpRspPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::cmd::Chmod> ChmodPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::Chmod> ChmodPrx;

void __read(::IceInternal::BasicStream*, ChmodPrx&);
void __patch__ChmodPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::cmd::ChmodRsp> ChmodRspPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::ChmodRsp> ChmodRspPrx;

void __read(::IceInternal::BasicStream*, ChmodRspPrx&);
void __patch__ChmodRspPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::cmd::Chown> ChownPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::Chown> ChownPrx;

void __read(::IceInternal::BasicStream*, ChownPrx&);
void __patch__ChownPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::cmd::ChownRsp> ChownRspPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::ChownRsp> ChownRspPrx;

void __read(::IceInternal::BasicStream*, ChownRspPrx&);
void __patch__ChownRspPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::cmd::Delete> DeletePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::Delete> DeletePrx;

void __read(::IceInternal::BasicStream*, DeletePrx&);
void __patch__DeletePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::cmd::DeleteRsp> DeleteRspPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::DeleteRsp> DeleteRspPrx;

void __read(::IceInternal::BasicStream*, DeleteRspPrx&);
void __patch__DeleteRspPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace cmd
{

typedef ::std::vector< ::omero::cmd::GraphModifyPtr> GraphModifyList;
void __writeGraphModifyList(::IceInternal::BasicStream*, const ::omero::cmd::GraphModifyPtr*, const ::omero::cmd::GraphModifyPtr*);
void __readGraphModifyList(::IceInternal::BasicStream*, GraphModifyList&);

}

}

namespace IceAsync
{

}

namespace IceProxy
{

namespace omero
{

namespace cmd
{

class GraphModify : virtual public ::IceProxy::omero::cmd::Request
{
public:
    
    ::IceInternal::ProxyHandle<GraphModify> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphModify*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<GraphModify*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphModify> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphModify*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<GraphModify*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphModify> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphModify*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<GraphModify*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphModify> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphModify*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<GraphModify*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphModify> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphModify*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<GraphModify*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphModify> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphModify*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<GraphModify*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphModify> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphModify*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<GraphModify*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphModify> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphModify*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<GraphModify*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphModify> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphModify*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<GraphModify*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphModify> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphModify*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<GraphModify*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphModify> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphModify*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<GraphModify*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphModify> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphModify*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<GraphModify*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphModify> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphModify*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<GraphModify*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphModify> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphModify*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<GraphModify*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphModify> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphModify*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<GraphModify*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphModify> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphModify*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<GraphModify*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphModify> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphModify*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<GraphModify*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphModify> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphModify*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<GraphModify*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphModify> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphModify*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<GraphModify*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class GraphConstraintERR : virtual public ::IceProxy::omero::cmd::ERR
{
public:
    
    ::IceInternal::ProxyHandle<GraphConstraintERR> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphConstraintERR*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<GraphConstraintERR*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphConstraintERR> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphConstraintERR*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<GraphConstraintERR*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphConstraintERR> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphConstraintERR*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<GraphConstraintERR*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphConstraintERR> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphConstraintERR*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<GraphConstraintERR*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphConstraintERR> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphConstraintERR*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<GraphConstraintERR*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphConstraintERR> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphConstraintERR*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<GraphConstraintERR*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphConstraintERR> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphConstraintERR*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<GraphConstraintERR*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphConstraintERR> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphConstraintERR*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<GraphConstraintERR*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphConstraintERR> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphConstraintERR*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<GraphConstraintERR*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphConstraintERR> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphConstraintERR*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<GraphConstraintERR*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphConstraintERR> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphConstraintERR*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<GraphConstraintERR*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphConstraintERR> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphConstraintERR*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<GraphConstraintERR*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphConstraintERR> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphConstraintERR*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<GraphConstraintERR*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphConstraintERR> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphConstraintERR*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<GraphConstraintERR*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphConstraintERR> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphConstraintERR*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<GraphConstraintERR*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphConstraintERR> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphConstraintERR*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<GraphConstraintERR*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphConstraintERR> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphConstraintERR*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<GraphConstraintERR*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphConstraintERR> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphConstraintERR*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<GraphConstraintERR*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphConstraintERR> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphConstraintERR*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<GraphConstraintERR*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class GraphSpecList : virtual public ::IceProxy::omero::cmd::Request
{
public:
    
    ::IceInternal::ProxyHandle<GraphSpecList> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecList*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<GraphSpecList*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecList> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecList*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<GraphSpecList*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecList> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecList*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<GraphSpecList*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecList> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecList*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<GraphSpecList*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecList> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecList*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<GraphSpecList*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecList> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecList*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<GraphSpecList*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecList> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecList*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<GraphSpecList*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecList> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecList*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<GraphSpecList*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecList> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecList*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<GraphSpecList*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecList> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecList*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<GraphSpecList*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecList> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecList*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<GraphSpecList*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecList> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecList*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<GraphSpecList*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecList> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecList*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<GraphSpecList*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecList> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecList*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<GraphSpecList*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecList> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecList*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<GraphSpecList*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecList> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecList*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<GraphSpecList*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecList> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecList*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<GraphSpecList*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecList> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecList*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<GraphSpecList*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecList> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecList*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<GraphSpecList*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class GraphSpecListRsp : virtual public ::IceProxy::omero::cmd::Response
{
public:
    
    ::IceInternal::ProxyHandle<GraphSpecListRsp> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecListRsp*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<GraphSpecListRsp*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecListRsp> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecListRsp*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<GraphSpecListRsp*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecListRsp> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecListRsp*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<GraphSpecListRsp*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecListRsp> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecListRsp*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<GraphSpecListRsp*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecListRsp> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecListRsp*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<GraphSpecListRsp*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecListRsp> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecListRsp*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<GraphSpecListRsp*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecListRsp> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecListRsp*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<GraphSpecListRsp*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecListRsp> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecListRsp*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<GraphSpecListRsp*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecListRsp> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecListRsp*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<GraphSpecListRsp*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecListRsp> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecListRsp*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<GraphSpecListRsp*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecListRsp> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecListRsp*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<GraphSpecListRsp*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecListRsp> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecListRsp*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<GraphSpecListRsp*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecListRsp> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecListRsp*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<GraphSpecListRsp*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecListRsp> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecListRsp*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<GraphSpecListRsp*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecListRsp> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecListRsp*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<GraphSpecListRsp*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecListRsp> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecListRsp*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<GraphSpecListRsp*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecListRsp> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecListRsp*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<GraphSpecListRsp*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecListRsp> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecListRsp*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<GraphSpecListRsp*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GraphSpecListRsp> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GraphSpecListRsp*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<GraphSpecListRsp*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Chgrp : virtual public ::IceProxy::omero::cmd::GraphModify
{
public:
    
    ::IceInternal::ProxyHandle<Chgrp> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chgrp*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Chgrp*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chgrp> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chgrp*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Chgrp*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chgrp> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chgrp*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Chgrp*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chgrp> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chgrp*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Chgrp*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chgrp> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chgrp*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Chgrp*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chgrp> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chgrp*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Chgrp*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chgrp> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chgrp*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Chgrp*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chgrp> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chgrp*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Chgrp*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chgrp> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chgrp*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Chgrp*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chgrp> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chgrp*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Chgrp*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chgrp> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chgrp*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Chgrp*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chgrp> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chgrp*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Chgrp*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chgrp> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chgrp*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Chgrp*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chgrp> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chgrp*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Chgrp*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chgrp> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chgrp*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Chgrp*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chgrp> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chgrp*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Chgrp*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chgrp> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chgrp*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Chgrp*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chgrp> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chgrp*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Chgrp*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chgrp> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chgrp*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Chgrp*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class ChgrpRsp : virtual public ::IceProxy::omero::cmd::Response
{
public:
    
    ::IceInternal::ProxyHandle<ChgrpRsp> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChgrpRsp*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ChgrpRsp*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChgrpRsp> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChgrpRsp*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ChgrpRsp*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChgrpRsp> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChgrpRsp*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ChgrpRsp*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChgrpRsp> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChgrpRsp*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ChgrpRsp*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChgrpRsp> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChgrpRsp*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ChgrpRsp*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChgrpRsp> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChgrpRsp*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ChgrpRsp*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChgrpRsp> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChgrpRsp*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ChgrpRsp*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChgrpRsp> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChgrpRsp*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ChgrpRsp*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChgrpRsp> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChgrpRsp*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ChgrpRsp*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChgrpRsp> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChgrpRsp*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ChgrpRsp*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChgrpRsp> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChgrpRsp*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ChgrpRsp*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChgrpRsp> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChgrpRsp*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ChgrpRsp*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChgrpRsp> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChgrpRsp*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ChgrpRsp*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChgrpRsp> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChgrpRsp*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ChgrpRsp*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChgrpRsp> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChgrpRsp*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ChgrpRsp*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChgrpRsp> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChgrpRsp*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ChgrpRsp*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChgrpRsp> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChgrpRsp*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ChgrpRsp*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChgrpRsp> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChgrpRsp*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ChgrpRsp*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChgrpRsp> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChgrpRsp*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ChgrpRsp*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Chmod : virtual public ::IceProxy::omero::cmd::GraphModify
{
public:
    
    ::IceInternal::ProxyHandle<Chmod> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chmod*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Chmod*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chmod> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chmod*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Chmod*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chmod> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chmod*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Chmod*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chmod> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chmod*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Chmod*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chmod> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chmod*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Chmod*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chmod> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chmod*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Chmod*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chmod> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chmod*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Chmod*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chmod> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chmod*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Chmod*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chmod> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chmod*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Chmod*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chmod> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chmod*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Chmod*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chmod> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chmod*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Chmod*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chmod> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chmod*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Chmod*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chmod> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chmod*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Chmod*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chmod> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chmod*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Chmod*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chmod> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chmod*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Chmod*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chmod> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chmod*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Chmod*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chmod> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chmod*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Chmod*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chmod> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chmod*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Chmod*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chmod> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chmod*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Chmod*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class ChmodRsp : virtual public ::IceProxy::omero::cmd::Response
{
public:
    
    ::IceInternal::ProxyHandle<ChmodRsp> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChmodRsp*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ChmodRsp*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChmodRsp> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChmodRsp*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ChmodRsp*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChmodRsp> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChmodRsp*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ChmodRsp*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChmodRsp> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChmodRsp*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ChmodRsp*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChmodRsp> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChmodRsp*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ChmodRsp*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChmodRsp> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChmodRsp*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ChmodRsp*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChmodRsp> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChmodRsp*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ChmodRsp*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChmodRsp> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChmodRsp*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ChmodRsp*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChmodRsp> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChmodRsp*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ChmodRsp*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChmodRsp> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChmodRsp*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ChmodRsp*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChmodRsp> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChmodRsp*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ChmodRsp*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChmodRsp> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChmodRsp*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ChmodRsp*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChmodRsp> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChmodRsp*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ChmodRsp*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChmodRsp> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChmodRsp*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ChmodRsp*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChmodRsp> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChmodRsp*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ChmodRsp*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChmodRsp> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChmodRsp*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ChmodRsp*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChmodRsp> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChmodRsp*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ChmodRsp*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChmodRsp> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChmodRsp*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ChmodRsp*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChmodRsp> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChmodRsp*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ChmodRsp*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Chown : virtual public ::IceProxy::omero::cmd::GraphModify
{
public:
    
    ::IceInternal::ProxyHandle<Chown> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chown*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Chown*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chown> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chown*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Chown*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chown> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chown*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Chown*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chown> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chown*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Chown*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chown> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chown*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Chown*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chown> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chown*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Chown*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chown> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chown*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Chown*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chown> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chown*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Chown*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chown> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chown*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Chown*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chown> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chown*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Chown*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chown> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chown*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Chown*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chown> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chown*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Chown*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chown> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chown*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Chown*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chown> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chown*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Chown*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chown> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chown*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Chown*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chown> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chown*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Chown*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chown> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chown*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Chown*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chown> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chown*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Chown*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Chown> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Chown*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Chown*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class ChownRsp : virtual public ::IceProxy::omero::cmd::Response
{
public:
    
    ::IceInternal::ProxyHandle<ChownRsp> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChownRsp*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ChownRsp*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChownRsp> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChownRsp*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ChownRsp*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChownRsp> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChownRsp*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ChownRsp*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChownRsp> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChownRsp*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ChownRsp*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChownRsp> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChownRsp*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ChownRsp*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChownRsp> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChownRsp*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ChownRsp*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChownRsp> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChownRsp*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ChownRsp*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChownRsp> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChownRsp*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ChownRsp*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChownRsp> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChownRsp*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ChownRsp*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChownRsp> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChownRsp*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ChownRsp*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChownRsp> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChownRsp*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ChownRsp*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChownRsp> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChownRsp*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ChownRsp*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChownRsp> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChownRsp*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ChownRsp*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChownRsp> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChownRsp*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ChownRsp*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChownRsp> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChownRsp*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ChownRsp*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChownRsp> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChownRsp*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ChownRsp*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChownRsp> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChownRsp*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ChownRsp*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChownRsp> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChownRsp*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ChownRsp*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ChownRsp> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ChownRsp*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ChownRsp*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Delete : virtual public ::IceProxy::omero::cmd::GraphModify
{
public:
    
    ::IceInternal::ProxyHandle<Delete> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Delete*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Delete*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Delete> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Delete*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Delete*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Delete> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Delete*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Delete*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Delete> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Delete*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Delete*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Delete> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Delete*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Delete*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Delete> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Delete*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Delete*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Delete> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Delete*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Delete*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Delete> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Delete*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Delete*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Delete> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Delete*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Delete*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Delete> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Delete*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Delete*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Delete> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Delete*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Delete*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Delete> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Delete*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Delete*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Delete> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Delete*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Delete*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Delete> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Delete*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Delete*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Delete> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Delete*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Delete*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Delete> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Delete*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Delete*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Delete> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Delete*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Delete*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Delete> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Delete*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Delete*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Delete> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Delete*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Delete*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class DeleteRsp : virtual public ::IceProxy::omero::cmd::OK
{
public:
    
    ::IceInternal::ProxyHandle<DeleteRsp> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteRsp*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<DeleteRsp*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteRsp> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteRsp*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<DeleteRsp*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteRsp> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteRsp*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<DeleteRsp*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteRsp> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteRsp*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<DeleteRsp*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteRsp> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteRsp*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<DeleteRsp*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteRsp> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteRsp*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<DeleteRsp*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteRsp> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteRsp*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<DeleteRsp*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteRsp> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteRsp*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<DeleteRsp*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteRsp> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteRsp*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<DeleteRsp*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteRsp> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteRsp*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<DeleteRsp*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteRsp> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteRsp*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<DeleteRsp*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteRsp> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteRsp*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<DeleteRsp*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteRsp> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteRsp*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<DeleteRsp*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteRsp> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteRsp*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<DeleteRsp*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteRsp> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteRsp*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<DeleteRsp*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteRsp> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteRsp*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<DeleteRsp*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteRsp> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteRsp*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<DeleteRsp*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteRsp> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteRsp*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<DeleteRsp*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeleteRsp> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeleteRsp*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<DeleteRsp*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace cmd
{

class GraphModify : virtual public ::IceDelegate::omero::cmd::Request
{
public:
};

class GraphConstraintERR : virtual public ::IceDelegate::omero::cmd::ERR
{
public:
};

class GraphSpecList : virtual public ::IceDelegate::omero::cmd::Request
{
public:
};

class GraphSpecListRsp : virtual public ::IceDelegate::omero::cmd::Response
{
public:
};

class Chgrp : virtual public ::IceDelegate::omero::cmd::GraphModify
{
public:
};

class ChgrpRsp : virtual public ::IceDelegate::omero::cmd::Response
{
public:
};

class Chmod : virtual public ::IceDelegate::omero::cmd::GraphModify
{
public:
};

class ChmodRsp : virtual public ::IceDelegate::omero::cmd::Response
{
public:
};

class Chown : virtual public ::IceDelegate::omero::cmd::GraphModify
{
public:
};

class ChownRsp : virtual public ::IceDelegate::omero::cmd::Response
{
public:
};

class Delete : virtual public ::IceDelegate::omero::cmd::GraphModify
{
public:
};

class DeleteRsp : virtual public ::IceDelegate::omero::cmd::OK
{
public:
};

}

}

}

namespace IceDelegateM
{

namespace omero
{

namespace cmd
{

class GraphModify : virtual public ::IceDelegate::omero::cmd::GraphModify,
                    virtual public ::IceDelegateM::omero::cmd::Request
{
public:
};

class GraphConstraintERR : virtual public ::IceDelegate::omero::cmd::GraphConstraintERR,
                           virtual public ::IceDelegateM::omero::cmd::ERR
{
public:
};

class GraphSpecList : virtual public ::IceDelegate::omero::cmd::GraphSpecList,
                      virtual public ::IceDelegateM::omero::cmd::Request
{
public:
};

class GraphSpecListRsp : virtual public ::IceDelegate::omero::cmd::GraphSpecListRsp,
                         virtual public ::IceDelegateM::omero::cmd::Response
{
public:
};

class Chgrp : virtual public ::IceDelegate::omero::cmd::Chgrp,
              virtual public ::IceDelegateM::omero::cmd::GraphModify
{
public:
};

class ChgrpRsp : virtual public ::IceDelegate::omero::cmd::ChgrpRsp,
                 virtual public ::IceDelegateM::omero::cmd::Response
{
public:
};

class Chmod : virtual public ::IceDelegate::omero::cmd::Chmod,
              virtual public ::IceDelegateM::omero::cmd::GraphModify
{
public:
};

class ChmodRsp : virtual public ::IceDelegate::omero::cmd::ChmodRsp,
                 virtual public ::IceDelegateM::omero::cmd::Response
{
public:
};

class Chown : virtual public ::IceDelegate::omero::cmd::Chown,
              virtual public ::IceDelegateM::omero::cmd::GraphModify
{
public:
};

class ChownRsp : virtual public ::IceDelegate::omero::cmd::ChownRsp,
                 virtual public ::IceDelegateM::omero::cmd::Response
{
public:
};

class Delete : virtual public ::IceDelegate::omero::cmd::Delete,
               virtual public ::IceDelegateM::omero::cmd::GraphModify
{
public:
};

class DeleteRsp : virtual public ::IceDelegate::omero::cmd::DeleteRsp,
                  virtual public ::IceDelegateM::omero::cmd::OK
{
public:
};

}

}

}

namespace IceDelegateD
{

namespace omero
{

namespace cmd
{

class GraphModify : virtual public ::IceDelegate::omero::cmd::GraphModify,
                    virtual public ::IceDelegateD::omero::cmd::Request
{
public:
};

class GraphConstraintERR : virtual public ::IceDelegate::omero::cmd::GraphConstraintERR,
                           virtual public ::IceDelegateD::omero::cmd::ERR
{
public:
};

class GraphSpecList : virtual public ::IceDelegate::omero::cmd::GraphSpecList,
                      virtual public ::IceDelegateD::omero::cmd::Request
{
public:
};

class GraphSpecListRsp : virtual public ::IceDelegate::omero::cmd::GraphSpecListRsp,
                         virtual public ::IceDelegateD::omero::cmd::Response
{
public:
};

class Chgrp : virtual public ::IceDelegate::omero::cmd::Chgrp,
              virtual public ::IceDelegateD::omero::cmd::GraphModify
{
public:
};

class ChgrpRsp : virtual public ::IceDelegate::omero::cmd::ChgrpRsp,
                 virtual public ::IceDelegateD::omero::cmd::Response
{
public:
};

class Chmod : virtual public ::IceDelegate::omero::cmd::Chmod,
              virtual public ::IceDelegateD::omero::cmd::GraphModify
{
public:
};

class ChmodRsp : virtual public ::IceDelegate::omero::cmd::ChmodRsp,
                 virtual public ::IceDelegateD::omero::cmd::Response
{
public:
};

class Chown : virtual public ::IceDelegate::omero::cmd::Chown,
              virtual public ::IceDelegateD::omero::cmd::GraphModify
{
public:
};

class ChownRsp : virtual public ::IceDelegate::omero::cmd::ChownRsp,
                 virtual public ::IceDelegateD::omero::cmd::Response
{
public:
};

class Delete : virtual public ::IceDelegate::omero::cmd::Delete,
               virtual public ::IceDelegateD::omero::cmd::GraphModify
{
public:
};

class DeleteRsp : virtual public ::IceDelegate::omero::cmd::DeleteRsp,
                  virtual public ::IceDelegateD::omero::cmd::OK
{
public:
};

}

}

}

namespace omero
{

namespace cmd
{

class GraphModify : virtual public ::omero::cmd::Request
{
public:

    typedef GraphModifyPrx ProxyType;
    typedef GraphModifyPtr PointerType;
    
    GraphModify() {}
    GraphModify(const ::std::string&, ::Ice::Long, const ::omero::cmd::StringMap&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~GraphModify() {}

    friend class GraphModify__staticInit;

public:

    ::std::string type;

    ::Ice::Long id;

    ::omero::cmd::StringMap options;
};

class GraphModify__staticInit
{
public:

    ::omero::cmd::GraphModify _init;
};

static GraphModify__staticInit _GraphModify_init;

class GraphConstraintERR : virtual public ::omero::cmd::ERR
{
public:

    typedef GraphConstraintERRPrx ProxyType;
    typedef GraphConstraintERRPtr PointerType;
    
    GraphConstraintERR() {}
    GraphConstraintERR(const ::std::string&, const ::std::string&, const ::omero::cmd::StringMap&, const ::omero::api::IdListMap&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~GraphConstraintERR() {}

public:

    ::omero::api::IdListMap constraints;
};

class GraphSpecList : virtual public ::omero::cmd::Request
{
public:

    typedef GraphSpecListPrx ProxyType;
    typedef GraphSpecListPtr PointerType;
    
    GraphSpecList() {}
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~GraphSpecList() {}
};

class GraphSpecListRsp : virtual public ::omero::cmd::Response
{
public:

    typedef GraphSpecListRspPrx ProxyType;
    typedef GraphSpecListRspPtr PointerType;
    
    GraphSpecListRsp() {}
    explicit GraphSpecListRsp(const ::omero::cmd::GraphModifyList&);
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

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~GraphSpecListRsp() {}

public:

    ::omero::cmd::GraphModifyList list;
};

class Chgrp : virtual public ::omero::cmd::GraphModify
{
public:

    typedef ChgrpPrx ProxyType;
    typedef ChgrpPtr PointerType;
    
    Chgrp() {}
    Chgrp(const ::std::string&, ::Ice::Long, const ::omero::cmd::StringMap&, ::Ice::Long);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~Chgrp() {}

public:

    ::Ice::Long grp;
};

class ChgrpRsp : virtual public ::omero::cmd::Response
{
public:

    typedef ChgrpRspPrx ProxyType;
    typedef ChgrpRspPtr PointerType;
    
    ChgrpRsp() {}
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~ChgrpRsp() {}
};

class Chmod : virtual public ::omero::cmd::GraphModify
{
public:

    typedef ChmodPrx ProxyType;
    typedef ChmodPtr PointerType;
    
    Chmod() {}
    Chmod(const ::std::string&, ::Ice::Long, const ::omero::cmd::StringMap&, const ::std::string&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~Chmod() {}

public:

    ::std::string permissions;
};

class ChmodRsp : virtual public ::omero::cmd::Response
{
public:

    typedef ChmodRspPrx ProxyType;
    typedef ChmodRspPtr PointerType;
    
    ChmodRsp() {}
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~ChmodRsp() {}
};

class Chown : virtual public ::omero::cmd::GraphModify
{
public:

    typedef ChownPrx ProxyType;
    typedef ChownPtr PointerType;
    
    Chown() {}
    Chown(const ::std::string&, ::Ice::Long, const ::omero::cmd::StringMap&, ::Ice::Long);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~Chown() {}

public:

    ::Ice::Long user;
};

class ChownRsp : virtual public ::omero::cmd::Response
{
public:

    typedef ChownRspPrx ProxyType;
    typedef ChownRspPtr PointerType;
    
    ChownRsp() {}
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~ChownRsp() {}
};

class Delete : virtual public ::omero::cmd::GraphModify
{
public:

    typedef DeletePrx ProxyType;
    typedef DeletePtr PointerType;
    
    Delete() {}
    Delete(const ::std::string&, ::Ice::Long, const ::omero::cmd::StringMap&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~Delete() {}
};

class DeleteRsp : virtual public ::omero::cmd::OK
{
public:

    typedef DeleteRspPrx ProxyType;
    typedef DeleteRspPtr PointerType;
    
    DeleteRsp() {}
    DeleteRsp(const ::std::string&, const ::omero::api::IdListMap&, ::Ice::Int, ::Ice::Long, ::Ice::Long);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~DeleteRsp() {}

public:

    ::std::string warning;

    ::omero::api::IdListMap undeletedFiles;

    ::Ice::Int steps;

    ::Ice::Long scheduledDeletes;

    ::Ice::Long actualDeletes;
};

}

}

#endif
