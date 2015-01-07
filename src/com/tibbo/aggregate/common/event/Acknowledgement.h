// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/event/Acknowledgement.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/event/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/lang/Cloneable.h"



class com::tibbo::aggregate::common::event::Acknowledgement
    
    , public ::java::lang::Cloneable
{

public:
    typedef void super;

private:
    static const std::string FIELD_AUTHOR_;
    static const std::string FIELD_TIME_;
    static const std::string FIELD_TEXT_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* FORMAT_;
    std::string* author;
    ::java::util::Date* time;
    std::string* text;
protected:
    void ctor();
    void ctor(std::string* author, ::java::util::Date* time, std::string* text);

public:
    std::string* getAuthor();
    std::string* getText();
    ::java::util::Date* getTime();
    void setAuthor(std::string* author);
    void setText(std::string* text);
    void setTime(::java::util::Date* time);
    ::com::tibbo::aggregate::common::datatable::TableFormat* getFormat();
    Acknowledgement* clone();

    // Generated
    Acknowledgement();
    Acknowledgement(std::string* author, ::java::util::Date* time, std::string* text);
protected:
    Acknowledgement(const ::default_init_tag&);


public:
    
    static void 

private:
    static const std::string& FIELD_AUTHOR();
    static const std::string& FIELD_TIME();
    static const std::string& FIELD_TEXT();

public:
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& FORMAT();

private:
    ::java::lang::Class* getClass0();
};
