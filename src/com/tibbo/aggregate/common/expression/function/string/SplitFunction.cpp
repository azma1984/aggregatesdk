// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/string/SplitFunction.java
#include <com/tibbo/aggregate/common/expression/function/string/SplitFunction.h"

#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/expression/function/Functions.h"
#include <com/tibbo/aggregate/common/util/Util.h"
//#include <java/io/Serializable.h"
//#include <java/lang/ArrayStoreException.h"
//#include <java/lang/CharSequence.h"
//#include <java/lang/Comparable.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Number.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
#include <SubArray.h"
#include <ObjectArray.h"

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, voidArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< std::string, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::expression::function::string::SplitFunction::SplitFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::function::string::SplitFunction::SplitFunction() 
    : SplitFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::expression::function::string::SplitFunction::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::expression::function::Functions::GROUP_STRING_PROCESSING(), u"String string, String regex[, String fieldName [, Integer limit ]]"_j, u"DataTable"_j);
}

void* com::tibbo::aggregate::common::expression::function::string::SplitFunction::execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(2, false, parameters);
    auto source = (*parameters)[int(0)])->toString();
    auto regexp = (*parameters)[int(1)])->toString();
    auto fieldName = parameters)->length > 2 ? (*parameters)[int(2)])->toString() : u"element"_j;
    int  limit = parameters)->length > 3 ? util::Util::convertToNumber((*parameters)[int(3)], true, false))->intValue() : int(0));
    auto data = source)->split(regexp, (limit))->intValue());
    auto ff = FieldFormat::create(fieldName, FieldFormat::STRING_FIELD);
    auto res = new DataTable(ff)->wrap());
    for (auto i = int(0); i < data)->length; i++) {
        auto element = (*data)[i];
        res)->addRecord(new voidArray({element)}));
    }
    return res;
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::string::SplitFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.string.SplitFunction", 67);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::string::SplitFunction::getClass0()
{
    return class_();
}

