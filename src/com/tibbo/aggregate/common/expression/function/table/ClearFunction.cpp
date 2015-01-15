// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/table/ClearFunction.java
#include <com/tibbo/aggregate/common/expression/function/table/ClearFunction.h"

#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/expression/function/Functions.h"
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

com::tibbo::aggregate::common::expression::function::table::ClearFunction::ClearFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::function::table::ClearFunction::ClearFunction() 
    : ClearFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::expression::function::table::ClearFunction::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::expression::function::Functions::GROUP_DATA_TABLE_PROCESSING(), u"DataTable table"_j, u"DataTable"_j);
}

void* com::tibbo::aggregate::common::expression::function::table::ClearFunction::execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(1, false, parameters);
    checkParameterType(0, (*parameters)[int(0)], DataTable::class_());
    auto table = java_cast< DataTable* >((*parameters)[int(0)]);
    while (table)->getRecordCount() > table)->getFormat())->getMinRecords()) {
        table)->removeRecord(table)->getRecordCount() - int(1));
    }
    return table;
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::table::ClearFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.table.ClearFunction", 66);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::table::ClearFunction::getClass0()
{
    return class_();
}

