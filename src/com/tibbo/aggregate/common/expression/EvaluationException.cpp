// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/EvaluationException.java
#include <com/tibbo/aggregate/common/expression/EvaluationException.h"

com::tibbo::aggregate::common::expression::EvaluationException::EvaluationException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::EvaluationException::EvaluationException(const std::string & message) 
    : EvaluationException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

com::tibbo::aggregate::common::expression::EvaluationException::EvaluationException(::java::lang::Throwable* cause) 
    : EvaluationException(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause);
}

com::tibbo::aggregate::common::expression::EvaluationException::EvaluationException(const std::string & message, ::java::lang::Throwable* cause) 
    : EvaluationException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,cause);
}

void com::tibbo::aggregate::common::expression::EvaluationException::ctor(const std::string & message)
{
    super::ctor(message);
}

void com::tibbo::aggregate::common::expression::EvaluationException::ctor(::java::lang::Throwable* cause)
{
    super::ctor(cause);
}

void com::tibbo::aggregate::common::expression::EvaluationException::ctor(const std::string & message, ::java::lang::Throwable* cause)
{
    super::ctor(message, cause);
}



java::lang::Class* com::tibbo::aggregate::common::expression::EvaluationException::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.EvaluationException", 57);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::EvaluationException::getClass0()
{
    return class_();
}

