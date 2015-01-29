// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/table/HasFieldFunction.java
#include "expression/function/table/HasFieldFunction.h"

#include "datatable/DataTable.h"
#include "datatable/TableFormat.h"
#include "expression/function/Functions.h"
//#include <java/lang/Boolean.h"
//#include <java/lang/Class.h"
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

function::table::HasFieldFunction::HasFieldFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::table::HasFieldFunction::HasFieldFunction() 
    : HasFieldFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::table::HasFieldFunction::ctor()
{
    super::ctor(function::Functions::GROUP_DATA_TABLE_PROCESSING(), u"DataTable table, String field"_j, u"Boolean"_j);
}

void* function::table::HasFieldFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(2, false, parameters);
    checkParameterType(0, (*parameters)[int(0)], DataTable::class_());
    auto table = java_cast< DataTable* >((*parameters)[int(0)]);
    auto field = (*parameters)[int(1)])->toString();
    return ::java::lang::Boolean::valueOf(table)->getFormat())->hasField(field));
}



java::lang::Class* function::table::HasFieldFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.table.HasFieldFunction", 69);
    return c;
}

java::lang::Class* function::table::HasFieldFunction::getClass0()
{
    return class_();
}

