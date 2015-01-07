// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/Choice.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/converter/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::datatable::converter::Choice
    
{

public:
    typedef void super;

private:
    static const std::string WHITESPACE_PATTERN_;
    std::string* name;
    std::string* description;
    void* object;
protected:
    void ctor(std::string* description, void* object);
    void ctor(std::string* name, std::string* description, void* object);

public:
    std::string* getName();
    std::string* getDescription();
    void* getObject();

    // Generated
    Choice(std::string* description, void* object);
    Choice(std::string* name, std::string* description, void* object);
protected:
    Choice(const ::default_init_tag&);


public:
    
    static void 

private:
    static const std::string& WHITESPACE_PATTERN();
    ::java::lang::Class* getClass0();
};
