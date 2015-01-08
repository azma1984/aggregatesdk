// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/EventDefinition.java
#include "EventDefinition.h"

#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/event/PersistenceOptions.h"
#include <com/tibbo/aggregate/common/security/Permissions.h"

/*
EventDefinition::EventDefinition(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

EventDefinition::EventDefinition(std::string* name, ::com::tibbo::aggregate::common::datatable::TableFormat* format) 
    : EventDefinition(*static_cast< ::default_init_tag* >(0))
{
    ctor(name,format);
}

EventDefinition::EventDefinition(std::string* name, ::com::tibbo::aggregate::common::datatable::TableFormat* format, std::string* description) 
    : EventDefinition(*static_cast< ::default_init_tag* >(0))
{
    ctor(name,format,description);
}

EventDefinition::EventDefinition(std::string* name, ::com::tibbo::aggregate::common::datatable::TableFormat* format, std::string* description, std::string* group) 
    : EventDefinition(*static_cast< ::default_init_tag* >(0))
{
    ctor(name,format,description,group);
}

void EventDefinition::init()
{
    persistenceOptions = new ::com::tibbo::aggregate::common::event::PersistenceOptions();
}

void EventDefinition::ctor(std::string* name, ::com::tibbo::aggregate::common::datatable::TableFormat* format)
{
    super::ctor();
    init();
    init_(name, format, 0);
}

void EventDefinition::ctor(std::string* name, ::com::tibbo::aggregate::common::datatable::TableFormat* format, std::string* description)
{
    super::ctor();
    init();
    init_(name, format, description);
}

void EventDefinition::ctor(std::string* name, ::com::tibbo::aggregate::common::datatable::TableFormat* format, std::string* description, std::string* group)
{
    super::ctor();
    init();
    init_(name, format, description);
    setGroup(group);
}

void EventDefinition::init_(std::string* name, ::com::tibbo::aggregate::common::datatable::TableFormat* format, std::string* description)
{
    setName(name);
    setFormat(format);
    setDescription(description);
}

void EventDefinition::setFormat(::com::tibbo::aggregate::common::datatable::TableFormat* format)
{
    if(format != 0) {
        format)->makeImmutable(0);
    }
    this->format = format;
}

void EventDefinition::setHidden(bool hidden)
{
    this->hidden = hidden;
}

void EventDefinition::setPermissions(::com::tibbo::aggregate::common::security::Permissions* perms)
{
    this->permissions = perms;
}

void EventDefinition::setExpirationPeriod(long expirationPeriod)
{
    this->expirationPeriod = expirationPeriod;
}

void EventDefinition::setLevel(int level)
{
    this->level = level;
}

void EventDefinition::setSynchronous(bool synchronous)
{
    this->synchronous = synchronous;
}

com::tibbo::aggregate::common::datatable::TableFormat* EventDefinition::getFormat()
{
    return format;
}

bool EventDefinition::isHidden()
{
    return hidden;
}

com::tibbo::aggregate::common::security::Permissions* EventDefinition::getPermissions()
{
    return permissions;
}

long EventDefinition::getExpirationPeriod()
{
    return expirationPeriod;
}

int EventDefinition::getLevel()
{
    return level;
}

com::tibbo::aggregate::common::security::Permissions* EventDefinition::getFirePermissions()
{
    return firePermissions;
}

void EventDefinition::setFirePermissions(::com::tibbo::aggregate::common::security::Permissions* firePermissions)
{
    this->firePermissions = firePermissions;
}

bool EventDefinition::isSynchronous()
{
    return synchronous;
}

com::tibbo::aggregate::common::event::PersistenceOptions* EventDefinition::getPersistenceOptions()
{
    return persistenceOptions;
}

java::lang::Integer* EventDefinition::getMemoryStorageSize()
{
    return memoryStorageSize;
}

void EventDefinition::setMemoryStorageSize(::java::lang::Integer* memoryStorageSize)
{
    this->memoryStorageSize = memoryStorageSize;
}

EventDefinition* EventDefinition::clone()
{
    try {
        auto clone = java_cast< EventDefinition* >(super::clone());
        clone)->persistenceOptions = persistenceOptions)->clone();
        return clone;
    } catch (::java::lang::CloneNotSupportedException* ex) {
        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
    }
}

int EventDefinition::compareTo(EventDefinition* d)
{
    if(getIndex() != 0 || d)->getIndex() != 0) {
        auto my = getIndex() != 0 ? getIndex() : new ::java::lang::Integer(int(0));
        auto other = d)->getIndex() != 0 ? d)->getIndex() : new ::java::lang::Integer(int(0));
        return other)->compareTo(my);
    }
    return 0;
}

int EventDefinition::compareTo(void* arg0)
{ 
    return compareTo(dynamic_cast< EventDefinition* >(arg0));
}

int EventDefinition::hashCode()
{
    auto const prime = int(31);
    auto result = int(1);
    result = prime * result + ((getDescription() == 0) ? int(0) : getDescription())->hashCode());
    result = prime * result + static_cast< int >((expirationPeriod ^ (static_cast<long>(static_cast<uint64_t>(expirationPeriod) >> int(32)))));
    result = prime * result + ((format == 0) ? int(0) : format)->hashCode());
    result = prime * result + ((getGroup() == 0) ? int(0) : getGroup())->hashCode());
    result = prime * result + ((getHelp() == 0) ? int(0) : getHelp())->hashCode());
    result = prime * result + (hidden ? int(1231) : int(1237));
    result = prime * result + ((getIconId() == 0) ? int(0) : getIconId())->hashCode());
    result = prime * result + ((getIndex() == 0) ? int(0) : getIndex())->hashCode());
    result = prime * result + level;
    result = prime * result + ((getName() == 0) ? int(0) : getName())->hashCode());
    result = prime * result + ((permissions == 0) ? int(0) : permissions)->hashCode());
    result = prime * result + ((firePermissions == 0) ? int(0) : firePermissions)->hashCode());
    return result;
}

bool EventDefinition::equals(void* obj)
{
    if(this) == obj)
        return true;

    if(obj == 0)
        return false;

    if(getClass()) != obj)->getClass()))
        return false;

    auto other = java_cast< EventDefinition* >(obj);
    if(getDescription() == 0) {
        if(other)->getDescription() != 0)
            return false;

    } else if(!getDescription())->equals(other)->getDescription())))
        return false;

    if(expirationPeriod != other)->expirationPeriod)
        return false;

    if(format == 0) {
        if(other)->format != 0)
            return false;

    } else if(!format)->equals(other)->format)))
        return false;

    if(getGroup() == 0) {
        if(other)->getGroup() != 0)
            return false;

    } else if(!getGroup())->equals(other)->getGroup())))
        return false;

    if(getHelp() == 0) {
        if(other)->getHelp() != 0)
            return false;

    } else if(!getHelp())->equals(other)->getHelp())))
        return false;

    if(hidden != other)->hidden)
        return false;

    if(getIconId() == 0) {
        if(other)->getIconId() != 0)
            return false;

    } else if(!getIconId())->equals(other)->getIconId())))
        return false;

    if(getIndex() == 0) {
        if(other)->getIndex() != 0)
            return false;

    } else if(!getIndex())->equals(other)->getIndex())))
        return false;

    if(level != other)->level)
        return false;

    if(getName() == 0) {
        if(other)->getName() != 0)
            return false;

    } else if(!getName())->equals(other)->getName())))
        return false;

    if(permissions == 0) {
        if(other)->permissions != 0)
            return false;

    } else if(!permissions)->equals(other)->permissions)))
        return false;

    if(firePermissions == 0) {
        if(other)->firePermissions != 0)
            return false;

    } else if(!firePermissions)->equals(other)->firePermissions)))
        return false;

    return true;
}

*/

