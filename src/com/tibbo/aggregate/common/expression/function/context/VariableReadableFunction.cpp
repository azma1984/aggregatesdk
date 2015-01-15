// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/context/VariableReadableFunction.java
#include <com/tibbo/aggregate/common/expression/function/context/VariableReadableFunction.h"

#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/context/VariableDefinition.h"
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

com::tibbo::aggregate::common::expression::function::context::VariableReadableFunction::VariableReadableFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::function::context::VariableReadableFunction::VariableReadableFunction(const std::string & group) 
    : VariableReadableFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor(group);
}

void com::tibbo::aggregate::common::expression::function::context::VariableReadableFunction::ctor(const std::string & group)
{
    super::ctor(group, u"String context, String variable"_j);
}

bool com::tibbo::aggregate::common::expression::function::context::VariableReadableFunction::hasEntity(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::context::Context* con, voidArray*/*...*/ parameters)
{
    auto def = con)->getVariableDefinition((*parameters)[int(1)])->toString(), evaluator)->getDefaultResolver())->getCallerController());
    return def != 0 && def)->isReadable();
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::context::VariableReadableFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.context.VariableReadableFunction", 79);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::context::VariableReadableFunction::getClass0()
{
    return class_();
}

