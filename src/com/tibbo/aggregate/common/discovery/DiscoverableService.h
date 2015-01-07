// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/discovery/DiscoverableService.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/discovery/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"

struct com::tibbo::aggregate::common::discovery::DiscoverableService
    
{
    std::list  check(DiscoverableServiceDefinition* definition, std::string* address, long timeout, int retriesCount);

    // Generated
    
};
