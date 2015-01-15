// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/event/ContextEventListenerInfo.java
#include <com/tibbo/aggregate/common/event/ContextEventListenerInfo.h"

#include <com/tibbo/aggregate/common/event/ContextEventListener.h"

com::tibbo::aggregate::common::event::ContextEventListenerInfo::ContextEventListenerInfo(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::event::ContextEventListenerInfo::ContextEventListenerInfo(ContextEventListener* listener, bool weak) 
    : ContextEventListenerInfo(*static_cast< ::default_init_tag* >(0))
{
    ctor(listener,weak);
}

void com::tibbo::aggregate::common::event::ContextEventListenerInfo::ctor(ContextEventListener* listener, bool weak)
{
    super::ctor();
    this->listener = listener;
    this->weak = weak;
}

com::tibbo::aggregate::common::event::ContextEventListener* com::tibbo::aggregate::common::event::ContextEventListenerInfo::getListener()
{
    return listener;
}

bool com::tibbo::aggregate::common::event::ContextEventListenerInfo::isWeak()
{
    return weak;
}



java::lang::Class* com::tibbo::aggregate::common::event::ContextEventListenerInfo::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.event.ContextEventListenerInfo", 57);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::event::ContextEventListenerInfo::getClass0()
{
    return class_();
}

