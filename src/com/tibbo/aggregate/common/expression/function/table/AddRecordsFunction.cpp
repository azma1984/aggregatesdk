// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/table/AddRecordsFunction.java
#include "expression/function/table/AddRecordsFunction.h"

#include "datatable/DataRecord.h"
#include "datatable/DataTable.h"
#include "datatable/DataTableConstruction.h"
#include "expression/EvaluationException.h"
#include "expression/function/Functions.h"
#include "util/SyntaxErrorException.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/Throwable.h"
//#include <java/util/Arrays.h"
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

function::table::AddRecordsFunction::AddRecordsFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::table::AddRecordsFunction::AddRecordsFunction() 
    : AddRecordsFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::table::AddRecordsFunction::ctor()
{
    super::ctor(function::Functions::GROUP_DATA_TABLE_PROCESSING(), u"DataTable table, Object field1, Object field2, ..."_j, u"DataTable"_j);
}

void* function::table::AddRecordsFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    try {
        checkParameters(1, true, parameters);
        checkParameterType(0, (*parameters)[int(0)], DataTable::class_());
        auto table = java_cast< DataTable* >((*parameters)[int(0)]);
        auto data = java_cast< voidArray* >(::java::util::Arrays::copyOfRange(static_cast< voidArray* >(parameters), int(1), parameters)->length));
        auto additionalRecordsTable = DataTableConstruction::constructTable(::java::util::Arrays::asList(data), table)->getFormat(), evaluator, 0);
        for (auto _i = additionalRecordsTable)->iterator(); _i->hasNext(); ) {
            DataRecord* rec = java_cast< DataRecord* >(_i->next());
            {
                table)->addRecord(rec);
            }
        }
        return table;
    } catch (::com::tibbo::aggregate::common::util::SyntaxErrorException* ex) {
        throw new EvaluationException(static_cast< ::java::lang::Throwable* >(ex));
    }
}



java::lang::Class* function::table::AddRecordsFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.table.AddRecordsFunction", 71);
    return c;
}

java::lang::Class* function::table::AddRecordsFunction::getClass0()
{
    return class_();
}

