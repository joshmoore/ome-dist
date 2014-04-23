// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Job.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Job_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Job_h__

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

class JobStatus;

class JobOriginalFileLink;

class OriginalFile;

class Details;

class Job;

}

}

}

namespace omero
{

namespace model
{

class JobStatus;
bool operator==(const JobStatus&, const JobStatus&);
bool operator<(const JobStatus&, const JobStatus&);

class JobOriginalFileLink;
bool operator==(const JobOriginalFileLink&, const JobOriginalFileLink&);
bool operator<(const JobOriginalFileLink&, const JobOriginalFileLink&);

class OriginalFile;
bool operator==(const OriginalFile&, const OriginalFile&);
bool operator<(const OriginalFile&, const OriginalFile&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class Job;
bool operator==(const Job&, const Job&);
bool operator<(const Job&, const Job&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::JobStatus*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::JobStatus*);

::Ice::Object* upCast(::omero::model::JobOriginalFileLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::JobOriginalFileLink*);

::Ice::Object* upCast(::omero::model::OriginalFile*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::OriginalFile*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::Job*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Job*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::JobStatus> JobStatusPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::JobStatus> JobStatusPrx;

void __read(::IceInternal::BasicStream*, JobStatusPrx&);
void __patch__JobStatusPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::JobOriginalFileLink> JobOriginalFileLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::JobOriginalFileLink> JobOriginalFileLinkPrx;

void __read(::IceInternal::BasicStream*, JobOriginalFileLinkPrx&);
void __patch__JobOriginalFileLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::OriginalFile> OriginalFilePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::OriginalFile> OriginalFilePrx;

void __read(::IceInternal::BasicStream*, OriginalFilePrx&);
void __patch__OriginalFilePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Job> JobPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Job> JobPrx;

void __read(::IceInternal::BasicStream*, JobPrx&);
void __patch__JobPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

typedef ::std::vector< ::omero::model::JobOriginalFileLinkPtr> JobOriginalFileLinksSeq;
void __writeJobOriginalFileLinksSeq(::IceInternal::BasicStream*, const ::omero::model::JobOriginalFileLinkPtr*, const ::omero::model::JobOriginalFileLinkPtr*);
void __readJobOriginalFileLinksSeq(::IceInternal::BasicStream*, JobOriginalFileLinksSeq&);

typedef ::std::vector< ::omero::model::OriginalFilePtr> JobLinkedOriginalFileSeq;
void __writeJobLinkedOriginalFileSeq(::IceInternal::BasicStream*, const ::omero::model::OriginalFilePtr*, const ::omero::model::OriginalFilePtr*);
void __readJobLinkedOriginalFileSeq(::IceInternal::BasicStream*, JobLinkedOriginalFileSeq&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Job : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::RStringPtr getUsername()
    {
        return getUsername(0);
    }
    ::omero::RStringPtr getUsername(const ::Ice::Context& __ctx)
    {
        return getUsername(&__ctx);
    }
    
private:

    ::omero::RStringPtr getUsername(const ::Ice::Context*);
    
public:

    void setUsername(const ::omero::RStringPtr& theUsername)
    {
        setUsername(theUsername, 0);
    }
    void setUsername(const ::omero::RStringPtr& theUsername, const ::Ice::Context& __ctx)
    {
        setUsername(theUsername, &__ctx);
    }
    
private:

    void setUsername(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getGroupname()
    {
        return getGroupname(0);
    }
    ::omero::RStringPtr getGroupname(const ::Ice::Context& __ctx)
    {
        return getGroupname(&__ctx);
    }
    
private:

    ::omero::RStringPtr getGroupname(const ::Ice::Context*);
    
public:

    void setGroupname(const ::omero::RStringPtr& theGroupname)
    {
        setGroupname(theGroupname, 0);
    }
    void setGroupname(const ::omero::RStringPtr& theGroupname, const ::Ice::Context& __ctx)
    {
        setGroupname(theGroupname, &__ctx);
    }
    
private:

    void setGroupname(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getType()
    {
        return getType(0);
    }
    ::omero::RStringPtr getType(const ::Ice::Context& __ctx)
    {
        return getType(&__ctx);
    }
    
private:

    ::omero::RStringPtr getType(const ::Ice::Context*);
    
public:

    void setType(const ::omero::RStringPtr& theType)
    {
        setType(theType, 0);
    }
    void setType(const ::omero::RStringPtr& theType, const ::Ice::Context& __ctx)
    {
        setType(theType, &__ctx);
    }
    
private:

    void setType(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getMessage()
    {
        return getMessage(0);
    }
    ::omero::RStringPtr getMessage(const ::Ice::Context& __ctx)
    {
        return getMessage(&__ctx);
    }
    
private:

    ::omero::RStringPtr getMessage(const ::Ice::Context*);
    
public:

    void setMessage(const ::omero::RStringPtr& theMessage)
    {
        setMessage(theMessage, 0);
    }
    void setMessage(const ::omero::RStringPtr& theMessage, const ::Ice::Context& __ctx)
    {
        setMessage(theMessage, &__ctx);
    }
    
private:

    void setMessage(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::JobStatusPtr getStatus()
    {
        return getStatus(0);
    }
    ::omero::model::JobStatusPtr getStatus(const ::Ice::Context& __ctx)
    {
        return getStatus(&__ctx);
    }
    
private:

    ::omero::model::JobStatusPtr getStatus(const ::Ice::Context*);
    
public:

    void setStatus(const ::omero::model::JobStatusPtr& theStatus)
    {
        setStatus(theStatus, 0);
    }
    void setStatus(const ::omero::model::JobStatusPtr& theStatus, const ::Ice::Context& __ctx)
    {
        setStatus(theStatus, &__ctx);
    }
    
private:

    void setStatus(const ::omero::model::JobStatusPtr&, const ::Ice::Context*);
    
public:

    ::omero::RTimePtr getSubmitted()
    {
        return getSubmitted(0);
    }
    ::omero::RTimePtr getSubmitted(const ::Ice::Context& __ctx)
    {
        return getSubmitted(&__ctx);
    }
    
private:

    ::omero::RTimePtr getSubmitted(const ::Ice::Context*);
    
public:

    void setSubmitted(const ::omero::RTimePtr& theSubmitted)
    {
        setSubmitted(theSubmitted, 0);
    }
    void setSubmitted(const ::omero::RTimePtr& theSubmitted, const ::Ice::Context& __ctx)
    {
        setSubmitted(theSubmitted, &__ctx);
    }
    
private:

    void setSubmitted(const ::omero::RTimePtr&, const ::Ice::Context*);
    
public:

    ::omero::RTimePtr getScheduledFor()
    {
        return getScheduledFor(0);
    }
    ::omero::RTimePtr getScheduledFor(const ::Ice::Context& __ctx)
    {
        return getScheduledFor(&__ctx);
    }
    
private:

    ::omero::RTimePtr getScheduledFor(const ::Ice::Context*);
    
public:

    void setScheduledFor(const ::omero::RTimePtr& theScheduledFor)
    {
        setScheduledFor(theScheduledFor, 0);
    }
    void setScheduledFor(const ::omero::RTimePtr& theScheduledFor, const ::Ice::Context& __ctx)
    {
        setScheduledFor(theScheduledFor, &__ctx);
    }
    
private:

    void setScheduledFor(const ::omero::RTimePtr&, const ::Ice::Context*);
    
public:

    ::omero::RTimePtr getStarted()
    {
        return getStarted(0);
    }
    ::omero::RTimePtr getStarted(const ::Ice::Context& __ctx)
    {
        return getStarted(&__ctx);
    }
    
private:

    ::omero::RTimePtr getStarted(const ::Ice::Context*);
    
public:

    void setStarted(const ::omero::RTimePtr& theStarted)
    {
        setStarted(theStarted, 0);
    }
    void setStarted(const ::omero::RTimePtr& theStarted, const ::Ice::Context& __ctx)
    {
        setStarted(theStarted, &__ctx);
    }
    
private:

    void setStarted(const ::omero::RTimePtr&, const ::Ice::Context*);
    
public:

    ::omero::RTimePtr getFinished()
    {
        return getFinished(0);
    }
    ::omero::RTimePtr getFinished(const ::Ice::Context& __ctx)
    {
        return getFinished(&__ctx);
    }
    
private:

    ::omero::RTimePtr getFinished(const ::Ice::Context*);
    
public:

    void setFinished(const ::omero::RTimePtr& theFinished)
    {
        setFinished(theFinished, 0);
    }
    void setFinished(const ::omero::RTimePtr& theFinished, const ::Ice::Context& __ctx)
    {
        setFinished(theFinished, &__ctx);
    }
    
private:

    void setFinished(const ::omero::RTimePtr&, const ::Ice::Context*);
    
public:

    void unloadOriginalFileLinks()
    {
        unloadOriginalFileLinks(0);
    }
    void unloadOriginalFileLinks(const ::Ice::Context& __ctx)
    {
        unloadOriginalFileLinks(&__ctx);
    }
    
private:

    void unloadOriginalFileLinks(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfOriginalFileLinks()
    {
        return sizeOfOriginalFileLinks(0);
    }
    ::Ice::Int sizeOfOriginalFileLinks(const ::Ice::Context& __ctx)
    {
        return sizeOfOriginalFileLinks(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfOriginalFileLinks(const ::Ice::Context*);
    
public:

    ::omero::model::JobOriginalFileLinksSeq copyOriginalFileLinks()
    {
        return copyOriginalFileLinks(0);
    }
    ::omero::model::JobOriginalFileLinksSeq copyOriginalFileLinks(const ::Ice::Context& __ctx)
    {
        return copyOriginalFileLinks(&__ctx);
    }
    
private:

    ::omero::model::JobOriginalFileLinksSeq copyOriginalFileLinks(const ::Ice::Context*);
    
public:

    void addJobOriginalFileLink(const ::omero::model::JobOriginalFileLinkPtr& target)
    {
        addJobOriginalFileLink(target, 0);
    }
    void addJobOriginalFileLink(const ::omero::model::JobOriginalFileLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addJobOriginalFileLink(target, &__ctx);
    }
    
private:

    void addJobOriginalFileLink(const ::omero::model::JobOriginalFileLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllJobOriginalFileLinkSet(const ::omero::model::JobOriginalFileLinksSeq& targets)
    {
        addAllJobOriginalFileLinkSet(targets, 0);
    }
    void addAllJobOriginalFileLinkSet(const ::omero::model::JobOriginalFileLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllJobOriginalFileLinkSet(targets, &__ctx);
    }
    
private:

    void addAllJobOriginalFileLinkSet(const ::omero::model::JobOriginalFileLinksSeq&, const ::Ice::Context*);
    
public:

    void removeJobOriginalFileLink(const ::omero::model::JobOriginalFileLinkPtr& theTarget)
    {
        removeJobOriginalFileLink(theTarget, 0);
    }
    void removeJobOriginalFileLink(const ::omero::model::JobOriginalFileLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeJobOriginalFileLink(theTarget, &__ctx);
    }
    
private:

    void removeJobOriginalFileLink(const ::omero::model::JobOriginalFileLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllJobOriginalFileLinkSet(const ::omero::model::JobOriginalFileLinksSeq& targets)
    {
        removeAllJobOriginalFileLinkSet(targets, 0);
    }
    void removeAllJobOriginalFileLinkSet(const ::omero::model::JobOriginalFileLinksSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllJobOriginalFileLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllJobOriginalFileLinkSet(const ::omero::model::JobOriginalFileLinksSeq&, const ::Ice::Context*);
    
public:

    void clearOriginalFileLinks()
    {
        clearOriginalFileLinks(0);
    }
    void clearOriginalFileLinks(const ::Ice::Context& __ctx)
    {
        clearOriginalFileLinks(&__ctx);
    }
    
private:

    void clearOriginalFileLinks(const ::Ice::Context*);
    
public:

    void reloadOriginalFileLinks(const ::omero::model::JobPtr& toCopy)
    {
        reloadOriginalFileLinks(toCopy, 0);
    }
    void reloadOriginalFileLinks(const ::omero::model::JobPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadOriginalFileLinks(toCopy, &__ctx);
    }
    
private:

    void reloadOriginalFileLinks(const ::omero::model::JobPtr&, const ::Ice::Context*);
    
public:

    ::omero::sys::CountMap getOriginalFileLinksCountPerOwner()
    {
        return getOriginalFileLinksCountPerOwner(0);
    }
    ::omero::sys::CountMap getOriginalFileLinksCountPerOwner(const ::Ice::Context& __ctx)
    {
        return getOriginalFileLinksCountPerOwner(&__ctx);
    }
    
private:

    ::omero::sys::CountMap getOriginalFileLinksCountPerOwner(const ::Ice::Context*);
    
public:

    ::omero::model::JobOriginalFileLinkPtr linkOriginalFile(const ::omero::model::OriginalFilePtr& addition)
    {
        return linkOriginalFile(addition, 0);
    }
    ::omero::model::JobOriginalFileLinkPtr linkOriginalFile(const ::omero::model::OriginalFilePtr& addition, const ::Ice::Context& __ctx)
    {
        return linkOriginalFile(addition, &__ctx);
    }
    
private:

    ::omero::model::JobOriginalFileLinkPtr linkOriginalFile(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);
    
public:

    void addJobOriginalFileLinkToBoth(const ::omero::model::JobOriginalFileLinkPtr& link, bool bothSides)
    {
        addJobOriginalFileLinkToBoth(link, bothSides, 0);
    }
    void addJobOriginalFileLinkToBoth(const ::omero::model::JobOriginalFileLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addJobOriginalFileLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addJobOriginalFileLinkToBoth(const ::omero::model::JobOriginalFileLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::JobOriginalFileLinksSeq findJobOriginalFileLink(const ::omero::model::OriginalFilePtr& removal)
    {
        return findJobOriginalFileLink(removal, 0);
    }
    ::omero::model::JobOriginalFileLinksSeq findJobOriginalFileLink(const ::omero::model::OriginalFilePtr& removal, const ::Ice::Context& __ctx)
    {
        return findJobOriginalFileLink(removal, &__ctx);
    }
    
private:

    ::omero::model::JobOriginalFileLinksSeq findJobOriginalFileLink(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);
    
public:

    void unlinkOriginalFile(const ::omero::model::OriginalFilePtr& removal)
    {
        unlinkOriginalFile(removal, 0);
    }
    void unlinkOriginalFile(const ::omero::model::OriginalFilePtr& removal, const ::Ice::Context& __ctx)
    {
        unlinkOriginalFile(removal, &__ctx);
    }
    
private:

    void unlinkOriginalFile(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);
    
public:

    void removeJobOriginalFileLinkFromBoth(const ::omero::model::JobOriginalFileLinkPtr& link, bool bothSides)
    {
        removeJobOriginalFileLinkFromBoth(link, bothSides, 0);
    }
    void removeJobOriginalFileLinkFromBoth(const ::omero::model::JobOriginalFileLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removeJobOriginalFileLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removeJobOriginalFileLinkFromBoth(const ::omero::model::JobOriginalFileLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::JobLinkedOriginalFileSeq linkedOriginalFileList()
    {
        return linkedOriginalFileList(0);
    }
    ::omero::model::JobLinkedOriginalFileSeq linkedOriginalFileList(const ::Ice::Context& __ctx)
    {
        return linkedOriginalFileList(&__ctx);
    }
    
private:

    ::omero::model::JobLinkedOriginalFileSeq linkedOriginalFileList(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Job> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Job*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Job*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Job> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Job*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Job*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Job> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Job*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Job*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Job> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Job*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Job*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Job> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Job*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Job*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Job> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Job*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Job*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Job> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Job*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Job*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Job> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Job*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Job*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Job> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Job*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Job*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Job> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Job*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Job*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Job> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Job*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Job*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Job> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Job*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Job*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Job> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Job*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Job*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Job> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Job*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Job*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Job> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Job*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Job*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Job> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Job*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Job*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Job> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Job*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Job*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Job> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Job*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Job*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Job> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Job*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Job*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Job : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getUsername(const ::Ice::Context*) = 0;

    virtual void setUsername(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getGroupname(const ::Ice::Context*) = 0;

    virtual void setGroupname(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getType(const ::Ice::Context*) = 0;

    virtual void setType(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getMessage(const ::Ice::Context*) = 0;

    virtual void setMessage(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::JobStatusPtr getStatus(const ::Ice::Context*) = 0;

    virtual void setStatus(const ::omero::model::JobStatusPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RTimePtr getSubmitted(const ::Ice::Context*) = 0;

    virtual void setSubmitted(const ::omero::RTimePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RTimePtr getScheduledFor(const ::Ice::Context*) = 0;

    virtual void setScheduledFor(const ::omero::RTimePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RTimePtr getStarted(const ::Ice::Context*) = 0;

    virtual void setStarted(const ::omero::RTimePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RTimePtr getFinished(const ::Ice::Context*) = 0;

    virtual void setFinished(const ::omero::RTimePtr&, const ::Ice::Context*) = 0;

    virtual void unloadOriginalFileLinks(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfOriginalFileLinks(const ::Ice::Context*) = 0;

    virtual ::omero::model::JobOriginalFileLinksSeq copyOriginalFileLinks(const ::Ice::Context*) = 0;

    virtual void addJobOriginalFileLink(const ::omero::model::JobOriginalFileLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllJobOriginalFileLinkSet(const ::omero::model::JobOriginalFileLinksSeq&, const ::Ice::Context*) = 0;

    virtual void removeJobOriginalFileLink(const ::omero::model::JobOriginalFileLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllJobOriginalFileLinkSet(const ::omero::model::JobOriginalFileLinksSeq&, const ::Ice::Context*) = 0;

    virtual void clearOriginalFileLinks(const ::Ice::Context*) = 0;

    virtual void reloadOriginalFileLinks(const ::omero::model::JobPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getOriginalFileLinksCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::JobOriginalFileLinkPtr linkOriginalFile(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*) = 0;

    virtual void addJobOriginalFileLinkToBoth(const ::omero::model::JobOriginalFileLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::JobOriginalFileLinksSeq findJobOriginalFileLink(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*) = 0;

    virtual void unlinkOriginalFile(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*) = 0;

    virtual void removeJobOriginalFileLinkFromBoth(const ::omero::model::JobOriginalFileLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::JobLinkedOriginalFileSeq linkedOriginalFileList(const ::Ice::Context*) = 0;
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

class Job : virtual public ::IceDelegate::omero::model::Job,
            virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getUsername(const ::Ice::Context*);

    virtual void setUsername(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getGroupname(const ::Ice::Context*);

    virtual void setGroupname(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getType(const ::Ice::Context*);

    virtual void setType(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getMessage(const ::Ice::Context*);

    virtual void setMessage(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::model::JobStatusPtr getStatus(const ::Ice::Context*);

    virtual void setStatus(const ::omero::model::JobStatusPtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getSubmitted(const ::Ice::Context*);

    virtual void setSubmitted(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getScheduledFor(const ::Ice::Context*);

    virtual void setScheduledFor(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getStarted(const ::Ice::Context*);

    virtual void setStarted(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getFinished(const ::Ice::Context*);

    virtual void setFinished(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual void unloadOriginalFileLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfOriginalFileLinks(const ::Ice::Context*);

    virtual ::omero::model::JobOriginalFileLinksSeq copyOriginalFileLinks(const ::Ice::Context*);

    virtual void addJobOriginalFileLink(const ::omero::model::JobOriginalFileLinkPtr&, const ::Ice::Context*);

    virtual void addAllJobOriginalFileLinkSet(const ::omero::model::JobOriginalFileLinksSeq&, const ::Ice::Context*);

    virtual void removeJobOriginalFileLink(const ::omero::model::JobOriginalFileLinkPtr&, const ::Ice::Context*);

    virtual void removeAllJobOriginalFileLinkSet(const ::omero::model::JobOriginalFileLinksSeq&, const ::Ice::Context*);

    virtual void clearOriginalFileLinks(const ::Ice::Context*);

    virtual void reloadOriginalFileLinks(const ::omero::model::JobPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getOriginalFileLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::JobOriginalFileLinkPtr linkOriginalFile(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

    virtual void addJobOriginalFileLinkToBoth(const ::omero::model::JobOriginalFileLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::JobOriginalFileLinksSeq findJobOriginalFileLink(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

    virtual void unlinkOriginalFile(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

    virtual void removeJobOriginalFileLinkFromBoth(const ::omero::model::JobOriginalFileLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::JobLinkedOriginalFileSeq linkedOriginalFileList(const ::Ice::Context*);
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

class Job : virtual public ::IceDelegate::omero::model::Job,
            virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getUsername(const ::Ice::Context*);

    virtual void setUsername(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getGroupname(const ::Ice::Context*);

    virtual void setGroupname(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getType(const ::Ice::Context*);

    virtual void setType(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getMessage(const ::Ice::Context*);

    virtual void setMessage(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::model::JobStatusPtr getStatus(const ::Ice::Context*);

    virtual void setStatus(const ::omero::model::JobStatusPtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getSubmitted(const ::Ice::Context*);

    virtual void setSubmitted(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getScheduledFor(const ::Ice::Context*);

    virtual void setScheduledFor(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getStarted(const ::Ice::Context*);

    virtual void setStarted(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual ::omero::RTimePtr getFinished(const ::Ice::Context*);

    virtual void setFinished(const ::omero::RTimePtr&, const ::Ice::Context*);

    virtual void unloadOriginalFileLinks(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfOriginalFileLinks(const ::Ice::Context*);

    virtual ::omero::model::JobOriginalFileLinksSeq copyOriginalFileLinks(const ::Ice::Context*);

    virtual void addJobOriginalFileLink(const ::omero::model::JobOriginalFileLinkPtr&, const ::Ice::Context*);

    virtual void addAllJobOriginalFileLinkSet(const ::omero::model::JobOriginalFileLinksSeq&, const ::Ice::Context*);

    virtual void removeJobOriginalFileLink(const ::omero::model::JobOriginalFileLinkPtr&, const ::Ice::Context*);

    virtual void removeAllJobOriginalFileLinkSet(const ::omero::model::JobOriginalFileLinksSeq&, const ::Ice::Context*);

    virtual void clearOriginalFileLinks(const ::Ice::Context*);

    virtual void reloadOriginalFileLinks(const ::omero::model::JobPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getOriginalFileLinksCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::JobOriginalFileLinkPtr linkOriginalFile(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

    virtual void addJobOriginalFileLinkToBoth(const ::omero::model::JobOriginalFileLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::JobOriginalFileLinksSeq findJobOriginalFileLink(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

    virtual void unlinkOriginalFile(const ::omero::model::OriginalFilePtr&, const ::Ice::Context*);

    virtual void removeJobOriginalFileLinkFromBoth(const ::omero::model::JobOriginalFileLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::JobLinkedOriginalFileSeq linkedOriginalFileList(const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class Job : virtual public ::omero::model::IObject
{
public:

    typedef JobPrx ProxyType;
    typedef JobPtr PointerType;
    
    Job() {}
    Job(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::model::JobStatusPtr&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::RTimePtr&, const ::omero::model::JobOriginalFileLinksSeq&, bool, const ::omero::sys::CountMap&);
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

    virtual ::omero::RStringPtr getUsername(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getUsername(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setUsername(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setUsername(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getGroupname(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getGroupname(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setGroupname(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setGroupname(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getType(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setType(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getMessage(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMessage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setMessage(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setMessage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::JobStatusPtr getStatus(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setStatus(const ::omero::model::JobStatusPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setStatus(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RTimePtr getSubmitted(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getSubmitted(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setSubmitted(const ::omero::RTimePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setSubmitted(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RTimePtr getScheduledFor(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getScheduledFor(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setScheduledFor(const ::omero::RTimePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setScheduledFor(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RTimePtr getStarted(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getStarted(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setStarted(const ::omero::RTimePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setStarted(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RTimePtr getFinished(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFinished(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setFinished(const ::omero::RTimePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setFinished(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadOriginalFileLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadOriginalFileLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfOriginalFileLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfOriginalFileLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::JobOriginalFileLinksSeq copyOriginalFileLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyOriginalFileLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addJobOriginalFileLink(const ::omero::model::JobOriginalFileLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addJobOriginalFileLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllJobOriginalFileLinkSet(const ::omero::model::JobOriginalFileLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllJobOriginalFileLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeJobOriginalFileLink(const ::omero::model::JobOriginalFileLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeJobOriginalFileLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllJobOriginalFileLinkSet(const ::omero::model::JobOriginalFileLinksSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllJobOriginalFileLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearOriginalFileLinks(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearOriginalFileLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadOriginalFileLinks(const ::omero::model::JobPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadOriginalFileLinks(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getOriginalFileLinksCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getOriginalFileLinksCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::JobOriginalFileLinkPtr linkOriginalFile(const ::omero::model::OriginalFilePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkOriginalFile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addJobOriginalFileLinkToBoth(const ::omero::model::JobOriginalFileLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addJobOriginalFileLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::JobOriginalFileLinksSeq findJobOriginalFileLink(const ::omero::model::OriginalFilePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findJobOriginalFileLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkOriginalFile(const ::omero::model::OriginalFilePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkOriginalFile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeJobOriginalFileLinkFromBoth(const ::omero::model::JobOriginalFileLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeJobOriginalFileLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::JobLinkedOriginalFileSeq linkedOriginalFileList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedOriginalFileList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::RStringPtr username;

    ::omero::RStringPtr groupname;

    ::omero::RStringPtr type;

    ::omero::RStringPtr message;

    ::omero::model::JobStatusPtr status;

    ::omero::RTimePtr submitted;

    ::omero::RTimePtr scheduledFor;

    ::omero::RTimePtr started;

    ::omero::RTimePtr finished;

    ::omero::model::JobOriginalFileLinksSeq originalFileLinksSeq;

    bool originalFileLinksLoaded;

    ::omero::sys::CountMap originalFileLinksCountPerOwner;
};

}

}

#endif
