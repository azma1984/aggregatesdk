// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/sync/ValueReader.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/device/sync/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"

struct com::tibbo::aggregate::common::device::sync::ValueReader
    
{
    ::com::tibbo::aggregate::common::datatable::DataTable* read(::com::tibbo::aggregate::common::context::CallerController* callerController, ::com::tibbo::aggregate::common::context::RequestController* requestController) /* throws(ContextException, DeviceException, DisconnectionException) */;

    // Generated
    
};
