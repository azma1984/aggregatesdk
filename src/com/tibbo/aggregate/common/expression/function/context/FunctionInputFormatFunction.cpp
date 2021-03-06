// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/context/FunctionInputFormatFunction.java
#include "expression/function/context/FunctionInputFormatFunction.h"

#include "context/Context.h"
#include "context/FunctionDefinition.h"
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

function::context::FunctionInputFormatFunction::FunctionInputFormatFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::context::FunctionInputFormatFunction::FunctionInputFormatFunction() 
    : FunctionInputFormatFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::context::FunctionInputFormatFunction::ctor()
{
    super::ctor(u"String context, String function"_j);
}

std::string function::context::FunctionInputFormatFunction::getFormat(Evaluator* evaluator, Context* con, voidArray*/*...*/ parameters)
{
    auto def = con)->getFunctionDefinition((*parameters)[int(1)])->toString(), evaluator)->getDefaultResolver())->getCallerController());
    return def != 0 ? def)->getInputFormat())->encode(false) : static_cast< const std::string & >(0);
}



java::lang::Class* function::context::FunctionInputFormatFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.context.FunctionInputFormatFunction", 82);
    return c;
}

java::lang::Class* function::context::FunctionInputFormatFunction::getClass0()
{
    return class_();
}

