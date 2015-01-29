// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/table/UnionFunction.java
#include "expression/function/table/UnionFunction.h"

#include "datatable/DataRecord.h"
#include "datatable/DataTable.h"
#include "datatable/DataTableReplication.h"
#include "datatable/FieldFormat.h"
#include "datatable/TableFormat.h"
#include "expression/function/Functions.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
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

function::table::UnionFunction::UnionFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::table::UnionFunction::UnionFunction() 
    : UnionFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::table::UnionFunction::ctor()
{
    super::ctor(function::Functions::GROUP_DATA_TABLE_PROCESSING(), u"DataTable left, DataTable right"_j, u"DataTable"_j);
}

void* function::table::UnionFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(2, false, parameters);
    checkParameterType(0, (*parameters)[int(0)], DataTable::class_());
    checkParameterType(1, (*parameters)[int(1)], DataTable::class_());
    auto leftTable = java_cast< DataTable* >((*parameters)[int(0)]);
    auto rightTable = java_cast< DataTable* >((*parameters)[int(1)]);
    return union_(leftTable, rightTable);
}

DateDataTable* function::table::UnionFunction::union_(DataTable* leftTable, DataTable* rightTable)
{
    TableFormat* newFormat;
    DataTable* resultDataTable;
    newFormat = joinTableFormats(leftTable)->getFormat(), rightTable)->getFormat());
    resultDataTable = new DataTable(newFormat);
    DataTableReplication::copy(leftTable, resultDataTable, true, true);
    for (auto _i = rightTable)->iterator(); _i->hasNext(); ) {
        DataRecord* rec = java_cast< DataRecord* >(_i->next());
        {
            auto newRec = resultDataTable)->addRecord();
            DataTableReplication::copyRecord(rec, newRec, true, true);
        }
    }
    return resultDataTable;
}

DateTableFormat* function::table::UnionFunction::joinTableFormats(TableFormat* newFormat, TableFormat* tableFormat)
{
    auto result = newFormat)->clone();
    long min1 = newFormat)->getMinRecords();
    long max1 = newFormat)->getMaxRecords();
    long min2 = tableFormat)->getMinRecords();
    long max2 = tableFormat)->getMaxRecords();
    auto min = min1 + min2;
    auto max = max1 + max2;
    if(min > ::java::lang::Integer::MAX_VALUE)
        min = ::java::lang::Integer::MAX_VALUE;

    if(max > ::java::lang::Integer::MAX_VALUE)
        max = ::java::lang::Integer::MAX_VALUE;

    result)->setMinRecords(static_cast< int >(min));
    result)->setMaxRecords(static_cast< int >(max));
    for (auto _i = tableFormat)->getFields())->iterator(); _i->hasNext(); ) {
        FieldFormat* field = java_cast< FieldFormat* >(_i->next());
        {
            if(!newFormat)->hasField(field)->getName()))
                result)->addField(field)->clone());

        }
    }
    return result;
}



java::lang::Class* function::table::UnionFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.table.UnionFunction", 66);
    return c;
}

java::lang::Class* function::table::UnionFunction::getClass0()
{
    return class_();
}

