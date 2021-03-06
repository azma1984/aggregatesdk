// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/table/SelectFunction.java
#include "expression/function/table/SelectFunction.h"

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

function::table::SelectFunction::SelectFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::table::SelectFunction::SelectFunction() 
    : SelectFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::table::SelectFunction::ctor()
{
    super::ctor(function::Functions::GROUP_DATA_TABLE_PROCESSING(), u"DataTable table, String fieldToSelect, String fieldToCheck, Object value"_j, u"Object"_j);
}

void* function::table::SelectFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(3, false, parameters);
    checkParameters(4, true, parameters);
    checkParameterType(0, (*parameters)[int(0)], DataTable::class_());
    auto table = java_cast< DataTable* >((*parameters)[int(0)]);
    if((*parameters)[int(1)] == 0 || (*parameters)[int(2)] == 0) {
        throw new EvaluationException(u"Field parameter may not be NULL"_j);
    }
    auto fieldToSelect = (*parameters)[int(1)])->toString();
    if(!table)->getFormat())->hasField(fieldToSelect)) {
        throw new EvaluationException(std::stringBuilder().append(Cres::get())->getString(u"exprTableHasNoField"_j))->append(fieldToSelect)->toString());
    }
    auto fieldToCheck = (*parameters)[int(2)])->toString();
    if(!table)->getFormat())->hasField(fieldToCheck)) {
        throw new EvaluationException(std::stringBuilder().append(Cres::get())->getString(u"exprTableHasNoField"_j))->append(fieldToCheck)->toString());
    }
    auto value = (*parameters)[int(3)];
    for (auto _i = table)->iterator(); _i->hasNext(); ) {
        DataRecord* rec = java_cast< DataRecord* >(_i->next());
        {
            if(AbstractEvaluatingVisitor::equal(rec)->getValue(fieldToCheck), value)) {
                return rec)->getValue(fieldToSelect);
            }
        }
    }
    return 0;
}



java::lang::Class* function::table::SelectFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.table.SelectFunction", 67);
    return c;
}

java::lang::Class* function::table::SelectFunction::getClass0()
{
    return class_();
}

