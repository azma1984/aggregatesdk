// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/EvaluationEnvironment.java
#include <com/tibbo/aggregate/common/expression/EvaluationEnvironment.h"

#include <com/tibbo/aggregate/common/expression/Reference.h"
//#include <java/util/HashMap.h"
//#include <java/util/Map.h"

EvaluationEnvironment::EvaluationEnvironment(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

EvaluationEnvironment::EvaluationEnvironment() 
    : EvaluationEnvironment(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

EvaluationEnvironment::EvaluationEnvironment(Reference* cause) 
    : EvaluationEnvironment(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause);
}

EvaluationEnvironment::EvaluationEnvironment(std::map environment) 
    : EvaluationEnvironment(*static_cast< ::default_init_tag* >(0))
{
    ctor(environment);
}

EvaluationEnvironment::EvaluationEnvironment(Reference* cause, std::map environment) 
    : EvaluationEnvironment(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause,environment);
}

void EvaluationEnvironment::ctor()
{
    super::ctor();
}

void EvaluationEnvironment::ctor(Reference* cause)
{
    super::ctor();
    this->cause = cause;
}

void EvaluationEnvironment::ctor(std::map environment)
{
    super::ctor();
    this->environment = environment;
}

void EvaluationEnvironment::ctor(Reference* cause, std::map environment)
{
    super::ctor();
    this->cause = cause;
    this->environment = environment;
}

Reference* EvaluationEnvironment::getCause()
{
    return cause;
}

void EvaluationEnvironment::setCause(Reference* cause)
{
    this->cause = cause;
}

java::util::Map* EvaluationEnvironment::getEnvironment()
{
    if(environment == 0) {
        environment = new ::java::util::HashMap();
    }
    return environment;
}

void EvaluationEnvironment::setEnvironment(std::map environment)
{
    this->environment = environment;
}



java::lang::Class* EvaluationEnvironment::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.EvaluationEnvironment", 59);
    return c;
}

java::lang::Class* EvaluationEnvironment::getClass0()
{
    return class_();
}

