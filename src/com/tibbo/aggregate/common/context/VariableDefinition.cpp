// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/VariableDefinition.java
#include <com/tibbo/aggregate/common/context/VariableDefinition.h"

#include <com/tibbo/aggregate/common/context/CompatibilityConverter.h"
#include <com/tibbo/aggregate/common/context/VariableGetter.h"
#include <com/tibbo/aggregate/common/context/VariableSetter.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/security/Permissions.h"
/*
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/CloneNotSupportedException.h"
//#include <java/lang/IllegalStateException.h"
//#include <java/lang/Integer.h"
//#include <java/lang/Long.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/util/LinkedList.h"
//#include <java/util/List.h"
*/
template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(0);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::context::VariableDefinition::VariableDefinition(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::context::VariableDefinition::VariableDefinition(const std::string & name, TableFormat* format, bool readable, bool writable) 
    : VariableDefinition(*static_cast< ::default_init_tag* >(0))
{
    ctor(name,format,readable,writable);
}

com::tibbo::aggregate::common::context::VariableDefinition::VariableDefinition(const std::string & name, TableFormat* format, bool readable, bool writable, const std::string & description) 
    : VariableDefinition(*static_cast< ::default_init_tag* >(0))
{
    ctor(name,format,readable,writable,description);
}

com::tibbo::aggregate::common::context::VariableDefinition::VariableDefinition(const std::string & name, TableFormat* format, bool readable, bool writable, const std::string & description, const std::string & group) 
    : VariableDefinition(*static_cast< ::default_init_tag* >(0))
{
    ctor(name,format,readable,writable,description,group);
}

void com::tibbo::aggregate::common::context::VariableDefinition::init()
{
    localCachingEnabled = true;
    compatibilityConverters;
    persistent = true;
}

void com::tibbo::aggregate::common::context::VariableDefinition::ctor(const std::string & name, TableFormat* format, bool readable, bool writable)
{
    super::ctor();
    init();
    init_(name, format, readable, writable, 0);
}

void com::tibbo::aggregate::common::context::VariableDefinition::ctor(const std::string & name, TableFormat* format, bool readable, bool writable, const std::string & description)
{
    super::ctor();
    init();
    init_(name, format, readable, writable, description);
}

void com::tibbo::aggregate::common::context::VariableDefinition::ctor(const std::string & name, TableFormat* format, bool readable, bool writable, const std::string & description, const std::string & group)
{
    super::ctor();
    init();
    init_(name, format, readable, writable, description);
    setGroup(group);
}

void com::tibbo::aggregate::common::context::VariableDefinition::init_(const std::string & name, TableFormat* format, bool readable, bool writable, const std::string & description)
{
    setName(name);
    setFormat(format);
    this->readable = readable;
    this->writable = writable;
    setDescription(description != 0 ? description : name);
}

void com::tibbo::aggregate::common::context::VariableDefinition::setFormat(TableFormat* format)
{
    if(format != 0) {
        format)->makeImmutable(0);
    }
    this->format = format;
}

void com::tibbo::aggregate::common::context::VariableDefinition::setReadable(bool readable)
{
    this->readable = readable;
}

void com::tibbo::aggregate::common::context::VariableDefinition::setWritable(bool writable)
{
    this->writable = writable;
}

void com::tibbo::aggregate::common::context::VariableDefinition::setHidden(bool hidden)
{
    this->hidden = hidden;
}

void com::tibbo::aggregate::common::context::VariableDefinition::setGroup(const std::string & group)
{
    super::setGroup(group);
    if(group != 0) {
        allowUpdateEvents = true;
    }
}

void com::tibbo::aggregate::common::context::VariableDefinition::setReadPermissions(Permissions* readPermissions)
{
    this->readPermissions = readPermissions;
}

void com::tibbo::aggregate::common::context::VariableDefinition::setWritePermissions(Permissions* writePermissions)
{
    this->writePermissions = writePermissions;
}

void com::tibbo::aggregate::common::context::VariableDefinition::setSetter(VariableSetter* setter)
{
    this->setter = setter;
}

void com::tibbo::aggregate::common::context::VariableDefinition::setGetter(VariableGetter* getter)
{
    this->getter = getter;
}

com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::context::VariableDefinition::getFormat()
{
    return format;
}

bool com::tibbo::aggregate::common::context::VariableDefinition::isReadable()
{
    return readable;
}

bool com::tibbo::aggregate::common::context::VariableDefinition::isWritable()
{
    return writable;
}

