// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/ServerDeviceController.java

#ifndef ServerDeviceControllerH
#define ServerDeviceControllerH

#include "device/DeviceContext.h"
#include "util/Interface.h"
#include <string>
#include <boost/shared_ptr.hpp>

class ServerDeviceController : public Interface
{
 public:  
	static const std::string TYPE_GENERIC;

    virtual std::string getType() = 0;
    virtual std::string getTypeName() = 0;
    virtual void install(boost::shared_ptr<DeviceContext> deviceContext) = 0;
    virtual void uninstall() = 0;
    virtual void start() = 0;
    virtual void stop() = 0;
    virtual std::string getDeviceIconId() = 0;
    virtual std::string getGroupName() = 0;
};


#endif
