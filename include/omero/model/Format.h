// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Format.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Format_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Format_h__

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

class Details;

class Format;

}

}

}

namespace omero
{

namespace model
{

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class Format;
bool operator==(const Format&, const Format&);
bool operator<(const Format&, const Format&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::Format*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Format*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Format> FormatPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Format> FormatPrx;

void __read(::IceInternal::BasicStream*, FormatPrx&);
void __patch__FormatPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

namespace enums
{

const ::std::string FormatPNG = "PNG";

const ::std::string FormatCompanionPNG = "Companion/PNG";

const ::std::string FormatJPEG = "JPEG";

const ::std::string FormatCompanionJPEG = "Companion/JPEG";

const ::std::string FormatPGM = "PGM";

const ::std::string FormatCompanionPGM = "Companion/PGM";

const ::std::string FormatFits = "Fits";

const ::std::string FormatCompanionFits = "Companion/Fits";

const ::std::string FormatGIF = "GIF";

const ::std::string FormatCompanionGIF = "Companion/GIF";

const ::std::string FormatBMP = "BMP";

const ::std::string FormatCompanionBMP = "Companion/BMP";

const ::std::string FormatDicom = "Dicom";

const ::std::string FormatCompanionDicom = "Companion/Dicom";

const ::std::string FormatBioRad = "BioRad";

const ::std::string FormatCompanionBioRad = "Companion/BioRad";

const ::std::string FormatIPLab = "IPLab";

const ::std::string FormatCompanionIPLab = "Companion/IPLab";

const ::std::string FormatDeltavision = "Deltavision";

const ::std::string FormatCompanionDeltavision = "Companion/Deltavision";

const ::std::string FormatMRC = "MRC";

const ::std::string FormatCompanionMRC = "Companion/MRC";

const ::std::string FormatGatan = "Gatan";

const ::std::string FormatCompanionGatan = "Companion/Gatan";

const ::std::string FormatImaris = "Imaris";

const ::std::string FormatCompanionImaris = "Companion/Imaris";

const ::std::string FormatOpenlabRaw = "OpenlabRaw";

const ::std::string FormatCompanionOpenlabRaw = "Companion/OpenlabRaw";

const ::std::string FormatOMEXML = "OMEXML";

const ::std::string FormatCompanionOMEXML = "Companion/OMEXML";

const ::std::string FormatLIF = "LIF";

const ::std::string FormatCompanionLIF = "Companion/LIF";

const ::std::string FormatAVI = "AVI";

const ::std::string FormatCompanionAVI = "Companion/AVI";

const ::std::string FormatQT = "QT";

const ::std::string FormatCompanionQT = "Companion/QT";

const ::std::string FormatPict = "Pict";

const ::std::string FormatCompanionPict = "Companion/Pict";

const ::std::string FormatSDT = "SDT";

const ::std::string FormatCompanionSDT = "Companion/SDT";

const ::std::string FormatEPS = "EPS";

const ::std::string FormatCompanionEPS = "Companion/EPS";

const ::std::string FormatSlidebook = "Slidebook";

const ::std::string FormatCompanionSlidebook = "Companion/Slidebook";

const ::std::string FormatAlicona = "Alicona";

const ::std::string FormatCompanionAlicona = "Companion/Alicona";

const ::std::string FormatMNG = "MNG";

const ::std::string FormatCompanionMNG = "Companion/MNG";

const ::std::string FormatNRRD = "NRRD";

const ::std::string FormatCompanionNRRD = "Companion/NRRD";

const ::std::string FormatKhoros = "Khoros";

const ::std::string FormatCompanionKhoros = "Companion/Khoros";

const ::std::string FormatVisitech = "Visitech";

const ::std::string FormatCompanionVisitech = "Companion/Visitech";

const ::std::string FormatLIM = "LIM";

const ::std::string FormatCompanionLIM = "Companion/LIM";

const ::std::string FormatPSD = "PSD";

const ::std::string FormatCompanionPSD = "Companion/PSD";

const ::std::string FormatInCell = "InCell";

const ::std::string FormatCompanionInCell = "Companion/InCell";

const ::std::string FormatICS = "ICS";

const ::std::string FormatCompanionICS = "Companion/ICS";

const ::std::string FormatPerkinElmer = "PerkinElmer";

const ::std::string FormatCompanionPerkinElmer = "Companion/PerkinElmer";

const ::std::string FormatTCS = "TCS";

const ::std::string FormatCompanionTCS = "Companion/TCS";

const ::std::string FormatFV1000 = "FV1000";

const ::std::string FormatCompanionFV1000 = "Companion/FV1000";

const ::std::string FormatZeissZVI = "ZeissZVI";

const ::std::string FormatCompanionZeissZVI = "Companion/ZeissZVI";

const ::std::string FormatIPW = "IPW";

const ::std::string FormatCompanionIPW = "Companion/IPW";

const ::std::string FormatLegacyND2 = "LegacyND2";

const ::std::string FormatCompanionLegacyND2 = "Companion/LegacyND2";

const ::std::string FormatND2 = "ND2";

const ::std::string FormatCompanionND2 = "Companion/ND2";

const ::std::string FormatPCI = "PCI";

const ::std::string FormatCompanionPCI = "Companion/PCI";

const ::std::string FormatImarisHDF = "ImarisHDF";

const ::std::string FormatCompanionImarisHDF = "Companion/ImarisHDF";

const ::std::string FormatMetamorph = "Metamorph";

const ::std::string FormatCompanionMetamorph = "Companion/Metamorph";

const ::std::string FormatZeissLSM = "ZeissLSM";

const ::std::string FormatCompanionZeissLSM = "Companion/ZeissLSM";

const ::std::string FormatSEQ = "SEQ";

const ::std::string FormatCompanionSEQ = "Companion/SEQ";

const ::std::string FormatGel = "Gel";

const ::std::string FormatCompanionGel = "Companion/Gel";

const ::std::string FormatImarisTiff = "ImarisTiff";

const ::std::string FormatCompanionImarisTiff = "Companion/ImarisTiff";

const ::std::string FormatFlex = "Flex";

const ::std::string FormatCompanionFlex = "Companion/Flex";

const ::std::string FormatSVS = "SVS";

const ::std::string FormatCompanionSVS = "Companion/SVS";

const ::std::string FormatLeica = "Leica";

const ::std::string FormatCompanionLeica = "Companion/Leica";

const ::std::string FormatNikon = "Nikon";

const ::std::string FormatCompanionNikon = "Companion/Nikon";

const ::std::string FormatFluoview = "Fluoview";

const ::std::string FormatCompanionFluoview = "Companion/Fluoview";

const ::std::string FormatPrairie = "Prairie";

const ::std::string FormatCompanionPrairie = "Companion/Prairie";

const ::std::string FormatMicromanager = "Micromanager";

const ::std::string FormatCompanionMicromanager = "Companion/Micromanager";

const ::std::string FormatImprovisionTiff = "ImprovisionTiff";

const ::std::string FormatCompanionImprovisionTiff = "Companion/ImprovisionTiff";

const ::std::string FormatOMETiff = "OMETiff";

const ::std::string FormatCompanionOMETiff = "Companion/OMETiff";

const ::std::string FormatMetamorphTiff = "MetamorphTiff";

const ::std::string FormatCompanionMetamorphTiff = "Companion/MetamorphTiff";

const ::std::string FormatTiff = "Tiff";

const ::std::string FormatCompanionTiff = "Companion/Tiff";

const ::std::string FormatOpenlab = "Openlab";

const ::std::string FormatCompanionOpenlab = "Companion/Openlab";

const ::std::string FormatMIAS = "MIAS";

const ::std::string FormatCompanionMIAS = "Companion/MIAS";

}

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Format : virtual public ::IceProxy::omero::model::IObject
{
public:

    ::omero::RStringPtr getValue()
    {
        return getValue(0);
    }
    ::omero::RStringPtr getValue(const ::Ice::Context& __ctx)
    {
        return getValue(&__ctx);
    }
    
private:

    ::omero::RStringPtr getValue(const ::Ice::Context*);
    
public:

    void setValue(const ::omero::RStringPtr& theValue)
    {
        setValue(theValue, 0);
    }
    void setValue(const ::omero::RStringPtr& theValue, const ::Ice::Context& __ctx)
    {
        setValue(theValue, &__ctx);
    }
    
private:

    void setValue(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Format> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Format*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Format*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Format> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Format*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Format*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Format> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Format*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Format*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Format> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Format*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Format*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Format> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Format*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Format*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Format> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Format*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Format*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Format> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Format*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Format*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Format> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Format*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Format*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Format> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Format*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Format*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Format> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Format*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Format*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Format> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Format*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Format*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Format> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Format*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Format*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Format> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Format*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Format*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Format> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Format*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Format*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Format> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Format*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Format*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Format> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Format*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Format*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Format> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Format*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Format*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Format> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Format*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Format*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Format> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Format*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Format*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Format : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RStringPtr getValue(const ::Ice::Context*) = 0;

    virtual void setValue(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;
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

class Format : virtual public ::IceDelegate::omero::model::Format,
               virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RStringPtr getValue(const ::Ice::Context*);

    virtual void setValue(const ::omero::RStringPtr&, const ::Ice::Context*);
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

class Format : virtual public ::IceDelegate::omero::model::Format,
               virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RStringPtr getValue(const ::Ice::Context*);

    virtual void setValue(const ::omero::RStringPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class Format : virtual public ::omero::model::IObject
{
public:

    typedef FormatPrx ProxyType;
    typedef FormatPtr PointerType;
    
    Format() {}
    Format(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RStringPtr&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual ::omero::RStringPtr getValue(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getValue(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setValue(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setValue(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RStringPtr value;
};

}

}

#endif
