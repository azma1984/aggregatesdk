// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/agent/HistoricalValue.java

#ifndef HistoricalValueH
#define HistoricalValueH

//#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <string>
#include <ctime>



class HistoricalValue
{

private:
    std::string variable;
    std::time_t timestamp;
  //  DataTable* value; //todo define com\tibbo\aggregate\common\datatable\DataTable.h
    

public:
    std::string getVariable();
    void setVariable(const std::string &variable);
    std::time_t getTimestamp();
    void setTimestamp(std::time_t timestamp);
 //   DataTable* getValue();
   // void setValue(DataTable* value);

    HistoricalValue(const std::string &variable, std::time_t  timestamp/*, DataTable* value*/);

};

#endif