// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/EvaluationEnvironment.java

#pragma once

//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::expression::EvaluationEnvironment
    
{

public:
    typedef void super;

private:
    Reference* cause;
    std::map environment;
protected:
    void ctor();
    void ctor(Reference* cause);
    void ctor(std::map environment);
    void ctor(Reference* cause, std::map environment);

public:
    Reference* getCause();
    void setCause(Reference* cause);
    std::map getEnvironment();
    void setEnvironment(std::map environment);

    // Generated
    EvaluationEnvironment();
    EvaluationEnvironment(Reference* cause);
    EvaluationEnvironment(std::map environment);
    EvaluationEnvironment(Reference* cause, std::map environment);
protected:
    EvaluationEnvironment(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
