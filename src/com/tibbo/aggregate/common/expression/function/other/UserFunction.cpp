// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/other/UserFunction.java
#include "expression/function/other/UserFunction.h"

#include "context/CallerController.h"
#include "expression/Evaluator.h"
#include "expression/ReferenceResolver.h"
#include "expression/function/Functions.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

function::other::UserFunction::UserFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::other::UserFunction::UserFunction() 
    : UserFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::other::UserFunction::ctor()
{
    super::ctor(function::Functions::GROUP_OTHER(), u""_j, u"String"_j);
}

void* function::other::UserFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    auto cc = evaluator)->getDefaultResolver())->getCallerController();
    return cc != 0 ? cc)->getUsername()) : 0);
}



java::lang::Class* function::other::UserFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.other.UserFunction", 65);
    return c;
}

java::lang::Class* function::other::UserFunction::getClass0()
{
    return class_();
}

