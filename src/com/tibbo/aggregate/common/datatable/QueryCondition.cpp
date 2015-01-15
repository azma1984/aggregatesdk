// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/QueryCondition.java
#include "QueryCondition.h"

/*
QueryCondition::QueryCondition(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

QueryCondition::QueryCondition(const std::string & field, void* value, int operator_) 
    : QueryCondition(*static_cast< ::default_init_tag* >(0))
{
    ctor(field,value,operator_);
}

QueryCondition::QueryCondition(const std::string & field, void* value) 
    : QueryCondition(*static_cast< ::default_init_tag* >(0))
{
    ctor(field,value);
}

void QueryCondition::init()
{
    operator_ = QueryCondition::EQ;
}

const int QueryCondition::EQ;

const int QueryCondition::GT;

const int QueryCondition::LT;

const int QueryCondition::NE;

const int QueryCondition::GE;

const int QueryCondition::LE;

void QueryCondition::ctor(const std::string & field, void* value, int operator_)
{
    super::ctor();
    init();
    this->field = field;
    this->value = value;
    this->operator_ = operator_;
}

void QueryCondition::ctor(const std::string & field, void* value)
{
    ctor(field, value, EQ);
}

std::string QueryCondition::getField()
{
    return field;
}

void* QueryCondition::getValue()
{
    return value;
}

int QueryCondition::getOperator()
{
    return operator;
}


*/