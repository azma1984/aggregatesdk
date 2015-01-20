// Generated from /aggregate_sdk_5.11.00/src/examples/api/ManageDevices.java

#pragma once

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
    void handle(Event* event) /* throws(EventHandlingException) */;

    // Generated
    ManageDevices_awaitDeviceSynchronization_2(int statusSynchronized, ::java::util::concurrent::CountDownLatch* latch, Context* deviceContext);
    ManageDevices_awaitDeviceSynchronization_2(int statusSynchronized, ::java::util::concurrent::CountDownLatch* latch, Context* deviceContext, CallerController* callerController);
    ManageDevices_awaitDeviceSynchronization_2(int statusSynchronized, ::java::util::concurrent::CountDownLatch* latch, Context* deviceContext, CallerController* callerController, int  listenerCode);
    ManageDevices_awaitDeviceSynchronization_2(int statusSynchronized, ::java::util::concurrent::CountDownLatch* latch, Context* deviceContext, CallerController* callerController, int  listenerCode, Expression* filter);
    ManageDevices_awaitDeviceSynchronization_2(int statusSynchronized, ::java::util::concurrent::CountDownLatch* latch, Context* deviceContext, int  listenerCode);
    
    int statusSynchronized;
    ::java::util::concurrent::CountDownLatch* latch;
    Context* deviceContext;

private:
    ::java::lang::Class* getClass0();
    friend class ManageDevices;
    friend class ManageDevices_listenerForDeviceEvents_1;
};
