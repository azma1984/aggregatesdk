// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/JavaConstructorFunction.java

#pragma once

//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/AbstractFunction.h"



class function::JavaConstructorFunction
    : public AbstractFunction
{

public:
    typedef AbstractFunction super;

private:
    const std::string & clazz;
protected:
    void ctor(const std::string & clazz, const std::string & category, const std::string & returnValue);

public:
    void* execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */;

    // Generated
    JavaConstructorFunction(const std::string & clazz, const std::string & category, const std::string & returnValue);
protected:
    JavaConstructorFunction(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
