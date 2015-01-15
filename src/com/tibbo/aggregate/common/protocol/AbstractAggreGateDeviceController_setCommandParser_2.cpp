// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/AbstractAggreGateDeviceController.java
#include <com/tibbo/aggregate/common/protocol/AbstractAggreGateDeviceController_setCommandParser_2.h"

#include <com/tibbo/aggregate/common/protocol/AbstractAggreGateDeviceController.h"
#include <com/tibbo/aggregate/common/protocol/AggreGateDevice.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/lang/Thread.h"

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(0);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

com::tibbo::aggregate::common::protocol::AbstractAggreGateDeviceController_setCommandParser_2::AbstractAggreGateDeviceController_setCommandParser_2(AbstractAggreGateDeviceController *AbstractAggreGateDeviceController_this)
    : super(*static_cast< ::default_init_tag* >(0))
    , AbstractAggreGateDeviceController_this(AbstractAggreGateDeviceController_this)
{
    
    ctor();
}

java::lang::Thread* com::tibbo::aggregate::common::protocol::AbstractAggreGateDeviceController_setCommandParser_2::newThread(::java::lang::Runnable* r)
{
    return new ::java::lang::Thread(r, std::stringBuilder().append(u"EventPreprocessor/"_j)->append(java_cast< AggreGateDevice* >(AbstractAggreGateDeviceController_this->getDevice())))->toString());
}



java::lang::Class* com::tibbo::aggregate::common::protocol::AbstractAggreGateDeviceController_setCommandParser_2::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::protocol::AbstractAggreGateDeviceController_setCommandParser_2::getClass0()
{
    return class_();
}

