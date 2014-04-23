// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `FS.ice'

#ifndef __omero__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_FS_h__
#define __omero__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_FS_h__

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
#include <Ice/Direct.h>
#include <Ice/UserExceptionFactory.h>
#include <Ice/FactoryTable.h>
#include <Ice/StreamF.h>
#include <Ice/BuiltinSequences.h>
#include <omero/ServerErrors.h>
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

namespace grid
{

namespace monitors
{

class MonitorClient;

class FileServer;

class MonitorServer;

}

}

}

}

namespace omero
{

namespace grid
{

namespace monitors
{

class MonitorClient;
bool operator==(const MonitorClient&, const MonitorClient&);
bool operator<(const MonitorClient&, const MonitorClient&);

class FileServer;
bool operator==(const FileServer&, const FileServer&);
bool operator<(const FileServer&, const FileServer&);

class MonitorServer;
bool operator==(const MonitorServer&, const MonitorServer&);
bool operator<(const MonitorServer&, const MonitorServer&);

}

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::grid::monitors::MonitorClient*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::monitors::MonitorClient*);

::Ice::Object* upCast(::omero::grid::monitors::FileServer*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::monitors::FileServer*);

::Ice::Object* upCast(::omero::grid::monitors::MonitorServer*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::monitors::MonitorServer*);

}

namespace omero
{

namespace grid
{

namespace monitors
{

typedef ::IceInternal::Handle< ::omero::grid::monitors::MonitorClient> MonitorClientPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::monitors::MonitorClient> MonitorClientPrx;

void __read(::IceInternal::BasicStream*, MonitorClientPrx&);
void __patch__MonitorClientPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::monitors::FileServer> FileServerPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::monitors::FileServer> FileServerPrx;

void __read(::IceInternal::BasicStream*, FileServerPrx&);
void __patch__FileServerPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::monitors::MonitorServer> MonitorServerPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::monitors::MonitorServer> MonitorServerPrx;

void __read(::IceInternal::BasicStream*, MonitorServerPrx&);
void __patch__MonitorServerPtr(void*, ::Ice::ObjectPtr&);

}

}

}

namespace omero
{

namespace grid
{

namespace monitors
{

enum EventType
{
    Create,
    Modify,
    Delete,
    System
};

void __write(::IceInternal::BasicStream*, EventType);
void __read(::IceInternal::BasicStream*, EventType&);

struct EventInfo
{
    ::std::string fileId;
    ::omero::grid::monitors::EventType type;

    bool operator==(const EventInfo&) const;
    bool operator<(const EventInfo&) const;
    bool operator!=(const EventInfo& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const EventInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const EventInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const EventInfo& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::omero::grid::monitors::EventInfo> EventList;
void __writeEventList(::IceInternal::BasicStream*, const ::omero::grid::monitors::EventInfo*, const ::omero::grid::monitors::EventInfo*);
void __readEventList(::IceInternal::BasicStream*, EventList&);

enum MonitorType
{
    Persistent,
    OneShot,
    Inactivity
};

void __write(::IceInternal::BasicStream*, MonitorType);
void __read(::IceInternal::BasicStream*, MonitorType&);

enum FileType
{
    File,
    Dir,
    Link,
    Mount,
    Unknown
};

void __write(::IceInternal::BasicStream*, FileType);
void __read(::IceInternal::BasicStream*, FileType&);

enum PathMode
{
    Flat,
    Recurse,
    Follow
};

void __write(::IceInternal::BasicStream*, PathMode);
void __read(::IceInternal::BasicStream*, PathMode&);

enum WatchEventType
{
    Creation,
    Modification,
    Deletion,
    All
};

void __write(::IceInternal::BasicStream*, WatchEventType);
void __read(::IceInternal::BasicStream*, WatchEventType&);

enum MonitorState
{
    Stopped,
    Started
};

void __write(::IceInternal::BasicStream*, MonitorState);
void __read(::IceInternal::BasicStream*, MonitorState&);

struct FileStats
{
    ::std::string baseName;
    ::std::string owner;
    ::Ice::Long size;
    ::Ice::Float mTime;
    ::Ice::Float cTime;
    ::Ice::Float aTime;
    ::omero::grid::monitors::FileType type;

    bool operator==(const FileStats&) const;
    bool operator<(const FileStats&) const;
    bool operator!=(const FileStats& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const FileStats& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const FileStats& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const FileStats& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::omero::grid::monitors::WatchEventType> WatchEventList;
void __writeWatchEventList(::IceInternal::BasicStream*, const ::omero::grid::monitors::WatchEventType*, const ::omero::grid::monitors::WatchEventType*);
void __readWatchEventList(::IceInternal::BasicStream*, WatchEventList&);

typedef ::std::vector< ::omero::grid::monitors::FileStats> FileStatsList;
void __writeFileStatsList(::IceInternal::BasicStream*, const ::omero::grid::monitors::FileStats*, const ::omero::grid::monitors::FileStats*);
void __readFileStatsList(::IceInternal::BasicStream*, FileStatsList&);

}

}

}

namespace IceProxy
{

namespace omero
{

namespace grid
{

namespace monitors
{

class MonitorClient : virtual public ::IceProxy::Ice::Object
{
public:

