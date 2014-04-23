// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `IScript.ice'

#ifndef __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_IScript_h__
#define __omero_api__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_api_IScript_h__

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
#include <omero/ServicesF.h>
#include <omero/Scripts.h>
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

namespace api
{

class IScript;

}

}

}

namespace omero
{

namespace api
{

class IScript;
bool operator==(const IScript&, const IScript&);
bool operator<(const IScript&, const IScript&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::api::IScript*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::IScript*);

}

namespace omero
{

namespace api
{

typedef ::IceInternal::Handle< ::omero::api::IScript> IScriptPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::IScript> IScriptPrx;

void __read(::IceInternal::BasicStream*, IScriptPrx&);
void __patch__IScriptPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace api
{

class AMI_IScript_getScripts : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::OriginalFileList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IScriptPrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IScript_getScripts> AMI_IScript_getScriptsPtr;

class AMD_IScript_getScripts : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::OriginalFileList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IScript_getScripts> AMD_IScript_getScriptsPtr;

class AMI_IScript_getUserScripts : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::api::OriginalFileList&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IScriptPrx&, const ::omero::api::IObjectList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IScript_getUserScripts> AMI_IScript_getUserScriptsPtr;

class AMD_IScript_getUserScripts : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::api::OriginalFileList&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IScript_getUserScripts> AMD_IScript_getUserScriptsPtr;

class AMI_IScript_getScriptID : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IScriptPrx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IScript_getScriptID> AMI_IScript_getScriptIDPtr;

class AMD_IScript_getScriptID : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IScript_getScriptID> AMD_IScript_getScriptIDPtr;

class AMI_IScript_getScriptText : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::std::string&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IScriptPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IScript_getScriptText> AMI_IScript_getScriptTextPtr;

class AMD_IScript_getScriptText : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::std::string&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IScript_getScriptText> AMD_IScript_getScriptTextPtr;

class AMI_IScript_uploadScript : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IScriptPrx&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IScript_uploadScript> AMI_IScript_uploadScriptPtr;

class AMD_IScript_uploadScript : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IScript_uploadScript> AMD_IScript_uploadScriptPtr;

class AMI_IScript_uploadOfficialScript : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IScriptPrx&, const ::std::string&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IScript_uploadOfficialScript> AMI_IScript_uploadOfficialScriptPtr;

class AMD_IScript_uploadOfficialScript : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Long) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IScript_uploadOfficialScript> AMD_IScript_uploadOfficialScriptPtr;

class AMI_IScript_editScript : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IScriptPrx&, const ::omero::model::OriginalFilePtr&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IScript_editScript> AMI_IScript_editScriptPtr;

class AMD_IScript_editScript : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IScript_editScript> AMD_IScript_editScriptPtr;

class AMI_IScript_getScriptWithDetails : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::RTypeDict&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IScriptPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IScript_getScriptWithDetails> AMI_IScript_getScriptWithDetailsPtr;

class AMD_IScript_getScriptWithDetails : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::RTypeDict&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IScript_getScriptWithDetails> AMD_IScript_getScriptWithDetailsPtr;

class AMI_IScript_getParams : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::grid::JobParamsPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IScriptPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IScript_getParams> AMI_IScript_getParamsPtr;

class AMD_IScript_getParams : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::grid::JobParamsPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IScript_getParams> AMD_IScript_getParamsPtr;

class AMI_IScript_deleteScript : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IScriptPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IScript_deleteScript> AMI_IScript_deleteScriptPtr;

class AMD_IScript_deleteScript : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IScript_deleteScript> AMD_IScript_deleteScriptPtr;

class AMI_IScript_runScript : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::grid::ScriptProcessPrx&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IScriptPrx&, ::Ice::Long, const ::omero::RTypeDict&, const ::omero::RIntPtr&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IScript_runScript> AMI_IScript_runScriptPtr;

class AMD_IScript_runScript : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::grid::ScriptProcessPrx&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IScript_runScript> AMD_IScript_runScriptPtr;

class AMI_IScript_canRunScript : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IScriptPrx&, ::Ice::Long, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IScript_canRunScript> AMI_IScript_canRunScriptPtr;

class AMD_IScript_canRunScript : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(bool) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IScript_canRunScript> AMD_IScript_canRunScriptPtr;

class AMI_IScript_validateScript : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::model::OriginalFilePtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::IScriptPrx&, const ::omero::model::JobPtr&, const ::omero::api::IObjectList&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_IScript_validateScript> AMI_IScript_validateScriptPtr;

class AMD_IScript_validateScript : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::model::OriginalFilePtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_IScript_validateScript> AMD_IScript_validateScriptPtr;

}

}

namespace IceAsync
{

namespace omero
{

namespace api
{

class AMD_IScript_getScripts : public ::omero::api::AMD_IScript_getScripts, public ::IceInternal::IncomingAsync
{
public:

