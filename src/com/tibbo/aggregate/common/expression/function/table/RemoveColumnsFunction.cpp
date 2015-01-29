// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/table/RemoveColumnsFunction.java
#include "expression/function/table/RemoveColumnsFunction.h"

#include "datatable/DataTable.h"
#include "datatable/DataTableReplication.h"
#include "datatable/TableFormat.h"
#include "expression/function/Functions.h"
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

function::table::RemoveColumnsFunction::RemoveColumnsFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::table::RemoveColumnsFunction::RemoveColumnsFunction() 
    : RemoveColumnsFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::table::RemoveColumnsFunction::ctor()
{
    super::ctor(function::Functions::GROUP_DATA_TABLE_PROCESSING(), u"DataTable table, String column1, String column2, ..."_j, u"DataTable"_j);
}

void* function::table::RemoveColumnsFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(2, false, parameters);
    checkParameterType(0, (*parameters)[int(0)], DataTable::class_());
    auto table = (java_cast< DataTable* >((*parameters)[int(0)])))->clone();
    auto newFormat = table)->getFormat())->clone();
    for (auto i = int(1); i < parameters)->length; i = i + int(1)) {
        auto field = (*parameters)[i])->toString();
        newFormat)->removeField(field);
    }
    auto newTable = new DataTable(newFormat);
    DataTableReplication::copy(table, newTable, true, true, true);
    return newTable;
}



java::lang::Class* function::table::RemoveColumnsFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.table.RemoveColumnsFunction", 74);
    return c;
}

java::lang::Class* function::table::RemoveColumnsFunction::getClass0()
{
    return class_();
}

