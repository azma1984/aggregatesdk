// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/context/DtFunction.java
#include "expression/function/context/DtFunction.h"

#include "datatable/DataTable.h"
#include "expression/Evaluator.h"
#include "expression/ReferenceResolver.h"
#include "expression/function/Functions.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/String.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

function::context::DtFunction::DtFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::context::DtFunction::DtFunction() 
    : DtFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::context::DtFunction::ctor()
{
    super::ctor(function::Functions::GROUP_CONTEXT_RELATED(), u""_j, u"DataTable"_j);
}

void* function::context::DtFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    return evaluator)->getDefaultResolver())->getDefaultTable();
}



java::lang::Class* function::context::DtFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.context.DtFunction", 65);
    return c;
}

java::lang::Class* function::context::DtFunction::getClass0()
{
    return class_();
}

