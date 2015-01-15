// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/event/FireEventRequestController.java
#include <com/tibbo/aggregate/common/event/FireEventRequestController.h"

#include <com/tibbo/aggregate/common/data/Event.h"
//#include <java/lang/Long.h"

com::tibbo::aggregate::common::event::FireEventRequestController::FireEventRequestController(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::event::FireEventRequestController::FireEventRequestController(::java::lang::Long* customExpirationPeriod) 
    : FireEventRequestController(*static_cast< ::default_init_tag* >(0))
{
    ctor(customExpirationPeriod);
}

com::tibbo::aggregate::common::event::FireEventRequestController::FireEventRequestController(bool ignoreStorageErrors) 
    : FireEventRequestController(*static_cast< ::default_init_tag* >(0))
{
    ctor(ignoreStorageErrors);
}

void com::tibbo::aggregate::common::event::FireEventRequestController::ctor(::java::lang::Long* customExpirationPeriod)
{
    super::ctor();
    this->customExpirationPeriod = customExpirationPeriod;
}

void com::tibbo::aggregate::common::event::FireEventRequestController::ctor(bool ignoreStorageErrors)
{
    super::ctor();
    this->ignoreStorageErrors = ignoreStorageErrors;
}

java::lang::Long* com::tibbo::aggregate::common::event::FireEventRequestController::getCustomExpirationPeriod()
{
    return customExpirationPeriod;
}

void com::tibbo::aggregate::common::event::FireEventRequestController::setCustomExpirationPeriod(::java::lang::Long* customExpirationPeriod)
{
    this->customExpirationPeriod = customExpirationPeriod;
}

bool com::tibbo::aggregate::common::event::FireEventRequestController::isIgnoreStorageErrors()
{
    return ignoreStorageErrors;
}

void com::tibbo::aggregate::common::event::FireEventRequestController::setIgnoreStorageErrors(bool ignoreStorageErrors)
{
    this->ignoreStorageErrors = ignoreStorageErrors;
}

Event* com::tibbo::aggregate::common::event::FireEventRequestController::process(Event* event)
{
    return event;
}



java::lang::Class* com::tibbo::aggregate::common::event::FireEventRequestController::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.event.FireEventRequestController", 59);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::event::FireEventRequestController::getClass0()
{
    return class_();
}

