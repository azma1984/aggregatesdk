// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/JavaConstructorFunction.java
#include <com/tibbo/aggregate/common/expression/function/JavaConstructorFunction.h"

#include <com/tibbo/aggregate/common/expression/EvaluationException.h"
//#include <java/lang/Class.h"
//#include <java/lang/Exception.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/Throwable.h"
//#include <org/apache/commons/beanutils/ConstructorUtils.h"

com::tibbo::aggregate::common::expression::function::JavaConstructorFunction::JavaConstructorFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::function::JavaConstructorFunction::JavaConstructorFunction(const std::string & clazz, const std::string & category, const std::string & returnValue) 
    : JavaConstructorFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor(clazz,category,returnValue);
}

void com::tibbo::aggregate::common::expression::function::JavaConstructorFunction::ctor(const std::string & clazz, const std::string & category, const std::string & returnValue)
{
    super::ctor(category, u""_j, returnValue);
    this->clazz = clazz;
}

void* com::tibbo::aggregate::common::expression::function::JavaConstructorFunction::execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    try {
        return ::org::apache::commons::beanutils::ConstructorUtils::invokeConstructor(static_cast< ::java::lang::Class* >(::java::lang::Class::forName(clazz)), parameters);
    } catch (::java::lang::Exception* ex) {
        throw new ::com::tibbo::aggregate::common::expression::EvaluationException(static_cast< ::java::lang::Throwable* >(ex));
    }
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::JavaConstructorFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.JavaConstructorFunction", 70);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::JavaConstructorFunction::getClass0()
{
    return class_();
}

