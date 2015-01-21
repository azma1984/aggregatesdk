// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/context/EventFormatFunction.java
#include <com/tibbo/aggregate/common/expression/function/context/EventFormatFunction.h"

#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/context/EventDefinition.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
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

function::context::EventFormatFunction::EventFormatFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::context::EventFormatFunction::EventFormatFunction() 
    : EventFormatFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::context::EventFormatFunction::ctor()
{
    super::ctor(u"String context, String event"_j);
}

std::string function::context::EventFormatFunction::getFormat(Evaluator* evaluator, Context* con, voidArray*/*...*/ parameters)
{
    auto def = con)->getEventDefinition((*parameters)[int(1)])->toString(), evaluator)->getDefaultResolver())->getCallerController());
    return def != 0 ? def)->getFormat())->encode(false) : static_cast< const std::string & >(0);
}



java::lang::Class* function::context::EventFormatFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.context.EventFormatFunction", 74);
    return c;
}

java::lang::Class* function::context::EventFormatFunction::getClass0()
{
    return class_();
}

