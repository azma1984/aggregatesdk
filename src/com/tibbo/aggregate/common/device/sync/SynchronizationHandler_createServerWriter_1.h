// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/sync/SynchronizationHandler.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/device/sync/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/device/sync/AbstractValueWriter.h"



class com::tibbo::aggregate::common::device::sync::SynchronizationHandler_createServerWriter_1
    : public AbstractValueWriter
{

public:
    typedef AbstractValueWriter super;
    void write(::com::tibbo::aggregate::common::datatable::DataTable* value, ::com::tibbo::aggregate::common::context::CallerController* callerController, ::com::tibbo::aggregate::common::context::RequestController* requestController) /* throws(ContextException, DeviceException, DisconnectionException) */;

    // Generated
    SynchronizationHandler_createServerWriter_1(SynchronizationHandler *SynchronizationHandler_this, std::string* name);
    SynchronizationHandler_createServerWriter_1(SynchronizationHandler *SynchronizationHandler_this);
    
    SynchronizationHandler *SynchronizationHandler_this;

private:
    ::java::lang::Class* getClass0();
    friend class SynchronizationHandler;
    friend class SynchronizationHandler_createServerReader_2;
};
