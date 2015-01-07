// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/SortOrder.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::datatable::SortOrder
    
{

public:
    typedef void super;

private:
    std::string* field;
    bool ascending;
protected:
    void ctor(std::string* field, bool ascending);

public:
    std::string* getField();
    void setField(std::string* field);
    bool isAscending();
    void setAscending(bool ascending);

    // Generated
    SortOrder(std::string* field, bool ascending);
protected:
    SortOrder(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
