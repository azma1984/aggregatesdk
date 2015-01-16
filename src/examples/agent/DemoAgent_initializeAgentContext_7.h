// Generated from /aggregate_sdk_5.11.00/src/examples/agent/DemoAgent.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/data/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
#include <examples/agent/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/context/DefaultContextEventListener.h"



class examples::agent::DemoAgent_initializeAgentContext_7
    : public ::com::tibbo::aggregate::common::context::DefaultContextEventListener
{

public:
    typedef ::com::tibbo::aggregate::common::context::DefaultContextEventListener super;
    void handle(Event* event) /* throws(EventHandlingException) */;

    // Generated
    DemoAgent_initializeAgentContext_7();
    DemoAgent_initializeAgentContext_7(::com::tibbo::aggregate::common::context::CallerController* callerController);
    DemoAgent_initializeAgentContext_7(::com::tibbo::aggregate::common::context::CallerController* callerController, int  listenerCode);
    DemoAgent_initializeAgentContext_7(::com::tibbo::aggregate::common::context::CallerController* callerController, int  listenerCode, ::com::tibbo::aggregate::common::expression::Expression* filter);
    DemoAgent_initializeAgentContext_7(int  listenerCode);
    

private:
    ::java::lang::Class* getClass0();
    friend class DemoAgent;
    friend class DemoAgent_main_1;
    friend class DemoAgent_initializeAgentContext_2;
    friend class DemoAgent_initializeAgentContext_3;
    friend class DemoAgent_initializeAgentContext_4;
    friend class DemoAgent_initializeAgentContext_5;
    friend class DemoAgent_initializeAgentContext_6;
    friend class DemoAgent_DemoAgentContext;
};
