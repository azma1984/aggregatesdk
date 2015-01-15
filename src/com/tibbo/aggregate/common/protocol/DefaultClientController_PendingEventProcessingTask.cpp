// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/DefaultClientController.java
//#include <com/tibbo/aggregate/common/protocol/DefaultClientController_PendingEventProcessingTask.h"

#include <com/tibbo/aggregate/common/protocol/DefaultClientController.h"

com::tibbo::aggregate::common::protocol::DefaultClientController_PendingEventProcessingTask::DefaultClientController_PendingEventProcessingTask(DefaultClientController *DefaultClientController_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , DefaultClientController_this(DefaultClientController_this)
{
    
}

com::tibbo::aggregate::common::protocol::DefaultClientController_PendingEventProcessingTask::DefaultClientController_PendingEventProcessingTask(DefaultClientController *DefaultClientController_this)
    : DefaultClientController_PendingEventProcessingTask(DefaultClientController_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::protocol::DefaultClientController_PendingEventProcessingTask::run()
{
    DefaultClientController_this->processPendingEvents();
}



java::lang::Class* com::tibbo::aggregate::common::protocol::DefaultClientController_PendingEventProcessingTask::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.protocol.DefaultClientController.PendingEventProcessingTask", 86);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::protocol::DefaultClientController_PendingEventProcessingTask::getClass0()
{
    return class_();
}

