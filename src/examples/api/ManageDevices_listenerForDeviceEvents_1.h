// Generated from /aggregate_sdk_5.11.00/src/examples/api/ManageDevices.java

#ifndef H
#define H

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/data/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
#include <examples/api/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/context/DefaultContextEventListener.h"



class examples::api::ManageDevices_listenerForDeviceEvents_1
    : public DefaultContextEventListener
{

public:
    typedef DefaultContextEventListener super;
    void handle(EventPtr event) /* throws(EventHandlingException) */;

    // Generated
    ManageDevices_listenerForDeviceEvents_1();
    ManageDevices_listenerForDeviceEvents_1(CallerControllerPtr callerController);
    ManageDevices_listenerForDeviceEvents_1(CallerControllerPtr callerController, int  listenerCode);
    ManageDevices_listenerForDeviceEvents_1(CallerControllerPtr callerController, int  listenerCode, ExpressionPtr filter);
    ManageDevices_listenerForDeviceEvents_1(int  listenerCode);
    

private:
    AgClassPtr getClass0();
    friend class ManageDevices;
    friend class ManageDevices_awaitDeviceSynchronization_2;
};
