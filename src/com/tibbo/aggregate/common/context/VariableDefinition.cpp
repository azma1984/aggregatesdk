#include "context/VariableDefinition.h"
#include "datatable/TableFormat.h"
#include "security/Permissions.h"

VariableDefinition::VariableDefinition(const std::string & name, TableFormatPtr format, bool readable, bool writable)
{
  init(name,format,readable,writable,0);
}

VariableDefinition::VariableDefinition(const std::string & name, TableFormatPtr format, bool readable, bool writable, const std::string & description)
{
  init(name,format,readable,writable,description);
}

VariableDefinition::VariableDefinition(const std::string & name, TableFormatPtr format, bool readable, bool writable, const std::string & description, const std::string & group)
{
  init(name,format,readable,writable,description);
 // setGroup(group);
}

void VariableDefinition::init(const std::string & name, TableFormatPtr format, bool readable, bool writable, const std::string & description)
{
    localCachingEnabled = true;
    persistent = true;
    hidden = false;

    setName(name);
    setFormat(format);
    this->readable = readable;
    this->writable = writable;
    setDescription(description.length() > 0 ? description : name);
}

void VariableDefinition::setFormat(TableFormatPtr format)
{
    if(format != 0)
    {
        format->makeImmutable(DataTablePtr());
    }
    this->format = format;
}

void VariableDefinition::setReadable(bool readable)
{
    this->readable = readable;
}

void VariableDefinition::setWritable(bool writable)
{
    this->writable = writable;
}

void VariableDefinition::setHidden(bool hidden)
{
    this->hidden = hidden;
}

void VariableDefinition::setGroup(const std::string & group)
{
    AbstractEntityDefinition::setGroup(group);
    if(group.length() > 0) {
        allowUpdateEvents = true;
    }
}

void VariableDefinition::setReadPermissions(PermissionsPtr readPermissions)
{
 this->readPermissions = readPermissions;
}

void VariableDefinition::setWritePermissions(PermissionsPtr writePermissions)
{
    this->writePermissions = writePermissions;
}

void VariableDefinition::setSetter(VariableSetterPtr setter)
{
    this->setter = setter;
}

void VariableDefinition::setGetter(VariableGetterPtr getter)
{
    this->getter = getter;
}

TableFormatPtr VariableDefinition::getFormat()
{
    return format;
}

bool VariableDefinition::isReadable()
{
    return readable;
}

bool VariableDefinition::isWritable()
{
    return writable;
}

bool VariableDefinition::isHidden()
{
    return hidden;
}

PermissionsPtr VariableDefinition::getReadPermissions()
{
    return readPermissions;
}

PermissionsPtr VariableDefinition::getWritePermissions()
{
    return writePermissions;
}

VariableSetterPtr VariableDefinition::getSetter()
{
    return setter;
}

VariableGetterPtr VariableDefinition::getGetter()
{
    return getter;
}

std::string VariableDefinition::getHelpId()
{
    return helpId;
}

void VariableDefinition::setHelpId(const std::string & helpId)
{
    this->helpId = helpId;
}

//java::lang::Class* VariableDefinition::getValueClass()
//{
//    return valueClass;
//}
//
void VariableDefinition::setValueClass(AgClassPtr valueClass)
{
    this->valueClass = valueClass;
}

long VariableDefinition::getChangeEventsExpirationPeriod()
{
    return changeEventsExpirationPeriod;
}

void VariableDefinition::setChangeEventsExpirationPeriod(long  changeEventsExpirationPeriod)
{
    this->changeEventsExpirationPeriod = changeEventsExpirationPeriod;
}

bool VariableDefinition::isLocalCachingEnabled()
{
    return localCachingEnabled;
}

void VariableDefinition::setLocalCachingEnabled(bool valueCachingEnabled)
{
    this->localCachingEnabled = valueCachingEnabled;
}

long VariableDefinition::getRemoteCacheTime()
{
    return remoteCacheTime;
}

void VariableDefinition::setRemoteCacheTime(long  remoteCacheTime)
{
    this->remoteCacheTime = remoteCacheTime;
}

DataTablePtr VariableDefinition::getDefaultValue()
{
    return defaultValue;
}

void VariableDefinition::setDefaultValue(DataTablePtr defaultValue)
{
    this->defaultValue = defaultValue;
}

