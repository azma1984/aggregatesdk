// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/other/LdFunction.java
#include <com/tibbo/aggregate/common/expression/function/other/LdFunction.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/expression/EvaluationEnvironment.h"
#include <com/tibbo/aggregate/common/expression/EvaluationException.h"
#include <com/tibbo/aggregate/common/expression/function/Functions.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/NullPointerException.h"
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

com::tibbo::aggregate::common::expression::function::other::LdFunction::LdFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::function::other::LdFunction::LdFunction() 
    : LdFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::expression::function::other::LdFunction::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::expression::function::Functions::GROUP_OTHER(), u"String variable"_j, u"Object"_j);
}

void* com::tibbo::aggregate::common::expression::function::other::LdFunction::execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(1, false, parameters);
    auto variable = (*parameters)[int(0)])->toString();
    if(environment != 0 && environment)->getEnvironment() != 0 && environment)->getEnvironment())->containsKey(variable)) {
        return java_cast< void* >(environment)->getEnvironment())->get(variable));
    }
    throw new ::com::tibbo::aggregate::common::expression::EvaluationException(std::stringBuilder().append(Cres::get())->getString(u"exprEnvVarNotFound"_j))->append(variable)->toString());
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::other::LdFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.other.LdFunction", 63);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::other::LdFunction::getClass0()
{
    return class_();
}

