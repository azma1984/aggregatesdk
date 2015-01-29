#pragma once

#include "util/Date.h"
#include "datatable/DataTable.h"
#include <string>

class HistoricalValue
{
private:
    std::string variable;
    DatePtr timestamp;
    DataTablePtr value;

public:
    HistoricalValue(const std::string& variable, DatePtr timestamp, DataTablePtr value);

    std::string getVariable();
    void setVariable(const std::string &variable);
    DatePtr  HistoricalValue::getTimestamp();
    void setTimestamp(DatePtr timestamp);
    DataTablePtr HistoricalValue::getValue();
    void setValue(DataTablePtr value);
}
