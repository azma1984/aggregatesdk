// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/context/EntityFormatFunction.java

#pragma once

//#include "context/fwd-aggregate_sdk_5.11.00.h"
//#include "expression/fwd-aggregate_sdk_5.11.00.h"
#include "expression/function/context/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include "expression/function/AbstractFunction.h"



class function::context::EntityFormatFunction
    : public function::AbstractFunction
{

public:
    typedef function::AbstractFunction super;
protected:
    void ctor(const std::string & parametersFootprint);

public:
    void* execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */;

public: /* protected */
    const std::string & getFormat(Evaluator* evaluator, Context* con, voidArray*/*...*/ parameters);

    // Generated

public:
    EntityFormatFunction(const std::string & parametersFootprint);
protected:
    EntityFormatFunction(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
