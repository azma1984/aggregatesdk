// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/table/DescriptionFunction.java
#include "expression/function/table/DescriptionFunction.h"

#include "datatable/DataTable.h"
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

function::table::DescriptionFunction::DescriptionFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::table::DescriptionFunction::DescriptionFunction() 
    : DescriptionFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::table::DescriptionFunction::ctor()
{
    super::ctor(function::Functions::GROUP_DATA_TABLE_PROCESSING(), u"DataTable table"_j, u"String"_j);
}

void* function::table::DescriptionFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(1, false, parameters);
    checkParameterType(0, (*parameters)[int(0)], DataTable::class_());
    auto table = java_cast< DataTable* >((*parameters)[int(0)]);
    return table)->getDescription();
}



java::lang::Class* function::table::DescriptionFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.table.DescriptionFunction", 72);
    return c;
}

java::lang::Class* function::table::DescriptionFunction::getClass0()
{
    return class_();
}

