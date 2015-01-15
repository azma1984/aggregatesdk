// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/other/TraceFunction.java
#include <com/tibbo/aggregate/common/expression/function/other/TraceFunction.h"

#include <com/tibbo/aggregate/common/expression/Evaluator.h"
#include <com/tibbo/aggregate/common/expression/function/Functions.h"
#include <com/tibbo/aggregate/common/expression/util/Tracer.h"
#include <com/tibbo/aggregate/common/expression/util/TracerManager.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
#include <ObjectArray.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::expression::function::other::TraceFunction::TraceFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::function::other::TraceFunction::TraceFunction() 
    : TraceFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::expression::function::other::TraceFunction::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::expression::function::Functions::GROUP_OTHER(), u"Object value, String message"_j, u"Object"_j);
}

void* com::tibbo::aggregate::common::expression::function::other::TraceFunction::execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(1, true, parameters);
    auto value = (*parameters)[int(0)];
    auto message = parameters)->length > 1 && (*parameters)[int(1)] != 0 ? (*parameters)[int(1)])->toString() : static_cast< const std::string & >(0);
    auto tracer = evaluator)->getTracer();
    if(tracer == 0) {
        tracer = ::com::tibbo::aggregate::common::expression::util::TracerManager::getDefaultTracer();
    }
    tracer)->trace(value, message);
    return value;
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::other::TraceFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.other.TraceFunction", 66);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::other::TraceFunction::getClass0()
{
    return class_();
}

