// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/table/ConvertFunction.java
#include "expression/function/table/ConvertFunction.h"

#include "datatable/DataTable.h"
#include "datatable/DataTableReplication.h"
#include "datatable/TableFormat.h"
#include "datatable/encoding/ClassicEncodingSettings.h"
#include "expression/function/Functions.h"
#include "util/Util.h"
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

function::table::ConvertFunction::ConvertFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::table::ConvertFunction::ConvertFunction() 
    : ConvertFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::table::ConvertFunction::ctor()
{
    super::ctor(function::Functions::GROUP_DATA_TABLE_PROCESSING(), u"DataTable table, String format"_j, u"DataTable"_j);
}

void* function::table::ConvertFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(2, false, parameters);
    checkParameterType(0, (*parameters)[int(0)], DataTable::class_());
    auto source = java_cast< DataTable* >((*parameters)[int(0)]);
    auto formatSource = (*parameters)[int(1)])->toString();
    if(formatSource == 0) {
        return source;
    }
    ::java::lang::Boolean* useVisibleSeparators = ::java::lang::Boolean::valueOf(true);
    if(parameters)->length > 2) {
        useVisibleSeparators = ::com::tibbo::aggregate::common::util::Util::convertToBoolean((*parameters)[int(2)], false, false);
    }
    auto format = new TableFormat(formatSource, new encoding::ClassicEncodingSettings((useVisibleSeparators))->booleanValue()), true);
    auto target = new DataTable(format, true);
    if(source != 0) {
        DataTableReplication::copy(source, target, true, true, true);
    }
    return target;
}



java::lang::Class* function::table::ConvertFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.table.ConvertFunction", 68);
    return c;
}

java::lang::Class* function::table::ConvertFunction::getClass0()
{
    return class_();
}

