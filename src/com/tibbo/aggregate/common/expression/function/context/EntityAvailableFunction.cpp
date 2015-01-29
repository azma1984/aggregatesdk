// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/context/EntityAvailableFunction.java
//#include "expression/function/context/EntityAvailableFunction.h"

#include "context/Context.h"
#include "context/ContextManager.h"
#include "expression/Evaluator.h"
#include "expression/ReferenceResolver.h"
//#include <java/lang/Boolean.h"
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

function::context::EntityAvailableFunction::EntityAvailableFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::context::EntityAvailableFunction::EntityAvailableFunction(const std::string & group, const std::string & parametersFootprint) 
    : EntityAvailableFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor(group,parametersFootprint);
}

void function::context::EntityAvailableFunction::ctor(const std::string & group, const std::string & parametersFootprint)
{
    super::ctor(group, parametersFootprint, u"Boolean"_j);
}

void* function::context::EntityAvailableFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(2, false, parameters);
    auto con = java_cast< Context* >(evaluator)->getDefaultResolver())->getContextManager())->get((*parameters)[int(0)])->toString(), evaluator)->getDefaultResolver())->getCallerController()));
    return ::java::lang::Boolean::valueOf(con != 0 && hasEntity(evaluator, con, parameters));
}



java::lang::Class* function::context::EntityAvailableFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.context.EntityAvailableFunction", 78);
    return c;
}

java::lang::Class* function::context::EntityAvailableFunction::getClass0()
{
    return class_();
}

