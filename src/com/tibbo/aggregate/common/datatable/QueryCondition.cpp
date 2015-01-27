#include "QueryCondition.h"

QueryCondition::QueryCondition(const std::string &field, AgObjectPtr value, int operator_)
{
    this->field = field;
    this->value = value;
    this->operator_ = operator_;
}

std::string QueryCondition::getField()
{
    return field;
}

AgObjectPtr QueryCondition::getValue()
{
    return value;
}

int QueryCondition::getOperator()
{
    return operator_;
}