    void fsEventHappened(const ::std::string& id, const ::omero::grid::monitors::EventList& el)
    {
        fsEventHappened(id, el, 0);
    }
    void fsEventHappened(const ::std::string& id, const ::omero::grid::monitors::EventList& el, const ::Ice::Context& __ctx)
    {
        fsEventHappened(id, el, &__ctx);
    }
    
private:

    void fsEventHappened(const ::std::string&, const ::omero::grid::monitors::EventList&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<MonitorClient> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorClient*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<MonitorClient*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorClient> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorClient*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<MonitorClient*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorClient> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorClient*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<MonitorClient*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorClient> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorClient*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<MonitorClient*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorClient> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorClient*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<MonitorClient*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorClient> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorClient*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<MonitorClient*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorClient> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorClient*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<MonitorClient*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorClient> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorClient*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<MonitorClient*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorClient> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorClient*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<MonitorClient*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorClient> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorClient*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<MonitorClient*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorClient> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorClient*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<MonitorClient*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorClient> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorClient*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<MonitorClient*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorClient> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorClient*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<MonitorClient*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorClient> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorClient*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<MonitorClient*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorClient> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorClient*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<MonitorClient*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorClient> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorClient*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<MonitorClient*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorClient> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorClient*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<MonitorClient*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorClient> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorClient*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<MonitorClient*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorClient> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorClient*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<MonitorClient*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class FileServer : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::StringSeq getDirectory(const ::std::string& absPath, const ::std::string& filter)
    {
        return getDirectory(absPath, filter, 0);
    }
    ::Ice::StringSeq getDirectory(const ::std::string& absPath, const ::std::string& filter, const ::Ice::Context& __ctx)
    {
        return getDirectory(absPath, filter, &__ctx);
    }
    
private:

    ::Ice::StringSeq getDirectory(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::omero::grid::monitors::FileStatsList getBulkDirectory(const ::std::string& absPath, const ::std::string& filter)
    {
        return getBulkDirectory(absPath, filter, 0);
    }
    ::omero::grid::monitors::FileStatsList getBulkDirectory(const ::std::string& absPath, const ::std::string& filter, const ::Ice::Context& __ctx)
    {
        return getBulkDirectory(absPath, filter, &__ctx);
    }
    
private:

    ::omero::grid::monitors::FileStatsList getBulkDirectory(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    bool fileExists(const ::std::string& fileId)
    {
        return fileExists(fileId, 0);
    }
    bool fileExists(const ::std::string& fileId, const ::Ice::Context& __ctx)
    {
        return fileExists(fileId, &__ctx);
    }
    
private:

    bool fileExists(const ::std::string&, const ::Ice::Context*);
    
public:

    ::std::string getBaseName(const ::std::string& fileId)
    {
        return getBaseName(fileId, 0);
    }
    ::std::string getBaseName(const ::std::string& fileId, const ::Ice::Context& __ctx)
    {
        return getBaseName(fileId, &__ctx);
    }
    
private:

    ::std::string getBaseName(const ::std::string&, const ::Ice::Context*);
    
public:

    ::omero::grid::monitors::FileStats getStats(const ::std::string& fileId)
    {
        return getStats(fileId, 0);
    }
    ::omero::grid::monitors::FileStats getStats(const ::std::string& fileId, const ::Ice::Context& __ctx)
    {
        return getStats(fileId, &__ctx);
    }
    
private:

    ::omero::grid::monitors::FileStats getStats(const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Long getSize(const ::std::string& fileId)
    {
        return getSize(fileId, 0);
    }
    ::Ice::Long getSize(const ::std::string& fileId, const ::Ice::Context& __ctx)
    {
        return getSize(fileId, &__ctx);
    }
    
private:

    ::Ice::Long getSize(const ::std::string&, const ::Ice::Context*);
    
public:

    ::std::string getOwner(const ::std::string& fileId)
    {
        return getOwner(fileId, 0);
    }
    ::std::string getOwner(const ::std::string& fileId, const ::Ice::Context& __ctx)
    {
        return getOwner(fileId, &__ctx);
    }
    
private:

    ::std::string getOwner(const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Float getCTime(const ::std::string& fileId)
    {
        return getCTime(fileId, 0);
    }
    ::Ice::Float getCTime(const ::std::string& fileId, const ::Ice::Context& __ctx)
    {
        return getCTime(fileId, &__ctx);
    }
    
private:

    ::Ice::Float getCTime(const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Float getMTime(const ::std::string& fileId)
    {
        return getMTime(fileId, 0);
    }
    ::Ice::Float getMTime(const ::std::string& fileId, const ::Ice::Context& __ctx)
    {
        return getMTime(fileId, &__ctx);
    }
    
private:

    ::Ice::Float getMTime(const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::Float getATime(const ::std::string& fileId)
    {
        return getATime(fileId, 0);
    }
    ::Ice::Float getATime(const ::std::string& fileId, const ::Ice::Context& __ctx)
    {
        return getATime(fileId, &__ctx);
    }
    
private:

    ::Ice::Float getATime(const ::std::string&, const ::Ice::Context*);
    
public:

    bool isDir(const ::std::string& fileId)
    {
        return isDir(fileId, 0);
    }
    bool isDir(const ::std::string& fileId, const ::Ice::Context& __ctx)
    {
        return isDir(fileId, &__ctx);
    }
    
private:

    bool isDir(const ::std::string&, const ::Ice::Context*);
    
public:

    bool isFile(const ::std::string& fileId)
    {
        return isFile(fileId, 0);
    }
    bool isFile(const ::std::string& fileId, const ::Ice::Context& __ctx)
    {
        return isFile(fileId, &__ctx);
    }
    
private:

    bool isFile(const ::std::string&, const ::Ice::Context*);
    
public:

    ::std::string getSHA1(const ::std::string& fileId)
    {
        return getSHA1(fileId, 0);
    }
    ::std::string getSHA1(const ::std::string& fileId, const ::Ice::Context& __ctx)
    {
        return getSHA1(fileId, &__ctx);
    }
    
private:

    ::std::string getSHA1(const ::std::string&, const ::Ice::Context*);
    
public:

    ::Ice::ByteSeq readBlock(const ::std::string& fileId, ::Ice::Long offset, ::Ice::Int size)
    {
        return readBlock(fileId, offset, size, 0);
    }
    ::Ice::ByteSeq readBlock(const ::std::string& fileId, ::Ice::Long offset, ::Ice::Int size, const ::Ice::Context& __ctx)
    {
        return readBlock(fileId, offset, size, &__ctx);
    }
    
private:

    ::Ice::ByteSeq readBlock(const ::std::string&, ::Ice::Long, ::Ice::Int, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<FileServer> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileServer*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<FileServer*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileServer> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileServer*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<FileServer*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileServer> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileServer*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<FileServer*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileServer> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileServer*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<FileServer*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileServer> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileServer*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<FileServer*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileServer> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileServer*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<FileServer*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileServer> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileServer*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<FileServer*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileServer> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileServer*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<FileServer*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileServer> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileServer*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<FileServer*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileServer> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileServer*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<FileServer*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileServer> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileServer*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<FileServer*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileServer> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileServer*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<FileServer*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileServer> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileServer*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<FileServer*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileServer> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileServer*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<FileServer*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileServer> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileServer*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<FileServer*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileServer> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileServer*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<FileServer*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileServer> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileServer*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<FileServer*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileServer> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileServer*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<FileServer*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileServer> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileServer*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<FileServer*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class MonitorServer : virtual public ::IceProxy::Ice::Object
{
public:

    ::std::string createMonitor(::omero::grid::monitors::MonitorType mType, const ::omero::grid::monitors::WatchEventList& eTypes, ::omero::grid::monitors::PathMode pMode, const ::std::string& pathString, const ::Ice::StringSeq& whitelist, const ::Ice::StringSeq& blacklist, ::Ice::Float timeout, ::Ice::Int blockSize, bool ignoreSysFiles, bool ignoreDirEvents, const ::omero::grid::monitors::MonitorClientPrx& proxy)
    {
        return createMonitor(mType, eTypes, pMode, pathString, whitelist, blacklist, timeout, blockSize, ignoreSysFiles, ignoreDirEvents, proxy, 0);
    }
    ::std::string createMonitor(::omero::grid::monitors::MonitorType mType, const ::omero::grid::monitors::WatchEventList& eTypes, ::omero::grid::monitors::PathMode pMode, const ::std::string& pathString, const ::Ice::StringSeq& whitelist, const ::Ice::StringSeq& blacklist, ::Ice::Float timeout, ::Ice::Int blockSize, bool ignoreSysFiles, bool ignoreDirEvents, const ::omero::grid::monitors::MonitorClientPrx& proxy, const ::Ice::Context& __ctx)
    {
        return createMonitor(mType, eTypes, pMode, pathString, whitelist, blacklist, timeout, blockSize, ignoreSysFiles, ignoreDirEvents, proxy, &__ctx);
    }
    
private:

    ::std::string createMonitor(::omero::grid::monitors::MonitorType, const ::omero::grid::monitors::WatchEventList&, ::omero::grid::monitors::PathMode, const ::std::string&, const ::Ice::StringSeq&, const ::Ice::StringSeq&, ::Ice::Float, ::Ice::Int, bool, bool, const ::omero::grid::monitors::MonitorClientPrx&, const ::Ice::Context*);
    
public:

    void startMonitor(const ::std::string& id)
    {
        startMonitor(id, 0);
    }
    void startMonitor(const ::std::string& id, const ::Ice::Context& __ctx)
    {
        startMonitor(id, &__ctx);
    }
    
private:

    void startMonitor(const ::std::string&, const ::Ice::Context*);
    
public:

    void stopMonitor(const ::std::string& id)
    {
        stopMonitor(id, 0);
    }
    void stopMonitor(const ::std::string& id, const ::Ice::Context& __ctx)
    {
        stopMonitor(id, &__ctx);
    }
    
private:

    void stopMonitor(const ::std::string&, const ::Ice::Context*);
    
public:

    void destroyMonitor(const ::std::string& id)
    {
        destroyMonitor(id, 0);
    }
    void destroyMonitor(const ::std::string& id, const ::Ice::Context& __ctx)
    {
        destroyMonitor(id, &__ctx);
    }
    
private:

    void destroyMonitor(const ::std::string&, const ::Ice::Context*);
    
public:

    ::omero::grid::monitors::MonitorState getMonitorState(const ::std::string& id)
    {
        return getMonitorState(id, 0);
    }
    ::omero::grid::monitors::MonitorState getMonitorState(const ::std::string& id, const ::Ice::Context& __ctx)
    {
        return getMonitorState(id, &__ctx);
    }
    
private:

    ::omero::grid::monitors::MonitorState getMonitorState(const ::std::string&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<MonitorServer> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorServer*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<MonitorServer*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorServer> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorServer*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<MonitorServer*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorServer> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorServer*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<MonitorServer*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorServer> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorServer*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<MonitorServer*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorServer> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorServer*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<MonitorServer*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorServer> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorServer*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<MonitorServer*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorServer> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorServer*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<MonitorServer*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorServer> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorServer*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<MonitorServer*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorServer> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorServer*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<MonitorServer*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorServer> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorServer*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<MonitorServer*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorServer> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorServer*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<MonitorServer*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorServer> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorServer*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<MonitorServer*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorServer> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorServer*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<MonitorServer*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorServer> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorServer*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<MonitorServer*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorServer> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorServer*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<MonitorServer*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorServer> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorServer*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<MonitorServer*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorServer> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorServer*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<MonitorServer*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorServer> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorServer*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<MonitorServer*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MonitorServer> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MonitorServer*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<MonitorServer*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

}

namespace IceDelegate
{

namespace omero
{

namespace grid
{

namespace monitors
{

class MonitorClient : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual void fsEventHappened(const ::std::string&, const ::omero::grid::monitors::EventList&, const ::Ice::Context*) = 0;
};

class FileServer : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::StringSeq getDirectory(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::grid::monitors::FileStatsList getBulkDirectory(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual bool fileExists(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::std::string getBaseName(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::grid::monitors::FileStats getStats(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Long getSize(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::std::string getOwner(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Float getCTime(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Float getMTime(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Float getATime(const ::std::string&, const ::Ice::Context*) = 0;

    virtual bool isDir(const ::std::string&, const ::Ice::Context*) = 0;

    virtual bool isFile(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::std::string getSHA1(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::ByteSeq readBlock(const ::std::string&, ::Ice::Long, ::Ice::Int, const ::Ice::Context*) = 0;
};

class MonitorServer : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::std::string createMonitor(::omero::grid::monitors::MonitorType, const ::omero::grid::monitors::WatchEventList&, ::omero::grid::monitors::PathMode, const ::std::string&, const ::Ice::StringSeq&, const ::Ice::StringSeq&, ::Ice::Float, ::Ice::Int, bool, bool, const ::omero::grid::monitors::MonitorClientPrx&, const ::Ice::Context*) = 0;

    virtual void startMonitor(const ::std::string&, const ::Ice::Context*) = 0;

    virtual void stopMonitor(const ::std::string&, const ::Ice::Context*) = 0;

    virtual void destroyMonitor(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::grid::monitors::MonitorState getMonitorState(const ::std::string&, const ::Ice::Context*) = 0;
};

}

}

}

}

namespace IceDelegateM
{

namespace omero
{

namespace grid
{

namespace monitors
{

class MonitorClient : virtual public ::IceDelegate::omero::grid::monitors::MonitorClient,
                      virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual void fsEventHappened(const ::std::string&, const ::omero::grid::monitors::EventList&, const ::Ice::Context*);
};

class FileServer : virtual public ::IceDelegate::omero::grid::monitors::FileServer,
                   virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::StringSeq getDirectory(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::grid::monitors::FileStatsList getBulkDirectory(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual bool fileExists(const ::std::string&, const ::Ice::Context*);

    virtual ::std::string getBaseName(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::grid::monitors::FileStats getStats(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Long getSize(const ::std::string&, const ::Ice::Context*);

    virtual ::std::string getOwner(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Float getCTime(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Float getMTime(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Float getATime(const ::std::string&, const ::Ice::Context*);

    virtual bool isDir(const ::std::string&, const ::Ice::Context*);

    virtual bool isFile(const ::std::string&, const ::Ice::Context*);

    virtual ::std::string getSHA1(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::ByteSeq readBlock(const ::std::string&, ::Ice::Long, ::Ice::Int, const ::Ice::Context*);
};

class MonitorServer : virtual public ::IceDelegate::omero::grid::monitors::MonitorServer,
                      virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::std::string createMonitor(::omero::grid::monitors::MonitorType, const ::omero::grid::monitors::WatchEventList&, ::omero::grid::monitors::PathMode, const ::std::string&, const ::Ice::StringSeq&, const ::Ice::StringSeq&, ::Ice::Float, ::Ice::Int, bool, bool, const ::omero::grid::monitors::MonitorClientPrx&, const ::Ice::Context*);

    virtual void startMonitor(const ::std::string&, const ::Ice::Context*);

    virtual void stopMonitor(const ::std::string&, const ::Ice::Context*);

    virtual void destroyMonitor(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::grid::monitors::MonitorState getMonitorState(const ::std::string&, const ::Ice::Context*);
};

}

}

}

}

namespace IceDelegateD
{

namespace omero
{

namespace grid
{

namespace monitors
{

class MonitorClient : virtual public ::IceDelegate::omero::grid::monitors::MonitorClient,
                      virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual void fsEventHappened(const ::std::string&, const ::omero::grid::monitors::EventList&, const ::Ice::Context*);
};

class FileServer : virtual public ::IceDelegate::omero::grid::monitors::FileServer,
                   virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::StringSeq getDirectory(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::grid::monitors::FileStatsList getBulkDirectory(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual bool fileExists(const ::std::string&, const ::Ice::Context*);

    virtual ::std::string getBaseName(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::grid::monitors::FileStats getStats(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Long getSize(const ::std::string&, const ::Ice::Context*);

    virtual ::std::string getOwner(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Float getCTime(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Float getMTime(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Float getATime(const ::std::string&, const ::Ice::Context*);

    virtual bool isDir(const ::std::string&, const ::Ice::Context*);

    virtual bool isFile(const ::std::string&, const ::Ice::Context*);

    virtual ::std::string getSHA1(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::ByteSeq readBlock(const ::std::string&, ::Ice::Long, ::Ice::Int, const ::Ice::Context*);
};

class MonitorServer : virtual public ::IceDelegate::omero::grid::monitors::MonitorServer,
                      virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::std::string createMonitor(::omero::grid::monitors::MonitorType, const ::omero::grid::monitors::WatchEventList&, ::omero::grid::monitors::PathMode, const ::std::string&, const ::Ice::StringSeq&, const ::Ice::StringSeq&, ::Ice::Float, ::Ice::Int, bool, bool, const ::omero::grid::monitors::MonitorClientPrx&, const ::Ice::Context*);

    virtual void startMonitor(const ::std::string&, const ::Ice::Context*);

    virtual void stopMonitor(const ::std::string&, const ::Ice::Context*);

    virtual void destroyMonitor(const ::std::string&, const ::Ice::Context*);

    virtual ::omero::grid::monitors::MonitorState getMonitorState(const ::std::string&, const ::Ice::Context*);
};

}

}

}

}

namespace omero
{

namespace grid
{

namespace monitors
{

class MonitorClient : virtual public ::Ice::Object
{
public:

    typedef MonitorClientPrx ProxyType;
    typedef MonitorClientPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void fsEventHappened(const ::std::string&, const ::omero::grid::monitors::EventList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___fsEventHappened(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class FileServer : virtual public ::Ice::Object
{
public:

    typedef FileServerPrx ProxyType;
    typedef FileServerPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::StringSeq getDirectory(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getDirectory(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::grid::monitors::FileStatsList getBulkDirectory(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getBulkDirectory(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool fileExists(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___fileExists(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::std::string getBaseName(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getBaseName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::grid::monitors::FileStats getStats(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getStats(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Long getSize(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getSize(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::std::string getOwner(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Float getCTime(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getCTime(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Float getMTime(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMTime(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Float getATime(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getATime(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool isDir(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isDir(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool isFile(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isFile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::std::string getSHA1(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getSHA1(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::ByteSeq readBlock(const ::std::string&, ::Ice::Long, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___readBlock(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class MonitorServer : virtual public ::Ice::Object
{
public:

    typedef MonitorServerPrx ProxyType;
    typedef MonitorServerPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::std::string createMonitor(::omero::grid::monitors::MonitorType, const ::omero::grid::monitors::WatchEventList&, ::omero::grid::monitors::PathMode, const ::std::string&, const ::Ice::StringSeq&, const ::Ice::StringSeq&, ::Ice::Float, ::Ice::Int, bool, bool, const ::omero::grid::monitors::MonitorClientPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createMonitor(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void startMonitor(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___startMonitor(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void stopMonitor(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___stopMonitor(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void destroyMonitor(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___destroyMonitor(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::grid::monitors::MonitorState getMonitorState(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMonitorState(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

}

#endif
