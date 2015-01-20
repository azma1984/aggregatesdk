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
    Date* timestamp;
    DataTable* value;
protected:
    void ctor(Date* timestamp, DataTable* value);

public:
    Date* getTimestamp();
    void setTimestamp(Date* timestamp);
    DataTable* getValue();
    void setValue(DataTable* value);

    // Generated
    CachedVariableValue(Date* timestamp, DataTable* value);
protected:
    CachedVariableValue(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
