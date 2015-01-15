// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/EvaluationEnvironment.java
#include <com/tibbo/aggregate/common/expression/EvaluationEnvironment.h"

#include <com/tibbo/aggregate/common/expression/Reference.h"
//#include <java/util/HashMap.h"
//#include <java/util/Map.h"

com::tibbo::aggregate::common::expression::EvaluationEnvironment::EvaluationEnvironment(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::EvaluationEnvironment::EvaluationEnvironment() 
    : EvaluationEnvironment(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::expression::EvaluationEnvironment::EvaluationEnvironment(Reference* cause) 
    : EvaluationEnvironment(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause);
}

com::tibbo::aggregate::common::expression::EvaluationEnvironment::EvaluationEnvironment(std::map environment) 
    : EvaluationEnvironment(*static_cast< ::default_init_tag* >(0))
{
    ctor(environment);
}

com::tibbo::aggregate::common::expression::EvaluationEnvironment::EvaluationEnvironment(Reference* cause, std::map environment) 
    : EvaluationEnvironment(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause,environment);
}

void com::tibbo::aggregate::common::expression::EvaluationEnvironment::ctor()
{
    super::ctor();
}

void com::tibbo::aggregate::common::expression::EvaluationEnvironment::ctor(Reference* cause)
{
    super::ctor();
    this->cause = cause;
}

void com::tibbo::aggregate::common::expression::EvaluationEnvironment::ctor(std::map environment)
{
    super::ctor();
    this->environment = environment;
}

void com::tibbo::aggregate::common::expression::EvaluationEnvironment::ctor(Reference* cause, std::map environment)
{
    super::ctor();
    this->cause = cause;
    this->environment = environment;
}

com::tibbo::aggregate::common::expression::Reference* com::tibbo::aggregate::common::expression::EvaluationEnvironment::getCause()
{
    return cause;
}

void com::tibbo::aggregate::common::expression::EvaluationEnvironment::setCause(Reference* cause)
{
    this->cause = cause;
}

java::util::Map* com::tibbo::aggregate::common::expression::EvaluationEnvironment::getEnvironment()
{
    if(environment == 0) {
        environment = new ::java::util::HashMap();
    }
    return environment;
}

void com::tibbo::aggregate::common::expression::EvaluationEnvironment::setEnvironment(std::map environment)
{
    this->environment = environment;
}



java::lang::Class* com::tibbo::aggregate::common::expression::EvaluationEnvironment::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.EvaluationEnvironment", 59);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::EvaluationEnvironment::getClass0()
{
    return class_();
}

