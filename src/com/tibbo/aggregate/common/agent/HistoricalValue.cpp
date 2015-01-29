#include "agent/HistoricalValue.h"



HistoricalValue::HistoricalValue(const std::string &variable, DatePtr timestamp, DataTablePtr value)
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

DatePtr HistoricalValue::getTimestamp()
{
    return timestamp;
}

void HistoricalValue::setTimestamp(DatePtr  timestamp)
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


