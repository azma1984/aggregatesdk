// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/context/FunctionAvailableFunction.java
#include <com/tibbo/aggregate/common/expression/function/context/FunctionAvailableFunction.h"

#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/context/FunctionDefinition.h"
#include <com/tibbo/aggregate/common/expression/Evaluator.h"
#include <com/tibbo/aggregate/common/expression/ReferenceResolver.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
#include <ObjectArray.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::expression::function::context::FunctionAvailableFunction::FunctionAvailableFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::function::context::FunctionAvailableFunction::FunctionAvailableFunction(const std::string & group) 
    : FunctionAvailableFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor(group);
}

void com::tibbo::aggregate::common::expression::function::context::FunctionAvailableFunction::ctor(const std::string & group)
{
    super::ctor(group, u"String context, String function"_j);
}

bool com::tibbo::aggregate::common::expression::function::context::FunctionAvailableFunction::hasEntity(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::context::Context* con, voidArray*/*...*/ parameters)
{
    auto def = con)->getFunctionDefinition((*parameters)[int(1)])->toString(), evaluator)->getDefaultResolver())->getCallerController());
    return def != 0;
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::context::FunctionAvailableFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.context.FunctionAvailableFunction", 80);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::context::FunctionAvailableFunction::getClass0()
{
    return class_();
}

