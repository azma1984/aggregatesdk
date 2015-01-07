// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/ServiceFunction.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/device/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"

struct com::tibbo::aggregate::common::device::ServiceFunction
    
{
    ::com::tibbo::aggregate::common::context::FunctionDefinition* getFunctionDefinition();
    ::com::tibbo::aggregate::common::datatable::DataTable* execute(::com::tibbo::aggregate::common::datatable::DataTable* parametersDataTable) /* throws(DeviceException) */;

    // Generated
    
};
