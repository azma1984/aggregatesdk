// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/event/PersistenceOptions.java
#include "event/PersistenceOptions.h"


/*
PersistenceOptions::PersistenceOptions(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

PersistenceOptions::PersistenceOptions()
    : PersistenceOptions(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void PersistenceOptions::ctor()
{
    super::ctor();
    init();
}

void PersistenceOptions::init()
{
    persistContext = true;
    persistName = true;
    persistExpirationtime = true;
    persistLevel = true;
    persistPermissions = true;
    persistCount = true;
    persistAcknowledgements = true;
    persistEnrichments = true;
    persistFormat = true;
    persistData = true;
}

PersistenceOptions* PersistenceOptions::clone()
{
    try {
        auto clone = java_cast< PersistenceOptions* >(super::clone());
        clone)->persistenceBindings = java_cast< std::list  >(::com::tibbo::aggregate::common::util::CloneUtils::deepClone(persistenceBindings));
        return clone;
    } catch (::java::lang::CloneNotSupportedException* ex) {
        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
    }
}

std::list  PersistenceOptions::getPersistenceBindings()
{
    return persistenceBindings != 0 ? ::java::util::Collections::unmodifiableList(persistenceBindings) : static_cast< std::list  >(0);
}

void PersistenceOptions::addPersistenceBinding(PersistenceBinding* binding)
{
    if(persistenceBindings == 0) {
        persistenceBindings = new ::java::util::LinkedList();
    }
    persistenceBindings)->add(binding));
}

bool PersistenceOptions::isDedicatedTablePreferred()
{
    return dedicatedTablePreferred;
}

void PersistenceOptions::setDedicatedTablePreferred(bool dedicatedTablePreferred)
{
    this->dedicatedTablePreferred = dedicatedTablePreferred;
}

bool PersistenceOptions::isPerContextTablePreferred()
{
    return perContextTablePreferred;
}

void PersistenceOptions::setPerContextTablePreferred(bool perContextTablePreferred)
{
    this->perContextTablePreferred = perContextTablePreferred;
}

bool PersistenceOptions::isPersistContext()
{
    return persistContext;
}

void PersistenceOptions::setPersistContext(bool persistContext)
{
    this->persistContext = persistContext;
}

bool PersistenceOptions::isPersistName()
{
    return persistName;
}

void PersistenceOptions::setPersistName(bool persistName)
{
    this->persistName = persistName;
}

bool PersistenceOptions::isPersistExpirationtime()
{
    return persistExpirationtime;
}

void PersistenceOptions::setPersistExpirationtime(bool persistExpirationtime)
{
    this->persistExpirationtime = persistExpirationtime;
}

bool PersistenceOptions::isPersistLevel()
{
    return persistLevel;
}

void PersistenceOptions::setPersistLevel(bool persistLevel)
{
    this->persistLevel = persistLevel;
}

bool PersistenceOptions::isPersistPermissions()
{
    return persistPermissions;
}

void PersistenceOptions::setPersistPermissions(bool persistPermissions)
{
    this->persistPermissions = persistPermissions;
}

bool PersistenceOptions::isPersistCount()
{
    return persistCount;
}

void PersistenceOptions::setPersistCount(bool persistCount)
{
    this->persistCount = persistCount;
}

bool PersistenceOptions::isPersistAcknowledgements()
{
    return persistAcknowledgements;
}

void PersistenceOptions::setPersistAcknowledgements(bool persistAcknowledgements)
{
    this->persistAcknowledgements = persistAcknowledgements;
}

bool PersistenceOptions::isPersistEnrichments()
{
    return persistEnrichments;
}

void PersistenceOptions::setPersistEnrichments(bool persistEnrichments)
{
    this->persistEnrichments = persistEnrichments;
}

bool PersistenceOptions::isPersistFormat()
{
    return persistFormat;
}

void PersistenceOptions::setPersistFormat(bool persistFormat)
{
    this->persistFormat = persistFormat;
}

bool PersistenceOptions::isPersistData()
{
    return persistData;
}

void PersistenceOptions::setPersistData(bool persistData)
{
    this->persistData = persistData;
}

void PersistenceOptions::setPersistenceBindings(std::list  persistenceBindings)
{
    this->persistenceBindings = persistenceBindings;
}


*/