bool VariableDefinition::isPersistent()
{
    return persistent;
}

void VariableDefinition::setPersistent(bool persistent)
{
    this->persistent = persistent;
}

bool VariableDefinition::isAllowUpdateEvents()
{
    return allowUpdateEvents;
}

void VariableDefinition::setAllowUpdateEvents(bool allowUpdateEvents)
{
    this->allowUpdateEvents = allowUpdateEvents;
}

void VariableDefinition::addCompatibilityConverter(CompatibilityConverterPtr converter)
{
    compatibilityConverters.push_back(converter);
}

std::list< CompatibilityConverterPtr > VariableDefinition::getCompatibilityConverters()
{
    return compatibilityConverters;
}

VariableDefinition* VariableDefinition::clone() const
{
//    try {
//        return java_cast< VariableDefinitionPtr >(super::clone());
//    } catch (::java::lang::CloneNotSupportedException* ex) {
//        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
//    }
    return static_cast<VariableDefinition*>(0);
}

int VariableDefinition::hashCode()
{
    int const prime = int(31);
    int result = int(1);
//    result = prime * result + ((getDescription() == 0) ? int(0) : getDescription())->hashCode());
//    result = prime * result + ((format == 0) ? int(0) : format)->hashCode());
//    result = prime * result + ((getGroup() == 0) ? int(0) : getGroup())->hashCode());
//    result = prime * result + ((getHelp() == 0) ? int(0) : getHelp())->hashCode());
//    result = prime * result + (hidden ? int(1231) : int(1237));
//    result = prime * result + ((getIconId() == 0) ? int(0) : getIconId())->hashCode());
//    result = prime * result + ((helpId == 0) ? int(0) : helpId)->hashCode());
//    result = prime * result + ((getIndex() == 0) ? int(0) : getIndex())->hashCode());
//    result = prime * result + ((getName() == 0) ? int(0) : getName())->hashCode());
//    result = prime * result + (readable ? int(1231) : int(1237));
//    result = prime * result + (writable ? int(1231) : int(1237));
//    result = prime * result + ((changeEventsExpirationPeriod == 0) ? int(0) : changeEventsExpirationPeriod)->hashCode());
//    result = prime * result + ((readPermissions == 0) ? int(0) : readPermissions)->hashCode());
//    result = prime * result + ((writePermissions == 0) ? int(0) : writePermissions)->hashCode());
//    result = prime * result + (persistent ? int(1231) : int(1237));
    return result;
}

bool VariableDefinition::equals(VariableDefinition *other)
{
    if(this == other) {
        return true;
    }

    if(other == 0) {
        return false;
    }

    if (getDescription() == other->getDescription()) {
        return false;
    }

    if(format == 0) {
        if(other->format != 0) {
            return false;
        }
    } else if(format->equals(other->format)) {
        return false;
    }

    if (getGroup() != other->getGroup()) {
        return false;
    }

    if (getHelp() != other->getHelp()) {
        return false;
    }

    if(hidden != other->hidden) {
        return false;
    }

    if (getIconId() != other->getIconId()) {
        return false;
    }

    if(helpId != other->helpId) {
        return false;
    }

    if(getIndex() != other->getIndex()) {
        return false;
    }

    if (getName() != other->getName()) {
        return false;
    }

    if (changeEventsExpirationPeriod != other->changeEventsExpirationPeriod) {
        return false;
    }

    if (readable != other->readable) {
        return false;
    }

    if (writable != other->writable) {
        return false;
    }

    if (readPermissions == 0) {
        if(other->readPermissions != 0) {
            return false;
        }
    }else if(!readPermissions->equals(other->readPermissions)) {
        return false;
    }
    if (writePermissions == 0) {
        if(other->writePermissions != 0) {
            return false;
        }
    } else if(!writePermissions->equals(other->writePermissions)) {
        return false;
    }

    if (persistent != other->persistent) {
        return false;
    }
    return true;
}

int VariableDefinition::compareTo(VariableDefinition *d) const
{
//    if(getIndex() != 0 || d)->getIndex() != 0) {
//        auto my = getIndex() != 0 ? getIndex() : new ::java::lang::Integer(int(0));
//        auto other = d)->getIndex() != 0 ? d)->getIndex() : new ::java::lang::Integer(int(0));
//        return other)->compareTo(my);
//    }
    return 0;
}


