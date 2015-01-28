// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/agent/HistoricalValue.java
#include "HistoricalValue.h"



HistoricalValue::HistoricalValue(const std::string &variable, std::time_t  timestamp, DataTablePtr value) 
{
    this->variable = variable;
    this->timestamp = timestamp;
    this->value = value;
}

std::string HistoricalValue::getVariable()
{
    return variable;
}

void HistoricalValue::setVariable(const std::string &variable)
{
    this->variable = variable;
}

std::time_t  HistoricalValue::getTimestamp()
{
    return timestamp;
}

void HistoricalValue::setTimestamp(std::time_t  timestamp)
{
    this->timestamp = timestamp;
}

DataTablePtr HistoricalValue::getValue()
{
    return value;
}

void HistoricalValue::setValue(DataTablePtr value)
{
    this->value = value;
}


