// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/agent/HistoricalValue.java

#ifndef HistoricalValueH
#define HistoricalValueH

#include "DataTable.h"
#include <string>
#include <ctime>



class HistoricalValue
{

private:
    std::string variable;
    std::time_t timestamp;
    DataTablePtr value; //define com\tibbo\aggregate\common\datatable\DataTable.h
    

public:
    std::string getVariable();
    void setVariable(const std::string &variable);
    std::time_t getTimestamp();
    void setTimestamp(std::time_t timestamp);
    DataTablePtr getValue();
    void setValue(DataTablePtr value);

    HistoricalValue(const std::string &variable, std::time_t  timestamp, DataTablePtr value);

};

#endif