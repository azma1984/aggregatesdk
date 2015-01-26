#include "context/VariableDefinition.h"



VariableDefinition::VariableDefinition(const std::string & name, TableFormat* format, bool readable, bool writable) 
{
  init(name,format,readable,writable,0);
}

VariableDefinition::VariableDefinition(const std::string & name, TableFormat* format, bool readable, bool writable, const std::string & description) 
{
  init(name,format,readable,writable,description);
}

VariableDefinition::VariableDefinition(const std::string & name, TableFormat* format, bool readable, bool writable, const std::string & description, const std::string & group) 
{
  init(name,format,readable,writable,description);
 // setGroup(group);
}

//void VariableDefinition::init()
//{
   // localCachingEnabled = true;
//    compatibilityConverters;
 //   persistent = true;
//}


void VariableDefinition::init(const std::string & name, TableFormat* format, bool readable, bool writable, const std::string & description)
{
 // setName(name);
//  setFormat(format);
 // this->readable = readable;
//  this->writable = writable;
 // setDescription(description != 0 ? description : name);
}

//void VariableDefinition::setFormat(TableFormat* format)
//{
//    if(format != 0) {
//        format)->makeImmutable(0);
//    }
//    this->format = format;
//}
//
//void VariableDefinition::setReadable(bool readable)
//{
//    this->readable = readable;
//}
//
//void VariableDefinition::setWritable(bool writable)
//{
//    this->writable = writable;
//}
//
//void VariableDefinition::setHidden(bool hidden)
//{
//    this->hidden = hidden;
//}
//
//void VariableDefinition::setGroup(const std::string & group)
//{
//    super::setGroup(group);
//    if(group != 0) {
//        allowUpdateEvents = true;
//    }
//}
//
//void VariableDefinition::setReadPermissions(Permissions* readPermissions)
//{
//    this->readPermissions = readPermissions;
//}
//
//void VariableDefinition::setWritePermissions(Permissions* writePermissions)
//{
//    this->writePermissions = writePermissions;
//}
//
//void VariableDefinition::setSetter(VariableSetter* setter)
//{
//    this->setter = setter;
//}
//
//void VariableDefinition::setGetter(VariableGetter* getter)
//{
//    this->getter = getter;
//}
//
//DateTableFormat* VariableDefinition::getFormat()
//{
//    return format;
//}
//
//bool VariableDefinition::isReadable()
//{
//    return readable;
//}
//
//bool VariableDefinition::isWritable()
//{
//    return writable;
//}
//
//bool VariableDefinition::isHidden()
//{
//    return hidden;
//}
//
//com::tibbo::aggregate::common::security::Permissions* VariableDefinition::getReadPermissions()
//{
//    return readPermissions;
//}
//
//com::tibbo::aggregate::common::security::Permissions* VariableDefinition::getWritePermissions()
//{
//    return writePermissions;
//}
//
//VariableSetter* VariableDefinition::getSetter()
//{
//    return setter;
//}
//
//VariableGetter* VariableDefinition::getGetter()
//{
//    return getter;
//}
//
//std::string VariableDefinition::getHelpId()
//{
//    return helpId;
//}
//
//void VariableDefinition::setHelpId(const std::string & helpId)
//{
//    this->helpId = helpId;
//}
//
//java::lang::Class* VariableDefinition::getValueClass()
//{
//    return valueClass;
//}
//
//void VariableDefinition::setValueClass(::java::lang::Class* valueClass)
//{
//    this->valueClass = valueClass;
//}
//
// VariableDefinition::getChangeEventsExpirationPeriod()
//{
//    return changeEventsExpirationPeriod;
//}
//
//void VariableDefinition::setChangeEventsExpirationPeriod(long  changeEventsExpirationPeriod)
//{
//    this->changeEventsExpirationPeriod = changeEventsExpirationPeriod;
//}
//
//bool VariableDefinition::isLocalCachingEnabled()
//{
//    return localCachingEnabled;
//}
//
//void VariableDefinition::setLocalCachingEnabled(bool valueCachingEnabled)
//{
//    this->localCachingEnabled = valueCachingEnabled;
//}
//
// VariableDefinition::getRemoteCacheTime()
//{
//    return remoteCacheTime;
//}
//
//void VariableDefinition::setRemoteCacheTime(long  remoteCacheTime)
//{
//    this->remoteCacheTime = remoteCacheTime;
//}
//
//DateDataTable* VariableDefinition::getDefaultValue()
//{
//    return defaultValue;
//}
//
//void VariableDefinition::setDefaultValue(DataTable* defaultValue)
//{
//    this->defaultValue = defaultValue;
//}
//
//bool VariableDefinition::isPersistent()
//{
//    return persistent;
//}
//
//void VariableDefinition::setPersistent(bool persistent)
//{
//    this->persistent = persistent;
//}
//
//bool VariableDefinition::isAllowUpdateEvents()
//{
//    return allowUpdateEvents;
//}
//
//void VariableDefinition::setAllowUpdateEvents(bool allowUpdateEvents)
//{
//    this->allowUpdateEvents = allowUpdateEvents;
//}
//
//void VariableDefinition::addCompatibilityConverter(CompatibilityConverter* converter)
//{
//    if(compatibilityConverters == 0) {
//        compatibilityConverters = new ::java::util::LinkedList();
//    }
//    compatibilityConverters)->add(converter));
//}
//
//std::list  VariableDefinition::getCompatibilityConverters()
//{
//    return compatibilityConverters;
//}
//
//VariableDefinition* VariableDefinition::clone()
//{
//    try {
//        return java_cast< VariableDefinition* >(super::clone());
//    } catch (::java::lang::CloneNotSupportedException* ex) {
//        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
//    }
//}
//
//int VariableDefinition::hashCode()
//{
//    auto const prime = int(31);
//    auto result = int(1);
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
//    return result;
//}
//
//bool VariableDefinition::equals(void* obj)
//{
//    if(this) == obj) {
//        return true;
//    }
//    if(obj == 0) {
//        return false;
//    }
//    if(getClass()) != obj)->getClass())) {
//        return false;
//    }
//    auto other = java_cast< VariableDefinition* >(obj);
//    if(getDescription() == 0) {
//        if(other)->getDescription() != 0) {
//            return false;
//        }
//    } else if(!getDescription())->equals(other)->getDescription()))) {
//        return false;
//    }
//    if(format == 0) {
//        if(other)->format != 0) {
//            return false;
//        }
//    } else if(!format)->equals(other)->format))) {
//        return false;
//    }
//    if(getGroup() == 0) {
//        if(other)->getGroup() != 0) {
//            return false;
//        }
//    } else if(!getGroup())->equals(other)->getGroup()))) {
//        return false;
//    }
//    if(getHelp() == 0) {
//        if(other)->getHelp() != 0) {
//            return false;
//        }
//    } else if(!getHelp())->equals(other)->getHelp()))) {
//        return false;
//    }
//    if(hidden != other)->hidden) {
//        return false;
//    }
//    if(getIconId() == 0) {
//        if(other)->getIconId() != 0) {
//            return false;
//        }
//    } else if(!getIconId())->equals(other)->getIconId()))) {
//        return false;
//    }
//    if(helpId == 0) {
//        if(other)->helpId != 0) {
//            return false;
//        }
//    } else if(!helpId)->equals(other)->helpId))) {
//        return false;
//    }
//    if(getIndex() == 0) {
//        if(other)->getIndex() != 0) {
//            return false;
//        }
//    } else if(!getIndex())->equals(other)->getIndex()))) {
//        return false;
//    }
//    if(getName() == 0) {
//        if(other)->getName() != 0) {
//            return false;
//        }
//    } else if(!getName())->equals(other)->getName()))) {
//        return false;
//    }
//    if(changeEventsExpirationPeriod == 0) {
//        if(other)->changeEventsExpirationPeriod != 0) {
//            return false;
//        }
//    } else if(!changeEventsExpirationPeriod)->equals(other)->changeEventsExpirationPeriod))) {
//        return false;
//    }
//    if(readable != other)->readable) {
//        return false;
//    }
//    if(writable != other)->writable) {
//        return false;
//    }
//    if(readPermissions == 0) {
//        if(other)->readPermissions != 0) {
//            return false;
//        }
//    } else if(!readPermissions)->equals(other)->readPermissions))) {
//        return false;
//    }
//    if(writePermissions == 0) {
//        if(other)->writePermissions != 0) {
//            return false;
//        }
//    } else if(!writePermissions)->equals(other)->writePermissions))) {
//        return false;
//    }
//    if(persistent != other)->persistent) {
//        return false;
//    }
//    return true;
//}
//
//int VariableDefinition::compareTo(VariableDefinition* d)
//{
//    if(getIndex() != 0 || d)->getIndex() != 0) {
//        auto my = getIndex() != 0 ? getIndex() : new ::java::lang::Integer(int(0));
//        auto other = d)->getIndex() != 0 ? d)->getIndex() : new ::java::lang::Integer(int(0));
//        return other)->compareTo(my);
//    }
//    return 0;
//}
//
//int VariableDefinition::compareTo(void* arg0)
//{ 
//    return compareTo(dynamic_cast< VariableDefinition* >(arg0));
//}
//

