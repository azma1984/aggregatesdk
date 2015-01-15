// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/date/DateFieldFunction.java
#include <com/tibbo/aggregate/common/expression/function/date/DateFieldFunction.h"

//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/util/GregorianCalendar.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::expression::function::date::DateFieldFunction::DateFieldFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::function::date::DateFieldFunction::DateFieldFunction(int field) 
    : DateFieldFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor(field);
}

void com::tibbo::aggregate::common::expression::function::date::DateFieldFunction::ctor(int field)
{
    super::ctor(u"Integer"_j);
    this->field = field;
}

void* com::tibbo::aggregate::common::expression::function::date::DateFieldFunction::execute(::java::util::GregorianCalendar* calendar, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    return calendar)->get(field));
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::date::DateFieldFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.date.DateFieldFunction", 69);
    return c;
}

void* com::tibbo::aggregate::common::expression::function::date::DateFieldFunction::execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray* parameters)
{
    return super::execute(evaluator, environment, parameters);
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::date::DateFieldFunction::getClass0()
{
    return class_();
}

