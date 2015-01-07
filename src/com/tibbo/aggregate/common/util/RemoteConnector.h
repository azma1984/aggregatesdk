// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/util/RemoteConnector.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"

struct com::tibbo::aggregate::common::util::RemoteConnector
    
{
    ::com::tibbo::aggregate::common::context::ContextManager* getContextManager();
    ::com::tibbo::aggregate::common::context::CallerController* getCallerController();
    UserSettings* getSettings();

    // Generated
    
};
