// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/EventDefinition.java
#ifndef EventDefinitionH
#define EventDefinitionH


#include "AbstractEntityDefinition.h"


class EventDefinition : public AbstractEntityDefinition
{

/*
private:
    ::com::tibbo::aggregate::common::datatable::TableFormat* format;
    bool hidden;
    ::com::tibbo::aggregate::common::security::Permissions* permissions;
    long expirationPeriod;
    int level;
    ::com::tibbo::aggregate::common::security::Permissions* firePermissions;
    bool synchronous;
    ::com::tibbo::aggregate::common::event::PersistenceOptions* persistenceOptions;
    ::java::lang::Integer* memoryStorageSize;
protected:
    void ctor(std::string* name, ::com::tibbo::aggregate::common::datatable::TableFormat* format);
    void ctor(std::string* name, ::com::tibbo::aggregate::common::datatable::TableFormat* format, std::string* description);
    void ctor(std::string* name, ::com::tibbo::aggregate::common::datatable::TableFormat* format, std::string* description, std::string* group);

private:
    void init_(std::string* name, ::com::tibbo::aggregate::common::datatable::TableFormat* format, std::string* description);

public:
    void setFormat(::com::tibbo::aggregate::common::datatable::TableFormat* format);
    void setHidden(bool hidden);
    void setPermissions(::com::tibbo::aggregate::common::security::Permissions* perms);
    void setExpirationPeriod(long expirationPeriod);
    void setLevel(int level);
    void setSynchronous(bool synchronous);
    ::com::tibbo::aggregate::common::datatable::TableFormat* getFormat();
    bool isHidden();
    ::com::tibbo::aggregate::common::security::Permissions* getPermissions();
    long getExpirationPeriod();
    int getLevel();
    ::com::tibbo::aggregate::common::security::Permissions* getFirePermissions();
    void setFirePermissions(::com::tibbo::aggregate::common::security::Permissions* firePermissions);
    bool isSynchronous();
    ::com::tibbo::aggregate::common::event::PersistenceOptions* getPersistenceOptions();
    ::java::lang::Integer* getMemoryStorageSize();
    void setMemoryStorageSize(::java::lang::Integer* memoryStorageSize);
    EventDefinition* clone();
    int compareTo(EventDefinition* d);
    int hashCode();
    bool equals(void* obj);

    // Generated
    EventDefinition(std::string* name, ::com::tibbo::aggregate::common::datatable::TableFormat* format);
    EventDefinition(std::string* name, ::com::tibbo::aggregate::common::datatable::TableFormat* format, std::string* description);
    EventDefinition(std::string* name, ::com::tibbo::aggregate::common::datatable::TableFormat* format, std::string* description, std::string* group);
protected:
    EventDefinition(const ::default_init_tag&);


public:
    

private:
    void init();

public:
    int compareTo(void* arg0);

*/
};

#endif
