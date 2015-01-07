// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/QueryCondition.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::datatable::QueryCondition
    
{

public:
    typedef void super;
    static const int EQ = 1) };
    static const int GT = 2) };
    static const int LT = 4) };
    static const int NE = 8) };
    static const int GE = 3) };
    static const int LE = 5) };

private:
    std::string* field;
    void* value;
    int operator_;
protected:
    void ctor(std::string* field, void* value, int operator_);
    void ctor(std::string* field, void* value);

public:
    std::string* getField();
    void* getValue();
    int getOperator();

    // Generated
    QueryCondition(std::string* field, void* value, int operator_);
    QueryCondition(std::string* field, void* value);
protected:
    QueryCondition(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
};
