// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/context/SetVariableFunction.java
#include <com/tibbo/aggregate/common/expression/function/context/SetVariableFunction.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/context/ContextException.h"
#include <com/tibbo/aggregate/common/context/ContextManager.h"
#include <com/tibbo/aggregate/common/context/DefaultRequestController.h"
#include <com/tibbo/aggregate/common/context/VariableDefinition.h"
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
//#include <java/text/MessageFormat.h"
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

function::context::SetVariableFunction::SetVariableFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::context::SetVariableFunction::SetVariableFunction() 
    : SetVariableFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::context::SetVariableFunction::ctor()
{
    super::ctor(function::Functions::GROUP_CONTEXT_RELATED(), u"String context, String variable, Object parameter1, Object parameter2, ..."_j, u"Null"_j);
}

void* function::context::SetVariableFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(2, false, parameters);
    auto con = java_cast< Context* >(evaluator)->getDefaultResolver())->getContextManager())->get((*parameters)[int(0)])->toString(), evaluator)->getDefaultResolver())->getCallerController()));
    if(con == 0) {
        throw new EvaluationException(std::stringBuilder().append(Cres::get())->getString(u"conNotAvail"_j))->append((*parameters)[int(0)])->toString())->toString());
    }
    try {
        auto name = (*parameters)[int(1)])->toString();
        auto vd = con)->getVariableDefinition((*parameters)[int(1)])->toString());
        if(vd == 0) {
            throw new ContextException(::java::text::MessageFormat::format(Cres::get())->getString(u"conVarNotAvailExt"_j), new voidArray({name), con)->getPath())})));
        }
        auto input = ::java::util::Arrays::asList(java_cast< voidArray* >(::java::util::Arrays::copyOfRange(static_cast< voidArray* >(parameters), int(2), parameters)->length)));
        auto valueTable = (input)->size() == 1 && (dynamic_cast< DataTable* >(java_cast< void* >(input)->get(0))) != 0)) ? java_cast< DataTable* >(java_cast< void* >(input)->get(0))) : DataTableConstruction::constructTable(input, vd != 0 ? vd)->getFormat() : static_cast< TableFormat* >(0), evaluator, 0);
        con)->setVariable((*parameters)[int(1)])->toString(), evaluator)->getDefaultResolver())->getCallerController(), new DefaultRequestController(evaluator), valueTable);
        return 0;
    } catch (::java::lang::Exception* ex) {
        throw new EvaluationException(static_cast< ::java::lang::Throwable* >(ex));
    }
}



java::lang::Class* function::context::SetVariableFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.context.SetVariableFunction", 74);
    return c;
}

java::lang::Class* function::context::SetVariableFunction::getClass0()
{
    return class_();
}

