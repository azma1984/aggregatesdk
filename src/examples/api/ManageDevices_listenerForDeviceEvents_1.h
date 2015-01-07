// Generated from /aggregate_sdk_5.11.00/src/examples/api/ManageDevices.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/data/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
#include <examples/api/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/context/DefaultContextEventListener.h"



class examples::api::ManageDevices_listenerForDeviceEvents_1
    : public ::com::tibbo::aggregate::common::context::DefaultContextEventListener
{

public:
    typedef ::com::tibbo::aggregate::common::context::DefaultContextEventListener super;
    void handle(::com::tibbo::aggregate::common::data::Event* event) /* throws(EventHandlingException) */;

    // Generated
    ManageDevices_listenerForDeviceEvents_1();
    ManageDevices_listenerForDeviceEvents_1(::com::tibbo::aggregate::common::context::CallerController* callerController);
    ManageDevices_listenerForDeviceEvents_1(::com::tibbo::aggregate::common::context::CallerController* callerController, ::java::lang::Integer* listenerCode);
    ManageDevices_listenerForDeviceEvents_1(::com::tibbo::aggregate::common::context::CallerController* callerController, ::java::lang::Integer* listenerCode, ::com::tibbo::aggregate::common::expression::Expression* filter);
    ManageDevices_listenerForDeviceEvents_1(::java::lang::Integer* listenerCode);
    

private:
    ::java::lang::Class* getClass0();
    friend class ManageDevices;
    friend class ManageDevices_awaitDeviceSynchronization_2;
};
