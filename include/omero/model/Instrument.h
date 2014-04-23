// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Instrument.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Instrument_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Instrument_h__

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

class Microscope;

class Detector;

class Objective;

class LightSource;

class Filter;

class Dichroic;

class FilterSet;

class OTF;

class Details;

class Instrument;

}

}

}

namespace omero
{

namespace model
{

class Microscope;
bool operator==(const Microscope&, const Microscope&);
bool operator<(const Microscope&, const Microscope&);

class Detector;
bool operator==(const Detector&, const Detector&);
bool operator<(const Detector&, const Detector&);

class Objective;
bool operator==(const Objective&, const Objective&);
bool operator<(const Objective&, const Objective&);

class LightSource;
bool operator==(const LightSource&, const LightSource&);
bool operator<(const LightSource&, const LightSource&);

class Filter;
bool operator==(const Filter&, const Filter&);
bool operator<(const Filter&, const Filter&);

class Dichroic;
bool operator==(const Dichroic&, const Dichroic&);
bool operator<(const Dichroic&, const Dichroic&);

class FilterSet;
bool operator==(const FilterSet&, const FilterSet&);
bool operator<(const FilterSet&, const FilterSet&);

class OTF;
bool operator==(const OTF&, const OTF&);
bool operator<(const OTF&, const OTF&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class Instrument;
bool operator==(const Instrument&, const Instrument&);
bool operator<(const Instrument&, const Instrument&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Microscope*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Microscope*);

::Ice::Object* upCast(::omero::model::Detector*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Detector*);

::Ice::Object* upCast(::omero::model::Objective*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Objective*);

::Ice::Object* upCast(::omero::model::LightSource*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::LightSource*);

::Ice::Object* upCast(::omero::model::Filter*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Filter*);

::Ice::Object* upCast(::omero::model::Dichroic*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Dichroic*);

::Ice::Object* upCast(::omero::model::FilterSet*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::FilterSet*);

::Ice::Object* upCast(::omero::model::OTF*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::OTF*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::Instrument*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Instrument*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Microscope> MicroscopePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Microscope> MicroscopePrx;

void __read(::IceInternal::BasicStream*, MicroscopePrx&);
void __patch__MicroscopePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Detector> DetectorPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Detector> DetectorPrx;

void __read(::IceInternal::BasicStream*, DetectorPrx&);
void __patch__DetectorPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Objective> ObjectivePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Objective> ObjectivePrx;

void __read(::IceInternal::BasicStream*, ObjectivePrx&);
void __patch__ObjectivePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::LightSource> LightSourcePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::LightSource> LightSourcePrx;

void __read(::IceInternal::BasicStream*, LightSourcePrx&);
void __patch__LightSourcePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Filter> FilterPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Filter> FilterPrx;

void __read(::IceInternal::BasicStream*, FilterPrx&);
void __patch__FilterPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Dichroic> DichroicPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Dichroic> DichroicPrx;

void __read(::IceInternal::BasicStream*, DichroicPrx&);
void __patch__DichroicPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::FilterSet> FilterSetPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::FilterSet> FilterSetPrx;

void __read(::IceInternal::BasicStream*, FilterSetPrx&);
void __patch__FilterSetPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::OTF> OTFPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::OTF> OTFPrx;

void __read(::IceInternal::BasicStream*, OTFPrx&);
void __patch__OTFPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Instrument> InstrumentPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Instrument> InstrumentPrx;

void __read(::IceInternal::BasicStream*, InstrumentPrx&);
void __patch__InstrumentPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

typedef ::std::vector< ::omero::model::DetectorPtr> InstrumentDetectorSeq;
void __writeInstrumentDetectorSeq(::IceInternal::BasicStream*, const ::omero::model::DetectorPtr*, const ::omero::model::DetectorPtr*);
void __readInstrumentDetectorSeq(::IceInternal::BasicStream*, InstrumentDetectorSeq&);

typedef ::std::vector< ::omero::model::ObjectivePtr> InstrumentObjectiveSeq;
void __writeInstrumentObjectiveSeq(::IceInternal::BasicStream*, const ::omero::model::ObjectivePtr*, const ::omero::model::ObjectivePtr*);
void __readInstrumentObjectiveSeq(::IceInternal::BasicStream*, InstrumentObjectiveSeq&);

typedef ::std::vector< ::omero::model::LightSourcePtr> InstrumentLightSourceSeq;
void __writeInstrumentLightSourceSeq(::IceInternal::BasicStream*, const ::omero::model::LightSourcePtr*, const ::omero::model::LightSourcePtr*);
void __readInstrumentLightSourceSeq(::IceInternal::BasicStream*, InstrumentLightSourceSeq&);

typedef ::std::vector< ::omero::model::FilterPtr> InstrumentFilterSeq;
void __writeInstrumentFilterSeq(::IceInternal::BasicStream*, const ::omero::model::FilterPtr*, const ::omero::model::FilterPtr*);
void __readInstrumentFilterSeq(::IceInternal::BasicStream*, InstrumentFilterSeq&);

typedef ::std::vector< ::omero::model::DichroicPtr> InstrumentDichroicSeq;
void __writeInstrumentDichroicSeq(::IceInternal::BasicStream*, const ::omero::model::DichroicPtr*, const ::omero::model::DichroicPtr*);
void __readInstrumentDichroicSeq(::IceInternal::BasicStream*, InstrumentDichroicSeq&);

typedef ::std::vector< ::omero::model::FilterSetPtr> InstrumentFilterSetSeq;
void __writeInstrumentFilterSetSeq(::IceInternal::BasicStream*, const ::omero::model::FilterSetPtr*, const ::omero::model::FilterSetPtr*);
void __readInstrumentFilterSetSeq(::IceInternal::BasicStream*, InstrumentFilterSetSeq&);

typedef ::std::vector< ::omero::model::OTFPtr> InstrumentOtfSeq;
void __writeInstrumentOtfSeq(::IceInternal::BasicStream*, const ::omero::model::OTFPtr*, const ::omero::model::OTFPtr*);
void __readInstrumentOtfSeq(::IceInternal::BasicStream*, InstrumentOtfSeq&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Instrument : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::model::MicroscopePtr getMicroscope()
    {
        return getMicroscope(0);
    }
    ::omero::model::MicroscopePtr getMicroscope(const ::Ice::Context& __ctx)
    {
        return getMicroscope(&__ctx);
    }
    
private:

    ::omero::model::MicroscopePtr getMicroscope(const ::Ice::Context*);
    
public:

    void setMicroscope(const ::omero::model::MicroscopePtr& theMicroscope)
    {
        setMicroscope(theMicroscope, 0);
    }
    void setMicroscope(const ::omero::model::MicroscopePtr& theMicroscope, const ::Ice::Context& __ctx)
    {
        setMicroscope(theMicroscope, &__ctx);
    }
    
private:

    void setMicroscope(const ::omero::model::MicroscopePtr&, const ::Ice::Context*);
    
public:

    void unloadDetector()
    {
        unloadDetector(0);
    }
    void unloadDetector(const ::Ice::Context& __ctx)
    {
        unloadDetector(&__ctx);
    }
    
private:

    void unloadDetector(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfDetector()
    {
        return sizeOfDetector(0);
    }
    ::Ice::Int sizeOfDetector(const ::Ice::Context& __ctx)
    {
        return sizeOfDetector(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfDetector(const ::Ice::Context*);
    
public:

    ::omero::model::InstrumentDetectorSeq copyDetector()
    {
        return copyDetector(0);
    }
    ::omero::model::InstrumentDetectorSeq copyDetector(const ::Ice::Context& __ctx)
    {
        return copyDetector(&__ctx);
    }
    
private:

    ::omero::model::InstrumentDetectorSeq copyDetector(const ::Ice::Context*);
    
public:

    void addDetector(const ::omero::model::DetectorPtr& target)
    {
        addDetector(target, 0);
    }
    void addDetector(const ::omero::model::DetectorPtr& target, const ::Ice::Context& __ctx)
    {
        addDetector(target, &__ctx);
    }
    
private:

    void addDetector(const ::omero::model::DetectorPtr&, const ::Ice::Context*);
    
public:

    void addAllDetectorSet(const ::omero::model::InstrumentDetectorSeq& targets)
    {
        addAllDetectorSet(targets, 0);
    }
    void addAllDetectorSet(const ::omero::model::InstrumentDetectorSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllDetectorSet(targets, &__ctx);
    }
    
private:

    void addAllDetectorSet(const ::omero::model::InstrumentDetectorSeq&, const ::Ice::Context*);
    
public:

    void removeDetector(const ::omero::model::DetectorPtr& theTarget)
    {
        removeDetector(theTarget, 0);
    }
    void removeDetector(const ::omero::model::DetectorPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeDetector(theTarget, &__ctx);
    }
    
private:

    void removeDetector(const ::omero::model::DetectorPtr&, const ::Ice::Context*);
    
public:

    void removeAllDetectorSet(const ::omero::model::InstrumentDetectorSeq& targets)
    {
        removeAllDetectorSet(targets, 0);
    }
    void removeAllDetectorSet(const ::omero::model::InstrumentDetectorSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllDetectorSet(targets, &__ctx);
    }
    
private:

    void removeAllDetectorSet(const ::omero::model::InstrumentDetectorSeq&, const ::Ice::Context*);
    
public:

    void clearDetector()
    {
        clearDetector(0);
    }
    void clearDetector(const ::Ice::Context& __ctx)
    {
        clearDetector(&__ctx);
    }
    
private:

    void clearDetector(const ::Ice::Context*);
    
public:

    void reloadDetector(const ::omero::model::InstrumentPtr& toCopy)
    {
        reloadDetector(toCopy, 0);
    }
    void reloadDetector(const ::omero::model::InstrumentPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadDetector(toCopy, &__ctx);
    }
    
private:

    void reloadDetector(const ::omero::model::InstrumentPtr&, const ::Ice::Context*);
    
public:

    void unloadObjective()
    {
        unloadObjective(0);
    }
    void unloadObjective(const ::Ice::Context& __ctx)
    {
        unloadObjective(&__ctx);
    }
    
private:

    void unloadObjective(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfObjective()
    {
        return sizeOfObjective(0);
    }
    ::Ice::Int sizeOfObjective(const ::Ice::Context& __ctx)
    {
        return sizeOfObjective(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfObjective(const ::Ice::Context*);
    
public:

    ::omero::model::InstrumentObjectiveSeq copyObjective()
    {
        return copyObjective(0);
    }
    ::omero::model::InstrumentObjectiveSeq copyObjective(const ::Ice::Context& __ctx)
    {
        return copyObjective(&__ctx);
    }
    
private:

    ::omero::model::InstrumentObjectiveSeq copyObjective(const ::Ice::Context*);
    
public:

    void addObjective(const ::omero::model::ObjectivePtr& target)
    {
        addObjective(target, 0);
    }
    void addObjective(const ::omero::model::ObjectivePtr& target, const ::Ice::Context& __ctx)
    {
        addObjective(target, &__ctx);
    }
    
private:

    void addObjective(const ::omero::model::ObjectivePtr&, const ::Ice::Context*);
    
public:

    void addAllObjectiveSet(const ::omero::model::InstrumentObjectiveSeq& targets)
    {
        addAllObjectiveSet(targets, 0);
    }
    void addAllObjectiveSet(const ::omero::model::InstrumentObjectiveSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllObjectiveSet(targets, &__ctx);
    }
    
private:

    void addAllObjectiveSet(const ::omero::model::InstrumentObjectiveSeq&, const ::Ice::Context*);
    
public:

    void removeObjective(const ::omero::model::ObjectivePtr& theTarget)
    {
        removeObjective(theTarget, 0);
    }
    void removeObjective(const ::omero::model::ObjectivePtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeObjective(theTarget, &__ctx);
    }
    
private:

    void removeObjective(const ::omero::model::ObjectivePtr&, const ::Ice::Context*);
    
public:

    void removeAllObjectiveSet(const ::omero::model::InstrumentObjectiveSeq& targets)
    {
        removeAllObjectiveSet(targets, 0);
    }
    void removeAllObjectiveSet(const ::omero::model::InstrumentObjectiveSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllObjectiveSet(targets, &__ctx);
    }
    
private:

    void removeAllObjectiveSet(const ::omero::model::InstrumentObjectiveSeq&, const ::Ice::Context*);
    
public:

    void clearObjective()
    {
        clearObjective(0);
    }
    void clearObjective(const ::Ice::Context& __ctx)
    {
        clearObjective(&__ctx);
    }
    
private:

    void clearObjective(const ::Ice::Context*);
    
public:

    void reloadObjective(const ::omero::model::InstrumentPtr& toCopy)
    {
        reloadObjective(toCopy, 0);
    }
    void reloadObjective(const ::omero::model::InstrumentPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadObjective(toCopy, &__ctx);
    }
    
private:

    void reloadObjective(const ::omero::model::InstrumentPtr&, const ::Ice::Context*);
    
public:

    void unloadLightSource()
    {
        unloadLightSource(0);
    }
    void unloadLightSource(const ::Ice::Context& __ctx)
    {
        unloadLightSource(&__ctx);
    }
    
private:

    void unloadLightSource(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfLightSource()
    {
        return sizeOfLightSource(0);
    }
    ::Ice::Int sizeOfLightSource(const ::Ice::Context& __ctx)
    {
        return sizeOfLightSource(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfLightSource(const ::Ice::Context*);
    
public:

    ::omero::model::InstrumentLightSourceSeq copyLightSource()
    {
        return copyLightSource(0);
    }
    ::omero::model::InstrumentLightSourceSeq copyLightSource(const ::Ice::Context& __ctx)
    {
        return copyLightSource(&__ctx);
    }
    
private:

    ::omero::model::InstrumentLightSourceSeq copyLightSource(const ::Ice::Context*);
    
public:

    void addLightSource(const ::omero::model::LightSourcePtr& target)
    {
        addLightSource(target, 0);
    }
    void addLightSource(const ::omero::model::LightSourcePtr& target, const ::Ice::Context& __ctx)
    {
        addLightSource(target, &__ctx);
    }
    
private:

    void addLightSource(const ::omero::model::LightSourcePtr&, const ::Ice::Context*);
    
public:

    void addAllLightSourceSet(const ::omero::model::InstrumentLightSourceSeq& targets)
    {
        addAllLightSourceSet(targets, 0);
    }
    void addAllLightSourceSet(const ::omero::model::InstrumentLightSourceSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllLightSourceSet(targets, &__ctx);
    }
    
private:

    void addAllLightSourceSet(const ::omero::model::InstrumentLightSourceSeq&, const ::Ice::Context*);
    
public:

    void removeLightSource(const ::omero::model::LightSourcePtr& theTarget)
    {
        removeLightSource(theTarget, 0);
    }
    void removeLightSource(const ::omero::model::LightSourcePtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeLightSource(theTarget, &__ctx);
    }
    
private:

    void removeLightSource(const ::omero::model::LightSourcePtr&, const ::Ice::Context*);
    
public:

    void removeAllLightSourceSet(const ::omero::model::InstrumentLightSourceSeq& targets)
    {
        removeAllLightSourceSet(targets, 0);
    }
    void removeAllLightSourceSet(const ::omero::model::InstrumentLightSourceSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllLightSourceSet(targets, &__ctx);
    }
    
private:

    void removeAllLightSourceSet(const ::omero::model::InstrumentLightSourceSeq&, const ::Ice::Context*);
    
public:

    void clearLightSource()
    {
        clearLightSource(0);
    }
    void clearLightSource(const ::Ice::Context& __ctx)
    {
        clearLightSource(&__ctx);
    }
    
private:

    void clearLightSource(const ::Ice::Context*);
    
public:

    void reloadLightSource(const ::omero::model::InstrumentPtr& toCopy)
    {
        reloadLightSource(toCopy, 0);
    }
    void reloadLightSource(const ::omero::model::InstrumentPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadLightSource(toCopy, &__ctx);
    }
    
private:

    void reloadLightSource(const ::omero::model::InstrumentPtr&, const ::Ice::Context*);
    
public:

    void unloadFilter()
    {
        unloadFilter(0);
    }
    void unloadFilter(const ::Ice::Context& __ctx)
    {
        unloadFilter(&__ctx);
    }
    
private:

    void unloadFilter(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfFilter()
    {
        return sizeOfFilter(0);
    }
    ::Ice::Int sizeOfFilter(const ::Ice::Context& __ctx)
    {
        return sizeOfFilter(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfFilter(const ::Ice::Context*);
    
public:

    ::omero::model::InstrumentFilterSeq copyFilter()
    {
        return copyFilter(0);
    }
    ::omero::model::InstrumentFilterSeq copyFilter(const ::Ice::Context& __ctx)
    {
        return copyFilter(&__ctx);
    }
    
private:

    ::omero::model::InstrumentFilterSeq copyFilter(const ::Ice::Context*);
    
public:

    void addFilter(const ::omero::model::FilterPtr& target)
    {
        addFilter(target, 0);
    }
    void addFilter(const ::omero::model::FilterPtr& target, const ::Ice::Context& __ctx)
    {
        addFilter(target, &__ctx);
    }
    
private:

    void addFilter(const ::omero::model::FilterPtr&, const ::Ice::Context*);
    
public:

    void addAllFilterSet(const ::omero::model::InstrumentFilterSeq& targets)
    {
        addAllFilterSet(targets, 0);
    }
    void addAllFilterSet(const ::omero::model::InstrumentFilterSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllFilterSet(targets, &__ctx);
    }
    
private:

    void addAllFilterSet(const ::omero::model::InstrumentFilterSeq&, const ::Ice::Context*);
    
public:

    void removeFilter(const ::omero::model::FilterPtr& theTarget)
    {
        removeFilter(theTarget, 0);
    }
    void removeFilter(const ::omero::model::FilterPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeFilter(theTarget, &__ctx);
    }
    
private:

    void removeFilter(const ::omero::model::FilterPtr&, const ::Ice::Context*);
    
public:

    void removeAllFilterSet(const ::omero::model::InstrumentFilterSeq& targets)
    {
        removeAllFilterSet(targets, 0);
    }
    void removeAllFilterSet(const ::omero::model::InstrumentFilterSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllFilterSet(targets, &__ctx);
    }
    
private:

    void removeAllFilterSet(const ::omero::model::InstrumentFilterSeq&, const ::Ice::Context*);
    
public:

    void clearFilter()
    {
        clearFilter(0);
    }
    void clearFilter(const ::Ice::Context& __ctx)
    {
        clearFilter(&__ctx);
    }
    
private:

    void clearFilter(const ::Ice::Context*);
    
public:

    void reloadFilter(const ::omero::model::InstrumentPtr& toCopy)
    {
        reloadFilter(toCopy, 0);
    }
    void reloadFilter(const ::omero::model::InstrumentPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadFilter(toCopy, &__ctx);
    }
    
private:

    void reloadFilter(const ::omero::model::InstrumentPtr&, const ::Ice::Context*);
    
public:

    void unloadDichroic()
    {
        unloadDichroic(0);
    }
    void unloadDichroic(const ::Ice::Context& __ctx)
    {
        unloadDichroic(&__ctx);
    }
    
private:

    void unloadDichroic(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfDichroic()
    {
        return sizeOfDichroic(0);
    }
    ::Ice::Int sizeOfDichroic(const ::Ice::Context& __ctx)
    {
        return sizeOfDichroic(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfDichroic(const ::Ice::Context*);
    
public:

    ::omero::model::InstrumentDichroicSeq copyDichroic()
    {
        return copyDichroic(0);
    }
    ::omero::model::InstrumentDichroicSeq copyDichroic(const ::Ice::Context& __ctx)
    {
        return copyDichroic(&__ctx);
    }
    
private:

    ::omero::model::InstrumentDichroicSeq copyDichroic(const ::Ice::Context*);
    
public:

    void addDichroic(const ::omero::model::DichroicPtr& target)
    {
        addDichroic(target, 0);
    }
    void addDichroic(const ::omero::model::DichroicPtr& target, const ::Ice::Context& __ctx)
    {
        addDichroic(target, &__ctx);
    }
    
private:

    void addDichroic(const ::omero::model::DichroicPtr&, const ::Ice::Context*);
    
public:

    void addAllDichroicSet(const ::omero::model::InstrumentDichroicSeq& targets)
    {
        addAllDichroicSet(targets, 0);
    }
    void addAllDichroicSet(const ::omero::model::InstrumentDichroicSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllDichroicSet(targets, &__ctx);
    }
    
private:

    void addAllDichroicSet(const ::omero::model::InstrumentDichroicSeq&, const ::Ice::Context*);
    
public:

    void removeDichroic(const ::omero::model::DichroicPtr& theTarget)
    {
        removeDichroic(theTarget, 0);
    }
    void removeDichroic(const ::omero::model::DichroicPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeDichroic(theTarget, &__ctx);
    }
    
private:

    void removeDichroic(const ::omero::model::DichroicPtr&, const ::Ice::Context*);
    
public:

    void removeAllDichroicSet(const ::omero::model::InstrumentDichroicSeq& targets)
    {
        removeAllDichroicSet(targets, 0);
    }
    void removeAllDichroicSet(const ::omero::model::InstrumentDichroicSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllDichroicSet(targets, &__ctx);
    }
    
private:

    void removeAllDichroicSet(const ::omero::model::InstrumentDichroicSeq&, const ::Ice::Context*);
    
public:

    void clearDichroic()
    {
        clearDichroic(0);
    }
    void clearDichroic(const ::Ice::Context& __ctx)
    {
        clearDichroic(&__ctx);
    }
    
private:

    void clearDichroic(const ::Ice::Context*);
    
public:

    void reloadDichroic(const ::omero::model::InstrumentPtr& toCopy)
    {
        reloadDichroic(toCopy, 0);
    }
    void reloadDichroic(const ::omero::model::InstrumentPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadDichroic(toCopy, &__ctx);
    }
    
private:

    void reloadDichroic(const ::omero::model::InstrumentPtr&, const ::Ice::Context*);
    
public:

    void unloadFilterSet()
    {
        unloadFilterSet(0);
    }
    void unloadFilterSet(const ::Ice::Context& __ctx)
    {
        unloadFilterSet(&__ctx);
    }
    
private:

    void unloadFilterSet(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfFilterSet()
    {
        return sizeOfFilterSet(0);
    }
    ::Ice::Int sizeOfFilterSet(const ::Ice::Context& __ctx)
    {
        return sizeOfFilterSet(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfFilterSet(const ::Ice::Context*);
    
public:

    ::omero::model::InstrumentFilterSetSeq copyFilterSet()
    {
        return copyFilterSet(0);
    }
    ::omero::model::InstrumentFilterSetSeq copyFilterSet(const ::Ice::Context& __ctx)
    {
        return copyFilterSet(&__ctx);
    }
    
private:

    ::omero::model::InstrumentFilterSetSeq copyFilterSet(const ::Ice::Context*);
    
public:

    void addFilterSet(const ::omero::model::FilterSetPtr& target)
    {
        addFilterSet(target, 0);
    }
    void addFilterSet(const ::omero::model::FilterSetPtr& target, const ::Ice::Context& __ctx)
    {
        addFilterSet(target, &__ctx);
    }
    
private:

    void addFilterSet(const ::omero::model::FilterSetPtr&, const ::Ice::Context*);
    
public:

    void addAllFilterSetSet(const ::omero::model::InstrumentFilterSetSeq& targets)
    {
        addAllFilterSetSet(targets, 0);
    }
    void addAllFilterSetSet(const ::omero::model::InstrumentFilterSetSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllFilterSetSet(targets, &__ctx);
    }
    
private:

    void addAllFilterSetSet(const ::omero::model::InstrumentFilterSetSeq&, const ::Ice::Context*);
    
public:

    void removeFilterSet(const ::omero::model::FilterSetPtr& theTarget)
    {
        removeFilterSet(theTarget, 0);
    }
    void removeFilterSet(const ::omero::model::FilterSetPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeFilterSet(theTarget, &__ctx);
    }
    
private:

    void removeFilterSet(const ::omero::model::FilterSetPtr&, const ::Ice::Context*);
    
public:

    void removeAllFilterSetSet(const ::omero::model::InstrumentFilterSetSeq& targets)
    {
        removeAllFilterSetSet(targets, 0);
    }
    void removeAllFilterSetSet(const ::omero::model::InstrumentFilterSetSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllFilterSetSet(targets, &__ctx);
    }
    
private:

    void removeAllFilterSetSet(const ::omero::model::InstrumentFilterSetSeq&, const ::Ice::Context*);
    
public:

    void clearFilterSet()
    {
        clearFilterSet(0);
    }
    void clearFilterSet(const ::Ice::Context& __ctx)
    {
        clearFilterSet(&__ctx);
    }
    
private:

    void clearFilterSet(const ::Ice::Context*);
    
public:

    void reloadFilterSet(const ::omero::model::InstrumentPtr& toCopy)
    {
        reloadFilterSet(toCopy, 0);
    }
    void reloadFilterSet(const ::omero::model::InstrumentPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadFilterSet(toCopy, &__ctx);
    }
    
private:

    void reloadFilterSet(const ::omero::model::InstrumentPtr&, const ::Ice::Context*);
    
public:

    void unloadOtf()
    {
        unloadOtf(0);
    }
    void unloadOtf(const ::Ice::Context& __ctx)
    {
        unloadOtf(&__ctx);
    }
    
private:

    void unloadOtf(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfOtf()
    {
        return sizeOfOtf(0);
    }
    ::Ice::Int sizeOfOtf(const ::Ice::Context& __ctx)
    {
        return sizeOfOtf(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfOtf(const ::Ice::Context*);
    
public:

    ::omero::model::InstrumentOtfSeq copyOtf()
    {
        return copyOtf(0);
    }
    ::omero::model::InstrumentOtfSeq copyOtf(const ::Ice::Context& __ctx)
    {
        return copyOtf(&__ctx);
    }
    
private:

    ::omero::model::InstrumentOtfSeq copyOtf(const ::Ice::Context*);
    
public:

    void addOTF(const ::omero::model::OTFPtr& target)
    {
        addOTF(target, 0);
    }
    void addOTF(const ::omero::model::OTFPtr& target, const ::Ice::Context& __ctx)
    {
        addOTF(target, &__ctx);
    }
    
private:

    void addOTF(const ::omero::model::OTFPtr&, const ::Ice::Context*);
    
public:

    void addAllOTFSet(const ::omero::model::InstrumentOtfSeq& targets)
    {
        addAllOTFSet(targets, 0);
    }
    void addAllOTFSet(const ::omero::model::InstrumentOtfSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllOTFSet(targets, &__ctx);
    }
    
private:

    void addAllOTFSet(const ::omero::model::InstrumentOtfSeq&, const ::Ice::Context*);
    
public:

    void removeOTF(const ::omero::model::OTFPtr& theTarget)
    {
        removeOTF(theTarget, 0);
    }
    void removeOTF(const ::omero::model::OTFPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeOTF(theTarget, &__ctx);
    }
    
private:

    void removeOTF(const ::omero::model::OTFPtr&, const ::Ice::Context*);
    
public:

    void removeAllOTFSet(const ::omero::model::InstrumentOtfSeq& targets)
    {
        removeAllOTFSet(targets, 0);
    }
    void removeAllOTFSet(const ::omero::model::InstrumentOtfSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllOTFSet(targets, &__ctx);
    }
    
private:

    void removeAllOTFSet(const ::omero::model::InstrumentOtfSeq&, const ::Ice::Context*);
    
public:

    void clearOtf()
    {
        clearOtf(0);
    }
    void clearOtf(const ::Ice::Context& __ctx)
    {
        clearOtf(&__ctx);
    }
    
private:

    void clearOtf(const ::Ice::Context*);
    
public:

    void reloadOtf(const ::omero::model::InstrumentPtr& toCopy)
    {
        reloadOtf(toCopy, 0);
    }
    void reloadOtf(const ::omero::model::InstrumentPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadOtf(toCopy, &__ctx);
    }
    
private:

    void reloadOtf(const ::omero::model::InstrumentPtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Instrument> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Instrument*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Instrument*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Instrument> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Instrument*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Instrument*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Instrument> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Instrument*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Instrument*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Instrument> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Instrument*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Instrument*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Instrument> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Instrument*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Instrument*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Instrument> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Instrument*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Instrument*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Instrument> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Instrument*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Instrument*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Instrument> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Instrument*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Instrument*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Instrument> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Instrument*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Instrument*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Instrument> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Instrument*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Instrument*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Instrument> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Instrument*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Instrument*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Instrument> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Instrument*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Instrument*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Instrument> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Instrument*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Instrument*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Instrument> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Instrument*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Instrument*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Instrument> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Instrument*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Instrument*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Instrument> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Instrument*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Instrument*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Instrument> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Instrument*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Instrument*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Instrument> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Instrument*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Instrument*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Instrument> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Instrument*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Instrument*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Instrument : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::MicroscopePtr getMicroscope(const ::Ice::Context*) = 0;

    virtual void setMicroscope(const ::omero::model::MicroscopePtr&, const ::Ice::Context*) = 0;

    virtual void unloadDetector(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfDetector(const ::Ice::Context*) = 0;

    virtual ::omero::model::InstrumentDetectorSeq copyDetector(const ::Ice::Context*) = 0;

    virtual void addDetector(const ::omero::model::DetectorPtr&, const ::Ice::Context*) = 0;

    virtual void addAllDetectorSet(const ::omero::model::InstrumentDetectorSeq&, const ::Ice::Context*) = 0;

    virtual void removeDetector(const ::omero::model::DetectorPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllDetectorSet(const ::omero::model::InstrumentDetectorSeq&, const ::Ice::Context*) = 0;

    virtual void clearDetector(const ::Ice::Context*) = 0;

    virtual void reloadDetector(const ::omero::model::InstrumentPtr&, const ::Ice::Context*) = 0;

    virtual void unloadObjective(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfObjective(const ::Ice::Context*) = 0;

    virtual ::omero::model::InstrumentObjectiveSeq copyObjective(const ::Ice::Context*) = 0;

    virtual void addObjective(const ::omero::model::ObjectivePtr&, const ::Ice::Context*) = 0;

    virtual void addAllObjectiveSet(const ::omero::model::InstrumentObjectiveSeq&, const ::Ice::Context*) = 0;

    virtual void removeObjective(const ::omero::model::ObjectivePtr&, const ::Ice::Context*) = 0;

    virtual void removeAllObjectiveSet(const ::omero::model::InstrumentObjectiveSeq&, const ::Ice::Context*) = 0;

    virtual void clearObjective(const ::Ice::Context*) = 0;

    virtual void reloadObjective(const ::omero::model::InstrumentPtr&, const ::Ice::Context*) = 0;

    virtual void unloadLightSource(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfLightSource(const ::Ice::Context*) = 0;

    virtual ::omero::model::InstrumentLightSourceSeq copyLightSource(const ::Ice::Context*) = 0;

    virtual void addLightSource(const ::omero::model::LightSourcePtr&, const ::Ice::Context*) = 0;

    virtual void addAllLightSourceSet(const ::omero::model::InstrumentLightSourceSeq&, const ::Ice::Context*) = 0;

    virtual void removeLightSource(const ::omero::model::LightSourcePtr&, const ::Ice::Context*) = 0;

    virtual void removeAllLightSourceSet(const ::omero::model::InstrumentLightSourceSeq&, const ::Ice::Context*) = 0;

    virtual void clearLightSource(const ::Ice::Context*) = 0;

    virtual void reloadLightSource(const ::omero::model::InstrumentPtr&, const ::Ice::Context*) = 0;

    virtual void unloadFilter(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfFilter(const ::Ice::Context*) = 0;

    virtual ::omero::model::InstrumentFilterSeq copyFilter(const ::Ice::Context*) = 0;

    virtual void addFilter(const ::omero::model::FilterPtr&, const ::Ice::Context*) = 0;

    virtual void addAllFilterSet(const ::omero::model::InstrumentFilterSeq&, const ::Ice::Context*) = 0;

    virtual void removeFilter(const ::omero::model::FilterPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllFilterSet(const ::omero::model::InstrumentFilterSeq&, const ::Ice::Context*) = 0;

    virtual void clearFilter(const ::Ice::Context*) = 0;

    virtual void reloadFilter(const ::omero::model::InstrumentPtr&, const ::Ice::Context*) = 0;

    virtual void unloadDichroic(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfDichroic(const ::Ice::Context*) = 0;

    virtual ::omero::model::InstrumentDichroicSeq copyDichroic(const ::Ice::Context*) = 0;

    virtual void addDichroic(const ::omero::model::DichroicPtr&, const ::Ice::Context*) = 0;

    virtual void addAllDichroicSet(const ::omero::model::InstrumentDichroicSeq&, const ::Ice::Context*) = 0;

    virtual void removeDichroic(const ::omero::model::DichroicPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllDichroicSet(const ::omero::model::InstrumentDichroicSeq&, const ::Ice::Context*) = 0;

    virtual void clearDichroic(const ::Ice::Context*) = 0;

    virtual void reloadDichroic(const ::omero::model::InstrumentPtr&, const ::Ice::Context*) = 0;

    virtual void unloadFilterSet(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfFilterSet(const ::Ice::Context*) = 0;

    virtual ::omero::model::InstrumentFilterSetSeq copyFilterSet(const ::Ice::Context*) = 0;

    virtual void addFilterSet(const ::omero::model::FilterSetPtr&, const ::Ice::Context*) = 0;

    virtual void addAllFilterSetSet(const ::omero::model::InstrumentFilterSetSeq&, const ::Ice::Context*) = 0;

    virtual void removeFilterSet(const ::omero::model::FilterSetPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllFilterSetSet(const ::omero::model::InstrumentFilterSetSeq&, const ::Ice::Context*) = 0;

    virtual void clearFilterSet(const ::Ice::Context*) = 0;

    virtual void reloadFilterSet(const ::omero::model::InstrumentPtr&, const ::Ice::Context*) = 0;

    virtual void unloadOtf(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfOtf(const ::Ice::Context*) = 0;

    virtual ::omero::model::InstrumentOtfSeq copyOtf(const ::Ice::Context*) = 0;

    virtual void addOTF(const ::omero::model::OTFPtr&, const ::Ice::Context*) = 0;

    virtual void addAllOTFSet(const ::omero::model::InstrumentOtfSeq&, const ::Ice::Context*) = 0;

    virtual void removeOTF(const ::omero::model::OTFPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllOTFSet(const ::omero::model::InstrumentOtfSeq&, const ::Ice::Context*) = 0;

    virtual void clearOtf(const ::Ice::Context*) = 0;

    virtual void reloadOtf(const ::omero::model::InstrumentPtr&, const ::Ice::Context*) = 0;
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

class Instrument : virtual public ::IceDelegate::omero::model::Instrument,
                   virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::MicroscopePtr getMicroscope(const ::Ice::Context*);

    virtual void setMicroscope(const ::omero::model::MicroscopePtr&, const ::Ice::Context*);

    virtual void unloadDetector(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfDetector(const ::Ice::Context*);

    virtual ::omero::model::InstrumentDetectorSeq copyDetector(const ::Ice::Context*);

    virtual void addDetector(const ::omero::model::DetectorPtr&, const ::Ice::Context*);

    virtual void addAllDetectorSet(const ::omero::model::InstrumentDetectorSeq&, const ::Ice::Context*);

    virtual void removeDetector(const ::omero::model::DetectorPtr&, const ::Ice::Context*);

    virtual void removeAllDetectorSet(const ::omero::model::InstrumentDetectorSeq&, const ::Ice::Context*);

    virtual void clearDetector(const ::Ice::Context*);

    virtual void reloadDetector(const ::omero::model::InstrumentPtr&, const ::Ice::Context*);

    virtual void unloadObjective(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfObjective(const ::Ice::Context*);

    virtual ::omero::model::InstrumentObjectiveSeq copyObjective(const ::Ice::Context*);

    virtual void addObjective(const ::omero::model::ObjectivePtr&, const ::Ice::Context*);

    virtual void addAllObjectiveSet(const ::omero::model::InstrumentObjectiveSeq&, const ::Ice::Context*);

    virtual void removeObjective(const ::omero::model::ObjectivePtr&, const ::Ice::Context*);

    virtual void removeAllObjectiveSet(const ::omero::model::InstrumentObjectiveSeq&, const ::Ice::Context*);

    virtual void clearObjective(const ::Ice::Context*);

    virtual void reloadObjective(const ::omero::model::InstrumentPtr&, const ::Ice::Context*);

    virtual void unloadLightSource(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfLightSource(const ::Ice::Context*);

    virtual ::omero::model::InstrumentLightSourceSeq copyLightSource(const ::Ice::Context*);

    virtual void addLightSource(const ::omero::model::LightSourcePtr&, const ::Ice::Context*);

    virtual void addAllLightSourceSet(const ::omero::model::InstrumentLightSourceSeq&, const ::Ice::Context*);

    virtual void removeLightSource(const ::omero::model::LightSourcePtr&, const ::Ice::Context*);

    virtual void removeAllLightSourceSet(const ::omero::model::InstrumentLightSourceSeq&, const ::Ice::Context*);

    virtual void clearLightSource(const ::Ice::Context*);

    virtual void reloadLightSource(const ::omero::model::InstrumentPtr&, const ::Ice::Context*);

    virtual void unloadFilter(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfFilter(const ::Ice::Context*);

    virtual ::omero::model::InstrumentFilterSeq copyFilter(const ::Ice::Context*);

    virtual void addFilter(const ::omero::model::FilterPtr&, const ::Ice::Context*);

    virtual void addAllFilterSet(const ::omero::model::InstrumentFilterSeq&, const ::Ice::Context*);

    virtual void removeFilter(const ::omero::model::FilterPtr&, const ::Ice::Context*);

    virtual void removeAllFilterSet(const ::omero::model::InstrumentFilterSeq&, const ::Ice::Context*);

    virtual void clearFilter(const ::Ice::Context*);

    virtual void reloadFilter(const ::omero::model::InstrumentPtr&, const ::Ice::Context*);

    virtual void unloadDichroic(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfDichroic(const ::Ice::Context*);

    virtual ::omero::model::InstrumentDichroicSeq copyDichroic(const ::Ice::Context*);

    virtual void addDichroic(const ::omero::model::DichroicPtr&, const ::Ice::Context*);

    virtual void addAllDichroicSet(const ::omero::model::InstrumentDichroicSeq&, const ::Ice::Context*);

    virtual void removeDichroic(const ::omero::model::DichroicPtr&, const ::Ice::Context*);

    virtual void removeAllDichroicSet(const ::omero::model::InstrumentDichroicSeq&, const ::Ice::Context*);

    virtual void clearDichroic(const ::Ice::Context*);

    virtual void reloadDichroic(const ::omero::model::InstrumentPtr&, const ::Ice::Context*);

    virtual void unloadFilterSet(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfFilterSet(const ::Ice::Context*);

    virtual ::omero::model::InstrumentFilterSetSeq copyFilterSet(const ::Ice::Context*);

    virtual void addFilterSet(const ::omero::model::FilterSetPtr&, const ::Ice::Context*);

    virtual void addAllFilterSetSet(const ::omero::model::InstrumentFilterSetSeq&, const ::Ice::Context*);

    virtual void removeFilterSet(const ::omero::model::FilterSetPtr&, const ::Ice::Context*);

    virtual void removeAllFilterSetSet(const ::omero::model::InstrumentFilterSetSeq&, const ::Ice::Context*);

    virtual void clearFilterSet(const ::Ice::Context*);

    virtual void reloadFilterSet(const ::omero::model::InstrumentPtr&, const ::Ice::Context*);

    virtual void unloadOtf(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfOtf(const ::Ice::Context*);

    virtual ::omero::model::InstrumentOtfSeq copyOtf(const ::Ice::Context*);

    virtual void addOTF(const ::omero::model::OTFPtr&, const ::Ice::Context*);

    virtual void addAllOTFSet(const ::omero::model::InstrumentOtfSeq&, const ::Ice::Context*);

    virtual void removeOTF(const ::omero::model::OTFPtr&, const ::Ice::Context*);

    virtual void removeAllOTFSet(const ::omero::model::InstrumentOtfSeq&, const ::Ice::Context*);

    virtual void clearOtf(const ::Ice::Context*);

    virtual void reloadOtf(const ::omero::model::InstrumentPtr&, const ::Ice::Context*);
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

class Instrument : virtual public ::IceDelegate::omero::model::Instrument,
                   virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::model::MicroscopePtr getMicroscope(const ::Ice::Context*);

    virtual void setMicroscope(const ::omero::model::MicroscopePtr&, const ::Ice::Context*);

    virtual void unloadDetector(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfDetector(const ::Ice::Context*);

    virtual ::omero::model::InstrumentDetectorSeq copyDetector(const ::Ice::Context*);

    virtual void addDetector(const ::omero::model::DetectorPtr&, const ::Ice::Context*);

    virtual void addAllDetectorSet(const ::omero::model::InstrumentDetectorSeq&, const ::Ice::Context*);

    virtual void removeDetector(const ::omero::model::DetectorPtr&, const ::Ice::Context*);

    virtual void removeAllDetectorSet(const ::omero::model::InstrumentDetectorSeq&, const ::Ice::Context*);

    virtual void clearDetector(const ::Ice::Context*);

    virtual void reloadDetector(const ::omero::model::InstrumentPtr&, const ::Ice::Context*);

    virtual void unloadObjective(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfObjective(const ::Ice::Context*);

    virtual ::omero::model::InstrumentObjectiveSeq copyObjective(const ::Ice::Context*);

    virtual void addObjective(const ::omero::model::ObjectivePtr&, const ::Ice::Context*);

    virtual void addAllObjectiveSet(const ::omero::model::InstrumentObjectiveSeq&, const ::Ice::Context*);

    virtual void removeObjective(const ::omero::model::ObjectivePtr&, const ::Ice::Context*);

    virtual void removeAllObjectiveSet(const ::omero::model::InstrumentObjectiveSeq&, const ::Ice::Context*);

    virtual void clearObjective(const ::Ice::Context*);

    virtual void reloadObjective(const ::omero::model::InstrumentPtr&, const ::Ice::Context*);

    virtual void unloadLightSource(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfLightSource(const ::Ice::Context*);

    virtual ::omero::model::InstrumentLightSourceSeq copyLightSource(const ::Ice::Context*);

    virtual void addLightSource(const ::omero::model::LightSourcePtr&, const ::Ice::Context*);

    virtual void addAllLightSourceSet(const ::omero::model::InstrumentLightSourceSeq&, const ::Ice::Context*);

    virtual void removeLightSource(const ::omero::model::LightSourcePtr&, const ::Ice::Context*);

    virtual void removeAllLightSourceSet(const ::omero::model::InstrumentLightSourceSeq&, const ::Ice::Context*);

    virtual void clearLightSource(const ::Ice::Context*);

    virtual void reloadLightSource(const ::omero::model::InstrumentPtr&, const ::Ice::Context*);

    virtual void unloadFilter(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfFilter(const ::Ice::Context*);

    virtual ::omero::model::InstrumentFilterSeq copyFilter(const ::Ice::Context*);

    virtual void addFilter(const ::omero::model::FilterPtr&, const ::Ice::Context*);

    virtual void addAllFilterSet(const ::omero::model::InstrumentFilterSeq&, const ::Ice::Context*);

    virtual void removeFilter(const ::omero::model::FilterPtr&, const ::Ice::Context*);

    virtual void removeAllFilterSet(const ::omero::model::InstrumentFilterSeq&, const ::Ice::Context*);

    virtual void clearFilter(const ::Ice::Context*);

    virtual void reloadFilter(const ::omero::model::InstrumentPtr&, const ::Ice::Context*);

    virtual void unloadDichroic(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfDichroic(const ::Ice::Context*);

    virtual ::omero::model::InstrumentDichroicSeq copyDichroic(const ::Ice::Context*);

    virtual void addDichroic(const ::omero::model::DichroicPtr&, const ::Ice::Context*);

    virtual void addAllDichroicSet(const ::omero::model::InstrumentDichroicSeq&, const ::Ice::Context*);

    virtual void removeDichroic(const ::omero::model::DichroicPtr&, const ::Ice::Context*);

    virtual void removeAllDichroicSet(const ::omero::model::InstrumentDichroicSeq&, const ::Ice::Context*);

    virtual void clearDichroic(const ::Ice::Context*);

    virtual void reloadDichroic(const ::omero::model::InstrumentPtr&, const ::Ice::Context*);

    virtual void unloadFilterSet(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfFilterSet(const ::Ice::Context*);

    virtual ::omero::model::InstrumentFilterSetSeq copyFilterSet(const ::Ice::Context*);

    virtual void addFilterSet(const ::omero::model::FilterSetPtr&, const ::Ice::Context*);

    virtual void addAllFilterSetSet(const ::omero::model::InstrumentFilterSetSeq&, const ::Ice::Context*);

    virtual void removeFilterSet(const ::omero::model::FilterSetPtr&, const ::Ice::Context*);

    virtual void removeAllFilterSetSet(const ::omero::model::InstrumentFilterSetSeq&, const ::Ice::Context*);

    virtual void clearFilterSet(const ::Ice::Context*);

    virtual void reloadFilterSet(const ::omero::model::InstrumentPtr&, const ::Ice::Context*);

    virtual void unloadOtf(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfOtf(const ::Ice::Context*);

    virtual ::omero::model::InstrumentOtfSeq copyOtf(const ::Ice::Context*);

    virtual void addOTF(const ::omero::model::OTFPtr&, const ::Ice::Context*);

    virtual void addAllOTFSet(const ::omero::model::InstrumentOtfSeq&, const ::Ice::Context*);

    virtual void removeOTF(const ::omero::model::OTFPtr&, const ::Ice::Context*);

    virtual void removeAllOTFSet(const ::omero::model::InstrumentOtfSeq&, const ::Ice::Context*);

    virtual void clearOtf(const ::Ice::Context*);

    virtual void reloadOtf(const ::omero::model::InstrumentPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class Instrument : virtual public ::omero::model::IObject
{
public:

    typedef InstrumentPrx ProxyType;
    typedef InstrumentPtr PointerType;
    
    Instrument() {}
    Instrument(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::model::MicroscopePtr&, const ::omero::model::InstrumentDetectorSeq&, bool, const ::omero::model::InstrumentObjectiveSeq&, bool, const ::omero::model::InstrumentLightSourceSeq&, bool, const ::omero::model::InstrumentFilterSeq&, bool, const ::omero::model::InstrumentDichroicSeq&, bool, const ::omero::model::InstrumentFilterSetSeq&, bool, const ::omero::model::InstrumentOtfSeq&, bool);
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

    virtual ::omero::model::MicroscopePtr getMicroscope(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMicroscope(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setMicroscope(const ::omero::model::MicroscopePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setMicroscope(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadDetector(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadDetector(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfDetector(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfDetector(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::InstrumentDetectorSeq copyDetector(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyDetector(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addDetector(const ::omero::model::DetectorPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addDetector(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllDetectorSet(const ::omero::model::InstrumentDetectorSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllDetectorSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeDetector(const ::omero::model::DetectorPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeDetector(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllDetectorSet(const ::omero::model::InstrumentDetectorSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllDetectorSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearDetector(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearDetector(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadDetector(const ::omero::model::InstrumentPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadDetector(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadObjective(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadObjective(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfObjective(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfObjective(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::InstrumentObjectiveSeq copyObjective(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyObjective(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addObjective(const ::omero::model::ObjectivePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addObjective(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllObjectiveSet(const ::omero::model::InstrumentObjectiveSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllObjectiveSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeObjective(const ::omero::model::ObjectivePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeObjective(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllObjectiveSet(const ::omero::model::InstrumentObjectiveSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllObjectiveSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearObjective(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearObjective(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadObjective(const ::omero::model::InstrumentPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadObjective(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadLightSource(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadLightSource(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfLightSource(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfLightSource(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::InstrumentLightSourceSeq copyLightSource(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyLightSource(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addLightSource(const ::omero::model::LightSourcePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addLightSource(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllLightSourceSet(const ::omero::model::InstrumentLightSourceSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllLightSourceSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeLightSource(const ::omero::model::LightSourcePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeLightSource(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllLightSourceSet(const ::omero::model::InstrumentLightSourceSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllLightSourceSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearLightSource(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearLightSource(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadLightSource(const ::omero::model::InstrumentPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadLightSource(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadFilter(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadFilter(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfFilter(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfFilter(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::InstrumentFilterSeq copyFilter(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyFilter(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addFilter(const ::omero::model::FilterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addFilter(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllFilterSet(const ::omero::model::InstrumentFilterSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllFilterSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeFilter(const ::omero::model::FilterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeFilter(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllFilterSet(const ::omero::model::InstrumentFilterSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllFilterSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearFilter(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearFilter(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadFilter(const ::omero::model::InstrumentPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadFilter(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadDichroic(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadDichroic(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfDichroic(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfDichroic(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::InstrumentDichroicSeq copyDichroic(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyDichroic(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addDichroic(const ::omero::model::DichroicPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addDichroic(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllDichroicSet(const ::omero::model::InstrumentDichroicSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllDichroicSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeDichroic(const ::omero::model::DichroicPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeDichroic(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllDichroicSet(const ::omero::model::InstrumentDichroicSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllDichroicSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearDichroic(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearDichroic(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadDichroic(const ::omero::model::InstrumentPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadDichroic(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadFilterSet(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadFilterSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfFilterSet(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfFilterSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::InstrumentFilterSetSeq copyFilterSet(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyFilterSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addFilterSet(const ::omero::model::FilterSetPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addFilterSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllFilterSetSet(const ::omero::model::InstrumentFilterSetSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllFilterSetSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeFilterSet(const ::omero::model::FilterSetPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeFilterSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllFilterSetSet(const ::omero::model::InstrumentFilterSetSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllFilterSetSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearFilterSet(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearFilterSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadFilterSet(const ::omero::model::InstrumentPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadFilterSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadOtf(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadOtf(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfOtf(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfOtf(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::InstrumentOtfSeq copyOtf(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyOtf(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addOTF(const ::omero::model::OTFPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addOTF(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllOTFSet(const ::omero::model::InstrumentOtfSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllOTFSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeOTF(const ::omero::model::OTFPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeOTF(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllOTFSet(const ::omero::model::InstrumentOtfSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllOTFSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearOtf(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearOtf(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadOtf(const ::omero::model::InstrumentPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadOtf(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::model::MicroscopePtr microscope;

    ::omero::model::InstrumentDetectorSeq detectorSeq;

    bool detectorLoaded;

    ::omero::model::InstrumentObjectiveSeq objectiveSeq;

    bool objectiveLoaded;

    ::omero::model::InstrumentLightSourceSeq lightSourceSeq;

    bool lightSourceLoaded;

    ::omero::model::InstrumentFilterSeq filterSeq;

    bool filterLoaded;

    ::omero::model::InstrumentDichroicSeq dichroicSeq;

    bool dichroicLoaded;

    ::omero::model::InstrumentFilterSetSeq filterSetSeq;

    bool filterSetLoaded;

    ::omero::model::InstrumentOtfSeq otfSeq;

    bool otfLoaded;
};

}

}

#endif
