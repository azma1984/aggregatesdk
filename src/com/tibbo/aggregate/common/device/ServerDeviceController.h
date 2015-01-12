// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/ServerDeviceController.java

#pragma once

#include "device/DeviceContext.h"
#include "util/Interface.h"
#include <string>
#include <boost/shared_ptr.hpp>

struct ServerDeviceController : public Interface
{
    static const std::string TYPE_GENERIC;

    virtual std::string getType() = 0;
    virtual std::string getTypeName() = 0;
    virtual void install(boost::shared_ptr<DeviceContext> deviceContext) = 0;//throws ContextException;
    virtual void uninstall() = 0;//throws ContextException;
    virtual void start() = 0;
    virtual void stop() = 0;
    virtual std::string getDeviceIconId() = 0;
    virtual std::string getGroupName() = 0;
};

const std::string ServerDeviceController::TYPE_GENERIC = "generic";

#endif
