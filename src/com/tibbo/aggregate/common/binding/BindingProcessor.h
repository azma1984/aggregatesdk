// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/binding/BindingProcessor.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/binding/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/concurrent/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"

struct com::tibbo::aggregate::common::binding::BindingProcessor
    
{
    bool start();
    void stop();
    void setEnabled(bool enabled);
    void submit(::java::util::concurrent::Callable* task);

    // Generated
    
};
