// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/table/AddColumnsFunction.java
#include "expression/function/table/AddColumnsFunction.h"

#include "datatable/DataRecord.h"
#include "datatable/DataTable.h"
#include "datatable/FieldFormat.h"
#include "datatable/TableFormat.h"
#include "expression/EnvironmentReferenceResolver.h"
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
//#include <java/lang/Throwable.h"
//#include <java/util/Iterator.h"
//#include <java/util/LinkedHashMap.h"
//#include <java/util/Map_Entry.h"
//#include <java/util/Map.h"
//#include <java/util/Set.h"
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

function::table::AddColumnsFunction::AddColumnsFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::table::AddColumnsFunction::AddColumnsFunction() 
    : AddColumnsFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::table::AddColumnsFunction::ctor()
{
    super::ctor(function::Functions::GROUP_DATA_TABLE_PROCESSING(), u"DataTable table, String format1, String expression1, String format2, String expression2, ..."_j, u"DataTable"_j);
}

void* function::table::AddColumnsFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(3, true, parameters);
    checkParameterType(0, (*parameters)[int(0)], DataTable::class_());
    auto table = (java_cast< DataTable* >((*parameters)[int(0)])))->clone();
    auto clone = table)->getFormat())->clone();
    std::map newFields = new ::java::util::LinkedHashMap();
    for (auto i = int(1); i < parameters)->length - int(1); i = i + int(2)) {
        auto ff = FieldFormat::create((*parameters)[i])->toString());
        clone)->addField(ff);
        newFields)->put(ff, new Expression((*parameters)[i + int(1)])->toString()));
    }
    table)->setFormat(clone);
    table)->joinFormats();
    for (auto _i = newFields)->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* entry = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            auto resolver = evaluator)->getDefaultResolver();
            auto localEvaluator = new Evaluator(resolver)->getContextManager(), resolver)->getDefaultContext(), table, resolver)->getCallerController());
            localEvaluator)->getEnvironmentResolver())->setEnvironment(evaluator)->getEnvironmentResolver())->getEnvironment());
            for (auto j = int(0); j < table)->getRecordCount(); j++) {
                auto rec = table)->getRecord(j);
                localEvaluator)->getDefaultResolver())->setDefaultRow(j));
                try {
                    auto value = localEvaluator)->evaluate(java_cast< Expression* >(entry)->getValue()), environment);
                    rec)->setValue(java_cast< FieldFormat* >(entry)->getKey()))->getName(), value);
                } catch (::com::tibbo::aggregate::common::util::SyntaxErrorException* ex) {
                    throw new EvaluationException(static_cast< ::java::lang::Throwable* >(ex));
                }
            }
        }
    }
    return table;
}



java::lang::Class* function::table::AddColumnsFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.table.AddColumnsFunction", 71);
    return c;
}

java::lang::Class* function::table::AddColumnsFunction::getClass0()
{
    return class_();
}

