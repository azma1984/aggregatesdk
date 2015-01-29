#include "EventDefinition.h"


EventDefinition::EventDefinition(const std::string & name, TableFormatPtr format)
{
   init(name, format, 0);
}

EventDefinition::EventDefinition(const std::string & name, TableFormatPtr format, const std::string & description)
{
  init(name, format, description);
}

EventDefinition::EventDefinition(const std::string & name, TableFormatPtr format, const std::string & description, const std::string & group)
{
  init(name, format, description);
  setGroup(group);
}

void EventDefinition::init(const std::string & name, TableFormatPtr format, const std::string & description)
{
  // persistenceOptions = new PersistenceOptions();
  
   setName(name);
//   setFormat(format);
   setDescription(description);
}

/*
void EventDefinition::setFormat(TableFormatPtr format)
{
    if(format != 0) {
        format)->makeImmutable(0);
    }
    this->format = format;
}
  */
void EventDefinition::setHidden(bool hidden)
{
    this->hidden = hidden;
}

void EventDefinition::setPermissions(  PermissionsPtr perms)
{
	this->permissions = perms;
}
 /*
void EventDefinition::setExpirationPeriod(long expirationPeriod)
{
    this->expirationPeriod = expirationPeriod;
}
 */
void EventDefinition::setLevel(int level)
{
	this->level = level;
}

void EventDefinition::setSynchronous(bool synchronous)
{
    this->synchronous = synchronous;
}

//DateTableFormatPtr EventDefinition::getFormat()
//{
//	return format;
//}

bool EventDefinition::isHidden()
{
	return hidden;
}

PermissionsPtr EventDefinition::getPermissions()
{
	return permissions;
}
  /*
long EventDefinition::getExpirationPeriod()
{
    return expirationPeriod;
}

int EventDefinition::getLevel()
{
    return level;
}

com::tibbo::aggregate::common::security::PermissionsPtr EventDefinition::getFirePermissions()
{
    return firePermissions;
}

void EventDefinition::setFirePermissions(PermissionsPtr firePermissions)
{
    this->firePermissions = firePermissions;
}

bool EventDefinition::isSynchronous()
{
    return synchronous;
}
*/
PersistenceOptionsPtr EventDefinition::getPersistenceOptions()
{
	return persistenceOptions;
}
 /*
java::lang::Integer* EventDefinition::getMemoryStorageSize()
{
    return memoryStorageSize;
}

void EventDefinition::setMemoryStorageSize(int  memoryStorageSize)
{
    this->memoryStorageSize = memoryStorageSize;
}

EventDefinitionPtr EventDefinition::clone()
{
    try {
        auto clone = java_cast< EventDefinitionPtr >(super::clone());
        clone)->persistenceOptions = persistenceOptions)->clone();
        return clone;
    } catch (::java::lang::CloneNotSupportedException* ex) {
        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
    }
}

int EventDefinition::compareTo(EventDefinitionPtr d)
{
    if(getIndex() != 0 || d)->getIndex() != 0) {
        auto my = getIndex() != 0 ? getIndex() : new ::java::lang::Integer(int(0));
        auto other = d)->getIndex() != 0 ? d)->getIndex() : new ::java::lang::Integer(int(0));
        return other)->compareTo(my);
    }
    return 0;
}

int EventDefinition::compareTo(AgObjectPtr arg0)
{ 
    return compareTo(dynamic_cast< EventDefinitionPtr >(arg0));
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

bool EventDefinition::equals(AgObjectPtr obj)
{
    if(this) == obj)
        return true;

    if(obj == 0)
        return false;

    if(getClass()) != obj)->getClass()))
        return false;

    auto other = java_cast< EventDefinitionPtr >(obj);
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

