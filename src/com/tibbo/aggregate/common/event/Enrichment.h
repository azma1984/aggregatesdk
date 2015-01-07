// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/event/Enrichment.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/event/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::event::Enrichment
    
{

public:
    typedef void super;

private:
    static const std::string FIELD_NAME_;
    static const std::string FIELD_VALUE_;
    static const std::string FIELD_DATE_;
    static const std::string FIELD_AUTHOR_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* FORMAT_;
    std::string* name;
    std::string* value;
    ::java::util::Date* date;
    std::string* author;
protected:
    void ctor();
    void ctor(std::string* name, std::string* value, ::java::util::Date* date, std::string* author);

public:
    std::string* getName();
    void setName(std::string* name);
    std::string* getValue();
    void setValue(std::string* value);
    ::java::util::Date* getDate();
    void setDate(::java::util::Date* date);
    std::string* getAuthor();
    void setAuthor(std::string* author);

    // Generated
    Enrichment();
    Enrichment(std::string* name, std::string* value, ::java::util::Date* date, std::string* author);
protected:
    Enrichment(const ::default_init_tag&);


public:
    
    static void 

private:
    static const std::string& FIELD_NAME();
    static const std::string& FIELD_VALUE();
    static const std::string& FIELD_DATE();
    static const std::string& FIELD_AUTHOR();

public:
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& FORMAT();

private:
    ::java::lang::Class* getClass0();
};
