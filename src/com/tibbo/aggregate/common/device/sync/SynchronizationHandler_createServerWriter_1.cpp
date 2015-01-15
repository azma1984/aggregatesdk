// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/sync/SynchronizationHandler.java
//#include <com/tibbo/aggregate/common/device/sync/SynchronizationHandler_createServerWriter_1.h"

#include <com/tibbo/aggregate/common/device/DeviceContext.h"
#include <com/tibbo/aggregate/common/device/sync/SynchronizationHandler.h"
//#include <java/lang/NullPointerException.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::device::sync::SynchronizationHandler_createServerWriter_1::SynchronizationHandler_createServerWriter_1(SynchronizationHandler *SynchronizationHandler_this, const std::string & name)
    : super(*static_cast< ::default_init_tag* >(0))
    , SynchronizationHandler_this(SynchronizationHandler_this)
{
    
    ctor(name);
}

com::tibbo::aggregate::common::device::sync::SynchronizationHandler_createServerWriter_1::SynchronizationHandler_createServerWriter_1(SynchronizationHandler *SynchronizationHandler_this)
    : super(*static_cast< ::default_init_tag* >(0))
    , SynchronizationHandler_this(SynchronizationHandler_this)
{
    
    ctor();
}

void com::tibbo::aggregate::common::device::sync::SynchronizationHandler_createServerWriter_1::write(DataTable* value, ::com::tibbo::aggregate::common::context::CallerController* callerController, ::com::tibbo::aggregate::common::context::RequestController* requestController) /* throws(ContextException, DeviceException, DisconnectionException) */
{
    SynchronizationHandler_this->deviceContext)->setVariable(SynchronizationHandler_this->getVariable(), callerController, requestController, value);
}



java::lang::Class* com::tibbo::aggregate::common::device::sync::SynchronizationHandler_createServerWriter_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::device::sync::SynchronizationHandler_createServerWriter_1::getClass0()
{
    return class_();
}

