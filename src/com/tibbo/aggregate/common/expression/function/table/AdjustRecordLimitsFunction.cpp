// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/table/AdjustRecordLimitsFunction.java
#include "expression/function/table/AdjustRecordLimitsFunction.h"

#include "datatable/DataTable.h"
#include "datatable/DataTableReplication.h"
#include "datatable/TableFormat.h"
#include "expression/function/Functions.h"
#include "util/Util.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Number.h"
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

function::table::AdjustRecordLimitsFunction::AdjustRecordLimitsFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::table::AdjustRecordLimitsFunction::AdjustRecordLimitsFunction() 
    : AdjustRecordLimitsFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::table::AdjustRecordLimitsFunction::ctor()
{
    super::ctor(function::Functions::GROUP_DATA_TABLE_PROCESSING(), u"DataTable table, Integer minRecords, Integer maxRecords"_j, u"DataTable"_j);
}

void* function::table::AdjustRecordLimitsFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(3, false, parameters);
    checkParameterType(0, (*parameters)[int(0)], DataTable::class_());
    auto table = java_cast< DataTable* >((*parameters)[int(0)]);
    auto minRecords = util::Util::convertToNumber((*parameters)[int(1)], true, false))->intValue();
    auto maxRecords = util::Util::convertToNumber((*parameters)[int(2)], true, false))->intValue();
    auto newFormat = table)->getFormat())->clone())->setMinRecords(minRecords))->setMaxRecords(maxRecords);
    auto result = new DataTable(newFormat);
    DataTableReplication::copy(table, result, true, true, true, true, true);
    return result;
}



java::lang::Class* function::table::AdjustRecordLimitsFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.table.AdjustRecordLimitsFunction", 79);
    return c;
}

java::lang::Class* function::table::AdjustRecordLimitsFunction::getClass0()
{
    return class_();
}

