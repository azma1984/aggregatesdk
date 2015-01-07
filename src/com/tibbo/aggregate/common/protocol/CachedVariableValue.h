// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/CachedVariableValue.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/protocol/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::protocol::CachedVariableValue
    
{

public:
    typedef void super;

private:
    ::java::util::Date* timestamp;
    ::com::tibbo::aggregate::common::datatable::DataTable* value;
protected:
    void ctor(::java::util::Date* timestamp, ::com::tibbo::aggregate::common::datatable::DataTable* value);

public:
    ::java::util::Date* getTimestamp();
    void setTimestamp(::java::util::Date* timestamp);
    ::com::tibbo::aggregate::common::datatable::DataTable* getValue();
    void setValue(::com::tibbo::aggregate::common::datatable::DataTable* value);

    // Generated
    CachedVariableValue(::java::util::Date* timestamp, ::com::tibbo::aggregate::common::datatable::DataTable* value);
protected:
    CachedVariableValue(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
