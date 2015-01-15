// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/DefaultContextManager.java
#include <com/tibbo/aggregate/common/context/DefaultContextManager_QueuedEvent.h"

#include <com/tibbo/aggregate/common/context/DefaultContextManager.h"
#include <com/tibbo/aggregate/common/context/EventData.h"
#include <com/tibbo/aggregate/common/data/Event.h"
////#include <java/lang/NullPointerException.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::context::DefaultContextManager_QueuedEvent::DefaultContextManager_QueuedEvent(DefaultContextManager *DefaultContextManager_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , DefaultContextManager_this(DefaultContextManager_this)
{
    
}

com::tibbo::aggregate::common::context::DefaultContextManager_QueuedEvent::DefaultContextManager_QueuedEvent(DefaultContextManager *DefaultContextManager_this, EventData* ed, Event* ev) 
    : DefaultContextManager_QueuedEvent(DefaultContextManager_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(ed,ev);
}

void com::tibbo::aggregate::common::context::DefaultContextManager_QueuedEvent::ctor(EventData* ed, Event* ev)
{
    super::ctor();
    this->ed = ed;
    this->ev = ev;
}

void com::tibbo::aggregate::common::context::DefaultContextManager_QueuedEvent::dispatch()
{
    ed)->dispatch(ev);
}



java::lang::Class* com::tibbo::aggregate::common::context::DefaultContextManager_QueuedEvent::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.context.DefaultContextManager.QueuedEvent", 68);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::context::DefaultContextManager_QueuedEvent::getClass0()
{
    return class_();
}