    AMD_IScript_getScripts(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::OriginalFileList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IScript_getUserScripts : public ::omero::api::AMD_IScript_getUserScripts, public ::IceInternal::IncomingAsync
{
public:

    AMD_IScript_getUserScripts(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::api::OriginalFileList&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IScript_getScriptID : public ::omero::api::AMD_IScript_getScriptID, public ::IceInternal::IncomingAsync
{
public:

    AMD_IScript_getScriptID(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Long);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IScript_getScriptText : public ::omero::api::AMD_IScript_getScriptText, public ::IceInternal::IncomingAsync
{
public:

    AMD_IScript_getScriptText(::IceInternal::Incoming&);

    virtual void ice_response(const ::std::string&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IScript_uploadScript : public ::omero::api::AMD_IScript_uploadScript, public ::IceInternal::IncomingAsync
{
public:

    AMD_IScript_uploadScript(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Long);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IScript_uploadOfficialScript : public ::omero::api::AMD_IScript_uploadOfficialScript, public ::IceInternal::IncomingAsync
{
public:

    AMD_IScript_uploadOfficialScript(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Long);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IScript_editScript : public ::omero::api::AMD_IScript_editScript, public ::IceInternal::IncomingAsync
{
public:

    AMD_IScript_editScript(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IScript_getScriptWithDetails : public ::omero::api::AMD_IScript_getScriptWithDetails, public ::IceInternal::IncomingAsync
{
public:

    AMD_IScript_getScriptWithDetails(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::RTypeDict&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IScript_getParams : public ::omero::api::AMD_IScript_getParams, public ::IceInternal::IncomingAsync
{
public:

    AMD_IScript_getParams(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::grid::JobParamsPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IScript_deleteScript : public ::omero::api::AMD_IScript_deleteScript, public ::IceInternal::IncomingAsync
{
public:

    AMD_IScript_deleteScript(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IScript_runScript : public ::omero::api::AMD_IScript_runScript, public ::IceInternal::IncomingAsync
{
public:

    AMD_IScript_runScript(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::grid::ScriptProcessPrx&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IScript_canRunScript : public ::omero::api::AMD_IScript_canRunScript, public ::IceInternal::IncomingAsync
{
public:

    AMD_IScript_canRunScript(::IceInternal::Incoming&);

    virtual void ice_response(bool);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_IScript_validateScript : public ::omero::api::AMD_IScript_validateScript, public ::IceInternal::IncomingAsync
{
public:

    AMD_IScript_validateScript(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::model::OriginalFilePtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

}

}

}

namespace IceProxy
{

namespace omero
{

namespace api
{

class IScript : virtual public ::IceProxy::omero::api::ServiceInterface
{
public:

    ::omero::api::OriginalFileList getScripts()
    {
        return getScripts(0);
    }
    ::omero::api::OriginalFileList getScripts(const ::Ice::Context& __ctx)
    {
        return getScripts(&__ctx);
    }
    
private:

    ::omero::api::OriginalFileList getScripts(const ::Ice::Context*);
    
public:
    bool getScripts_async(const ::omero::api::AMI_IScript_getScriptsPtr&);
    bool getScripts_async(const ::omero::api::AMI_IScript_getScriptsPtr&, const ::Ice::Context&);

    ::omero::api::OriginalFileList getUserScripts(const ::omero::api::IObjectList& acceptsList)
    {
        return getUserScripts(acceptsList, 0);
    }
    ::omero::api::OriginalFileList getUserScripts(const ::omero::api::IObjectList& acceptsList, const ::Ice::Context& __ctx)
    {
        return getUserScripts(acceptsList, &__ctx);
    }
    
private:

    ::omero::api::OriginalFileList getUserScripts(const ::omero::api::IObjectList&, const ::Ice::Context*);
    
public:
    bool getUserScripts_async(const ::omero::api::AMI_IScript_getUserScriptsPtr&, const ::omero::api::IObjectList&);
    bool getUserScripts_async(const ::omero::api::AMI_IScript_getUserScriptsPtr&, const ::omero::api::IObjectList&, const ::Ice::Context&);

    ::Ice::Long getScriptID(const ::std::string& path)
    {
        return getScriptID(path, 0);
    }
    ::Ice::Long getScriptID(const ::std::string& path, const ::Ice::Context& __ctx)
    {
        return getScriptID(path, &__ctx);
    }
    
private:

    ::Ice::Long getScriptID(const ::std::string&, const ::Ice::Context*);
    
public:
    bool getScriptID_async(const ::omero::api::AMI_IScript_getScriptIDPtr&, const ::std::string&);
    bool getScriptID_async(const ::omero::api::AMI_IScript_getScriptIDPtr&, const ::std::string&, const ::Ice::Context&);

    ::std::string getScriptText(::Ice::Long scriptID)
    {
        return getScriptText(scriptID, 0);
    }
    ::std::string getScriptText(::Ice::Long scriptID, const ::Ice::Context& __ctx)
    {
        return getScriptText(scriptID, &__ctx);
    }
    
private:

    ::std::string getScriptText(::Ice::Long, const ::Ice::Context*);
    
public:
    bool getScriptText_async(const ::omero::api::AMI_IScript_getScriptTextPtr&, ::Ice::Long);
    bool getScriptText_async(const ::omero::api::AMI_IScript_getScriptTextPtr&, ::Ice::Long, const ::Ice::Context&);

    ::Ice::Long uploadScript(const ::std::string& path, const ::std::string& scriptText)
    {
        return uploadScript(path, scriptText, 0);
    }
    ::Ice::Long uploadScript(const ::std::string& path, const ::std::string& scriptText, const ::Ice::Context& __ctx)
    {
        return uploadScript(path, scriptText, &__ctx);
    }
    
private:

    ::Ice::Long uploadScript(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:
    bool uploadScript_async(const ::omero::api::AMI_IScript_uploadScriptPtr&, const ::std::string&, const ::std::string&);
    bool uploadScript_async(const ::omero::api::AMI_IScript_uploadScriptPtr&, const ::std::string&, const ::std::string&, const ::Ice::Context&);

    ::Ice::Long uploadOfficialScript(const ::std::string& path, const ::std::string& scriptText)
    {
        return uploadOfficialScript(path, scriptText, 0);
    }
    ::Ice::Long uploadOfficialScript(const ::std::string& path, const ::std::string& scriptText, const ::Ice::Context& __ctx)
    {
        return uploadOfficialScript(path, scriptText, &__ctx);
    }
    
private:

    ::Ice::Long uploadOfficialScript(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:
    bool uploadOfficialScript_async(const ::omero::api::AMI_IScript_uploadOfficialScriptPtr&, const ::std::string&, const ::std::string&);
    bool uploadOfficialScript_async(const ::omero::api::AMI_IScript_uploadOfficialScriptPtr&, const ::std::string&, const ::std::string&, const ::Ice::Context&);

    void editScript(const ::omero::model::OriginalFilePtr& fileObject, const ::std::string& scriptText)
    {
        editScript(fileObject, scriptText, 0);
    }
    void editScript(const ::omero::model::OriginalFilePtr& fileObject, const ::std::string& scriptText, const ::Ice::Context& __ctx)
    {
        editScript(fileObject, scriptText, &__ctx);
    }
    
private:

    void editScript(const ::omero::model::OriginalFilePtr&, const ::std::string&, const ::Ice::Context*);
    
public:
    bool editScript_async(const ::omero::api::AMI_IScript_editScriptPtr&, const ::omero::model::OriginalFilePtr&, const ::std::string&);
    bool editScript_async(const ::omero::api::AMI_IScript_editScriptPtr&, const ::omero::model::OriginalFilePtr&, const ::std::string&, const ::Ice::Context&);

    ::omero::RTypeDict getScriptWithDetails(::Ice::Long scriptID)
    {
        return getScriptWithDetails(scriptID, 0);
    }
    ::omero::RTypeDict getScriptWithDetails(::Ice::Long scriptID, const ::Ice::Context& __ctx)
    {
        return getScriptWithDetails(scriptID, &__ctx);
    }
    
private:

    ::omero::RTypeDict getScriptWithDetails(::Ice::Long, const ::Ice::Context*);
    
public:
    bool getScriptWithDetails_async(const ::omero::api::AMI_IScript_getScriptWithDetailsPtr&, ::Ice::Long);
    bool getScriptWithDetails_async(const ::omero::api::AMI_IScript_getScriptWithDetailsPtr&, ::Ice::Long, const ::Ice::Context&);

    ::omero::grid::JobParamsPtr getParams(::Ice::Long scriptID)
    {
        return getParams(scriptID, 0);
    }
    ::omero::grid::JobParamsPtr getParams(::Ice::Long scriptID, const ::Ice::Context& __ctx)
    {
        return getParams(scriptID, &__ctx);
    }
    
private:

    ::omero::grid::JobParamsPtr getParams(::Ice::Long, const ::Ice::Context*);
    
public:
    bool getParams_async(const ::omero::api::AMI_IScript_getParamsPtr&, ::Ice::Long);
    bool getParams_async(const ::omero::api::AMI_IScript_getParamsPtr&, ::Ice::Long, const ::Ice::Context&);

    void deleteScript(::Ice::Long scriptID)
    {
        deleteScript(scriptID, 0);
    }
    void deleteScript(::Ice::Long scriptID, const ::Ice::Context& __ctx)
    {
        deleteScript(scriptID, &__ctx);
    }
    
private:

    void deleteScript(::Ice::Long, const ::Ice::Context*);
    
public:
    bool deleteScript_async(const ::omero::api::AMI_IScript_deleteScriptPtr&, ::Ice::Long);
    bool deleteScript_async(const ::omero::api::AMI_IScript_deleteScriptPtr&, ::Ice::Long, const ::Ice::Context&);

    ::omero::grid::ScriptProcessPrx runScript(::Ice::Long scriptID, const ::omero::RTypeDict& inputs, const ::omero::RIntPtr& waitSecs)
    {
        return runScript(scriptID, inputs, waitSecs, 0);
    }
    ::omero::grid::ScriptProcessPrx runScript(::Ice::Long scriptID, const ::omero::RTypeDict& inputs, const ::omero::RIntPtr& waitSecs, const ::Ice::Context& __ctx)
    {
        return runScript(scriptID, inputs, waitSecs, &__ctx);
    }
    
private:

    ::omero::grid::ScriptProcessPrx runScript(::Ice::Long, const ::omero::RTypeDict&, const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:
    bool runScript_async(const ::omero::api::AMI_IScript_runScriptPtr&, ::Ice::Long, const ::omero::RTypeDict&, const ::omero::RIntPtr&);
    bool runScript_async(const ::omero::api::AMI_IScript_runScriptPtr&, ::Ice::Long, const ::omero::RTypeDict&, const ::omero::RIntPtr&, const ::Ice::Context&);

    bool canRunScript(::Ice::Long scriptID)
    {
        return canRunScript(scriptID, 0);
    }
    bool canRunScript(::Ice::Long scriptID, const ::Ice::Context& __ctx)
    {
        return canRunScript(scriptID, &__ctx);
    }
    
private:

    bool canRunScript(::Ice::Long, const ::Ice::Context*);
    
public:
    bool canRunScript_async(const ::omero::api::AMI_IScript_canRunScriptPtr&, ::Ice::Long);
    bool canRunScript_async(const ::omero::api::AMI_IScript_canRunScriptPtr&, ::Ice::Long, const ::Ice::Context&);

    ::omero::model::OriginalFilePtr validateScript(const ::omero::model::JobPtr& j, const ::omero::api::IObjectList& acceptsList)
    {
        return validateScript(j, acceptsList, 0);
    }
    ::omero::model::OriginalFilePtr validateScript(const ::omero::model::JobPtr& j, const ::omero::api::IObjectList& acceptsList, const ::Ice::Context& __ctx)
    {
        return validateScript(j, acceptsList, &__ctx);
    }
    
private:

    ::omero::model::OriginalFilePtr validateScript(const ::omero::model::JobPtr&, const ::omero::api::IObjectList&, const ::Ice::Context*);
    
public:
    bool validateScript_async(const ::omero::api::AMI_IScript_validateScriptPtr&, const ::omero::model::JobPtr&, const ::omero::api::IObjectList&);
    bool validateScript_async(const ::omero::api::AMI_IScript_validateScriptPtr&, const ::omero::model::JobPtr&, const ::omero::api::IObjectList&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<IScript> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IScript*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<IScript*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IScript> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IScript*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<IScript*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IScript> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IScript*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<IScript*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IScript> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IScript*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<IScript*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IScript> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IScript*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<IScript*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IScript> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IScript*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<IScript*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IScript> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IScript*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<IScript*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IScript> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IScript*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<IScript*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IScript> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IScript*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<IScript*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IScript> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IScript*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<IScript*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IScript> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IScript*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<IScript*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IScript> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IScript*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<IScript*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IScript> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IScript*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<IScript*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IScript> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IScript*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<IScript*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IScript> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IScript*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<IScript*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IScript> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IScript*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<IScript*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IScript> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IScript*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<IScript*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IScript> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IScript*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<IScript*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IScript> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IScript*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<IScript*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace api
{

class IScript : virtual public ::IceDelegate::omero::api::ServiceInterface
{
public:

    virtual ::omero::api::OriginalFileList getScripts(const ::Ice::Context*) = 0;

    virtual ::omero::api::OriginalFileList getUserScripts(const ::omero::api::IObjectList&, const ::Ice::Context*) = 0;

    virtual ::Ice::Long getScriptID(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::std::string getScriptText(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::Ice::Long uploadScript(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Long uploadOfficialScript(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual void editScript(const ::omero::model::OriginalFilePtr&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::omero::RTypeDict getScriptWithDetails(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::grid::JobParamsPtr getParams(::Ice::Long, const ::Ice::Context*) = 0;

    virtual void deleteScript(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::grid::ScriptProcessPrx runScript(::Ice::Long, const ::omero::RTypeDict&, const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual bool canRunScript(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::omero::model::OriginalFilePtr validateScript(const ::omero::model::JobPtr&, const ::omero::api::IObjectList&, const ::Ice::Context*) = 0;
};

}

}

}

namespace IceDelegateM
{

namespace omero
{

namespace api
{

class IScript : virtual public ::IceDelegate::omero::api::IScript,
                virtual public ::IceDelegateM::omero::api::ServiceInterface
{
public:

    virtual ::omero::api::OriginalFileList getScripts(const ::Ice::Context*);

    virtual ::omero::api::OriginalFileList getUserScripts(const ::omero::api::IObjectList&, const ::Ice::Context*);

    virtual ::Ice::Long getScriptID(const ::std::string&, const ::Ice::Context*);

    virtual ::std::string getScriptText(::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::Long uploadScript(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Long uploadOfficialScript(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual void editScript(const ::omero::model::OriginalFilePtr&, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::RTypeDict getScriptWithDetails(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::grid::JobParamsPtr getParams(::Ice::Long, const ::Ice::Context*);

    virtual void deleteScript(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::grid::ScriptProcessPrx runScript(::Ice::Long, const ::omero::RTypeDict&, const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual bool canRunScript(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::model::OriginalFilePtr validateScript(const ::omero::model::JobPtr&, const ::omero::api::IObjectList&, const ::Ice::Context*);
};

}

}

}

namespace IceDelegateD
{

namespace omero
{

namespace api
{

class IScript : virtual public ::IceDelegate::omero::api::IScript,
                virtual public ::IceDelegateD::omero::api::ServiceInterface
{
public:

    virtual ::omero::api::OriginalFileList getScripts(const ::Ice::Context*);

    virtual ::omero::api::OriginalFileList getUserScripts(const ::omero::api::IObjectList&, const ::Ice::Context*);

    virtual ::Ice::Long getScriptID(const ::std::string&, const ::Ice::Context*);

    virtual ::std::string getScriptText(::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::Long uploadScript(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Long uploadOfficialScript(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual void editScript(const ::omero::model::OriginalFilePtr&, const ::std::string&, const ::Ice::Context*);

    virtual ::omero::RTypeDict getScriptWithDetails(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::grid::JobParamsPtr getParams(::Ice::Long, const ::Ice::Context*);

    virtual void deleteScript(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::grid::ScriptProcessPrx runScript(::Ice::Long, const ::omero::RTypeDict&, const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual bool canRunScript(::Ice::Long, const ::Ice::Context*);

    virtual ::omero::model::OriginalFilePtr validateScript(const ::omero::model::JobPtr&, const ::omero::api::IObjectList&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace api
{

class IScript : virtual public ::omero::api::ServiceInterface
{
public:

    typedef IScriptPrx ProxyType;
    typedef IScriptPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void getScripts_async(const ::omero::api::AMD_IScript_getScriptsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getScripts(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getUserScripts_async(const ::omero::api::AMD_IScript_getUserScriptsPtr&, const ::omero::api::IObjectList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getUserScripts(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getScriptID_async(const ::omero::api::AMD_IScript_getScriptIDPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getScriptID(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getScriptText_async(const ::omero::api::AMD_IScript_getScriptTextPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getScriptText(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void uploadScript_async(const ::omero::api::AMD_IScript_uploadScriptPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___uploadScript(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void uploadOfficialScript_async(const ::omero::api::AMD_IScript_uploadOfficialScriptPtr&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___uploadOfficialScript(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void editScript_async(const ::omero::api::AMD_IScript_editScriptPtr&, const ::omero::model::OriginalFilePtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___editScript(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getScriptWithDetails_async(const ::omero::api::AMD_IScript_getScriptWithDetailsPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getScriptWithDetails(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getParams_async(const ::omero::api::AMD_IScript_getParamsPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getParams(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void deleteScript_async(const ::omero::api::AMD_IScript_deleteScriptPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___deleteScript(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void runScript_async(const ::omero::api::AMD_IScript_runScriptPtr&, ::Ice::Long, const ::omero::RTypeDict&, const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___runScript(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void canRunScript_async(const ::omero::api::AMD_IScript_canRunScriptPtr&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___canRunScript(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void validateScript_async(const ::omero::api::AMD_IScript_validateScriptPtr&, const ::omero::model::JobPtr&, const ::omero::api::IObjectList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___validateScript(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
