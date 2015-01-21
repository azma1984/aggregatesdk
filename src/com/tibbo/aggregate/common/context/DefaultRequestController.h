// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/DefaultRequestController.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
#include <com/tibbo/aggregate/common/context/RequestController.h"



class DefaultRequestController
    
    , public RequestController
{

public:
    typedef void super;

private:
    void* originator;
    long  lockTimeout;
    Evaluator* evaluator;
protected:
    void ctor();
    void ctor(long  lockTimeout);
    void ctor(void* originator);
    void ctor(Evaluator* evaluator);

public:
    void* getOriginator();
    void setOriginator(void* originator);
    long  getLockTimeout();
    void setLockTimeout(long  lockTimeout);
    Evaluator* getEvaluator();
    void setEvaluator(Evaluator* evaluator);

    // Generated
    DefaultRequestController();
    DefaultRequestController(long  lockTimeout);
    DefaultRequestController(void* originator);
    DefaultRequestController(Evaluator* evaluator);
protected:
    DefaultRequestController(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
