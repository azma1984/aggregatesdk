// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/DataTableConstruction.java
//#include <com/tibbo/aggregate/common/datatable/DataTableConstruction.h"

#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/DataTableUtils.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/expression/Evaluator.h"
#include <com/tibbo/aggregate/common/expression/Expression.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/IllegalStateException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/util/Collections.h"
//#include <java/util/Iterator.h"
//#include <java/util/LinkedList.h"
//#include <java/util/List.h"

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

DateDataTableConstruction::DataTableConstruction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

DateDataTableConstruction::DataTableConstruction()
    : DataTableConstruction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

DateDataTable* DateDataTableConstruction::constructTable(void* object) /* throws(SyntaxErrorException, EvaluationException) */
{
    
    return DataTableConstruction::constructTable(::java::util::Collections::singletonList(object), 0, 0, 0);
}

DateDataTable* DateDataTableConstruction::constructTable(std::list  parameters) /* throws(SyntaxErrorException, EvaluationException) */
{
    
    return DataTableConstruction::constructTable(parameters, 0, 0, 0);
}

DateDataTable* DateDataTableConstruction::constructTable(std::list  parameters, TableFormat* format) /* throws(SyntaxErrorException, EvaluationException) */
{
    
    return DataTableConstruction::constructTable(parameters, format, 0, 0);
}

DateDataTable* DateDataTableConstruction::constructTable(std::list  parameters, TableFormat* format, Evaluator* evaluator, EvaluationEnvironment* environment) /* throws(SyntaxErrorException, EvaluationException) */
{
    
    auto params = DataTableConstruction::resolveParameters(parameters, evaluator, environment);
    DataTable* res;
    if(format == 0) {
        if(params)->size() == 1 && dynamic_cast< DataTable* >(java_cast< void* >(params)->get(0))) != 0) {
            res = java_cast< DataTable* >(java_cast< void* >(params)->get(0)));
        } else {
            res = DataTableUtils::wrapToTable(static_cast< std::list  >(params));
        }
    } else {
        res = DataTableConstruction::fillDataTable(format, params);
    }
    return res;
}

std::list  DateDataTableConstruction::resolveParameters(std::list  parameters, Evaluator* evaluator, EvaluationEnvironment* environment) /* throws(SyntaxErrorException, EvaluationException) */
{
    
    std::list  params = new ::java::util::LinkedList();
    for (auto _i = parameters)->iterator(); _i->hasNext(); ) {
        void* param = java_cast< void* >(_i->next());
        {
            if(dynamic_cast< Expression* >(param) != 0) {
                if(evaluator == 0) {
                    throw new ::java::lang::IllegalStateException(u"Evaluator not defined"_j);
                }
                params)->add(evaluator)->evaluate(java_cast< Expression* >(param), environment)));
            } else {
                params)->add(param));
            }
        }
    }
    return params;
}

DateDataTable* DateDataTableConstruction::fillDataTable(TableFormat* format, std::list  params)
{
    
    auto table = new DataTable(format);
    if(params)->size() != 0) {
        auto rec = table)->addRecord();
        auto fieldNum = int(0);
        for (auto i = int(0); i < params)->size(); i++) {
            if(fieldNum >= format)->getFieldCount()) {
                fieldNum;
                rec = table)->addRecord();
            }
            auto ff = format)->getField(fieldNum);
            auto param = java_cast< void* >(params)->get(i));
            if(param == 0 || ff)->getFieldClass())->isAssignableFrom(param)->getClass()) || ff)->getFieldWrappedClass())->isAssignableFrom(param)->getClass())) {
                rec)->addValue(param);
            } else {
                rec)->addValue(java_cast< void* >(ff)->valueFromString(param)->toString())));
            }
            fieldNum++;
        }
    }
    while (table)->getRecordCount() < format)->getMinRecords()) {
        table)->addRecord();
    }
    return table;
}



java::lang::Class* DateDataTableConstruction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.DataTableConstruction", 58);
    return c;
}

java::lang::Class* DateDataTableConstruction::getClass0()
{
    return class_();
}

