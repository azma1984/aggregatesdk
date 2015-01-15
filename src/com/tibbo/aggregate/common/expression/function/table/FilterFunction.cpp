// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/table/FilterFunction.java
#include <com/tibbo/aggregate/common/expression/function/table/FilterFunction.h"

#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/DataTableReplication.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/expression/EvaluationException.h"
#include <com/tibbo/aggregate/common/expression/Evaluator.h"
#include <com/tibbo/aggregate/common/expression/Expression.h"
#include <com/tibbo/aggregate/common/expression/ReferenceResolver.h"
#include <com/tibbo/aggregate/common/expression/function/Functions.h"
#include <com/tibbo/aggregate/common/util/SyntaxErrorException.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/Throwable.h"
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

namespace
{
    template<typename F>
    struct finally_
    {
        finally_(F f) : f(f), moved(false) { }
        finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
        ~finally_() { if(!moved) f(); }
    private:
        finally_(const finally_&); finally_& operator=(const finally_&);
        F f;
        bool moved;
    };

    template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
}
com::tibbo::aggregate::common::expression::function::table::FilterFunction::FilterFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::function::table::FilterFunction::FilterFunction() 
    : FilterFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::expression::function::table::FilterFunction::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::expression::function::Functions::GROUP_DATA_TABLE_PROCESSING(), u"DataTable table, String filterExpression"_j, u"DataTable"_j);
}

void* com::tibbo::aggregate::common::expression::function::table::FilterFunction::execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(2, false, parameters);
    checkParameterType(0, (*parameters)[int(0)], DataTable::class_());
    auto source = java_cast< DataTable* >((*parameters)[int(0)]);
    auto filter = new ::com::tibbo::aggregate::common::expression::Expression((*parameters)[int(1)])->toString());
    auto result = new DataTable(source)->getFormat())->clone())->setMinRecords(0));
    auto oldRow = evaluator)->getDefaultResolver())->getDefaultRow();
    auto resolver = evaluator)->getDefaultResolver();
    auto localEvaluator = new ::com::tibbo::aggregate::common::expression::Evaluator(resolver)->getContextManager(), resolver)->getDefaultContext(), resolver)->getDefaultTable(), resolver)->getCallerController());
    localEvaluator)->getDefaultResolver())->setDefaultTable(source);
    {
        auto finally0 = finally([&] {
            evaluator)->getDefaultResolver())->setDefaultRow(oldRow);
        });
        {
            for (auto i = int(0); i < source)->getRecordCount(); i++) {
                localEvaluator)->getDefaultResolver())->setDefaultRow(i));
                try {
                    if(localEvaluator)->evaluateToBoolean(filter)) {
                        auto rec = result)->addRecord();
                        DataTableReplication::copyRecord(source)->getRecord(i), rec, true, true);
                    }
                } catch (::com::tibbo::aggregate::common::util::SyntaxErrorException* ex) {
                    throw new ::com::tibbo::aggregate::common::expression::EvaluationException(static_cast< ::java::lang::Throwable* >(ex));
                }
            }
        }
    }

    return result;
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::table::FilterFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.table.FilterFunction", 67);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::table::FilterFunction::getClass0()
{
    return class_();
}

