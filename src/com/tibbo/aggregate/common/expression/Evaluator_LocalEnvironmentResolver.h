// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/Evaluator.java

#pragma once

//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/EnvironmentReferenceResolver.h"



class com::tibbo::aggregate::common::expression::Evaluator_LocalEnvironmentResolver
    : public EnvironmentReferenceResolver
{

public:
    typedef EnvironmentReferenceResolver super;
    void* resolveReference(Reference* ref, EvaluationEnvironment* environment) /* throws(SyntaxErrorException, ContextException, EvaluationException) */;

    // Generated
    Evaluator_LocalEnvironmentResolver(Evaluator *Evaluator_this);
protected:
    Evaluator_LocalEnvironmentResolver(Evaluator *Evaluator_this, const ::default_init_tag&);


public:
    
    Evaluator *Evaluator_this;

private:
    ::java::lang::Class* getClass0();
    friend class Evaluator;
};
