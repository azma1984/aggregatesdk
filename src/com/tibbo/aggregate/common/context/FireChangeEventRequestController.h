// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/FireChangeEventRequestController.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/data/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/event/FireEventRequestController.h"



class FireChangeEventRequestController
    : public FireEventRequestController
{

public:
    typedef FireEventRequestController super;

private:
    VariableDefinition* def;
    DataTable* value;
protected:
    void ctor(long  customExpirationPeriod, VariableDefinition* def, DataTable* value);

public:
    Event* process(Event* event);

    // Generated
    FireChangeEventRequestController(long  customExpirationPeriod, VariableDefinition* def, DataTable* value);
protected:
    FireChangeEventRequestController(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
