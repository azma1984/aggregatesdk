// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/table/AggregateFunction.java
#include <com/tibbo/aggregate/common/expression/function/table/AggregateFunction.h"

#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/context/ContextUtils.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/expression/EnvironmentReferenceResolver.h"
#include <com/tibbo/aggregate/common/expression/EvaluationException.h"
#include <com/tibbo/aggregate/common/expression/Evaluator.h"
#include <com/tibbo/aggregate/common/expression/Expression.h"
#include <com/tibbo/aggregate/common/expression/ReferenceResolver.h"
#include <com/tibbo/aggregate/common/expression/function/Functions.h"
#include <com/tibbo/aggregate/common/util/SyntaxErrorException.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/Throwable.h"
//#include <java/util/Iterator.h"
//#include <java/util/List.h"
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

function::table::AggregateFunction::AggregateFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::table::AggregateFunction::AggregateFunction() 
    : AggregateFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::table::AggregateFunction::ctor()
{
    super::ctor(function::Functions::GROUP_DATA_TABLE_PROCESSING(), u"Object source, String expression, Object initialValue"_j, u"Object"_j);
}

void* function::table::AggregateFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(3, false, parameters);
    auto source = (*parameters)[int(0)];
    auto expression = new Expression((*parameters)[int(1)])->toString());
    auto aggregate = (*parameters)[int(2)];
    auto resolver = evaluator)->getDefaultResolver();
    auto localEvaluator = new Evaluator(resolver)->getContextManager(), resolver)->getDefaultContext(), resolver)->getDefaultTable(), resolver)->getCallerController());
    localEvaluator)->getEnvironmentResolver())->setEnvironment(evaluator)->getEnvironmentResolver())->getEnvironment());
    localEvaluator)->setPreviousResult(aggregate);
    try {
        if(dynamic_cast< DataTable* >(source) != 0) {
            auto table = java_cast< DataTable* >(source);
            localEvaluator)->getDefaultResolver())->setDefaultTable(table);
            for (auto i = int(0); i < table)->getRecordCount(); i++) {
                localEvaluator)->getDefaultResolver())->setDefaultRow(i));
                aggregate = localEvaluator)->evaluate(expression, environment);
            }
        } else {
            auto mask = source)->toString();
            auto contexts = ContextUtils::expandMaskToContexts(mask, resolver)->getContextManager(), resolver)->getCallerController());
            for (auto _i = contexts)->iterator(); _i->hasNext(); ) {
                Context* context = java_cast< Context* >(_i->next());
                {
                    localEvaluator)->getDefaultResolver())->setDefaultContext(context);
                    aggregate = localEvaluator)->evaluate(expression);
                }
            }
        }
    } catch (::com::tibbo::aggregate::common::util::SyntaxErrorException* ex) {
        throw new EvaluationException(static_cast< ::java::lang::Throwable* >(ex));
    }
    return aggregate;
}



java::lang::Class* function::table::AggregateFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.table.AggregateFunction", 70);
    return c;
}

java::lang::Class* function::table::AggregateFunction::getClass0()
{
    return class_();
}

