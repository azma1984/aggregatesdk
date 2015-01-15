// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/context/EventAvailableFunction.java
#include <com/tibbo/aggregate/common/expression/function/context/EventAvailableFunction.h"

#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/context/EventDefinition.h"
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

com::tibbo::aggregate::common::expression::function::context::EventAvailableFunction::EventAvailableFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::function::context::EventAvailableFunction::EventAvailableFunction(const std::string & group) 
    : EventAvailableFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor(group);
}

void com::tibbo::aggregate::common::expression::function::context::EventAvailableFunction::ctor(const std::string & group)
{
    super::ctor(group, u"String context, String event"_j);
}

bool com::tibbo::aggregate::common::expression::function::context::EventAvailableFunction::hasEntity(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::context::Context* con, voidArray*/*...*/ parameters)
{
    auto def = con)->getEventDefinition((*parameters)[int(1)])->toString(), evaluator)->getDefaultResolver())->getCallerController());
    return def != 0;
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::context::EventAvailableFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.context.EventAvailableFunction", 77);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::context::EventAvailableFunction::getClass0()
{
    return class_();
}

