// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/other/UserFunction.java
#include <com/tibbo/aggregate/common/expression/function/other/UserFunction.h"

#include <com/tibbo/aggregate/common/context/CallerController.h"
#include <com/tibbo/aggregate/common/expression/Evaluator.h"
#include <com/tibbo/aggregate/common/expression/ReferenceResolver.h"
#include <com/tibbo/aggregate/common/expression/function/Functions.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::expression::function::other::UserFunction::UserFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::function::other::UserFunction::UserFunction() 
    : UserFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::expression::function::other::UserFunction::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::expression::function::Functions::GROUP_OTHER(), u""_j, u"String"_j);
}

void* com::tibbo::aggregate::common::expression::function::other::UserFunction::execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    auto cc = evaluator)->getDefaultResolver())->getCallerController();
    return cc != 0 ? cc)->getUsername()) : 0);
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::other::UserFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.other.UserFunction", 65);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::other::UserFunction::getClass0()
{
    return class_();
}

