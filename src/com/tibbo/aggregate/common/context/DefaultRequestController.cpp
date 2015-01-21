// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/DefaultRequestController.java
#include <com/tibbo/aggregate/common/context/DefaultRequestController.h"

#include <com/tibbo/aggregate/common/expression/Evaluator.h"
////#include <java/lang/Long.h"
////#include <java/lang/Object.h"

DefaultRequestController::DefaultRequestController(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

DefaultRequestController::DefaultRequestController() 
    : DefaultRequestController(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

DefaultRequestController::DefaultRequestController(long  lockTimeout) 
    : DefaultRequestController(*static_cast< ::default_init_tag* >(0))
{
    ctor(lockTimeout);
}

DefaultRequestController::DefaultRequestController(void* originator) 
    : DefaultRequestController(*static_cast< ::default_init_tag* >(0))
{
    ctor(originator);
}

DefaultRequestController::DefaultRequestController(Evaluator* evaluator) 
    : DefaultRequestController(*static_cast< ::default_init_tag* >(0))
{
    ctor(evaluator);
}

void DefaultRequestController::ctor()
{
    super::ctor();
}

void DefaultRequestController::ctor(long  lockTimeout)
{
    super::ctor();
    this->lockTimeout = lockTimeout;
}

void DefaultRequestController::ctor(void* originator)
{
    super::ctor();
    this->originator = originator;
}

void DefaultRequestController::ctor(Evaluator* evaluator)
{
    super::ctor();
    this->evaluator = evaluator;
}

void* DefaultRequestController::getOriginator()
{
    return originator;
}

void DefaultRequestController::setOriginator(void* originator)
{
    this->originator = originator;
}

 DefaultRequestController::getLockTimeout()
{
    return lockTimeout;
}

void DefaultRequestController::setLockTimeout(long  lockTimeout)
{
    this->lockTimeout = lockTimeout;
}

Evaluator* DefaultRequestController::getEvaluator()
{
    return evaluator;
}

void DefaultRequestController::setEvaluator(Evaluator* evaluator)
{
    this->evaluator = evaluator;
}



java::lang::Class* DefaultRequestController::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.context.DefaultRequestController", 59);
    return c;
}

java::lang::Class* DefaultRequestController::getClass0()
{
    return class_();
}

