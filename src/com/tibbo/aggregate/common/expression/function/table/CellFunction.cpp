// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/table/CellFunction.java
#include <com/tibbo/aggregate/common/expression/function/table/CellFunction.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/expression/EvaluationException.h"
#include <com/tibbo/aggregate/common/expression/function/Functions.h"
#include <com/tibbo/aggregate/common/util/Util.h"
//#include <java/lang/Boolean.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Number.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/util/Map.h"
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

function::table::CellFunction::CellFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::table::CellFunction::CellFunction() 
    : CellFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::table::CellFunction::ctor()
{
    super::ctor(function::Functions::GROUP_DATA_TABLE_PROCESSING(), u"DataTable table [, String field [, Integer row [, Boolean description]]]"_j, u"Object"_j);
}

void* function::table::CellFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(1, false, parameters);
    checkParameterType(0, (*parameters)[int(0)], DataTable::class_());
    auto svdesc = false;
    if(parameters)->length >= 4) {
        svdesc = (util::Util::convertToBoolean((*parameters)[int(3)], false, false)))->booleanValue();
    }
    auto table = java_cast< DataTable* >((*parameters)[int(0)]);
    const std::string & field;
    if(parameters)->length >= 2) {
        if(dynamic_cast< ::java::lang::Number* >((*parameters)[int(1)]) != 0) {
            auto fieldIndex = java_cast< ::java::lang::Number* >((*parameters)[int(1)]);
            if(table)->getFieldCount() < fieldIndex)->intValue()) {
                throw new EvaluationException(std::stringBuilder().append(Cres::get())->getString(u"exprTableHasNoFieldIndex"_j))->append(fieldIndex)->intValue())->toString());
            }
            field = table)->getFormat(fieldIndex)->intValue()))->getName();
        } else {
            field = (*parameters)[int(1)])->toString();
        }
    } else {
        field = table)->getFormat(int(0)))->getName();
    }
    if(!table)->getFormat())->hasField(field)) {
        throw new EvaluationException(std::stringBuilder().append(Cres::get())->getString(u"exprTableHasNoField"_j))->append(field)
            ->append(u" ("_j)
            ->append(table)->getFormat()))
            ->append(u")"_j)->toString());
    }
    auto record = (parameters)->length > 2) ? ::com::tibbo::aggregate::common::util::Util::convertToNumber((*parameters)[int(2)], false, false) : int(0));
    if(table)->getRecordCount() <= record)->intValue()) {
        throw new EvaluationException(std::stringBuilder().append(Cres::get())->getString(u"exprTableHasNoRecordIndex"_j))->append(record)->intValue())->toString());
    }
    auto rec = table)->getRecord(record)->intValue());
    auto value = rec)->getValue(field);
    if(svdesc) {
        auto selvals = rec)->getFormat(field))->getSelectionValues();
        auto desc = java_cast< const std::string & >(selvals)->get(value));
        return desc != 0 ? desc) : value;
    }
    return value;
}



java::lang::Class* function::table::CellFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.table.CellFunction", 65);
    return c;
}

java::lang::Class* function::table::CellFunction::getClass0()
{
    return class_();
}

