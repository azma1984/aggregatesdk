// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/context/FunctionOutputFormatFunction.java
#include <com/tibbo/aggregate/common/expression/function/context/FunctionOutputFormatFunction.h"

#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/context/FunctionDefinition.h"
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

com::tibbo::aggregate::common::expression::function::context::FunctionOutputFormatFunction::FunctionOutputFormatFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::function::context::FunctionOutputFormatFunction::FunctionOutputFormatFunction() 
    : FunctionOutputFormatFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::expression::function::context::FunctionOutputFormatFunction::ctor()
{
    super::ctor(u"String context, String function"_j);
}

std::string com::tibbo::aggregate::common::expression::function::context::FunctionOutputFormatFunction::getFormat(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::context::Context* con, voidArray*/*...*/ parameters)
{
    auto def = con)->getFunctionDefinition((*parameters)[int(1)])->toString(), evaluator)->getDefaultResolver())->getCallerController());
    return def != 0 ? def)->getOutputFormat())->encode(false) : static_cast< const std::string & >(0);
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::context::FunctionOutputFormatFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.context.FunctionOutputFormatFunction", 83);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::context::FunctionOutputFormatFunction::getClass0()
{
    return class_();
}

