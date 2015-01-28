// Generated from /aggregate_sdk_5.11.00/src/examples/api/ManageDevices.java

#ifndef H
#define H

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/data/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
#include <examples/api/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/concurrent/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/context/DefaultContextEventListener.h"



class examples::api::ManageDevices_awaitDeviceSynchronization_2
    : public DefaultContextEventListener
{

public:
    typedef DefaultContextEventListener super;
    void handle(EventPtr event) /* throws(EventHandlingException) */;

    // Generated
    ManageDevices_awaitDeviceSynchronization_2(int statusSynchronized, ::java::util::concurrent::CountDownLatch* latch, ContextPtr deviceContext);
    ManageDevices_awaitDeviceSynchronization_2(int statusSynchronized, ::java::util::concurrent::CountDownLatch* latch, ContextPtr deviceContext, CallerControllerPtr callerController);
    ManageDevices_awaitDeviceSynchronization_2(int statusSynchronized, ::java::util::concurrent::CountDownLatch* latch, ContextPtr deviceContext, CallerControllerPtr callerController, int  listenerCode);
    ManageDevices_awaitDeviceSynchronization_2(int statusSynchronized, ::java::util::concurrent::CountDownLatch* latch, ContextPtr deviceContext, CallerControllerPtr callerController, int  listenerCode, ExpressionPtr filter);
    ManageDevices_awaitDeviceSynchronization_2(int statusSynchronized, ::java::util::concurrent::CountDownLatch* latch, ContextPtr deviceContext, int  listenerCode);
    
    int statusSynchronized;
    ::java::util::concurrent::CountDownLatch* latch;
    ContextPtr deviceContext;

private:
    AgClassPtr getClass0();
    friend class ManageDevices;
    friend class ManageDevices_listenerForDeviceEvents_1;
};
