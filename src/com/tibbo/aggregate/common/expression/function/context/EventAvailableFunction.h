// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/context/EventAvailableFunction.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/context/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/context/EntityAvailableFunction.h"



class function::context::EventAvailableFunction
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
    EventAvailableFunction(const std::string & group);
protected:
    EventAvailableFunction(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
