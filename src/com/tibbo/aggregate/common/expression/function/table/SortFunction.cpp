// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/table/SortFunction.java
#include <com/tibbo/aggregate/common/expression/function/table/SortFunction.h"

#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/expression/function/Functions.h"
#include <com/tibbo/aggregate/common/util/Util.h"
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

function::table::SortFunction::SortFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::table::SortFunction::SortFunction() 
    : SortFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::table::SortFunction::ctor()
{
    super::ctor(function::Functions::GROUP_DATA_TABLE_PROCESSING(), u"DataTable table, String field, boolean ascending"_j, u"DataTable"_j);
}

void* function::table::SortFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(3, false, parameters);
    checkParameterType(0, (*parameters)[int(0)], DataTable::class_());
    auto source = java_cast< DataTable* >((*parameters)[int(0)]);
    auto field = (*parameters)[int(1)])->toString();
    bool ascending = (util::Util::convertToBoolean((*parameters)[int(2)], false, false)))->booleanValue();
    auto result = source)->clone();
    result)->sort(field, ascending);
    return result;
}



java::lang::Class* function::table::SortFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.table.SortFunction", 65);
    return c;
}

java::lang::Class* function::table::SortFunction::getClass0()
{
    return class_();
}