bool com::tibbo::aggregate::common::context::VariableDefinition::isHidden()
{
    return hidden;
}

com::tibbo::aggregate::common::security::Permissions* com::tibbo::aggregate::common::context::VariableDefinition::getReadPermissions()
{
    return readPermissions;
}

com::tibbo::aggregate::common::security::Permissions* com::tibbo::aggregate::common::context::VariableDefinition::getWritePermissions()
{
    return writePermissions;
}

com::tibbo::aggregate::common::context::VariableSetter* com::tibbo::aggregate::common::context::VariableDefinition::getSetter()
{
    return setter;
}

com::tibbo::aggregate::common::context::VariableGetter* com::tibbo::aggregate::common::context::VariableDefinition::getGetter()
{
    return getter;
}

std::string com::tibbo::aggregate::common::context::VariableDefinition::getHelpId()
{
    return helpId;
}

void com::tibbo::aggregate::common::context::VariableDefinition::setHelpId(const std::string & helpId)
{
    this->helpId = helpId;
}

java::lang::Class* com::tibbo::aggregate::common::context::VariableDefinition::getValueClass()
{
    return valueClass;
}

void com::tibbo::aggregate::common::context::VariableDefinition::setValueClass(::java::lang::Class* valueClass)
{
    this->valueClass = valueClass;
}

java::lang::Long* com::tibbo::aggregate::common::context::VariableDefinition::getChangeEventsExpirationPeriod()
{
    return changeEventsExpirationPeriod;
}

void com::tibbo::aggregate::common::context::VariableDefinition::setChangeEventsExpirationPeriod(::java::lang::Long* changeEventsExpirationPeriod)
{
    this->changeEventsExpirationPeriod = changeEventsExpirationPeriod;
}

bool com::tibbo::aggregate::common::context::VariableDefinition::isLocalCachingEnabled()
{
    return localCachingEnabled;
}

void com::tibbo::aggregate::common::context::VariableDefinition::setLocalCachingEnabled(bool valueCachingEnabled)
{
    this->localCachingEnabled = valueCachingEnabled;
}

java::lang::Long* com::tibbo::aggregate::common::context::VariableDefinition::getRemoteCacheTime()
{
    return remoteCacheTime;
}

void com::tibbo::aggregate::common::context::VariableDefinition::setRemoteCacheTime(::java::lang::Long* remoteCacheTime)
{
    this->remoteCacheTime = remoteCacheTime;
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::context::VariableDefinition::getDefaultValue()
{
    return defaultValue;
}

void com::tibbo::aggregate::common::context::VariableDefinition::setDefaultValue(DataTable* defaultValue)
{
    this->defaultValue = defaultValue;
}

bool com::tibbo::aggregate::common::context::VariableDefinition::isPersistent()
{
    return persistent;
}

void com::tibbo::aggregate::common::context::VariableDefinition::setPersistent(bool persistent)
{
    this->persistent = persistent;
}

bool com::tibbo::aggregate::common::context::VariableDefinition::isAllowUpdateEvents()
{
    return allowUpdateEvents;
}

void com::tibbo::aggregate::common::context::VariableDefinition::setAllowUpdateEvents(bool allowUpdateEvents)
{
    this->allowUpdateEvents = allowUpdateEvents;
}

void com::tibbo::aggregate::common::context::VariableDefinition::addCompatibilityConverter(CompatibilityConverter* converter)
{
    if(compatibilityConverters == 0) {
        compatibilityConverters = new ::java::util::LinkedList();
    }
    compatibilityConverters)->add(converter));
}

java::util::List* com::tibbo::aggregate::common::context::VariableDefinition::getCompatibilityConverters()
{
    return compatibilityConverters;
}

com::tibbo::aggregate::common::context::VariableDefinition* com::tibbo::aggregate::common::context::VariableDefinition::clone()
{
    try {
        return java_cast< VariableDefinition* >(super::clone());
    } catch (::java::lang::CloneNotSupportedException* ex) {
        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
    }
}

