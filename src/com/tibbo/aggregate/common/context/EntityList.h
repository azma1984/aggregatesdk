// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/EntityList.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/lang/Cloneable.h"
//#include <java/lang/Iterable.h"



class com::tibbo::aggregate::common::context::EntityList
    
    , public ::java::lang::Cloneable
    , public ::java::lang::Iterable
{

public:
    typedef void super;

private:
    static const std::string FIELD_CONTEXT_;
    static const std::string FIELD_ENTITY_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* FORMAT_;
    std::list  entities;
protected:
    void ctor();
    void ctor(::com::tibbo::aggregate::common::datatable::DataTable* data);
    void ctor(std::string* context, std::string* entity);
    void ctor(EntityReference* ref);

public:
    bool includes(EntityReference* ref);
    bool includes(std::string* context, std::string* entity);
    ::com::tibbo::aggregate::common::datatable::DataTable* toDataTable();
    bool isEmpty();
    void add(std::string* context, std::string* entity);
    void add(EntityReference* ref);
    std::list  getEntities();
    ::java::util::Iterator* iterator();
    std::string* toString();
    EntityList* clone();
    int hashCode();
    bool equals(void* obj);

    // Generated
    EntityList();
    EntityList(::com::tibbo::aggregate::common::datatable::DataTable* data);
    EntityList(std::string* context, std::string* entity);
    EntityList(EntityReference* ref);
protected:
    EntityList(const ::default_init_tag&);


public:
    
    static void 

private:
    void init();

public:
    static const std::string& FIELD_CONTEXT();
    static const std::string& FIELD_ENTITY();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& FORMAT();

private:
    ::java::lang::Class* getClass0();
};
