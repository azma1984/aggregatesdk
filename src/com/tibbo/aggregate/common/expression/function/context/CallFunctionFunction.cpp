// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/context/CallFunctionFunction.java
//#include <com/tibbo/aggregate/common/expression/function/context/CallFunctionFunction.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/context/ContextManager.h"
#include <com/tibbo/aggregate/common/context/DefaultRequestController.h"
#include <com/tibbo/aggregate/common/context/FunctionDefinition.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/DataTableConstruction.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/expression/EvaluationException.h"
#include <com/tibbo/aggregate/common/expression/Evaluator.h"
#include <com/tibbo/aggregate/common/expression/ReferenceResolver.h"
#include <com/tibbo/aggregate/common/expression/function/Functions.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Exception.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/lang/Throwable.h"
//#include <java/util/Arrays.h"
//#include <java/util/List.h"
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

function::context::CallFunctionFunction::CallFunctionFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::context::CallFunctionFunction::CallFunctionFunction() 
    : CallFunctionFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::context::CallFunctionFunction::ctor()
{
    super::ctor(function::Functions::GROUP_CONTEXT_RELATED(), u"String context, String function, Object parameter1, Object parameter2, ..."_j, u"DataTable"_j);
}

void* function::context::CallFunctionFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(2, false, parameters);
    auto con = java_cast< Context* >(evaluator)->getDefaultResolver())->getContextManager())->get((*parameters)[int(0)])->toString(), evaluator)->getDefaultResolver())->getCallerController()));
    if(con == 0) {
        throw new EvaluationException(std::stringBuilder().append(Cres::get())->getString(u"conNotAvail"_j))->append((*parameters)[int(0)])->toString())->toString());
    }
    try {
        auto fd = con)->getFunctionDefinition((*parameters)[int(1)])->toString());
        auto input = ::java::util::Arrays::asList(java_cast< voidArray* >(::java::util::Arrays::copyOfRange(static_cast< voidArray* >(parameters), int(2), parameters)->length)));
        auto inputTable = DataTableConstruction::constructTable(input, fd != 0 ? fd)->getInputFormat() : static_cast< TableFormat* >(0), evaluator, 0);
        auto output = con)->callFunction((*parameters)[int(1)])->toString(), evaluator)->getDefaultResolver())->getCallerController(), new DefaultRequestController(evaluator), inputTable);
        return output;
    } catch (::java::lang::Exception* ex) {
        throw new EvaluationException(static_cast< ::java::lang::Throwable* >(ex));
    }
}



java::lang::Class* function::context::CallFunctionFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.context.CallFunctionFunction", 75);
    return c;
}

java::lang::Class* function::context::CallFunctionFunction::getClass0()
{
    return class_();
}

