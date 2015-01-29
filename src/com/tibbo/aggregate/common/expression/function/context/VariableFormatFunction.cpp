// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/context/VariableFormatFunction.java
#include "expression/function/context/VariableFormatFunction.h"

#include "context/Context.h"
#include "context/VariableDefinition.h"
#include "datatable/TableFormat.h"
#include "expression/Evaluator.h"
#include "expression/ReferenceResolver.h"
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

function::context::VariableFormatFunction::VariableFormatFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::context::VariableFormatFunction::VariableFormatFunction() 
    : VariableFormatFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::context::VariableFormatFunction::ctor()
{
    super::ctor(u"String context, String variable"_j);
}

std::string function::context::VariableFormatFunction::getFormat(Evaluator* evaluator, Context* con, voidArray*/*...*/ parameters)
{
    auto def = con)->getVariableDefinition((*parameters)[int(1)])->toString(), evaluator)->getDefaultResolver())->getCallerController());
    return def != 0 ? def)->getFormat())->encode(false) : static_cast< const std::string & >(0);
}



java::lang::Class* function::context::VariableFormatFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.context.VariableFormatFunction", 77);
    return c;
}

java::lang::Class* function::context::VariableFormatFunction::getClass0()
{
    return class_();
}

