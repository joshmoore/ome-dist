   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.h for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef LOGICALCHANNELI_H
#define LOGICALCHANNELI_H
#include <omero/IceNoWarnPush.h>
#include <omero/RTypes.h>
#include <omero/model/RTypes.h>
#include <omero/model/IObject.h>
#include <omero/model/LogicalChannel.h>
#include <omero/IceNoWarnPop.h>
#include <omero/ClientErrors.h>
#include <omero/model/DetailsI.h>
#include <omero/model/NamedValue.h>
#include <omero/templates.h>
#include <IceUtil/Config.h>
#if ICE_INT_VERSION / 100 >= 304
#   include <Ice/Handle.h>
#else
#   include <IceUtil/Handle.h>
#endif
#ifndef OMERO_CLIENT
#   ifdef OMERO_CLIENT_EXPORTS
#       define OMERO_CLIENT ICE_DECLSPEC_EXPORT
#   else
#       define OMERO_CLIENT ICE_DECLSPEC_IMPORT
#   endif
#endif
namespace omero {
  namespace model {
    class OMERO_CLIENT LogicalChannelI;
  }
}
#if ICE_INT_VERSION / 100 >= 304
namespace IceInternal {
  OMERO_CLIENT ::Ice::Object* upCast(::omero::model::LogicalChannelI*);
}
#endif
namespace omero {
  namespace model {
#if ICE_INT_VERSION / 100 >= 304
  typedef IceInternal::Handle<LogicalChannelI> LogicalChannelIPtr;
#else
  typedef IceUtil::Handle<LogicalChannelI> LogicalChannelIPtr;
#endif
    class OMERO_CLIENT LogicalChannelI : virtual public LogicalChannel {
   public:
      static const std::string NAME;
      static const std::string PINHOLESIZE;
      static const std::string ILLUMINATION;
      static const std::string CONTRASTMETHOD;
      static const std::string EXCITATIONWAVE;
      static const std::string EMISSIONWAVE;
      static const std::string FLUOR;
      static const std::string NDFILTER;
      static const std::string OTF;
      static const std::string DETECTORSETTINGS;
      static const std::string LIGHTSOURCESETTINGS;
      static const std::string FILTERSET;
      static const std::string SAMPLESPERPIXEL;
      static const std::string PHOTOMETRICINTERPRETATION;
      static const std::string MODE;
      static const std::string POCKELCELLSETTING;
      static const std::string CHANNELS;
      static const std::string LIGHTPATH;
      static const std::string DETAILS;
    protected:
      void errorIfUnloaded();
      void throwNullCollectionException(std::string propertyName);
      virtual void toggleCollectionsLoaded(bool load);
      virtual ~LogicalChannelI();
    public:
      LogicalChannelI();
      LogicalChannelI(omero::RLongPtr idPtr, bool isLoaded = false);
      LogicalChannelI(Ice::Long id, bool isLoaded = false);
      virtual void unload(const Ice::Current& current = Ice::Current());
      virtual bool isLoaded(const Ice::Current& current = Ice::Current());
      virtual void unloadCollections(const Ice::Current& current = Ice::Current());
      virtual bool isGlobal(const Ice::Current& current = Ice::Current());
      virtual bool isMutable(const Ice::Current& current = Ice::Current());
      virtual bool isAnnotated(const Ice::Current& current = Ice::Current());
      virtual bool isLink(const Ice::Current& current = Ice::Current());
      virtual omero::model::IObjectPtr shallowCopy(const Ice::Current& current = Ice::Current());
      virtual omero::model::IObjectPtr proxy(const Ice::Current& current = Ice::Current());
      virtual omero::model::DetailsPtr getDetails(const Ice::Current& current = Ice::Current());
      virtual void unloadDetails(const Ice::Current& current = Ice::Current());
      virtual omero::RLongPtr getId(const Ice::Current& current = Ice::Current());
      virtual void setId( const omero::RLongPtr& id, const Ice::Current& current = Ice::Current() );
      virtual omero::RIntPtr getVersion(const Ice::Current& current = Ice::Current());
      virtual void setVersion( const omero::RIntPtr& version, const Ice::Current& current = Ice::Current() );

      //
      //  LogicalChannel.name
      //
      virtual void unloadName();
      virtual omero::RStringPtr getName(const Ice::Current& current = Ice::Current());
      virtual void setName(const omero::RStringPtr& _name, const Ice::Current& current = Ice::Current());

      //
      //  LogicalChannel.pinHoleSize
      //
      virtual void unloadPinHoleSize();
      virtual omero::model::LengthPtr getPinHoleSize(const Ice::Current& current = Ice::Current());
      virtual void setPinHoleSize(const omero::model::LengthPtr& _pinHoleSize, const Ice::Current& current = Ice::Current());

      //
      //  LogicalChannel.illumination
      //
      virtual void unloadIllumination();
      virtual omero::model::IlluminationPtr getIllumination(const Ice::Current& current = Ice::Current());
      virtual void setIllumination(const omero::model::IlluminationPtr& _illumination, const Ice::Current& current = Ice::Current());

      //
      //  LogicalChannel.contrastMethod
      //
      virtual void unloadContrastMethod();
      virtual omero::model::ContrastMethodPtr getContrastMethod(const Ice::Current& current = Ice::Current());
      virtual void setContrastMethod(const omero::model::ContrastMethodPtr& _contrastMethod, const Ice::Current& current = Ice::Current());