int com::tibbo::aggregate::common::context::VariableDefinition::hashCode()
{
    auto const prime = int(31);
    auto result = int(1);
    result = prime * result + ((getDescription() == 0) ? int(0) : getDescription())->hashCode());
    result = prime * result + ((format == 0) ? int(0) : format)->hashCode());
    result = prime * result + ((getGroup() == 0) ? int(0) : getGroup())->hashCode());
    result = prime * result + ((getHelp() == 0) ? int(0) : getHelp())->hashCode());
    result = prime * result + (hidden ? int(1231) : int(1237));
    result = prime * result + ((getIconId() == 0) ? int(0) : getIconId())->hashCode());
    result = prime * result + ((helpId == 0) ? int(0) : helpId)->hashCode());
    result = prime * result + ((getIndex() == 0) ? int(0) : getIndex())->hashCode());
    result = prime * result + ((getName() == 0) ? int(0) : getName())->hashCode());
    result = prime * result + (readable ? int(1231) : int(1237));
    result = prime * result + (writable ? int(1231) : int(1237));
    result = prime * result + ((changeEventsExpirationPeriod == 0) ? int(0) : changeEventsExpirationPeriod)->hashCode());
    result = prime * result + ((readPermissions == 0) ? int(0) : readPermissions)->hashCode());
    result = prime * result + ((writePermissions == 0) ? int(0) : writePermissions)->hashCode());
    result = prime * result + (persistent ? int(1231) : int(1237));
    return result;
}

bool com::tibbo::aggregate::common::context::VariableDefinition::equals(void* obj)
{
    if(this) == obj) {
        return true;
    }
    if(obj == 0) {
        return false;
    }
    if(getClass()) != obj)->getClass())) {
        return false;
    }
    auto other = java_cast< VariableDefinition* >(obj);
    if(getDescription() == 0) {
        if(other)->getDescription() != 0) {
            return false;
        }
    } else if(!getDescription())->equals(other)->getDescription()))) {
        return false;
    }
    if(format == 0) {
        if(other)->format != 0) {
            return false;
        }
    } else if(!format)->equals(other)->format))) {
        return false;
    }
    if(getGroup() == 0) {
        if(other)->getGroup() != 0) {
            return false;
        }
    } else if(!getGroup())->equals(other)->getGroup()))) {
        return false;
    }
    if(getHelp() == 0) {
        if(other)->getHelp() != 0) {
            return false;
        }
    } else if(!getHelp())->equals(other)->getHelp()))) {
        return false;
    }
    if(hidden != other)->hidden) {
        return false;
    }
    if(getIconId() == 0) {
        if(other)->getIconId() != 0) {
            return false;
        }
    } else if(!getIconId())->equals(other)->getIconId()))) {
        return false;
    }
    if(helpId == 0) {
        if(other)->helpId != 0) {
            return false;
        }
    } else if(!helpId)->equals(other)->helpId))) {
        return false;
    }
    if(getIndex() == 0) {
        if(other)->getIndex() != 0) {
            return false;
        }
    } else if(!getIndex())->equals(other)->getIndex()))) {
        return false;
    }
    if(getName() == 0) {
        if(other)->getName() != 0) {
            return false;
        }
    } else if(!getName())->equals(other)->getName()))) {
        return false;
    }
    if(changeEventsExpirationPeriod == 0) {
        if(other)->changeEventsExpirationPeriod != 0) {
            return false;
        }
    } else if(!changeEventsExpirationPeriod)->equals(other)->changeEventsExpirationPeriod))) {
        return false;
    }
    if(readable != other)->readable) {
        return false;
    }
    if(writable != other)->writable) {
        return false;
    }
    if(readPermissions == 0) {
        if(other)->readPermissions != 0) {
            return false;
        }
    } else if(!readPermissions)->equals(other)->readPermissions))) {
        return false;
    }
    if(writePermissions == 0) {
        if(other)->writePermissions != 0) {
            return false;
        }
    } else if(!writePermissions)->equals(other)->writePermissions))) {
        return false;
    }
    if(persistent != other)->persistent) {
        return false;
    }
    return true;
}

int com::tibbo::aggregate::common::context::VariableDefinition::compareTo(VariableDefinition* d)
{
    if(getIndex() != 0 || d)->getIndex() != 0) {
        auto my = getIndex() != 0 ? getIndex() : new ::java::lang::Integer(int(0));
        auto other = d)->getIndex() != 0 ? d)->getIndex() : new ::java::lang::Integer(int(0));
        return other)->compareTo(my);
    }
    return 0;
}

int com::tibbo::aggregate::common::context::VariableDefinition::compareTo(void* arg0)
{ 
    return compareTo(dynamic_cast< VariableDefinition* >(arg0));
}



java::lang::Class* com::tibbo::aggregate::common::context::VariableDefinition::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.context.VariableDefinition", 53);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::context::VariableDefinition::getClass0()
{
    return class_();
}

