// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/Evaluator.java
#include <com/tibbo/aggregate/common/expression/Evaluator_LocalEnvironmentResolver.h"

#include <com/tibbo/aggregate/common/expression/Evaluator.h"
#include <com/tibbo/aggregate/common/expression/Reference.h"
#include <com/tibbo/aggregate/common/util/Util.h"
//#include <java/lang/Long.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

Evaluator_LocalEnvironmentResolver::Evaluator_LocalEnvironmentResolver(Evaluator *Evaluator_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , Evaluator_this(Evaluator_this)
{
    
}

Evaluator_LocalEnvironmentResolver::Evaluator_LocalEnvironmentResolver(Evaluator *Evaluator_this)
    : Evaluator_LocalEnvironmentResolver(Evaluator_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void* Evaluator_LocalEnvironmentResolver::resolveReference(Reference* ref, EvaluationEnvironment* environment) /* throws(SyntaxErrorException, ContextException, EvaluationException) */
{
    if(::com::tibbo::aggregate::common::util::Util::equals(Evaluator::ENVIRONMENT_PREVIOUS(), ref)->getField())) {
        return Evaluator_this->previousResult;
    }
    if(::com::tibbo::aggregate::common::util::Util::equals(Evaluator::ENVIRONMENT_COUNT(), ref)->getField())) {
        return ::java::lang::Long::valueOf(Evaluator_this->count);
    }
    return super::resolveReference(ref, environment);
}



java::lang::Class* Evaluator_LocalEnvironmentResolver::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.Evaluator.LocalEnvironmentResolver", 72);
    return c;
}

java::lang::Class* Evaluator_LocalEnvironmentResolver::getClass0()
{
    return class_();
}

