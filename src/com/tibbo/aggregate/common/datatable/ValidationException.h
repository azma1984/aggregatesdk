// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/ValidationException.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/DataTableException.h"



class com::tibbo::aggregate::common::datatable::ValidationException
    : public DataTableException
{

public:
    typedef DataTableException super;
protected:
    void ctor(std::string* message);
    void ctor(::java::lang::Throwable* cause);
    void ctor(std::string* message, ::java::lang::Throwable* cause);

    // Generated

public:
    ValidationException(std::string* message);
    ValidationException(::java::lang::Throwable* cause);
    ValidationException(std::string* message, ::java::lang::Throwable* cause);
protected:
    ValidationException(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
