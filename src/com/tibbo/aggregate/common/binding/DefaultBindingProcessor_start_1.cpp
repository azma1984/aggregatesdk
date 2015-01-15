// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/binding/DefaultBindingProcessor.java
#include <com/tibbo/aggregate/common/binding/DefaultBindingProcessor_start_1.h"

#include <com/tibbo/aggregate/common/binding/DefaultBindingProcessor.h"

com::tibbo::aggregate::common::binding::DefaultBindingProcessor_start_1::DefaultBindingProcessor_start_1(DefaultBindingProcessor *DefaultBindingProcessor_this, bool concurrentProcessing)
    : super(*static_cast< ::default_init_tag* >(0))
    , DefaultBindingProcessor_this(DefaultBindingProcessor_this)
    , concurrentProcessing(concurrentProcessing)
{
    
    ctor();
}

void* com::tibbo::aggregate::common::binding::DefaultBindingProcessor_start_1::call()
{
    DefaultBindingProcessor_this->startImpl(concurrentProcessing);
    return 0;
}



java::lang::Class* com::tibbo::aggregate::common::binding::DefaultBindingProcessor_start_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::binding::DefaultBindingProcessor_start_1::getClass0()
{
    return class_();
}

