// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/ServerDeviceController.java

#pragma once

#include <com/tibbo/aggregate/common/device/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"

struct com::tibbo::aggregate::common::device::ServerDeviceController
    
{

private:
    static const std::string TYPE_GENERIC_;

public:
    std::string* getType();
    std::string* getTypeName();
    void install(DeviceContext* deviceContext) /* throws(ContextException) */;
    void uninstall() /* throws(ContextException) */;
    void start();
    void stop();
    std::string* getDeviceIconId();
    std::string* getGroupName();

    // Generated
    
    static const std::string& TYPE_GENERIC();
};
