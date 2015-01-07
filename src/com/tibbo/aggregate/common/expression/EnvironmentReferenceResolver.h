// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/EnvironmentReferenceResolver.java

#pragma once

//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/AbstractReferenceResolver.h"



class com::tibbo::aggregate::common::expression::EnvironmentReferenceResolver
    : public AbstractReferenceResolver
{

public:
    typedef AbstractReferenceResolver super;

private:
    std::map environment;
protected:
    void ctor();

public:
    void* resolveReference(Reference* ref, EvaluationEnvironment* resolvingEnvironment) /* throws(SyntaxErrorException, ContextException, EvaluationException) */;
    void set(std::string* variable, void* value);
    void* get(std::string* variable);
    void setEnvironment(std::map environment);
    std::map getEnvironment();

    // Generated
    EnvironmentReferenceResolver();
protected:
    EnvironmentReferenceResolver(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
};