      //
      //  LogicalChannel.excitationWave
      //
      virtual void unloadExcitationWave();
      virtual omero::model::LengthPtr getExcitationWave(const Ice::Current& current = Ice::Current());
      virtual void setExcitationWave(const omero::model::LengthPtr& _excitationWave, const Ice::Current& current = Ice::Current());

      //
      //  LogicalChannel.emissionWave
      //
      virtual void unloadEmissionWave();
      virtual omero::model::LengthPtr getEmissionWave(const Ice::Current& current = Ice::Current());
      virtual void setEmissionWave(const omero::model::LengthPtr& _emissionWave, const Ice::Current& current = Ice::Current());

      //
      //  LogicalChannel.fluor
      //
      virtual void unloadFluor();
      virtual omero::RStringPtr getFluor(const Ice::Current& current = Ice::Current());
      virtual void setFluor(const omero::RStringPtr& _fluor, const Ice::Current& current = Ice::Current());

      //
      //  LogicalChannel.ndFilter
      //
      virtual void unloadNdFilter();
      virtual omero::RDoublePtr getNdFilter(const Ice::Current& current = Ice::Current());
      virtual void setNdFilter(const omero::RDoublePtr& _ndFilter, const Ice::Current& current = Ice::Current());

      //
      //  LogicalChannel.otf
      //
      virtual void unloadOtf();
      virtual omero::model::OTFPtr getOtf(const Ice::Current& current = Ice::Current());
      virtual void setOtf(const omero::model::OTFPtr& _otf, const Ice::Current& current = Ice::Current());

      //
      //  LogicalChannel.detectorSettings
      //
      virtual void unloadDetectorSettings();
      virtual omero::model::DetectorSettingsPtr getDetectorSettings(const Ice::Current& current = Ice::Current());
      virtual void setDetectorSettings(const omero::model::DetectorSettingsPtr& _detectorSettings, const Ice::Current& current = Ice::Current());

      //
      //  LogicalChannel.lightSourceSettings
      //
      virtual void unloadLightSourceSettings();
      virtual omero::model::LightSettingsPtr getLightSourceSettings(const Ice::Current& current = Ice::Current());
      virtual void setLightSourceSettings(const omero::model::LightSettingsPtr& _lightSourceSettings, const Ice::Current& current = Ice::Current());

      //
      //  LogicalChannel.filterSet
      //
      virtual void unloadFilterSet();
      virtual omero::model::FilterSetPtr getFilterSet(const Ice::Current& current = Ice::Current());
      virtual void setFilterSet(const omero::model::FilterSetPtr& _filterSet, const Ice::Current& current = Ice::Current());

      //
      //  LogicalChannel.samplesPerPixel
      //
      virtual void unloadSamplesPerPixel();
      virtual omero::RIntPtr getSamplesPerPixel(const Ice::Current& current = Ice::Current());
      virtual void setSamplesPerPixel(const omero::RIntPtr& _samplesPerPixel, const Ice::Current& current = Ice::Current());

      //
      //  LogicalChannel.photometricInterpretation
      //
      virtual void unloadPhotometricInterpretation();
      virtual omero::model::PhotometricInterpretationPtr getPhotometricInterpretation(const Ice::Current& current = Ice::Current());
      virtual void setPhotometricInterpretation(const omero::model::PhotometricInterpretationPtr& _photometricInterpretation, const Ice::Current& current = Ice::Current());

      //
      //  LogicalChannel.mode
      //
      virtual void unloadMode();
      virtual omero::model::AcquisitionModePtr getMode(const Ice::Current& current = Ice::Current());
      virtual void setMode(const omero::model::AcquisitionModePtr& _mode, const Ice::Current& current = Ice::Current());

      //
      //  LogicalChannel.pockelCellSetting
      //
      virtual void unloadPockelCellSetting();
      virtual omero::RIntPtr getPockelCellSetting(const Ice::Current& current = Ice::Current());
      virtual void setPockelCellSetting(const omero::RIntPtr& _pockelCellSetting, const Ice::Current& current = Ice::Current());

      //
      //  LogicalChannel.channels
      //
      virtual void unloadChannels(const Ice::Current& current = Ice::Current());
    protected:
      virtual LogicalChannelChannelsSeq getChannels(const Ice::Current& current = Ice::Current());
      virtual void setChannels(const LogicalChannelChannelsSeq& _channels, const Ice::Current& current = Ice::Current());
    public:
      virtual bool isChannelsLoaded();
      virtual Ice::Int sizeOfChannels(const Ice::Current& current = Ice::Current());
      virtual LogicalChannelChannelsSeq copyChannels(const Ice::Current& current = Ice::Current());
      virtual LogicalChannelChannelsSeq::iterator beginChannels();
      virtual LogicalChannelChannelsSeq::iterator endChannels();
      virtual void addChannel(const ChannelPtr& target, const Ice::Current& current = Ice::Current());
      virtual void addAllChannelSet(const LogicalChannelChannelsSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void removeChannel(const ChannelPtr& target, const Ice::Current& current = Ice::Current());
      virtual void removeAllChannelSet(const LogicalChannelChannelsSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void clearChannels(const Ice::Current& current = Ice::Current());
      virtual void reloadChannels(const LogicalChannelPtr& toCopy, const Ice::Current& current = Ice::Current());

      //
      //  LogicalChannel.lightPath
      //
      virtual void unloadLightPath();
      virtual omero::model::LightPathPtr getLightPath(const Ice::Current& current = Ice::Current());
      virtual void setLightPath(const omero::model::LightPathPtr& _lightPath, const Ice::Current& current = Ice::Current());
 };

}}
#endif // LOGICALCHANNELI_H
