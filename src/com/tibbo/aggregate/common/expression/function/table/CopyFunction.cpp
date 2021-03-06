// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/table/CopyFunction.java
#include "expression/function/table/CopyFunction.h"

#include "datatable/DataTable.h"
#include "datatable/DataTableReplication.h"
#include "expression/function/Functions.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
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

function::table::CopyFunction::CopyFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::table::CopyFunction::CopyFunction() 
    : CopyFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::table::CopyFunction::ctor()
{
    super::ctor(function::Functions::GROUP_DATA_TABLE_PROCESSING(), u"DataTable source, DataTable target"_j, u"DataTable"_j);
}

void* function::table::CopyFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(2, false, parameters);
    checkParameterType(0, (*parameters)[int(0)], DataTable::class_());
    checkParameterType(1, (*parameters)[int(1)], DataTable::class_());
    auto source = java_cast< DataTable* >((*parameters)[int(0)]);
    auto target = java_cast< DataTable* >((*parameters)[int(1)]);
    DataTableReplication::copy(source, target, true, true);
    return target;
}



java::lang::Class* function::table::CopyFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.table.CopyFunction", 65);
    return c;
}

java::lang::Class* function::table::CopyFunction::getClass0()
{
    return class_();
}

