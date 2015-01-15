// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/other/FormatFunction.java
#include <com/tibbo/aggregate/common/expression/function/other/FormatFunction.h"

#include <com/tibbo/aggregate/common/expression/function/Functions.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/util/Arrays.h"
//#include <java/util/Formatter.h"
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

com::tibbo::aggregate::common::expression::function::other::FormatFunction::FormatFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::function::other::FormatFunction::FormatFunction() 
    : FormatFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::expression::function::other::FormatFunction::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::expression::function::Functions::GROUP_STRING_PROCESSING(), u"String pattern, Object parameter1, ..."_j, u"String"_j);
}

void* com::tibbo::aggregate::common::expression::function::other::FormatFunction::execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(2, true, parameters);
    auto pattern = (*parameters)[int(0)])->toString();
    auto data = java_cast< voidArray* >(::java::util::Arrays::copyOfRange(static_cast< voidArray* >(parameters), int(1), parameters)->length));
    auto formatter = new ::java::util::Formatter();
    auto result = formatter)->format(pattern, data))->toString();
    formatter)->close();
    return result;
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::other::FormatFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.other.FormatFunction", 67);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::other::FormatFunction::getClass0()
{
    return class_();
}

