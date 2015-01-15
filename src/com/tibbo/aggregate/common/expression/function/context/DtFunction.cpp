// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/context/DtFunction.java
#include <com/tibbo/aggregate/common/expression/function/context/DtFunction.h"

#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/expression/Evaluator.h"
#include <com/tibbo/aggregate/common/expression/ReferenceResolver.h"
#include <com/tibbo/aggregate/common/expression/function/Functions.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/String.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::expression::function::context::DtFunction::DtFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::function::context::DtFunction::DtFunction() 
    : DtFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::expression::function::context::DtFunction::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::expression::function::Functions::GROUP_CONTEXT_RELATED(), u""_j, u"DataTable"_j);
}

void* com::tibbo::aggregate::common::expression::function::context::DtFunction::execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    return evaluator)->getDefaultResolver())->getDefaultTable();
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::context::DtFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.context.DtFunction", 65);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::context::DtFunction::getClass0()
{
    return class_();
}

