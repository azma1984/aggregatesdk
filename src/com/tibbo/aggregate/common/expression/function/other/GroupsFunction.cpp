// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/other/GroupsFunction.java
#include <com/tibbo/aggregate/common/expression/function/other/GroupsFunction.h"

#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/DataTableUtils.h"
#include <com/tibbo/aggregate/common/expression/function/Functions.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/util/LinkedList.h"
//#include <java/util/List.h"
//#include <java/util/regex/Matcher.h"
//#include <java/util/regex/Pattern.h"
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

com::tibbo::aggregate::common::expression::function::other::GroupsFunction::GroupsFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::function::other::GroupsFunction::GroupsFunction() 
    : GroupsFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::expression::function::other::GroupsFunction::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::expression::function::Functions::GROUP_STRING_PROCESSING(), u"String source, String regex"_j, u"Object"_j);
}

void* com::tibbo::aggregate::common::expression::function::other::GroupsFunction::execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(2, false, parameters);
    auto source = (*parameters)[int(0)])->toString();
    auto regex = (*parameters)[int(1)])->toString();
    auto pattern = ::java::util::regex::Pattern::compile(regex);
    auto matcher = pattern)->matcher(source);
    std::list  result = new ::java::util::LinkedList();
    if(matcher)->find()) {
        for (auto i = int(0); i < matcher)->groupCount(); i++) 
                        result)->add(matcher)->group(i + int(1))));

    }
    return result)->size() == 1 ? java_cast< void* >(result)->get(0)) : DataTableUtils::wrapToTable(result));
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::other::GroupsFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.other.GroupsFunction", 67);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::other::GroupsFunction::getClass0()
{
    return class_();
}

