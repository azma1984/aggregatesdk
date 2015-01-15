// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/SynchronousRequestController.java
#include <com/tibbo/aggregate/common/device/SynchronousRequestController.h"

com::tibbo::aggregate::common::device::SynchronousRequestController::SynchronousRequestController(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::device::SynchronousRequestController::SynchronousRequestController(::java::lang::Long* lockTimeout) 
    : SynchronousRequestController(*static_cast< ::default_init_tag* >(0))
{
    ctor(lockTimeout);
}

void com::tibbo::aggregate::common::device::SynchronousRequestController::ctor(::java::lang::Long* lockTimeout)
{
    super::ctor(lockTimeout);
}



java::lang::Class* com::tibbo::aggregate::common::device::SynchronousRequestController::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.device.SynchronousRequestController", 62);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::device::SynchronousRequestController::getClass0()
{
    return class_();
}

