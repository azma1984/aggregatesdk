// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/context/VariableWritableFunction.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/context/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/context/EntityAvailableFunction.h"



class com::tibbo::aggregate::common::expression::function::context::VariableWritableFunction
    : public EntityAvailableFunction
{

public:
    typedef EntityAvailableFunction super;
protected:
    void ctor(std::string* group);

public: /* protected */
    bool hasEntity(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::context::Context* con, voidArray*/*...*/ parameters);

    // Generated

public:
    VariableWritableFunction(std::string* group);
protected:
    VariableWritableFunction(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
