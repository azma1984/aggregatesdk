// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/context/FunctionInputFormatFunction.java

#pragma once

//#include "context/fwd-aggregate_sdk_5.11.00.h"
//#include "expression/fwd-aggregate_sdk_5.11.00.h"
#include "expression/function/context/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include "expression/function/context/EntityFormatFunction.h"



class function::context::FunctionInputFormatFunction
    : public EntityFormatFunction
{

public:
    typedef EntityFormatFunction super;
protected:
    void ctor();

public: /* protected */
    const std::string & getFormat(Evaluator* evaluator, Context* con, voidArray*/*...*/ parameters);

    // Generated

public:
    FunctionInputFormatFunction();
protected:
    FunctionInputFormatFunction(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
