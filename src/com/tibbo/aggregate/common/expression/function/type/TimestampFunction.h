// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/type/TimestampFunction.java

#pragma once

#include <com/tibbo/aggregate/common/expression/function/type/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/type/TypeConversionFunction.h"



class com::tibbo::aggregate::common::expression::function::type::TimestampFunction
    : public TypeConversionFunction
{

public:
    typedef TypeConversionFunction super;
protected:
    void ctor();

public:
    void* convert(void* parameter) /* throws(EvaluationException) */;

    // Generated
    TimestampFunction();
protected:
    TimestampFunction(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
