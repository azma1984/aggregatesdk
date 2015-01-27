#pragma once
#include "util/Pointers.h"

class QueryCondition
{
public:
    static const int EQ = 1;
    static const int GT = 2;
    static const int LT = 4;
    static const int NE = 8;
    static const int GE = GT | EQ;
    static const int LE = LT | EQ;

private:
    std::string field;
    AgObjectPtr value;
    int operator_;

public:
    QueryCondition(const std::string & field, AgObjectPtr value, int operator_ = EQ);
    std::string getField();
    AgObjectPtr getValue();
    int getOperator();

};
