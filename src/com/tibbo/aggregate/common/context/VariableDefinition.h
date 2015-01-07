// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/VariableDefinition.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/security/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/context/AbstractEntityDefinition.h"
//#include <java/lang/Cloneable.h"
//#include <java/lang/Comparable.h"



class com::tibbo::aggregate::common::context::VariableDefinition
    : public AbstractEntityDefinition
    , public ::java::lang::Cloneable
    , public ::java::lang::Comparable
{

public:
    typedef AbstractEntityDefinition super;

private:
    ::com::tibbo::aggregate::common::datatable::TableFormat* format;
    bool readable;
    bool writable;
    bool hidden;
    ::com::tibbo::aggregate::common::security::Permissions* readPermissions;
    ::com::tibbo::aggregate::common::security::Permissions* writePermissions;
    std::string* helpId;
    VariableGetter* getter;
    VariableSetter* setter;
    bool allowUpdateEvents;
    ::java::lang::Long* changeEventsExpirationPeriod;
    bool localCachingEnabled;
    ::java::lang::Long* remoteCacheTime;
    ::java::lang::Class* valueClass;
    std::list  compatibilityConverters;
    bool persistent;
    ::com::tibbo::aggregate::common::datatable::DataTable* defaultValue;
protected:
    void ctor(std::string* name, ::com::tibbo::aggregate::common::datatable::TableFormat* format, bool readable, bool writable);
    void ctor(std::string* name, ::com::tibbo::aggregate::common::datatable::TableFormat* format, bool readable, bool writable, std::string* description);
    void ctor(std::string* name, ::com::tibbo::aggregate::common::datatable::TableFormat* format, bool readable, bool writable, std::string* description, std::string* group);

private:
    void init_(std::string* name, ::com::tibbo::aggregate::common::datatable::TableFormat* format, bool readable, bool writable, std::string* description);

public:
    void setFormat(::com::tibbo::aggregate::common::datatable::TableFormat* format);
    void setReadable(bool readable);
    void setWritable(bool writable);
    void setHidden(bool hidden);
    void setGroup(std::string* group);
    void setReadPermissions(::com::tibbo::aggregate::common::security::Permissions* readPermissions);
    void setWritePermissions(::com::tibbo::aggregate::common::security::Permissions* writePermissions);
    void setSetter(VariableSetter* setter);
    void setGetter(VariableGetter* getter);
    ::com::tibbo::aggregate::common::datatable::TableFormat* getFormat();
    bool isReadable();
    bool isWritable();
    bool isHidden();
    ::com::tibbo::aggregate::common::security::Permissions* getReadPermissions();
    ::com::tibbo::aggregate::common::security::Permissions* getWritePermissions();
    VariableSetter* getSetter();
    VariableGetter* getGetter();
    std::string* getHelpId();
    void setHelpId(std::string* helpId);
    ::java::lang::Class* getValueClass();
    void setValueClass(::java::lang::Class* valueClass);
    ::java::lang::Long* getChangeEventsExpirationPeriod();
    void setChangeEventsExpirationPeriod(::java::lang::Long* changeEventsExpirationPeriod);
    bool isLocalCachingEnabled();
    void setLocalCachingEnabled(bool valueCachingEnabled);
    ::java::lang::Long* getRemoteCacheTime();
    void setRemoteCacheTime(::java::lang::Long* remoteCacheTime);
    ::com::tibbo::aggregate::common::datatable::DataTable* getDefaultValue();
    void setDefaultValue(::com::tibbo::aggregate::common::datatable::DataTable* defaultValue);
    bool isPersistent();
    void setPersistent(bool persistent);
    bool isAllowUpdateEvents();
    void setAllowUpdateEvents(bool allowUpdateEvents);
    void addCompatibilityConverter(CompatibilityConverter* converter);
    std::list  getCompatibilityConverters();
    VariableDefinition* clone();
    int hashCode();
    bool equals(void* obj);
    int compareTo(VariableDefinition* d);

    // Generated
    VariableDefinition(std::string* name, ::com::tibbo::aggregate::common::datatable::TableFormat* format, bool readable, bool writable);
    VariableDefinition(std::string* name, ::com::tibbo::aggregate::common::datatable::TableFormat* format, bool readable, bool writable, std::string* description);
    VariableDefinition(std::string* name, ::com::tibbo::aggregate::common::datatable::TableFormat* format, bool readable, bool writable, std::string* description, std::string* group);
protected:
    VariableDefinition(const ::default_init_tag&);


public:
    

private:
    void init();

public:
    int compareTo(void* arg0);

private:
    ::java::lang::Class* getClass0();
    friend class VariableDefinition_UpdateEventsPolicy;
};
