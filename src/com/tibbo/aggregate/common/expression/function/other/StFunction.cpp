// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/other/StFunction.java
#include <com/tibbo/aggregate/common/expression/function/other/StFunction.h"

#include <com/tibbo/aggregate/common/expression/EvaluationEnvironment.h"
#include <com/tibbo/aggregate/common/expression/function/Functions.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/util/Map.h"
#include <ObjectArray.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

function::other::StFunction::StFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::other::StFunction::StFunction() 
    : StFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::other::StFunction::ctor()
{
    super::ctor(function::Functions::GROUP_OTHER(), u"String variable, Object value"_j, u"Object"_j);
}

void* function::other::StFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(2, true, parameters);
    auto variable = (*parameters)[int(0)])->toString();
    auto value = (*parameters)[int(1)];
    if(environment != 0 && environment)->getEnvironment() != 0) {
        environment)->getEnvironment())->put(variable, value);
    }
    return value;
}



java::lang::Class* function::other::StFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.other.StFunction", 63);
    return c;
}

java::lang::Class* function::other::StFunction::getClass0()
{
    return class_();
}

