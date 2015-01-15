// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/context/EntityFormatFunction.java
#include <com/tibbo/aggregate/common/expression/function/context/EntityFormatFunction.h"

#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/context/ContextManager.h"
#include <com/tibbo/aggregate/common/expression/Evaluator.h"
#include <com/tibbo/aggregate/common/expression/ReferenceResolver.h"
#include <com/tibbo/aggregate/common/expression/function/Functions.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
#include <ObjectArray.h"

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(0);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::expression::function::context::EntityFormatFunction::EntityFormatFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::function::context::EntityFormatFunction::EntityFormatFunction(const std::string & parametersFootprint) 
    : EntityFormatFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor(parametersFootprint);
}

void com::tibbo::aggregate::common::expression::function::context::EntityFormatFunction::ctor(const std::string & parametersFootprint)
{
    super::ctor(::com::tibbo::aggregate::common::expression::function::Functions::GROUP_CONTEXT_RELATED(), parametersFootprint, u"String"_j);
}

void* com::tibbo::aggregate::common::expression::function::context::EntityFormatFunction::execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(2, false, parameters);
    auto con = java_cast< ::com::tibbo::aggregate::common::context::Context* >(evaluator)->getDefaultResolver())->getContextManager())->get((*parameters)[int(0)])->toString(), evaluator)->getDefaultResolver())->getCallerController()));
    return con != 0 ? getFormat(evaluator, con, parameters)) : 0);
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::context::EntityFormatFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.context.EntityFormatFunction", 75);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::context::EntityFormatFunction::getClass0()
{
    return class_();
}

