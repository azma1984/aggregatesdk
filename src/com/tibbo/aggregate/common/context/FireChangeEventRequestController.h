// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/FireChangeEventRequestController.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/data/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/event/FireEventRequestController.h"



class com::tibbo::aggregate::common::context::FireChangeEventRequestController
    : public ::com::tibbo::aggregate::common::event::FireEventRequestController
{

public:
    typedef ::com::tibbo::aggregate::common::event::FireEventRequestController super;

private:
    VariableDefinition* def;
    ::com::tibbo::aggregate::common::datatable::DataTable* value;
protected:
    void ctor(::java::lang::Long* customExpirationPeriod, VariableDefinition* def, ::com::tibbo::aggregate::common::datatable::DataTable* value);

public:
    ::com::tibbo::aggregate::common::data::Event* process(::com::tibbo::aggregate::common::data::Event* event);

    // Generated
    FireChangeEventRequestController(::java::lang::Long* customExpirationPeriod, VariableDefinition* def, ::com::tibbo::aggregate::common::datatable::DataTable* value);
protected:
    FireChangeEventRequestController(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
