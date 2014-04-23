// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `LogicalChannel.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_LogicalChannel_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_LogicalChannel_h__

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

class Illumination;

class ContrastMethod;

class OTF;

class DetectorSettings;

class LightSettings;

class FilterSet;

class PhotometricInterpretation;

class AcquisitionMode;

class Channel;

class LightPath;

class Details;

class LogicalChannel;

}

}

}

namespace omero
{

namespace model
{

class Illumination;
bool operator==(const Illumination&, const Illumination&);
bool operator<(const Illumination&, const Illumination&);

class ContrastMethod;
bool operator==(const ContrastMethod&, const ContrastMethod&);
bool operator<(const ContrastMethod&, const ContrastMethod&);

class OTF;
bool operator==(const OTF&, const OTF&);
bool operator<(const OTF&, const OTF&);

class DetectorSettings;
bool operator==(const DetectorSettings&, const DetectorSettings&);
bool operator<(const DetectorSettings&, const DetectorSettings&);

class LightSettings;
bool operator==(const LightSettings&, const LightSettings&);
bool operator<(const LightSettings&, const LightSettings&);

class FilterSet;
bool operator==(const FilterSet&, const FilterSet&);
bool operator<(const FilterSet&, const FilterSet&);

class PhotometricInterpretation;
bool operator==(const PhotometricInterpretation&, const PhotometricInterpretation&);
bool operator<(const PhotometricInterpretation&, const PhotometricInterpretation&);

class AcquisitionMode;
bool operator==(const AcquisitionMode&, const AcquisitionMode&);
bool operator<(const AcquisitionMode&, const AcquisitionMode&);

class Channel;
bool operator==(const Channel&, const Channel&);
bool operator<(const Channel&, const Channel&);

class LightPath;
bool operator==(const LightPath&, const LightPath&);
bool operator<(const LightPath&, const LightPath&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class LogicalChannel;
bool operator==(const LogicalChannel&, const LogicalChannel&);
bool operator<(const LogicalChannel&, const LogicalChannel&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Illumination*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Illumination*);

::Ice::Object* upCast(::omero::model::ContrastMethod*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::ContrastMethod*);

::Ice::Object* upCast(::omero::model::OTF*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::OTF*);

::Ice::Object* upCast(::omero::model::DetectorSettings*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::DetectorSettings*);

::Ice::Object* upCast(::omero::model::LightSettings*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::LightSettings*);

::Ice::Object* upCast(::omero::model::FilterSet*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::FilterSet*);

::Ice::Object* upCast(::omero::model::PhotometricInterpretation*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::PhotometricInterpretation*);

::Ice::Object* upCast(::omero::model::AcquisitionMode*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::AcquisitionMode*);

::Ice::Object* upCast(::omero::model::Channel*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Channel*);

::Ice::Object* upCast(::omero::model::LightPath*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::LightPath*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::LogicalChannel*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::LogicalChannel*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Illumination> IlluminationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Illumination> IlluminationPrx;

void __read(::IceInternal::BasicStream*, IlluminationPrx&);
void __patch__IlluminationPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::ContrastMethod> ContrastMethodPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ContrastMethod> ContrastMethodPrx;

void __read(::IceInternal::BasicStream*, ContrastMethodPrx&);
void __patch__ContrastMethodPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::OTF> OTFPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::OTF> OTFPrx;

void __read(::IceInternal::BasicStream*, OTFPrx&);
void __patch__OTFPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::DetectorSettings> DetectorSettingsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::DetectorSettings> DetectorSettingsPrx;

void __read(::IceInternal::BasicStream*, DetectorSettingsPrx&);
void __patch__DetectorSettingsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::LightSettings> LightSettingsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::LightSettings> LightSettingsPrx;

void __read(::IceInternal::BasicStream*, LightSettingsPrx&);
void __patch__LightSettingsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::FilterSet> FilterSetPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::FilterSet> FilterSetPrx;

void __read(::IceInternal::BasicStream*, FilterSetPrx&);
void __patch__FilterSetPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::PhotometricInterpretation> PhotometricInterpretationPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::PhotometricInterpretation> PhotometricInterpretationPrx;

void __read(::IceInternal::BasicStream*, PhotometricInterpretationPrx&);
void __patch__PhotometricInterpretationPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::AcquisitionMode> AcquisitionModePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::AcquisitionMode> AcquisitionModePrx;

void __read(::IceInternal::BasicStream*, AcquisitionModePrx&);
void __patch__AcquisitionModePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Channel> ChannelPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Channel> ChannelPrx;

void __read(::IceInternal::BasicStream*, ChannelPrx&);
void __patch__ChannelPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::LightPath> LightPathPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::LightPath> LightPathPrx;

void __read(::IceInternal::BasicStream*, LightPathPrx&);
void __patch__LightPathPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::LogicalChannel> LogicalChannelPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::LogicalChannel> LogicalChannelPrx;

void __read(::IceInternal::BasicStream*, LogicalChannelPrx&);
void __patch__LogicalChannelPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

typedef ::std::vector< ::omero::model::ChannelPtr> LogicalChannelChannelsSeq;
void __writeLogicalChannelChannelsSeq(::IceInternal::BasicStream*, const ::omero::model::ChannelPtr*, const ::omero::model::ChannelPtr*);
void __readLogicalChannelChannelsSeq(::IceInternal::BasicStream*, LogicalChannelChannelsSeq&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class LogicalChannel : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::RStringPtr getName()
    {
        return getName(0);
    }
    ::omero::RStringPtr getName(const ::Ice::Context& __ctx)
    {
        return getName(&__ctx);
    }
    
private:

    ::omero::RStringPtr getName(const ::Ice::Context*);
    
public:

    void setName(const ::omero::RStringPtr& theName)
    {
        setName(theName, 0);
    }
    void setName(const ::omero::RStringPtr& theName, const ::Ice::Context& __ctx)
    {
        setName(theName, &__ctx);
    }
    
private:

    void setName(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getPinHoleSize()
    {
        return getPinHoleSize(0);
    }
    ::omero::RDoublePtr getPinHoleSize(const ::Ice::Context& __ctx)
    {
        return getPinHoleSize(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getPinHoleSize(const ::Ice::Context*);
    
public:

    void setPinHoleSize(const ::omero::RDoublePtr& thePinHoleSize)
    {
        setPinHoleSize(thePinHoleSize, 0);
    }
    void setPinHoleSize(const ::omero::RDoublePtr& thePinHoleSize, const ::Ice::Context& __ctx)
    {
        setPinHoleSize(thePinHoleSize, &__ctx);
    }
    
private:

    void setPinHoleSize(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::model::IlluminationPtr getIllumination()
    {
        return getIllumination(0);
    }
    ::omero::model::IlluminationPtr getIllumination(const ::Ice::Context& __ctx)
    {
        return getIllumination(&__ctx);
    }
    
private:

    ::omero::model::IlluminationPtr getIllumination(const ::Ice::Context*);
    
public:

    void setIllumination(const ::omero::model::IlluminationPtr& theIllumination)
    {
        setIllumination(theIllumination, 0);
    }
    void setIllumination(const ::omero::model::IlluminationPtr& theIllumination, const ::Ice::Context& __ctx)
    {
        setIllumination(theIllumination, &__ctx);
    }
    
private:

    void setIllumination(const ::omero::model::IlluminationPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::ContrastMethodPtr getContrastMethod()
    {
        return getContrastMethod(0);
    }
    ::omero::model::ContrastMethodPtr getContrastMethod(const ::Ice::Context& __ctx)
    {
        return getContrastMethod(&__ctx);
    }
    
private:

    ::omero::model::ContrastMethodPtr getContrastMethod(const ::Ice::Context*);
    
public:

    void setContrastMethod(const ::omero::model::ContrastMethodPtr& theContrastMethod)
    {
        setContrastMethod(theContrastMethod, 0);
    }
    void setContrastMethod(const ::omero::model::ContrastMethodPtr& theContrastMethod, const ::Ice::Context& __ctx)
    {
        setContrastMethod(theContrastMethod, &__ctx);
    }
    
private:

    void setContrastMethod(const ::omero::model::ContrastMethodPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getExcitationWave()
    {
        return getExcitationWave(0);
    }
    ::omero::RIntPtr getExcitationWave(const ::Ice::Context& __ctx)
    {
        return getExcitationWave(&__ctx);
    }
    
private:

    ::omero::RIntPtr getExcitationWave(const ::Ice::Context*);
    
public:

    void setExcitationWave(const ::omero::RIntPtr& theExcitationWave)
    {
        setExcitationWave(theExcitationWave, 0);
    }
    void setExcitationWave(const ::omero::RIntPtr& theExcitationWave, const ::Ice::Context& __ctx)
    {
        setExcitationWave(theExcitationWave, &__ctx);
    }
    
private:

    void setExcitationWave(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getEmissionWave()
    {
        return getEmissionWave(0);
    }
    ::omero::RIntPtr getEmissionWave(const ::Ice::Context& __ctx)
    {
        return getEmissionWave(&__ctx);
    }
    
private:

    ::omero::RIntPtr getEmissionWave(const ::Ice::Context*);
    
public:

    void setEmissionWave(const ::omero::RIntPtr& theEmissionWave)
    {
        setEmissionWave(theEmissionWave, 0);
    }
    void setEmissionWave(const ::omero::RIntPtr& theEmissionWave, const ::Ice::Context& __ctx)
    {
        setEmissionWave(theEmissionWave, &__ctx);
    }
    
private:

    void setEmissionWave(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getFluor()
    {
        return getFluor(0);
    }
    ::omero::RStringPtr getFluor(const ::Ice::Context& __ctx)
    {
        return getFluor(&__ctx);
    }
    
private:

    ::omero::RStringPtr getFluor(const ::Ice::Context*);
    
public:

    void setFluor(const ::omero::RStringPtr& theFluor)
    {
        setFluor(theFluor, 0);
    }
    void setFluor(const ::omero::RStringPtr& theFluor, const ::Ice::Context& __ctx)
    {
        setFluor(theFluor, &__ctx);
    }
    
private:

    void setFluor(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getNdFilter()
    {
        return getNdFilter(0);
    }
    ::omero::RDoublePtr getNdFilter(const ::Ice::Context& __ctx)
    {
        return getNdFilter(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getNdFilter(const ::Ice::Context*);
    
public:

    void setNdFilter(const ::omero::RDoublePtr& theNdFilter)
    {
        setNdFilter(theNdFilter, 0);
    }
    void setNdFilter(const ::omero::RDoublePtr& theNdFilter, const ::Ice::Context& __ctx)
    {
        setNdFilter(theNdFilter, &__ctx);
    }
    
private:

    void setNdFilter(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::model::OTFPtr getOtf()
    {
        return getOtf(0);
    }
    ::omero::model::OTFPtr getOtf(const ::Ice::Context& __ctx)
    {
        return getOtf(&__ctx);
    }
    
private:

    ::omero::model::OTFPtr getOtf(const ::Ice::Context*);
    
public:

    void setOtf(const ::omero::model::OTFPtr& theOtf)
    {
        setOtf(theOtf, 0);
    }
    void setOtf(const ::omero::model::OTFPtr& theOtf, const ::Ice::Context& __ctx)
    {
        setOtf(theOtf, &__ctx);
    }
    
private:

    void setOtf(const ::omero::model::OTFPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::DetectorSettingsPtr getDetectorSettings()
    {
        return getDetectorSettings(0);
    }
    ::omero::model::DetectorSettingsPtr getDetectorSettings(const ::Ice::Context& __ctx)
    {
        return getDetectorSettings(&__ctx);
    }
    
private:

    ::omero::model::DetectorSettingsPtr getDetectorSettings(const ::Ice::Context*);
    
public:

    void setDetectorSettings(const ::omero::model::DetectorSettingsPtr& theDetectorSettings)
    {
        setDetectorSettings(theDetectorSettings, 0);
    }
    void setDetectorSettings(const ::omero::model::DetectorSettingsPtr& theDetectorSettings, const ::Ice::Context& __ctx)
    {
        setDetectorSettings(theDetectorSettings, &__ctx);
    }
    
private:

    void setDetectorSettings(const ::omero::model::DetectorSettingsPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::LightSettingsPtr getLightSourceSettings()
    {
        return getLightSourceSettings(0);
    }
    ::omero::model::LightSettingsPtr getLightSourceSettings(const ::Ice::Context& __ctx)
    {
        return getLightSourceSettings(&__ctx);
    }
    
private:

    ::omero::model::LightSettingsPtr getLightSourceSettings(const ::Ice::Context*);
    
public:

    void setLightSourceSettings(const ::omero::model::LightSettingsPtr& theLightSourceSettings)
    {
        setLightSourceSettings(theLightSourceSettings, 0);
    }
    void setLightSourceSettings(const ::omero::model::LightSettingsPtr& theLightSourceSettings, const ::Ice::Context& __ctx)
    {
        setLightSourceSettings(theLightSourceSettings, &__ctx);
    }
    
private:

    void setLightSourceSettings(const ::omero::model::LightSettingsPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::FilterSetPtr getFilterSet()
    {
        return getFilterSet(0);
    }
    ::omero::model::FilterSetPtr getFilterSet(const ::Ice::Context& __ctx)
    {
        return getFilterSet(&__ctx);
    }
    
private:

    ::omero::model::FilterSetPtr getFilterSet(const ::Ice::Context*);
    
public:

    void setFilterSet(const ::omero::model::FilterSetPtr& theFilterSet)
    {
        setFilterSet(theFilterSet, 0);
    }
    void setFilterSet(const ::omero::model::FilterSetPtr& theFilterSet, const ::Ice::Context& __ctx)
    {
        setFilterSet(theFilterSet, &__ctx);
    }
    
private:

    void setFilterSet(const ::omero::model::FilterSetPtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getSamplesPerPixel()
    {
        return getSamplesPerPixel(0);
    }
    ::omero::RIntPtr getSamplesPerPixel(const ::Ice::Context& __ctx)
    {
        return getSamplesPerPixel(&__ctx);
    }
    
private:

    ::omero::RIntPtr getSamplesPerPixel(const ::Ice::Context*);
    
public:

    void setSamplesPerPixel(const ::omero::RIntPtr& theSamplesPerPixel)
    {
        setSamplesPerPixel(theSamplesPerPixel, 0);
    }
    void setSamplesPerPixel(const ::omero::RIntPtr& theSamplesPerPixel, const ::Ice::Context& __ctx)
    {
        setSamplesPerPixel(theSamplesPerPixel, &__ctx);
    }
    
private:

    void setSamplesPerPixel(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::PhotometricInterpretationPtr getPhotometricInterpretation()
    {
        return getPhotometricInterpretation(0);
    }
    ::omero::model::PhotometricInterpretationPtr getPhotometricInterpretation(const ::Ice::Context& __ctx)
    {
        return getPhotometricInterpretation(&__ctx);
    }
    
private:

    ::omero::model::PhotometricInterpretationPtr getPhotometricInterpretation(const ::Ice::Context*);
    
public:

    void setPhotometricInterpretation(const ::omero::model::PhotometricInterpretationPtr& thePhotometricInterpretation)
    {
        setPhotometricInterpretation(thePhotometricInterpretation, 0);
    }
    void setPhotometricInterpretation(const ::omero::model::PhotometricInterpretationPtr& thePhotometricInterpretation, const ::Ice::Context& __ctx)
    {
        setPhotometricInterpretation(thePhotometricInterpretation, &__ctx);
    }
    
private:

    void setPhotometricInterpretation(const ::omero::model::PhotometricInterpretationPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::AcquisitionModePtr getMode()
    {
        return getMode(0);
    }
    ::omero::model::AcquisitionModePtr getMode(const ::Ice::Context& __ctx)
    {
        return getMode(&__ctx);
    }
    
private:

    ::omero::model::AcquisitionModePtr getMode(const ::Ice::Context*);
    
public:

    void setMode(const ::omero::model::AcquisitionModePtr& theMode)
    {
        setMode(theMode, 0);
    }
    void setMode(const ::omero::model::AcquisitionModePtr& theMode, const ::Ice::Context& __ctx)
    {
        setMode(theMode, &__ctx);
    }
    
private:

    void setMode(const ::omero::model::AcquisitionModePtr&, const ::Ice::Context*);
    
public:

    ::omero::RIntPtr getPockelCellSetting()
    {
        return getPockelCellSetting(0);
    }
    ::omero::RIntPtr getPockelCellSetting(const ::Ice::Context& __ctx)
    {
        return getPockelCellSetting(&__ctx);
    }
    
private:

    ::omero::RIntPtr getPockelCellSetting(const ::Ice::Context*);
    
public:

    void setPockelCellSetting(const ::omero::RIntPtr& thePockelCellSetting)
    {
        setPockelCellSetting(thePockelCellSetting, 0);
    }
    void setPockelCellSetting(const ::omero::RIntPtr& thePockelCellSetting, const ::Ice::Context& __ctx)
    {
        setPockelCellSetting(thePockelCellSetting, &__ctx);
    }
    
private:

    void setPockelCellSetting(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    void unloadChannels()
    {
        unloadChannels(0);
    }
    void unloadChannels(const ::Ice::Context& __ctx)
    {
        unloadChannels(&__ctx);
    }
    
private:

    void unloadChannels(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfChannels()
    {
        return sizeOfChannels(0);
    }
    ::Ice::Int sizeOfChannels(const ::Ice::Context& __ctx)
    {
        return sizeOfChannels(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfChannels(const ::Ice::Context*);
    
public:

    ::omero::model::LogicalChannelChannelsSeq copyChannels()
    {
        return copyChannels(0);
    }
    ::omero::model::LogicalChannelChannelsSeq copyChannels(const ::Ice::Context& __ctx)
    {
        return copyChannels(&__ctx);
    }
    
private:

    ::omero::model::LogicalChannelChannelsSeq copyChannels(const ::Ice::Context*);
    
public:

    void addChannel(const ::omero::model::ChannelPtr& target)
    {
        addChannel(target, 0);
    }
    void addChannel(const ::omero::model::ChannelPtr& target, const ::Ice::Context& __ctx)
    {
        addChannel(target, &__ctx);
    }
    
private:

    void addChannel(const ::omero::model::ChannelPtr&, const ::Ice::Context*);
    
public:

    void addAllChannelSet(const ::omero::model::LogicalChannelChannelsSeq& targets)
    {
        addAllChannelSet(targets, 0);
    }
    void addAllChannelSet(const ::omero::model::LogicalChannelChannelsSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllChannelSet(targets, &__ctx);
    }
    
private:

    void addAllChannelSet(const ::omero::model::LogicalChannelChannelsSeq&, const ::Ice::Context*);
    
public:

    void removeChannel(const ::omero::model::ChannelPtr& theTarget)
    {
        removeChannel(theTarget, 0);
    }
    void removeChannel(const ::omero::model::ChannelPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeChannel(theTarget, &__ctx);
    }
    
private:

    void removeChannel(const ::omero::model::ChannelPtr&, const ::Ice::Context*);
    
public:

    void removeAllChannelSet(const ::omero::model::LogicalChannelChannelsSeq& targets)
    {
        removeAllChannelSet(targets, 0);
    }
    void removeAllChannelSet(const ::omero::model::LogicalChannelChannelsSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllChannelSet(targets, &__ctx);
    }
    
private:

    void removeAllChannelSet(const ::omero::model::LogicalChannelChannelsSeq&, const ::Ice::Context*);
    
public:

    void clearChannels()
    {
        clearChannels(0);
    }
    void clearChannels(const ::Ice::Context& __ctx)
    {
        clearChannels(&__ctx);
    }
    
private:

    void clearChannels(const ::Ice::Context*);
    
public:

    void reloadChannels(const ::omero::model::LogicalChannelPtr& toCopy)
    {
        reloadChannels(toCopy, 0);
    }
    void reloadChannels(const ::omero::model::LogicalChannelPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadChannels(toCopy, &__ctx);
    }
    
private:

    void reloadChannels(const ::omero::model::LogicalChannelPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::LightPathPtr getLightPath()
    {
        return getLightPath(0);
    }
    ::omero::model::LightPathPtr getLightPath(const ::Ice::Context& __ctx)
    {
        return getLightPath(&__ctx);
    }
    
private:

    ::omero::model::LightPathPtr getLightPath(const ::Ice::Context*);
    
public:

    void setLightPath(const ::omero::model::LightPathPtr& theLightPath)
    {
        setLightPath(theLightPath, 0);
    }
    void setLightPath(const ::omero::model::LightPathPtr& theLightPath, const ::Ice::Context& __ctx)
    {
        setLightPath(theLightPath, &__ctx);
    }
    
private:

    void setLightPath(const ::omero::model::LightPathPtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<LogicalChannel> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LogicalChannel*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<LogicalChannel*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LogicalChannel> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LogicalChannel*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<LogicalChannel*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LogicalChannel> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LogicalChannel*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<LogicalChannel*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LogicalChannel> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LogicalChannel*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<LogicalChannel*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LogicalChannel> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LogicalChannel*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<LogicalChannel*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LogicalChannel> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LogicalChannel*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<LogicalChannel*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LogicalChannel> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LogicalChannel*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<LogicalChannel*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LogicalChannel> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LogicalChannel*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<LogicalChannel*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LogicalChannel> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LogicalChannel*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<LogicalChannel*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LogicalChannel> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LogicalChannel*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<LogicalChannel*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LogicalChannel> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LogicalChannel*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<LogicalChannel*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LogicalChannel> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LogicalChannel*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<LogicalChannel*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LogicalChannel> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LogicalChannel*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<LogicalChannel*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LogicalChannel> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LogicalChannel*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<LogicalChannel*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LogicalChannel> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LogicalChannel*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<LogicalChannel*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LogicalChannel> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LogicalChannel*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<LogicalChannel*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LogicalChannel> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LogicalChannel*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<LogicalChannel*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LogicalChannel> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LogicalChannel*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<LogicalChannel*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LogicalChannel> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LogicalChannel*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<LogicalChannel*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class LogicalChannel : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getName(const ::Ice::Context*) = 0;

    virtual void setName(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getPinHoleSize(const ::Ice::Context*) = 0;

    virtual void setPinHoleSize(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::IlluminationPtr getIllumination(const ::Ice::Context*) = 0;

    virtual void setIllumination(const ::omero::model::IlluminationPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::ContrastMethodPtr getContrastMethod(const ::Ice::Context*) = 0;

    virtual void setContrastMethod(const ::omero::model::ContrastMethodPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getExcitationWave(const ::Ice::Context*) = 0;

    virtual void setExcitationWave(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getEmissionWave(const ::Ice::Context*) = 0;

    virtual void setEmissionWave(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getFluor(const ::Ice::Context*) = 0;

    virtual void setFluor(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getNdFilter(const ::Ice::Context*) = 0;

    virtual void setNdFilter(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::OTFPtr getOtf(const ::Ice::Context*) = 0;

    virtual void setOtf(const ::omero::model::OTFPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::DetectorSettingsPtr getDetectorSettings(const ::Ice::Context*) = 0;

    virtual void setDetectorSettings(const ::omero::model::DetectorSettingsPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::LightSettingsPtr getLightSourceSettings(const ::Ice::Context*) = 0;

    virtual void setLightSourceSettings(const ::omero::model::LightSettingsPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::FilterSetPtr getFilterSet(const ::Ice::Context*) = 0;

    virtual void setFilterSet(const ::omero::model::FilterSetPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getSamplesPerPixel(const ::Ice::Context*) = 0;

    virtual void setSamplesPerPixel(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::PhotometricInterpretationPtr getPhotometricInterpretation(const ::Ice::Context*) = 0;

    virtual void setPhotometricInterpretation(const ::omero::model::PhotometricInterpretationPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::AcquisitionModePtr getMode(const ::Ice::Context*) = 0;

    virtual void setMode(const ::omero::model::AcquisitionModePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RIntPtr getPockelCellSetting(const ::Ice::Context*) = 0;

    virtual void setPockelCellSetting(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual void unloadChannels(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfChannels(const ::Ice::Context*) = 0;

    virtual ::omero::model::LogicalChannelChannelsSeq copyChannels(const ::Ice::Context*) = 0;

    virtual void addChannel(const ::omero::model::ChannelPtr&, const ::Ice::Context*) = 0;

    virtual void addAllChannelSet(const ::omero::model::LogicalChannelChannelsSeq&, const ::Ice::Context*) = 0;

    virtual void removeChannel(const ::omero::model::ChannelPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllChannelSet(const ::omero::model::LogicalChannelChannelsSeq&, const ::Ice::Context*) = 0;

    virtual void clearChannels(const ::Ice::Context*) = 0;

    virtual void reloadChannels(const ::omero::model::LogicalChannelPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::LightPathPtr getLightPath(const ::Ice::Context*) = 0;

    virtual void setLightPath(const ::omero::model::LightPathPtr&, const ::Ice::Context*) = 0;
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

class LogicalChannel : virtual public ::IceDelegate::omero::model::LogicalChannel,
                       virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getName(const ::Ice::Context*);

    virtual void setName(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getPinHoleSize(const ::Ice::Context*);

    virtual void setPinHoleSize(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::model::IlluminationPtr getIllumination(const ::Ice::Context*);

    virtual void setIllumination(const ::omero::model::IlluminationPtr&, const ::Ice::Context*);

    virtual ::omero::model::ContrastMethodPtr getContrastMethod(const ::Ice::Context*);

    virtual void setContrastMethod(const ::omero::model::ContrastMethodPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getExcitationWave(const ::Ice::Context*);

    virtual void setExcitationWave(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getEmissionWave(const ::Ice::Context*);

    virtual void setEmissionWave(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getFluor(const ::Ice::Context*);

    virtual void setFluor(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getNdFilter(const ::Ice::Context*);

    virtual void setNdFilter(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::model::OTFPtr getOtf(const ::Ice::Context*);

    virtual void setOtf(const ::omero::model::OTFPtr&, const ::Ice::Context*);

    virtual ::omero::model::DetectorSettingsPtr getDetectorSettings(const ::Ice::Context*);

    virtual void setDetectorSettings(const ::omero::model::DetectorSettingsPtr&, const ::Ice::Context*);

    virtual ::omero::model::LightSettingsPtr getLightSourceSettings(const ::Ice::Context*);

    virtual void setLightSourceSettings(const ::omero::model::LightSettingsPtr&, const ::Ice::Context*);

    virtual ::omero::model::FilterSetPtr getFilterSet(const ::Ice::Context*);

    virtual void setFilterSet(const ::omero::model::FilterSetPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getSamplesPerPixel(const ::Ice::Context*);

    virtual void setSamplesPerPixel(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::PhotometricInterpretationPtr getPhotometricInterpretation(const ::Ice::Context*);

    virtual void setPhotometricInterpretation(const ::omero::model::PhotometricInterpretationPtr&, const ::Ice::Context*);

    virtual ::omero::model::AcquisitionModePtr getMode(const ::Ice::Context*);

    virtual void setMode(const ::omero::model::AcquisitionModePtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getPockelCellSetting(const ::Ice::Context*);

    virtual void setPockelCellSetting(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual void unloadChannels(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfChannels(const ::Ice::Context*);

    virtual ::omero::model::LogicalChannelChannelsSeq copyChannels(const ::Ice::Context*);

    virtual void addChannel(const ::omero::model::ChannelPtr&, const ::Ice::Context*);

    virtual void addAllChannelSet(const ::omero::model::LogicalChannelChannelsSeq&, const ::Ice::Context*);

    virtual void removeChannel(const ::omero::model::ChannelPtr&, const ::Ice::Context*);

    virtual void removeAllChannelSet(const ::omero::model::LogicalChannelChannelsSeq&, const ::Ice::Context*);

    virtual void clearChannels(const ::Ice::Context*);

    virtual void reloadChannels(const ::omero::model::LogicalChannelPtr&, const ::Ice::Context*);

    virtual ::omero::model::LightPathPtr getLightPath(const ::Ice::Context*);

    virtual void setLightPath(const ::omero::model::LightPathPtr&, const ::Ice::Context*);
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

class LogicalChannel : virtual public ::IceDelegate::omero::model::LogicalChannel,
                       virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getName(const ::Ice::Context*);

    virtual void setName(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getPinHoleSize(const ::Ice::Context*);

    virtual void setPinHoleSize(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::model::IlluminationPtr getIllumination(const ::Ice::Context*);

    virtual void setIllumination(const ::omero::model::IlluminationPtr&, const ::Ice::Context*);

    virtual ::omero::model::ContrastMethodPtr getContrastMethod(const ::Ice::Context*);

    virtual void setContrastMethod(const ::omero::model::ContrastMethodPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getExcitationWave(const ::Ice::Context*);

    virtual void setExcitationWave(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getEmissionWave(const ::Ice::Context*);

    virtual void setEmissionWave(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getFluor(const ::Ice::Context*);

    virtual void setFluor(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getNdFilter(const ::Ice::Context*);

    virtual void setNdFilter(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::model::OTFPtr getOtf(const ::Ice::Context*);

    virtual void setOtf(const ::omero::model::OTFPtr&, const ::Ice::Context*);

    virtual ::omero::model::DetectorSettingsPtr getDetectorSettings(const ::Ice::Context*);

    virtual void setDetectorSettings(const ::omero::model::DetectorSettingsPtr&, const ::Ice::Context*);

    virtual ::omero::model::LightSettingsPtr getLightSourceSettings(const ::Ice::Context*);

    virtual void setLightSourceSettings(const ::omero::model::LightSettingsPtr&, const ::Ice::Context*);

    virtual ::omero::model::FilterSetPtr getFilterSet(const ::Ice::Context*);

    virtual void setFilterSet(const ::omero::model::FilterSetPtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getSamplesPerPixel(const ::Ice::Context*);

    virtual void setSamplesPerPixel(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::PhotometricInterpretationPtr getPhotometricInterpretation(const ::Ice::Context*);

    virtual void setPhotometricInterpretation(const ::omero::model::PhotometricInterpretationPtr&, const ::Ice::Context*);

    virtual ::omero::model::AcquisitionModePtr getMode(const ::Ice::Context*);

    virtual void setMode(const ::omero::model::AcquisitionModePtr&, const ::Ice::Context*);

    virtual ::omero::RIntPtr getPockelCellSetting(const ::Ice::Context*);

    virtual void setPockelCellSetting(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual void unloadChannels(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfChannels(const ::Ice::Context*);

    virtual ::omero::model::LogicalChannelChannelsSeq copyChannels(const ::Ice::Context*);

    virtual void addChannel(const ::omero::model::ChannelPtr&, const ::Ice::Context*);

    virtual void addAllChannelSet(const ::omero::model::LogicalChannelChannelsSeq&, const ::Ice::Context*);

    virtual void removeChannel(const ::omero::model::ChannelPtr&, const ::Ice::Context*);

    virtual void removeAllChannelSet(const ::omero::model::LogicalChannelChannelsSeq&, const ::Ice::Context*);

    virtual void clearChannels(const ::Ice::Context*);

    virtual void reloadChannels(const ::omero::model::LogicalChannelPtr&, const ::Ice::Context*);

    virtual ::omero::model::LightPathPtr getLightPath(const ::Ice::Context*);

    virtual void setLightPath(const ::omero::model::LightPathPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class LogicalChannel : virtual public ::omero::model::IObject
{
public:

    typedef LogicalChannelPrx ProxyType;
    typedef LogicalChannelPtr PointerType;
    
    LogicalChannel() {}
    LogicalChannel(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RDoublePtr&, const ::omero::model::IlluminationPtr&, const ::omero::model::ContrastMethodPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RDoublePtr&, const ::omero::model::OTFPtr&, const ::omero::model::DetectorSettingsPtr&, const ::omero::model::LightSettingsPtr&, const ::omero::model::FilterSetPtr&, const ::omero::RIntPtr&, const ::omero::model::PhotometricInterpretationPtr&, const ::omero::model::AcquisitionModePtr&, const ::omero::RIntPtr&, const ::omero::model::LogicalChannelChannelsSeq&, bool, const ::omero::model::LightPathPtr&);
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

    virtual ::omero::RStringPtr getName(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setName(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setName(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getPinHoleSize(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPinHoleSize(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPinHoleSize(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPinHoleSize(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::IlluminationPtr getIllumination(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getIllumination(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setIllumination(const ::omero::model::IlluminationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setIllumination(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::ContrastMethodPtr getContrastMethod(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getContrastMethod(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setContrastMethod(const ::omero::model::ContrastMethodPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setContrastMethod(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getExcitationWave(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getExcitationWave(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setExcitationWave(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setExcitationWave(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getEmissionWave(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getEmissionWave(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setEmissionWave(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setEmissionWave(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getFluor(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFluor(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setFluor(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setFluor(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getNdFilter(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getNdFilter(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setNdFilter(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setNdFilter(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::OTFPtr getOtf(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getOtf(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setOtf(const ::omero::model::OTFPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setOtf(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::DetectorSettingsPtr getDetectorSettings(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getDetectorSettings(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setDetectorSettings(const ::omero::model::DetectorSettingsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setDetectorSettings(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::LightSettingsPtr getLightSourceSettings(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getLightSourceSettings(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setLightSourceSettings(const ::omero::model::LightSettingsPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setLightSourceSettings(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FilterSetPtr getFilterSet(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFilterSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setFilterSet(const ::omero::model::FilterSetPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setFilterSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getSamplesPerPixel(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getSamplesPerPixel(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setSamplesPerPixel(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setSamplesPerPixel(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::PhotometricInterpretationPtr getPhotometricInterpretation(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPhotometricInterpretation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPhotometricInterpretation(const ::omero::model::PhotometricInterpretationPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPhotometricInterpretation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::AcquisitionModePtr getMode(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMode(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setMode(const ::omero::model::AcquisitionModePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setMode(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RIntPtr getPockelCellSetting(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPockelCellSetting(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setPockelCellSetting(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPockelCellSetting(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadChannels(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadChannels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfChannels(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfChannels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::LogicalChannelChannelsSeq copyChannels(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyChannels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addChannel(const ::omero::model::ChannelPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addChannel(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllChannelSet(const ::omero::model::LogicalChannelChannelsSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllChannelSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeChannel(const ::omero::model::ChannelPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeChannel(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllChannelSet(const ::omero::model::LogicalChannelChannelsSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllChannelSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearChannels(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearChannels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadChannels(const ::omero::model::LogicalChannelPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadChannels(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::LightPathPtr getLightPath(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getLightPath(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setLightPath(const ::omero::model::LightPathPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setLightPath(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::RStringPtr name;

    ::omero::RDoublePtr pinHoleSize;

    ::omero::model::IlluminationPtr illumination;

    ::omero::model::ContrastMethodPtr contrastMethod;

    ::omero::RIntPtr excitationWave;

    ::omero::RIntPtr emissionWave;

    ::omero::RStringPtr fluor;

    ::omero::RDoublePtr ndFilter;

    ::omero::model::OTFPtr otf;

    ::omero::model::DetectorSettingsPtr detectorSettings;

    ::omero::model::LightSettingsPtr lightSourceSettings;

    ::omero::model::FilterSetPtr filterSet;

    ::omero::RIntPtr samplesPerPixel;

    ::omero::model::PhotometricInterpretationPtr photometricInterpretation;

    ::omero::model::AcquisitionModePtr mode;

    ::omero::RIntPtr pockelCellSetting;

    ::omero::model::LogicalChannelChannelsSeq channelsSeq;

    bool channelsLoaded;

    ::omero::model::LightPathPtr lightPath;
};

}

}

#endif
