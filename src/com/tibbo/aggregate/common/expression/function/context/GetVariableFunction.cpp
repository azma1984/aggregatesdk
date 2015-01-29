// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/context/GetVariableFunction.java
#include "expression/function/context/GetVariableFunction.h"

#include "Cres.h"
#include "context/Context.h"
#include "context/ContextException.h"
#include "context/ContextManager.h"
#include "context/DefaultRequestController.h"
#include "datatable/DataTable.h"
#include "expression/EvaluationException.h"
#include "expression/Evaluator.h"
#include "expression/ReferenceResolver.h"
#include "expression/function/Functions.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/lang/Throwable.h"
//#include <java/util/ResourceBundle.h"
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

function::context::GetVariableFunction::GetVariableFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::context::GetVariableFunction::GetVariableFunction() 
    : GetVariableFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::context::GetVariableFunction::ctor()
{
    super::ctor(function::Functions::GROUP_CONTEXT_RELATED(), u"String context, String variable"_j, u"DataTable"_j);
}

void* function::context::GetVariableFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(2, false, parameters);
    auto resolver = evaluator)->getDefaultResolver();
    auto con = java_cast< Context* >(resolver)->getContextManager())->get((*parameters)[int(0)])->toString(), resolver)->getCallerController()));
    if(con == 0) {
        throw new EvaluationException(std::stringBuilder().append(Cres::get())->getString(u"conNotAvail"_j))->append((*parameters)[int(0)])->toString())->toString());
    }
    try {
        return con)->getVariable((*parameters)[int(1)])->toString(), resolver)->getCallerController(), new DefaultRequestController(evaluator));
    } catch (ContextException* ex) {
        throw new EvaluationException(static_cast< ::java::lang::Throwable* >(ex));
    }
}



java::lang::Class* function::context::GetVariableFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.context.GetVariableFunction", 74);
    return c;
}

java::lang::Class* function::context::GetVariableFunction::getClass0()
{
    return class_();
}

