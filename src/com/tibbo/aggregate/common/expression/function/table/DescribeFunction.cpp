// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/table/DescribeFunction.java
#include <com/tibbo/aggregate/common/expression/function/table/DescribeFunction.h"

#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
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

function::table::DescribeFunction::DescribeFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::table::DescribeFunction::DescribeFunction() 
    : DescribeFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::table::DescribeFunction::ctor()
{
    super::ctor(function::Functions::GROUP_DATA_TABLE_PROCESSING(), u"DataTable table, String field1, String description1, String field2, String description2, ..."_j, u"DataTable"_j);
}

void* function::table::DescribeFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(2, false, parameters);
    checkParameterType(0, (*parameters)[int(0)], DataTable::class_());
    auto table = (java_cast< DataTable* >((*parameters)[int(0)])))->clone();
    auto clone = table)->getFormat())->clone();
    for (auto i = int(1); i < parameters)->length - int(1); i = i + int(2)) {
        auto name = (*parameters)[i])->toString();
        auto description = (*parameters)[i + int(1)])->toString();
        auto ff = clone)->getField(name);
        if(ff != 0) {
            ff)->setDescription(description);
        }
    }
    table)->setFormat(clone);
    return table;
}



java::lang::Class* function::table::DescribeFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.table.DescribeFunction", 69);
    return c;
}

java::lang::Class* function::table::DescribeFunction::getClass0()
{
    return class_();
}

