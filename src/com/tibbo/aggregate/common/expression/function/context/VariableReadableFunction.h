// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/context/VariableReadableFunction.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include "context/fwd-aggregate_sdk_5.11.00.h"
//#include "expression/fwd-aggregate_sdk_5.11.00.h"
#include "expression/function/context/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include "expression/function/context/EntityAvailableFunction.h"



class function::context::VariableReadableFunction
    : public EntityAvailableFunction
{

public:
    typedef EntityAvailableFunction super;
protected:
    void ctor(const std::string & group);

public: /* protected */
    bool hasEntity(Evaluator* evaluator, Context* con, voidArray*/*...*/ parameters);

    // Generated

public:
    VariableReadableFunction(const std::string & group);
protected:
    VariableReadableFunction(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
