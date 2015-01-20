// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/CachedVariableValue.java
#include <com/tibbo/aggregate/common/protocol/CachedVariableValue.h"

#include <com/tibbo/aggregate/common/datatable/DataTable.h"
//#include <java/util/Date.h"

com::tibbo::aggregate::common::protocol::CachedVariableValue::CachedVariableValue(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::protocol::CachedVariableValue::CachedVariableValue(Date* timestamp, DataTable* value) 
    : CachedVariableValue(*static_cast< ::default_init_tag* >(0))
{
    ctor(timestamp,value);
}

void com::tibbo::aggregate::common::protocol::CachedVariableValue::ctor(Date* timestamp, DataTable* value)
{
    super::ctor();
    this->timestamp = timestamp;
    this->value = value;
}

Date* com::tibbo::aggregate::common::protocol::CachedVariableValue::getTimestamp()
{
    return timestamp;
}

void com::tibbo::aggregate::common::protocol::CachedVariableValue::setTimestamp(Date* timestamp)
{
    this->timestamp = timestamp;
}

DateDataTable* com::tibbo::aggregate::common::protocol::CachedVariableValue::getValue()
{
    return value;
}

void com::tibbo::aggregate::common::protocol::CachedVariableValue::setValue(DataTable* value)
{
    this->value = value;
}



java::lang::Class* com::tibbo::aggregate::common::protocol::CachedVariableValue::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.protocol.CachedVariableValue", 55);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::protocol::CachedVariableValue::getClass0()
{
    return class_();
}

