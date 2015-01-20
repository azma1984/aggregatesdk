// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/context/EventFormatFunction.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/context/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/context/EntityFormatFunction.h"



class function::context::EventFormatFunction
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
    EventFormatFunction();
protected:
    EventFormatFunction(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
