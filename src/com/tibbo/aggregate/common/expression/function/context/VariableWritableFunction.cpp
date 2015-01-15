// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/context/VariableWritableFunction.java
//#include <com/tibbo/aggregate/common/expression/function/context/VariableWritableFunction.h"

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

com::tibbo::aggregate::common::expression::function::context::VariableWritableFunction::VariableWritableFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::function::context::VariableWritableFunction::VariableWritableFunction(const std::string & group) 
    : VariableWritableFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor(group);
}

void com::tibbo::aggregate::common::expression::function::context::VariableWritableFunction::ctor(const std::string & group)
{
    super::ctor(group, u"String context, String variable"_j);
}

bool com::tibbo::aggregate::common::expression::function::context::VariableWritableFunction::hasEntity(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::context::Context* con, voidArray*/*...*/ parameters)
{
    auto def = con)->getVariableDefinition((*parameters)[int(1)])->toString(), evaluator)->getDefaultResolver())->getCallerController());
    return def != 0 && def)->isWritable();
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::context::VariableWritableFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.context.VariableWritableFunction", 79);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::context::VariableWritableFunction::getClass0()
{
    return class_();
}

