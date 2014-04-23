// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Filter.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Filter_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Filter_h__

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

class FilterType;

class TransmittanceRange;

class Instrument;

class FilterSetExcitationFilterLink;

class FilterSet;

class FilterSetEmissionFilterLink;

class Details;

class Filter;

}

}

}

namespace omero
{

namespace model
{

class FilterType;
bool operator==(const FilterType&, const FilterType&);
bool operator<(const FilterType&, const FilterType&);

class TransmittanceRange;
bool operator==(const TransmittanceRange&, const TransmittanceRange&);
bool operator<(const TransmittanceRange&, const TransmittanceRange&);

class Instrument;
bool operator==(const Instrument&, const Instrument&);
bool operator<(const Instrument&, const Instrument&);

class FilterSetExcitationFilterLink;
bool operator==(const FilterSetExcitationFilterLink&, const FilterSetExcitationFilterLink&);
bool operator<(const FilterSetExcitationFilterLink&, const FilterSetExcitationFilterLink&);

class FilterSet;
bool operator==(const FilterSet&, const FilterSet&);
bool operator<(const FilterSet&, const FilterSet&);

class FilterSetEmissionFilterLink;
bool operator==(const FilterSetEmissionFilterLink&, const FilterSetEmissionFilterLink&);
bool operator<(const FilterSetEmissionFilterLink&, const FilterSetEmissionFilterLink&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class Filter;
bool operator==(const Filter&, const Filter&);
bool operator<(const Filter&, const Filter&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::FilterType*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::FilterType*);

::Ice::Object* upCast(::omero::model::TransmittanceRange*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::TransmittanceRange*);

::Ice::Object* upCast(::omero::model::Instrument*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Instrument*);

::Ice::Object* upCast(::omero::model::FilterSetExcitationFilterLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::FilterSetExcitationFilterLink*);

::Ice::Object* upCast(::omero::model::FilterSet*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::FilterSet*);

::Ice::Object* upCast(::omero::model::FilterSetEmissionFilterLink*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::FilterSetEmissionFilterLink*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::Filter*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Filter*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::FilterType> FilterTypePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::FilterType> FilterTypePrx;

void __read(::IceInternal::BasicStream*, FilterTypePrx&);
void __patch__FilterTypePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::TransmittanceRange> TransmittanceRangePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::TransmittanceRange> TransmittanceRangePrx;

void __read(::IceInternal::BasicStream*, TransmittanceRangePrx&);
void __patch__TransmittanceRangePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Instrument> InstrumentPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Instrument> InstrumentPrx;

void __read(::IceInternal::BasicStream*, InstrumentPrx&);
void __patch__InstrumentPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::FilterSetExcitationFilterLink> FilterSetExcitationFilterLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::FilterSetExcitationFilterLink> FilterSetExcitationFilterLinkPrx;

void __read(::IceInternal::BasicStream*, FilterSetExcitationFilterLinkPrx&);
void __patch__FilterSetExcitationFilterLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::FilterSet> FilterSetPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::FilterSet> FilterSetPrx;

void __read(::IceInternal::BasicStream*, FilterSetPrx&);
void __patch__FilterSetPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::FilterSetEmissionFilterLink> FilterSetEmissionFilterLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::FilterSetEmissionFilterLink> FilterSetEmissionFilterLinkPrx;

void __read(::IceInternal::BasicStream*, FilterSetEmissionFilterLinkPrx&);
void __patch__FilterSetEmissionFilterLinkPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Filter> FilterPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Filter> FilterPrx;

void __read(::IceInternal::BasicStream*, FilterPrx&);
void __patch__FilterPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

typedef ::std::vector< ::omero::model::FilterSetExcitationFilterLinkPtr> FilterExcitationFilterLinkSeq;
void __writeFilterExcitationFilterLinkSeq(::IceInternal::BasicStream*, const ::omero::model::FilterSetExcitationFilterLinkPtr*, const ::omero::model::FilterSetExcitationFilterLinkPtr*);
void __readFilterExcitationFilterLinkSeq(::IceInternal::BasicStream*, FilterExcitationFilterLinkSeq&);

typedef ::std::vector< ::omero::model::FilterSetPtr> FilterLinkedExcitationFilterSeq;
void __writeFilterLinkedExcitationFilterSeq(::IceInternal::BasicStream*, const ::omero::model::FilterSetPtr*, const ::omero::model::FilterSetPtr*);
void __readFilterLinkedExcitationFilterSeq(::IceInternal::BasicStream*, FilterLinkedExcitationFilterSeq&);

typedef ::std::vector< ::omero::model::FilterSetEmissionFilterLinkPtr> FilterEmissionFilterLinkSeq;
void __writeFilterEmissionFilterLinkSeq(::IceInternal::BasicStream*, const ::omero::model::FilterSetEmissionFilterLinkPtr*, const ::omero::model::FilterSetEmissionFilterLinkPtr*);
void __readFilterEmissionFilterLinkSeq(::IceInternal::BasicStream*, FilterEmissionFilterLinkSeq&);

typedef ::std::vector< ::omero::model::FilterSetPtr> FilterLinkedEmissionFilterSeq;
void __writeFilterLinkedEmissionFilterSeq(::IceInternal::BasicStream*, const ::omero::model::FilterSetPtr*, const ::omero::model::FilterSetPtr*);
void __readFilterLinkedEmissionFilterSeq(::IceInternal::BasicStream*, FilterLinkedEmissionFilterSeq&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Filter : virtual public ::IceProxy::omero::model::IObject
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

    ::omero::RStringPtr getManufacturer()
    {
        return getManufacturer(0);
    }
    ::omero::RStringPtr getManufacturer(const ::Ice::Context& __ctx)
    {
        return getManufacturer(&__ctx);
    }
    
private:

    ::omero::RStringPtr getManufacturer(const ::Ice::Context*);
    
public:

    void setManufacturer(const ::omero::RStringPtr& theManufacturer)
    {
        setManufacturer(theManufacturer, 0);
    }
    void setManufacturer(const ::omero::RStringPtr& theManufacturer, const ::Ice::Context& __ctx)
    {
        setManufacturer(theManufacturer, &__ctx);
    }
    
private:

    void setManufacturer(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getModel()
    {
        return getModel(0);
    }
    ::omero::RStringPtr getModel(const ::Ice::Context& __ctx)
    {
        return getModel(&__ctx);
    }
    
private:

    ::omero::RStringPtr getModel(const ::Ice::Context*);
    
public:

    void setModel(const ::omero::RStringPtr& theModel)
    {
        setModel(theModel, 0);
    }
    void setModel(const ::omero::RStringPtr& theModel, const ::Ice::Context& __ctx)
    {
        setModel(theModel, &__ctx);
    }
    
private:

    void setModel(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getLotNumber()
    {
        return getLotNumber(0);
    }
    ::omero::RStringPtr getLotNumber(const ::Ice::Context& __ctx)
    {
        return getLotNumber(&__ctx);
    }
    
private:

    ::omero::RStringPtr getLotNumber(const ::Ice::Context*);
    
public:

    void setLotNumber(const ::omero::RStringPtr& theLotNumber)
    {
        setLotNumber(theLotNumber, 0);
    }
    void setLotNumber(const ::omero::RStringPtr& theLotNumber, const ::Ice::Context& __ctx)
    {
        setLotNumber(theLotNumber, &__ctx);
    }
    
private:

    void setLotNumber(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getSerialNumber()
    {
        return getSerialNumber(0);
    }
    ::omero::RStringPtr getSerialNumber(const ::Ice::Context& __ctx)
    {
        return getSerialNumber(&__ctx);
    }
    
private:

    ::omero::RStringPtr getSerialNumber(const ::Ice::Context*);
    
public:

    void setSerialNumber(const ::omero::RStringPtr& theSerialNumber)
    {
        setSerialNumber(theSerialNumber, 0);
    }
    void setSerialNumber(const ::omero::RStringPtr& theSerialNumber, const ::Ice::Context& __ctx)
    {
        setSerialNumber(theSerialNumber, &__ctx);
    }
    
private:

    void setSerialNumber(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getFilterWheel()
    {
        return getFilterWheel(0);
    }
    ::omero::RStringPtr getFilterWheel(const ::Ice::Context& __ctx)
    {
        return getFilterWheel(&__ctx);
    }
    
private:

    ::omero::RStringPtr getFilterWheel(const ::Ice::Context*);
    
public:

    void setFilterWheel(const ::omero::RStringPtr& theFilterWheel)
    {
        setFilterWheel(theFilterWheel, 0);
    }
    void setFilterWheel(const ::omero::RStringPtr& theFilterWheel, const ::Ice::Context& __ctx)
    {
        setFilterWheel(theFilterWheel, &__ctx);
    }
    
private:

    void setFilterWheel(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:

    ::omero::model::FilterTypePtr getType()
    {
        return getType(0);
    }
    ::omero::model::FilterTypePtr getType(const ::Ice::Context& __ctx)
    {
        return getType(&__ctx);
    }
    
private:

    ::omero::model::FilterTypePtr getType(const ::Ice::Context*);
    
public:

    void setType(const ::omero::model::FilterTypePtr& theType)
    {
        setType(theType, 0);
    }
    void setType(const ::omero::model::FilterTypePtr& theType, const ::Ice::Context& __ctx)
    {
        setType(theType, &__ctx);
    }
    
private:

    void setType(const ::omero::model::FilterTypePtr&, const ::Ice::Context*);
    
public:

    ::omero::model::TransmittanceRangePtr getTransmittanceRange()
    {
        return getTransmittanceRange(0);
    }
    ::omero::model::TransmittanceRangePtr getTransmittanceRange(const ::Ice::Context& __ctx)
    {
        return getTransmittanceRange(&__ctx);
    }
    
private:

    ::omero::model::TransmittanceRangePtr getTransmittanceRange(const ::Ice::Context*);
    
public:

    void setTransmittanceRange(const ::omero::model::TransmittanceRangePtr& theTransmittanceRange)
    {
        setTransmittanceRange(theTransmittanceRange, 0);
    }
    void setTransmittanceRange(const ::omero::model::TransmittanceRangePtr& theTransmittanceRange, const ::Ice::Context& __ctx)
    {
        setTransmittanceRange(theTransmittanceRange, &__ctx);
    }
    
private:

    void setTransmittanceRange(const ::omero::model::TransmittanceRangePtr&, const ::Ice::Context*);
    
public:

    ::omero::model::InstrumentPtr getInstrument()
    {
        return getInstrument(0);
    }
    ::omero::model::InstrumentPtr getInstrument(const ::Ice::Context& __ctx)
    {
        return getInstrument(&__ctx);
    }
    
private:

    ::omero::model::InstrumentPtr getInstrument(const ::Ice::Context*);
    
public:

    void setInstrument(const ::omero::model::InstrumentPtr& theInstrument)
    {
        setInstrument(theInstrument, 0);
    }
    void setInstrument(const ::omero::model::InstrumentPtr& theInstrument, const ::Ice::Context& __ctx)
    {
        setInstrument(theInstrument, &__ctx);
    }
    
private:

    void setInstrument(const ::omero::model::InstrumentPtr&, const ::Ice::Context*);
    
public:

    void unloadExcitationFilterLink()
    {
        unloadExcitationFilterLink(0);
    }
    void unloadExcitationFilterLink(const ::Ice::Context& __ctx)
    {
        unloadExcitationFilterLink(&__ctx);
    }
    
private:

    void unloadExcitationFilterLink(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfExcitationFilterLink()
    {
        return sizeOfExcitationFilterLink(0);
    }
    ::Ice::Int sizeOfExcitationFilterLink(const ::Ice::Context& __ctx)
    {
        return sizeOfExcitationFilterLink(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfExcitationFilterLink(const ::Ice::Context*);
    
public:

    ::omero::model::FilterExcitationFilterLinkSeq copyExcitationFilterLink()
    {
        return copyExcitationFilterLink(0);
    }
    ::omero::model::FilterExcitationFilterLinkSeq copyExcitationFilterLink(const ::Ice::Context& __ctx)
    {
        return copyExcitationFilterLink(&__ctx);
    }
    
private:

    ::omero::model::FilterExcitationFilterLinkSeq copyExcitationFilterLink(const ::Ice::Context*);
    
public:

    void addFilterSetExcitationFilterLink(const ::omero::model::FilterSetExcitationFilterLinkPtr& target)
    {
        addFilterSetExcitationFilterLink(target, 0);
    }
    void addFilterSetExcitationFilterLink(const ::omero::model::FilterSetExcitationFilterLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addFilterSetExcitationFilterLink(target, &__ctx);
    }
    
private:

    void addFilterSetExcitationFilterLink(const ::omero::model::FilterSetExcitationFilterLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllFilterSetExcitationFilterLinkSet(const ::omero::model::FilterExcitationFilterLinkSeq& targets)
    {
        addAllFilterSetExcitationFilterLinkSet(targets, 0);
    }
    void addAllFilterSetExcitationFilterLinkSet(const ::omero::model::FilterExcitationFilterLinkSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllFilterSetExcitationFilterLinkSet(targets, &__ctx);
    }
    
private:

    void addAllFilterSetExcitationFilterLinkSet(const ::omero::model::FilterExcitationFilterLinkSeq&, const ::Ice::Context*);
    
public:

    void removeFilterSetExcitationFilterLink(const ::omero::model::FilterSetExcitationFilterLinkPtr& theTarget)
    {
        removeFilterSetExcitationFilterLink(theTarget, 0);
    }
    void removeFilterSetExcitationFilterLink(const ::omero::model::FilterSetExcitationFilterLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeFilterSetExcitationFilterLink(theTarget, &__ctx);
    }
    
private:

    void removeFilterSetExcitationFilterLink(const ::omero::model::FilterSetExcitationFilterLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllFilterSetExcitationFilterLinkSet(const ::omero::model::FilterExcitationFilterLinkSeq& targets)
    {
        removeAllFilterSetExcitationFilterLinkSet(targets, 0);
    }
    void removeAllFilterSetExcitationFilterLinkSet(const ::omero::model::FilterExcitationFilterLinkSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllFilterSetExcitationFilterLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllFilterSetExcitationFilterLinkSet(const ::omero::model::FilterExcitationFilterLinkSeq&, const ::Ice::Context*);
    
public:

    void clearExcitationFilterLink()
    {
        clearExcitationFilterLink(0);
    }
    void clearExcitationFilterLink(const ::Ice::Context& __ctx)
    {
        clearExcitationFilterLink(&__ctx);
    }
    
private:

    void clearExcitationFilterLink(const ::Ice::Context*);
    
public:

    void reloadExcitationFilterLink(const ::omero::model::FilterPtr& toCopy)
    {
        reloadExcitationFilterLink(toCopy, 0);
    }
    void reloadExcitationFilterLink(const ::omero::model::FilterPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadExcitationFilterLink(toCopy, &__ctx);
    }
    
private:

    void reloadExcitationFilterLink(const ::omero::model::FilterPtr&, const ::Ice::Context*);
    
public:

    ::omero::sys::CountMap getExcitationFilterLinkCountPerOwner()
    {
        return getExcitationFilterLinkCountPerOwner(0);
    }
    ::omero::sys::CountMap getExcitationFilterLinkCountPerOwner(const ::Ice::Context& __ctx)
    {
        return getExcitationFilterLinkCountPerOwner(&__ctx);
    }
    
private:

    ::omero::sys::CountMap getExcitationFilterLinkCountPerOwner(const ::Ice::Context*);
    
public:

    ::omero::model::FilterSetExcitationFilterLinkPtr linkExcitationFilter(const ::omero::model::FilterSetPtr& addition)
    {
        return linkExcitationFilter(addition, 0);
    }
    ::omero::model::FilterSetExcitationFilterLinkPtr linkExcitationFilter(const ::omero::model::FilterSetPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkExcitationFilter(addition, &__ctx);
    }
    
private:

    ::omero::model::FilterSetExcitationFilterLinkPtr linkExcitationFilter(const ::omero::model::FilterSetPtr&, const ::Ice::Context*);
    
public:

    void addFilterSetExcitationFilterLinkToBoth(const ::omero::model::FilterSetExcitationFilterLinkPtr& link, bool bothSides)
    {
        addFilterSetExcitationFilterLinkToBoth(link, bothSides, 0);
    }
    void addFilterSetExcitationFilterLinkToBoth(const ::omero::model::FilterSetExcitationFilterLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addFilterSetExcitationFilterLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addFilterSetExcitationFilterLinkToBoth(const ::omero::model::FilterSetExcitationFilterLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::FilterExcitationFilterLinkSeq findFilterSetExcitationFilterLink(const ::omero::model::FilterSetPtr& removal)
    {
        return findFilterSetExcitationFilterLink(removal, 0);
    }
    ::omero::model::FilterExcitationFilterLinkSeq findFilterSetExcitationFilterLink(const ::omero::model::FilterSetPtr& removal, const ::Ice::Context& __ctx)
    {
        return findFilterSetExcitationFilterLink(removal, &__ctx);
    }
    
private:

    ::omero::model::FilterExcitationFilterLinkSeq findFilterSetExcitationFilterLink(const ::omero::model::FilterSetPtr&, const ::Ice::Context*);
    
public:

    void unlinkExcitationFilter(const ::omero::model::FilterSetPtr& removal)
    {
        unlinkExcitationFilter(removal, 0);
    }
    void unlinkExcitationFilter(const ::omero::model::FilterSetPtr& removal, const ::Ice::Context& __ctx)
    {
        unlinkExcitationFilter(removal, &__ctx);
    }
    
private:

    void unlinkExcitationFilter(const ::omero::model::FilterSetPtr&, const ::Ice::Context*);
    
public:

    void removeFilterSetExcitationFilterLinkFromBoth(const ::omero::model::FilterSetExcitationFilterLinkPtr& link, bool bothSides)
    {
        removeFilterSetExcitationFilterLinkFromBoth(link, bothSides, 0);
    }
    void removeFilterSetExcitationFilterLinkFromBoth(const ::omero::model::FilterSetExcitationFilterLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removeFilterSetExcitationFilterLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removeFilterSetExcitationFilterLinkFromBoth(const ::omero::model::FilterSetExcitationFilterLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::FilterLinkedExcitationFilterSeq linkedExcitationFilterList()
    {
        return linkedExcitationFilterList(0);
    }
    ::omero::model::FilterLinkedExcitationFilterSeq linkedExcitationFilterList(const ::Ice::Context& __ctx)
    {
        return linkedExcitationFilterList(&__ctx);
    }
    
private:

    ::omero::model::FilterLinkedExcitationFilterSeq linkedExcitationFilterList(const ::Ice::Context*);
    
public:

    void unloadEmissionFilterLink()
    {
        unloadEmissionFilterLink(0);
    }
    void unloadEmissionFilterLink(const ::Ice::Context& __ctx)
    {
        unloadEmissionFilterLink(&__ctx);
    }
    
private:

    void unloadEmissionFilterLink(const ::Ice::Context*);
    
public:

    ::Ice::Int sizeOfEmissionFilterLink()
    {
        return sizeOfEmissionFilterLink(0);
    }
    ::Ice::Int sizeOfEmissionFilterLink(const ::Ice::Context& __ctx)
    {
        return sizeOfEmissionFilterLink(&__ctx);
    }
    
private:

    ::Ice::Int sizeOfEmissionFilterLink(const ::Ice::Context*);
    
public:

    ::omero::model::FilterEmissionFilterLinkSeq copyEmissionFilterLink()
    {
        return copyEmissionFilterLink(0);
    }
    ::omero::model::FilterEmissionFilterLinkSeq copyEmissionFilterLink(const ::Ice::Context& __ctx)
    {
        return copyEmissionFilterLink(&__ctx);
    }
    
private:

    ::omero::model::FilterEmissionFilterLinkSeq copyEmissionFilterLink(const ::Ice::Context*);
    
public:

    void addFilterSetEmissionFilterLink(const ::omero::model::FilterSetEmissionFilterLinkPtr& target)
    {
        addFilterSetEmissionFilterLink(target, 0);
    }
    void addFilterSetEmissionFilterLink(const ::omero::model::FilterSetEmissionFilterLinkPtr& target, const ::Ice::Context& __ctx)
    {
        addFilterSetEmissionFilterLink(target, &__ctx);
    }
    
private:

    void addFilterSetEmissionFilterLink(const ::omero::model::FilterSetEmissionFilterLinkPtr&, const ::Ice::Context*);
    
public:

    void addAllFilterSetEmissionFilterLinkSet(const ::omero::model::FilterEmissionFilterLinkSeq& targets)
    {
        addAllFilterSetEmissionFilterLinkSet(targets, 0);
    }
    void addAllFilterSetEmissionFilterLinkSet(const ::omero::model::FilterEmissionFilterLinkSeq& targets, const ::Ice::Context& __ctx)
    {
        addAllFilterSetEmissionFilterLinkSet(targets, &__ctx);
    }
    
private:

    void addAllFilterSetEmissionFilterLinkSet(const ::omero::model::FilterEmissionFilterLinkSeq&, const ::Ice::Context*);
    
public:

    void removeFilterSetEmissionFilterLink(const ::omero::model::FilterSetEmissionFilterLinkPtr& theTarget)
    {
        removeFilterSetEmissionFilterLink(theTarget, 0);
    }
    void removeFilterSetEmissionFilterLink(const ::omero::model::FilterSetEmissionFilterLinkPtr& theTarget, const ::Ice::Context& __ctx)
    {
        removeFilterSetEmissionFilterLink(theTarget, &__ctx);
    }
    
private:

    void removeFilterSetEmissionFilterLink(const ::omero::model::FilterSetEmissionFilterLinkPtr&, const ::Ice::Context*);
    
public:

    void removeAllFilterSetEmissionFilterLinkSet(const ::omero::model::FilterEmissionFilterLinkSeq& targets)
    {
        removeAllFilterSetEmissionFilterLinkSet(targets, 0);
    }
    void removeAllFilterSetEmissionFilterLinkSet(const ::omero::model::FilterEmissionFilterLinkSeq& targets, const ::Ice::Context& __ctx)
    {
        removeAllFilterSetEmissionFilterLinkSet(targets, &__ctx);
    }
    
private:

    void removeAllFilterSetEmissionFilterLinkSet(const ::omero::model::FilterEmissionFilterLinkSeq&, const ::Ice::Context*);
    
public:

    void clearEmissionFilterLink()
    {
        clearEmissionFilterLink(0);
    }
    void clearEmissionFilterLink(const ::Ice::Context& __ctx)
    {
        clearEmissionFilterLink(&__ctx);
    }
    
private:

    void clearEmissionFilterLink(const ::Ice::Context*);
    
public:

    void reloadEmissionFilterLink(const ::omero::model::FilterPtr& toCopy)
    {
        reloadEmissionFilterLink(toCopy, 0);
    }
    void reloadEmissionFilterLink(const ::omero::model::FilterPtr& toCopy, const ::Ice::Context& __ctx)
    {
        reloadEmissionFilterLink(toCopy, &__ctx);
    }
    
private:

    void reloadEmissionFilterLink(const ::omero::model::FilterPtr&, const ::Ice::Context*);
    
public:

    ::omero::sys::CountMap getEmissionFilterLinkCountPerOwner()
    {
        return getEmissionFilterLinkCountPerOwner(0);
    }
    ::omero::sys::CountMap getEmissionFilterLinkCountPerOwner(const ::Ice::Context& __ctx)
    {
        return getEmissionFilterLinkCountPerOwner(&__ctx);
    }
    
private:

    ::omero::sys::CountMap getEmissionFilterLinkCountPerOwner(const ::Ice::Context*);
    
public:

    ::omero::model::FilterSetEmissionFilterLinkPtr linkEmissionFilter(const ::omero::model::FilterSetPtr& addition)
    {
        return linkEmissionFilter(addition, 0);
    }
    ::omero::model::FilterSetEmissionFilterLinkPtr linkEmissionFilter(const ::omero::model::FilterSetPtr& addition, const ::Ice::Context& __ctx)
    {
        return linkEmissionFilter(addition, &__ctx);
    }
    
private:

    ::omero::model::FilterSetEmissionFilterLinkPtr linkEmissionFilter(const ::omero::model::FilterSetPtr&, const ::Ice::Context*);
    
public:

    void addFilterSetEmissionFilterLinkToBoth(const ::omero::model::FilterSetEmissionFilterLinkPtr& link, bool bothSides)
    {
        addFilterSetEmissionFilterLinkToBoth(link, bothSides, 0);
    }
    void addFilterSetEmissionFilterLinkToBoth(const ::omero::model::FilterSetEmissionFilterLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        addFilterSetEmissionFilterLinkToBoth(link, bothSides, &__ctx);
    }
    
private:

    void addFilterSetEmissionFilterLinkToBoth(const ::omero::model::FilterSetEmissionFilterLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::FilterEmissionFilterLinkSeq findFilterSetEmissionFilterLink(const ::omero::model::FilterSetPtr& removal)
    {
        return findFilterSetEmissionFilterLink(removal, 0);
    }
    ::omero::model::FilterEmissionFilterLinkSeq findFilterSetEmissionFilterLink(const ::omero::model::FilterSetPtr& removal, const ::Ice::Context& __ctx)
    {
        return findFilterSetEmissionFilterLink(removal, &__ctx);
    }
    
private:

    ::omero::model::FilterEmissionFilterLinkSeq findFilterSetEmissionFilterLink(const ::omero::model::FilterSetPtr&, const ::Ice::Context*);
    
public:

    void unlinkEmissionFilter(const ::omero::model::FilterSetPtr& removal)
    {
        unlinkEmissionFilter(removal, 0);
    }
    void unlinkEmissionFilter(const ::omero::model::FilterSetPtr& removal, const ::Ice::Context& __ctx)
    {
        unlinkEmissionFilter(removal, &__ctx);
    }
    
private:

    void unlinkEmissionFilter(const ::omero::model::FilterSetPtr&, const ::Ice::Context*);
    
public:

    void removeFilterSetEmissionFilterLinkFromBoth(const ::omero::model::FilterSetEmissionFilterLinkPtr& link, bool bothSides)
    {
        removeFilterSetEmissionFilterLinkFromBoth(link, bothSides, 0);
    }
    void removeFilterSetEmissionFilterLinkFromBoth(const ::omero::model::FilterSetEmissionFilterLinkPtr& link, bool bothSides, const ::Ice::Context& __ctx)
    {
        removeFilterSetEmissionFilterLinkFromBoth(link, bothSides, &__ctx);
    }
    
private:

    void removeFilterSetEmissionFilterLinkFromBoth(const ::omero::model::FilterSetEmissionFilterLinkPtr&, bool, const ::Ice::Context*);
    
public:

    ::omero::model::FilterLinkedEmissionFilterSeq linkedEmissionFilterList()
    {
        return linkedEmissionFilterList(0);
    }
    ::omero::model::FilterLinkedEmissionFilterSeq linkedEmissionFilterList(const ::Ice::Context& __ctx)
    {
        return linkedEmissionFilterList(&__ctx);
    }
    
private:

    ::omero::model::FilterLinkedEmissionFilterSeq linkedEmissionFilterList(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Filter> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filter> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filter*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Filter*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Filter : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getManufacturer(const ::Ice::Context*) = 0;

    virtual void setManufacturer(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getModel(const ::Ice::Context*) = 0;

    virtual void setModel(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getLotNumber(const ::Ice::Context*) = 0;

    virtual void setLotNumber(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getSerialNumber(const ::Ice::Context*) = 0;

    virtual void setSerialNumber(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getFilterWheel(const ::Ice::Context*) = 0;

    virtual void setFilterWheel(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::FilterTypePtr getType(const ::Ice::Context*) = 0;

    virtual void setType(const ::omero::model::FilterTypePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::TransmittanceRangePtr getTransmittanceRange(const ::Ice::Context*) = 0;

    virtual void setTransmittanceRange(const ::omero::model::TransmittanceRangePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::model::InstrumentPtr getInstrument(const ::Ice::Context*) = 0;

    virtual void setInstrument(const ::omero::model::InstrumentPtr&, const ::Ice::Context*) = 0;

    virtual void unloadExcitationFilterLink(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfExcitationFilterLink(const ::Ice::Context*) = 0;

    virtual ::omero::model::FilterExcitationFilterLinkSeq copyExcitationFilterLink(const ::Ice::Context*) = 0;

    virtual void addFilterSetExcitationFilterLink(const ::omero::model::FilterSetExcitationFilterLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllFilterSetExcitationFilterLinkSet(const ::omero::model::FilterExcitationFilterLinkSeq&, const ::Ice::Context*) = 0;

    virtual void removeFilterSetExcitationFilterLink(const ::omero::model::FilterSetExcitationFilterLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllFilterSetExcitationFilterLinkSet(const ::omero::model::FilterExcitationFilterLinkSeq&, const ::Ice::Context*) = 0;

    virtual void clearExcitationFilterLink(const ::Ice::Context*) = 0;

    virtual void reloadExcitationFilterLink(const ::omero::model::FilterPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getExcitationFilterLinkCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::FilterSetExcitationFilterLinkPtr linkExcitationFilter(const ::omero::model::FilterSetPtr&, const ::Ice::Context*) = 0;

    virtual void addFilterSetExcitationFilterLinkToBoth(const ::omero::model::FilterSetExcitationFilterLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::FilterExcitationFilterLinkSeq findFilterSetExcitationFilterLink(const ::omero::model::FilterSetPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkExcitationFilter(const ::omero::model::FilterSetPtr&, const ::Ice::Context*) = 0;

    virtual void removeFilterSetExcitationFilterLinkFromBoth(const ::omero::model::FilterSetExcitationFilterLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::FilterLinkedExcitationFilterSeq linkedExcitationFilterList(const ::Ice::Context*) = 0;

    virtual void unloadEmissionFilterLink(const ::Ice::Context*) = 0;

    virtual ::Ice::Int sizeOfEmissionFilterLink(const ::Ice::Context*) = 0;

    virtual ::omero::model::FilterEmissionFilterLinkSeq copyEmissionFilterLink(const ::Ice::Context*) = 0;

    virtual void addFilterSetEmissionFilterLink(const ::omero::model::FilterSetEmissionFilterLinkPtr&, const ::Ice::Context*) = 0;

    virtual void addAllFilterSetEmissionFilterLinkSet(const ::omero::model::FilterEmissionFilterLinkSeq&, const ::Ice::Context*) = 0;

    virtual void removeFilterSetEmissionFilterLink(const ::omero::model::FilterSetEmissionFilterLinkPtr&, const ::Ice::Context*) = 0;

    virtual void removeAllFilterSetEmissionFilterLinkSet(const ::omero::model::FilterEmissionFilterLinkSeq&, const ::Ice::Context*) = 0;

    virtual void clearEmissionFilterLink(const ::Ice::Context*) = 0;

    virtual void reloadEmissionFilterLink(const ::omero::model::FilterPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::sys::CountMap getEmissionFilterLinkCountPerOwner(const ::Ice::Context*) = 0;

    virtual ::omero::model::FilterSetEmissionFilterLinkPtr linkEmissionFilter(const ::omero::model::FilterSetPtr&, const ::Ice::Context*) = 0;

    virtual void addFilterSetEmissionFilterLinkToBoth(const ::omero::model::FilterSetEmissionFilterLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::FilterEmissionFilterLinkSeq findFilterSetEmissionFilterLink(const ::omero::model::FilterSetPtr&, const ::Ice::Context*) = 0;

    virtual void unlinkEmissionFilter(const ::omero::model::FilterSetPtr&, const ::Ice::Context*) = 0;

    virtual void removeFilterSetEmissionFilterLinkFromBoth(const ::omero::model::FilterSetEmissionFilterLinkPtr&, bool, const ::Ice::Context*) = 0;

    virtual ::omero::model::FilterLinkedEmissionFilterSeq linkedEmissionFilterList(const ::Ice::Context*) = 0;
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

class Filter : virtual public ::IceDelegate::omero::model::Filter,
               virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getManufacturer(const ::Ice::Context*);

    virtual void setManufacturer(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getModel(const ::Ice::Context*);

    virtual void setModel(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getLotNumber(const ::Ice::Context*);

    virtual void setLotNumber(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getSerialNumber(const ::Ice::Context*);

    virtual void setSerialNumber(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getFilterWheel(const ::Ice::Context*);

    virtual void setFilterWheel(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::model::FilterTypePtr getType(const ::Ice::Context*);

    virtual void setType(const ::omero::model::FilterTypePtr&, const ::Ice::Context*);

    virtual ::omero::model::TransmittanceRangePtr getTransmittanceRange(const ::Ice::Context*);

    virtual void setTransmittanceRange(const ::omero::model::TransmittanceRangePtr&, const ::Ice::Context*);

    virtual ::omero::model::InstrumentPtr getInstrument(const ::Ice::Context*);

    virtual void setInstrument(const ::omero::model::InstrumentPtr&, const ::Ice::Context*);

    virtual void unloadExcitationFilterLink(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfExcitationFilterLink(const ::Ice::Context*);

    virtual ::omero::model::FilterExcitationFilterLinkSeq copyExcitationFilterLink(const ::Ice::Context*);

    virtual void addFilterSetExcitationFilterLink(const ::omero::model::FilterSetExcitationFilterLinkPtr&, const ::Ice::Context*);

    virtual void addAllFilterSetExcitationFilterLinkSet(const ::omero::model::FilterExcitationFilterLinkSeq&, const ::Ice::Context*);

    virtual void removeFilterSetExcitationFilterLink(const ::omero::model::FilterSetExcitationFilterLinkPtr&, const ::Ice::Context*);

    virtual void removeAllFilterSetExcitationFilterLinkSet(const ::omero::model::FilterExcitationFilterLinkSeq&, const ::Ice::Context*);

    virtual void clearExcitationFilterLink(const ::Ice::Context*);

    virtual void reloadExcitationFilterLink(const ::omero::model::FilterPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getExcitationFilterLinkCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::FilterSetExcitationFilterLinkPtr linkExcitationFilter(const ::omero::model::FilterSetPtr&, const ::Ice::Context*);

    virtual void addFilterSetExcitationFilterLinkToBoth(const ::omero::model::FilterSetExcitationFilterLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::FilterExcitationFilterLinkSeq findFilterSetExcitationFilterLink(const ::omero::model::FilterSetPtr&, const ::Ice::Context*);

    virtual void unlinkExcitationFilter(const ::omero::model::FilterSetPtr&, const ::Ice::Context*);

    virtual void removeFilterSetExcitationFilterLinkFromBoth(const ::omero::model::FilterSetExcitationFilterLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::FilterLinkedExcitationFilterSeq linkedExcitationFilterList(const ::Ice::Context*);

    virtual void unloadEmissionFilterLink(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfEmissionFilterLink(const ::Ice::Context*);

    virtual ::omero::model::FilterEmissionFilterLinkSeq copyEmissionFilterLink(const ::Ice::Context*);

    virtual void addFilterSetEmissionFilterLink(const ::omero::model::FilterSetEmissionFilterLinkPtr&, const ::Ice::Context*);

    virtual void addAllFilterSetEmissionFilterLinkSet(const ::omero::model::FilterEmissionFilterLinkSeq&, const ::Ice::Context*);

    virtual void removeFilterSetEmissionFilterLink(const ::omero::model::FilterSetEmissionFilterLinkPtr&, const ::Ice::Context*);

    virtual void removeAllFilterSetEmissionFilterLinkSet(const ::omero::model::FilterEmissionFilterLinkSeq&, const ::Ice::Context*);

    virtual void clearEmissionFilterLink(const ::Ice::Context*);

    virtual void reloadEmissionFilterLink(const ::omero::model::FilterPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getEmissionFilterLinkCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::FilterSetEmissionFilterLinkPtr linkEmissionFilter(const ::omero::model::FilterSetPtr&, const ::Ice::Context*);

    virtual void addFilterSetEmissionFilterLinkToBoth(const ::omero::model::FilterSetEmissionFilterLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::FilterEmissionFilterLinkSeq findFilterSetEmissionFilterLink(const ::omero::model::FilterSetPtr&, const ::Ice::Context*);

    virtual void unlinkEmissionFilter(const ::omero::model::FilterSetPtr&, const ::Ice::Context*);

    virtual void removeFilterSetEmissionFilterLinkFromBoth(const ::omero::model::FilterSetEmissionFilterLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::FilterLinkedEmissionFilterSeq linkedEmissionFilterList(const ::Ice::Context*);
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

class Filter : virtual public ::IceDelegate::omero::model::Filter,
               virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getManufacturer(const ::Ice::Context*);

    virtual void setManufacturer(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getModel(const ::Ice::Context*);

    virtual void setModel(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getLotNumber(const ::Ice::Context*);

    virtual void setLotNumber(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getSerialNumber(const ::Ice::Context*);

    virtual void setSerialNumber(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getFilterWheel(const ::Ice::Context*);

    virtual void setFilterWheel(const ::omero::RStringPtr&, const ::Ice::Context*);

    virtual ::omero::model::FilterTypePtr getType(const ::Ice::Context*);

    virtual void setType(const ::omero::model::FilterTypePtr&, const ::Ice::Context*);

    virtual ::omero::model::TransmittanceRangePtr getTransmittanceRange(const ::Ice::Context*);

    virtual void setTransmittanceRange(const ::omero::model::TransmittanceRangePtr&, const ::Ice::Context*);

    virtual ::omero::model::InstrumentPtr getInstrument(const ::Ice::Context*);

    virtual void setInstrument(const ::omero::model::InstrumentPtr&, const ::Ice::Context*);

    virtual void unloadExcitationFilterLink(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfExcitationFilterLink(const ::Ice::Context*);

    virtual ::omero::model::FilterExcitationFilterLinkSeq copyExcitationFilterLink(const ::Ice::Context*);

    virtual void addFilterSetExcitationFilterLink(const ::omero::model::FilterSetExcitationFilterLinkPtr&, const ::Ice::Context*);

    virtual void addAllFilterSetExcitationFilterLinkSet(const ::omero::model::FilterExcitationFilterLinkSeq&, const ::Ice::Context*);

    virtual void removeFilterSetExcitationFilterLink(const ::omero::model::FilterSetExcitationFilterLinkPtr&, const ::Ice::Context*);

    virtual void removeAllFilterSetExcitationFilterLinkSet(const ::omero::model::FilterExcitationFilterLinkSeq&, const ::Ice::Context*);

    virtual void clearExcitationFilterLink(const ::Ice::Context*);

    virtual void reloadExcitationFilterLink(const ::omero::model::FilterPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getExcitationFilterLinkCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::FilterSetExcitationFilterLinkPtr linkExcitationFilter(const ::omero::model::FilterSetPtr&, const ::Ice::Context*);

    virtual void addFilterSetExcitationFilterLinkToBoth(const ::omero::model::FilterSetExcitationFilterLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::FilterExcitationFilterLinkSeq findFilterSetExcitationFilterLink(const ::omero::model::FilterSetPtr&, const ::Ice::Context*);

    virtual void unlinkExcitationFilter(const ::omero::model::FilterSetPtr&, const ::Ice::Context*);

    virtual void removeFilterSetExcitationFilterLinkFromBoth(const ::omero::model::FilterSetExcitationFilterLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::FilterLinkedExcitationFilterSeq linkedExcitationFilterList(const ::Ice::Context*);

    virtual void unloadEmissionFilterLink(const ::Ice::Context*);

    virtual ::Ice::Int sizeOfEmissionFilterLink(const ::Ice::Context*);

    virtual ::omero::model::FilterEmissionFilterLinkSeq copyEmissionFilterLink(const ::Ice::Context*);

    virtual void addFilterSetEmissionFilterLink(const ::omero::model::FilterSetEmissionFilterLinkPtr&, const ::Ice::Context*);

    virtual void addAllFilterSetEmissionFilterLinkSet(const ::omero::model::FilterEmissionFilterLinkSeq&, const ::Ice::Context*);

    virtual void removeFilterSetEmissionFilterLink(const ::omero::model::FilterSetEmissionFilterLinkPtr&, const ::Ice::Context*);

    virtual void removeAllFilterSetEmissionFilterLinkSet(const ::omero::model::FilterEmissionFilterLinkSeq&, const ::Ice::Context*);

    virtual void clearEmissionFilterLink(const ::Ice::Context*);

    virtual void reloadEmissionFilterLink(const ::omero::model::FilterPtr&, const ::Ice::Context*);

    virtual ::omero::sys::CountMap getEmissionFilterLinkCountPerOwner(const ::Ice::Context*);

    virtual ::omero::model::FilterSetEmissionFilterLinkPtr linkEmissionFilter(const ::omero::model::FilterSetPtr&, const ::Ice::Context*);

    virtual void addFilterSetEmissionFilterLinkToBoth(const ::omero::model::FilterSetEmissionFilterLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::FilterEmissionFilterLinkSeq findFilterSetEmissionFilterLink(const ::omero::model::FilterSetPtr&, const ::Ice::Context*);

    virtual void unlinkEmissionFilter(const ::omero::model::FilterSetPtr&, const ::Ice::Context*);

    virtual void removeFilterSetEmissionFilterLinkFromBoth(const ::omero::model::FilterSetEmissionFilterLinkPtr&, bool, const ::Ice::Context*);

    virtual ::omero::model::FilterLinkedEmissionFilterSeq linkedEmissionFilterList(const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class Filter : virtual public ::omero::model::IObject
{
public:

    typedef FilterPrx ProxyType;
    typedef FilterPtr PointerType;
    
    Filter() {}
    Filter(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::model::FilterTypePtr&, const ::omero::model::TransmittanceRangePtr&, const ::omero::model::InstrumentPtr&, const ::omero::model::FilterExcitationFilterLinkSeq&, bool, const ::omero::sys::CountMap&, const ::omero::model::FilterEmissionFilterLinkSeq&, bool, const ::omero::sys::CountMap&);
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

    virtual ::omero::RStringPtr getManufacturer(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getManufacturer(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setManufacturer(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setManufacturer(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getModel(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getModel(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setModel(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setModel(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getLotNumber(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getLotNumber(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setLotNumber(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setLotNumber(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getSerialNumber(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getSerialNumber(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setSerialNumber(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setSerialNumber(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getFilterWheel(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFilterWheel(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setFilterWheel(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setFilterWheel(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FilterTypePtr getType(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setType(const ::omero::model::FilterTypePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::TransmittanceRangePtr getTransmittanceRange(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getTransmittanceRange(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setTransmittanceRange(const ::omero::model::TransmittanceRangePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setTransmittanceRange(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::InstrumentPtr getInstrument(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getInstrument(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setInstrument(const ::omero::model::InstrumentPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setInstrument(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadExcitationFilterLink(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadExcitationFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfExcitationFilterLink(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfExcitationFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FilterExcitationFilterLinkSeq copyExcitationFilterLink(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyExcitationFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addFilterSetExcitationFilterLink(const ::omero::model::FilterSetExcitationFilterLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addFilterSetExcitationFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllFilterSetExcitationFilterLinkSet(const ::omero::model::FilterExcitationFilterLinkSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllFilterSetExcitationFilterLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeFilterSetExcitationFilterLink(const ::omero::model::FilterSetExcitationFilterLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeFilterSetExcitationFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllFilterSetExcitationFilterLinkSet(const ::omero::model::FilterExcitationFilterLinkSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllFilterSetExcitationFilterLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearExcitationFilterLink(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearExcitationFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadExcitationFilterLink(const ::omero::model::FilterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadExcitationFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getExcitationFilterLinkCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getExcitationFilterLinkCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FilterSetExcitationFilterLinkPtr linkExcitationFilter(const ::omero::model::FilterSetPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkExcitationFilter(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addFilterSetExcitationFilterLinkToBoth(const ::omero::model::FilterSetExcitationFilterLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addFilterSetExcitationFilterLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FilterExcitationFilterLinkSeq findFilterSetExcitationFilterLink(const ::omero::model::FilterSetPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findFilterSetExcitationFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkExcitationFilter(const ::omero::model::FilterSetPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkExcitationFilter(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeFilterSetExcitationFilterLinkFromBoth(const ::omero::model::FilterSetExcitationFilterLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeFilterSetExcitationFilterLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FilterLinkedExcitationFilterSeq linkedExcitationFilterList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedExcitationFilterList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unloadEmissionFilterLink(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unloadEmissionFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sizeOfEmissionFilterLink(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sizeOfEmissionFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FilterEmissionFilterLinkSeq copyEmissionFilterLink(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___copyEmissionFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addFilterSetEmissionFilterLink(const ::omero::model::FilterSetEmissionFilterLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addFilterSetEmissionFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addAllFilterSetEmissionFilterLinkSet(const ::omero::model::FilterEmissionFilterLinkSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAllFilterSetEmissionFilterLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeFilterSetEmissionFilterLink(const ::omero::model::FilterSetEmissionFilterLinkPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeFilterSetEmissionFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeAllFilterSetEmissionFilterLinkSet(const ::omero::model::FilterEmissionFilterLinkSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeAllFilterSetEmissionFilterLinkSet(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearEmissionFilterLink(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearEmissionFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void reloadEmissionFilterLink(const ::omero::model::FilterPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___reloadEmissionFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::sys::CountMap getEmissionFilterLinkCountPerOwner(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getEmissionFilterLinkCountPerOwner(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FilterSetEmissionFilterLinkPtr linkEmissionFilter(const ::omero::model::FilterSetPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkEmissionFilter(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addFilterSetEmissionFilterLinkToBoth(const ::omero::model::FilterSetEmissionFilterLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addFilterSetEmissionFilterLinkToBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FilterEmissionFilterLinkSeq findFilterSetEmissionFilterLink(const ::omero::model::FilterSetPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___findFilterSetEmissionFilterLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unlinkEmissionFilter(const ::omero::model::FilterSetPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unlinkEmissionFilter(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeFilterSetEmissionFilterLinkFromBoth(const ::omero::model::FilterSetEmissionFilterLinkPtr&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeFilterSetEmissionFilterLinkFromBoth(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::model::FilterLinkedEmissionFilterSeq linkedEmissionFilterList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___linkedEmissionFilterList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::RStringPtr manufacturer;

    ::omero::RStringPtr model;

    ::omero::RStringPtr lotNumber;

    ::omero::RStringPtr serialNumber;

    ::omero::RStringPtr filterWheel;

    ::omero::model::FilterTypePtr type;

    ::omero::model::TransmittanceRangePtr transmittanceRange;

    ::omero::model::InstrumentPtr instrument;

    ::omero::model::FilterExcitationFilterLinkSeq excitationFilterLinkSeq;

    bool excitationFilterLinkLoaded;

    ::omero::sys::CountMap excitationFilterLinkCountPerOwner;

    ::omero::model::FilterEmissionFilterLinkSeq emissionFilterLinkSeq;

    bool emissionFilterLinkLoaded;

    ::omero::sys::CountMap emissionFilterLinkCountPerOwner;
};

}

}

#endif
