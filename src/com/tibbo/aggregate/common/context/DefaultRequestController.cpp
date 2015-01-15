// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/DefaultRequestController.java
#include <com/tibbo/aggregate/common/context/DefaultRequestController.h"

#include <com/tibbo/aggregate/common/expression/Evaluator.h"
////#include <java/lang/Long.h"
////#include <java/lang/Object.h"

com::tibbo::aggregate::common::context::DefaultRequestController::DefaultRequestController(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::context::DefaultRequestController::DefaultRequestController() 
    : DefaultRequestController(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::context::DefaultRequestController::DefaultRequestController(::java::lang::Long* lockTimeout) 
    : DefaultRequestController(*static_cast< ::default_init_tag* >(0))
{
    ctor(lockTimeout);
}

com::tibbo::aggregate::common::context::DefaultRequestController::DefaultRequestController(void* originator) 
    : DefaultRequestController(*static_cast< ::default_init_tag* >(0))
{
    ctor(originator);
}

com::tibbo::aggregate::common::context::DefaultRequestController::DefaultRequestController(::com::tibbo::aggregate::common::expression::Evaluator* evaluator) 
    : DefaultRequestController(*static_cast< ::default_init_tag* >(0))
{
    ctor(evaluator);
}

void com::tibbo::aggregate::common::context::DefaultRequestController::ctor()
{
    super::ctor();
}

void com::tibbo::aggregate::common::context::DefaultRequestController::ctor(::java::lang::Long* lockTimeout)
{
    super::ctor();
    this->lockTimeout = lockTimeout;
}

void com::tibbo::aggregate::common::context::DefaultRequestController::ctor(void* originator)
{
    super::ctor();
    this->originator = originator;
}

void com::tibbo::aggregate::common::context::DefaultRequestController::ctor(::com::tibbo::aggregate::common::expression::Evaluator* evaluator)
{
    super::ctor();
    this->evaluator = evaluator;
}

void* com::tibbo::aggregate::common::context::DefaultRequestController::getOriginator()
{
    return originator;
}

void com::tibbo::aggregate::common::context::DefaultRequestController::setOriginator(void* originator)
{
    this->originator = originator;
}

java::lang::Long* com::tibbo::aggregate::common::context::DefaultRequestController::getLockTimeout()
{
    return lockTimeout;
}

void com::tibbo::aggregate::common::context::DefaultRequestController::setLockTimeout(::java::lang::Long* lockTimeout)
{
    this->lockTimeout = lockTimeout;
}

com::tibbo::aggregate::common::expression::Evaluator* com::tibbo::aggregate::common::context::DefaultRequestController::getEvaluator()
{
    return evaluator;
}

void com::tibbo::aggregate::common::context::DefaultRequestController::setEvaluator(::com::tibbo::aggregate::common::expression::Evaluator* evaluator)
{
    this->evaluator = evaluator;
}



java::lang::Class* com::tibbo::aggregate::common::context::DefaultRequestController::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.context.DefaultRequestController", 59);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::context::DefaultRequestController::getClass0()
{
    return class_();
}

