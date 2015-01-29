// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/type/StringFunction.java

#pragma once

#include "expression/function/type/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include "expression/function/type/TypeConversionFunction.h"



class function::type::StringFunction
    : public TypeConversionFunction
{

public:
    typedef TypeConversionFunction super;
protected:
    void ctor();

public:
    void* convert(void* parameter) /* throws(EvaluationException) */;

    // Generated
    StringFunction();
protected:
    StringFunction(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
