// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/context/FunctionOutputFormatFunction.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/context/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/context/EntityFormatFunction.h"



class com::tibbo::aggregate::common::expression::function::context::FunctionOutputFormatFunction
    : public EntityFormatFunction
{

public:
    typedef EntityFormatFunction super;
protected:
    void ctor();

public: /* protected */
    std::string* getFormat(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::context::Context* con, voidArray*/*...*/ parameters);

    // Generated

public:
    FunctionOutputFormatFunction();
protected:
    FunctionOutputFormatFunction(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
