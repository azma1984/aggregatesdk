// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/table/PrintFunction.java
#include "expression/function/table/PrintFunction.h"

#include "datatable/DataTable.h"
#include "expression/DefaultReferenceResolver.h"
#include "expression/EvaluationException.h"
#include "expression/Evaluator.h"
#include "expression/Expression.h"
#include "expression/ReferenceResolver.h"
#include "expression/function/Functions.h"
#include "util/SyntaxErrorException.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/lang/Throwable.h"
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

function::table::PrintFunction::PrintFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::table::PrintFunction::PrintFunction() 
    : PrintFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::table::PrintFunction::ctor()
{
    super::ctor(function::Functions::GROUP_DATA_TABLE_PROCESSING(), u"DataTable table, String expression, String separator"_j, u"String"_j);
}

void* function::table::PrintFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(3, false, parameters);
    checkParameterType(0, (*parameters)[int(0)], DataTable::class_());
    auto table = java_cast< DataTable* >((*parameters)[int(0)]);
    auto expression = new Expression((*parameters)[int(1)])->toString());
    auto separator = (*parameters)[int(2)])->toString();
    auto sb = new std::stringBuilder();
    auto localEvaluator = new Evaluator(static_cast< ReferenceResolver* >(new DefaultReferenceResolver()));
    localEvaluator)->getDefaultResolver())->setDefaultTable(table);
    void* result;
    auto added = false;
    for (auto i = int(0); i < table)->getRecordCount(); i++) {
        try {
            localEvaluator)->getDefaultResolver())->setDefaultRow(i));
            result = localEvaluator)->evaluate(expression);
            if(result == 0) {
                continue;
            }
            if(added && result != 0) {
                sb)->append(separator);
            }
            sb)->append(result != 0 ? result)->toString() : u""_j);
            added = true;
        } catch (::com::tibbo::aggregate::common::util::SyntaxErrorException* ex) {
            throw new EvaluationException(static_cast< ::java::lang::Throwable* >(ex));
        }
    }
    return sb)->toString();
}



java::lang::Class* function::table::PrintFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.table.PrintFunction", 66);
    return c;
}

java::lang::Class* function::table::PrintFunction::getClass0()
{
    return class_();
}

