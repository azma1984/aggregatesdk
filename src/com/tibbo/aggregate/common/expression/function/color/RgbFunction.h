// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/color/RgbFunction.java

#pragma once

#include <com/tibbo/aggregate/common/expression/function/color/fwd-aggregate_sdk_5.11.00.h"
//#include <java/awt/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/AbstractFunction.h"



class com::tibbo::aggregate::common::expression::function::color::RgbFunction
    : public ::com::tibbo::aggregate::common::expression::function::AbstractFunction
{

public:
    typedef ::com::tibbo::aggregate::common::expression::function::AbstractFunction super;
protected:
    void ctor();

public: /* protected */
    ::java::awt::Color* color(voidArray* parameters) /* throws(EvaluationException) */;

    // Generated

public:
    RgbFunction();
protected:
    RgbFunction(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
