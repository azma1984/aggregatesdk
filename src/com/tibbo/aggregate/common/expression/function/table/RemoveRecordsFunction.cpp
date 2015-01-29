// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/table/RemoveRecordsFunction.java
#include "expression/function/table/RemoveRecordsFunction.h"

#include "Cres.h"
#include "datatable/DataRecord.h"
#include "datatable/DataTable.h"
#include "datatable/TableFormat.h"
#include "expression/AbstractEvaluatingVisitor.h"
#include "expression/EvaluationException.h"
#include "expression/function/Functions.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/util/Iterator.h"
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

function::table::RemoveRecordsFunction::RemoveRecordsFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::table::RemoveRecordsFunction::RemoveRecordsFunction() 
    : RemoveRecordsFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::table::RemoveRecordsFunction::ctor()
{
    super::ctor(function::Functions::GROUP_DATA_TABLE_PROCESSING(), u"DataTable table, String fieldToCheck, Object value"_j, u"DataTable"_j);
}

void* function::table::RemoveRecordsFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(2, false, parameters);
    checkParameters(3, true, parameters);
    checkParameterType(0, (*parameters)[int(0)], DataTable::class_());
    if((*parameters)[int(0)] == 0 || (*parameters)[int(1)] == 0) {
        throw new EvaluationException(u"Field parameter may not be NULL"_j);
    }
    auto sourceTable = (java_cast< DataTable* >((*parameters)[int(0)]));
    auto fieldToCheck = (*parameters)[int(1)])->toString();
    if(!sourceTable)->getFormat())->hasField(fieldToCheck)) {
        throw new EvaluationException(std::stringBuilder().append(Cres::get())->getString(u"exprTableHasNoField"_j))->append(fieldToCheck)->toString());
    }
    auto value = (*parameters)[int(2)];
    auto resultTable = new DataTable(sourceTable)->getFormat());
    for (auto _i = sourceTable)->getRecords())->iterator(); _i->hasNext(); ) {
        DataRecord* rec = java_cast< DataRecord* >(_i->next());
        {
            if(AbstractEvaluatingVisitor::equal(rec)->getValue(fieldToCheck), value)) {
                continue;
            }
            resultTable)->addRecord(rec)->clone());
        }
    }
    return resultTable;
}



java::lang::Class* function::table::RemoveRecordsFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.table.RemoveRecordsFunction", 74);
    return c;
}

java::lang::Class* function::table::RemoveRecordsFunction::getClass0()
{
    return class_();
}

