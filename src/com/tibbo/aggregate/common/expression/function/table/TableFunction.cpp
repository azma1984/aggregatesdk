// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/table/TableFunction.java
#include <com/tibbo/aggregate/common/expression/function/table/TableFunction.h"

#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/DataTableConstruction.h"
#include <com/tibbo/aggregate/common/datatable/DataTableUtils.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/datatable/encoding/ClassicEncodingSettings.h"
#include <com/tibbo/aggregate/common/expression/EvaluationException.h"
#include <com/tibbo/aggregate/common/expression/function/Functions.h"
#include <com/tibbo/aggregate/common/util/SyntaxErrorException.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/util/Arrays.h"
//#include <java/util/List.h"
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

com::tibbo::aggregate::common::expression::function::table::TableFunction::TableFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::function::table::TableFunction::TableFunction() 
    : TableFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::expression::function::table::TableFunction::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::expression::function::Functions::GROUP_DATA_TABLE_PROCESSING(), u"String format, Object field1, Object field2, ..."_j, u"DataTable"_j);
}

void* com::tibbo::aggregate::common::expression::function::table::TableFunction::execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    try {
        checkParameters(1, true, parameters);
        auto formatString = (*parameters)[int(0)] != 0 ? (*parameters)[int(0)])->toString() : static_cast< const std::string & >(0);
        if(formatString == 0) {
            throw new ::com::tibbo::aggregate::common::expression::EvaluationException(u"Format cannot be NULL"_j);
        }
        auto useVisibleSeparators = true;
        for (auto i = int(0); i < formatString)->length(); i++) {
            auto c = formatString)->charAt(i);
            if(c == DataTableUtils::ELEMENT_START) {
                useVisibleSeparators = false;
                break;
            }
            if(c == DataTableUtils::ELEMENT_VISIBLE_START) {
                useVisibleSeparators = true;
                break;
            }
        }
        auto format = new TableFormat(formatString, new encoding::ClassicEncodingSettings(useVisibleSeparators), true);
        auto data = java_cast< voidArray* >(::java::util::Arrays::copyOfRange(static_cast< voidArray* >(parameters), int(1), parameters)->length));
        auto result = DataTableConstruction::constructTable(::java::util::Arrays::asList(data), format, evaluator, 0);
        return result;
    } catch (::com::tibbo::aggregate::common::util::SyntaxErrorException* ex) {
        throw new ::com::tibbo::aggregate::common::expression::EvaluationException(ex)->getMessage(), ex);
    }
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::table::TableFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.table.TableFunction", 66);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::table::TableFunction::getClass0()
{
    return class_();
}

