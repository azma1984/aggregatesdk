// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/DataTableException.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/context/ContextException.h"



class com::tibbo::aggregate::common::datatable::DataTableException
    : public ::com::tibbo::aggregate::common::context::ContextException
{

public:
    typedef ::com::tibbo::aggregate::common::context::ContextException super;
protected:
    void ctor(std::string* message);
    void ctor(::java::lang::Throwable* cause);
    void ctor(std::string* message, ::java::lang::Throwable* cause);

    // Generated

public:
    DataTableException(std::string* message);
    DataTableException(::java::lang::Throwable* cause);
    DataTableException(std::string* message, ::java::lang::Throwable* cause);
protected:
    DataTableException(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
