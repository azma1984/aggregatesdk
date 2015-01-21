// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/converter/Choice.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/converter/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class Dateconverter::Choice
    
{

public:
    typedef void super;

private:
    static const std::string WHITESPACE_PATTERN_;
    const std::string & name;
    const std::string & description;
    void* object;
protected:
    void ctor(const std::string & description, void* object);
    void ctor(const std::string & name, const std::string & description, void* object);

public:
    const std::string & getName();
    const std::string & getDescription();
    void* getObject();

    // Generated
    Choice(const std::string & description, void* object);
    Choice(const std::string & name, const std::string & description, void* object);
protected:
    Choice(const ::default_init_tag&);


public:
    
    static void 

private:
    static const std::string& WHITESPACE_PATTERN();
    ::java::lang::Class* getClass0();
};
