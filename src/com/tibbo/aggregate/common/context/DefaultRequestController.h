// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/DefaultRequestController.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
#include <com/tibbo/aggregate/common/context/RequestController.h"



class com::tibbo::aggregate::common::context::DefaultRequestController
    
    , public RequestController
{

public:
    typedef void super;

private:
    void* originator;
    ::java::lang::Long* lockTimeout;
    ::com::tibbo::aggregate::common::expression::Evaluator* evaluator;
protected:
    void ctor();
    void ctor(::java::lang::Long* lockTimeout);
    void ctor(void* originator);
    void ctor(::com::tibbo::aggregate::common::expression::Evaluator* evaluator);

public:
    void* getOriginator();
    void setOriginator(void* originator);
    ::java::lang::Long* getLockTimeout();
    void setLockTimeout(::java::lang::Long* lockTimeout);
    ::com::tibbo::aggregate::common::expression::Evaluator* getEvaluator();
    void setEvaluator(::com::tibbo::aggregate::common::expression::Evaluator* evaluator);

    // Generated
    DefaultRequestController();
    DefaultRequestController(::java::lang::Long* lockTimeout);
    DefaultRequestController(void* originator);
    DefaultRequestController(::com::tibbo::aggregate::common::expression::Evaluator* evaluator);
protected:
    DefaultRequestController(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
