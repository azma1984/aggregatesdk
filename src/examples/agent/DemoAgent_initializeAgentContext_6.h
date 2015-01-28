// Generated from /aggregate_sdk_5.11.00/src/examples/agent/DemoAgent.java

#ifndef H
#define H

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <examples/agent/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
#include <com/tibbo/aggregate/common/context/FunctionImplementation.h"



class examples::agent::DemoAgent_initializeAgentContext_6
    
    , public FunctionImplementation
{

public:
    typedef void super;
    DataTablePtr execute(ContextPtr con, FunctionDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request, DataTablePtr parameters) ;

    // Generated
    DemoAgent_initializeAgentContext_6();
    

private:
    AgClassPtr getClass0();
    friend class DemoAgent;
    friend class DemoAgent_main_1;
    friend class DemoAgent_initializeAgentContext_2;
    friend class DemoAgent_initializeAgentContext_3;
    friend class DemoAgent_initializeAgentContext_4;
    friend class DemoAgent_initializeAgentContext_5;
    friend class DemoAgent_initializeAgentContext_7;
    friend class DemoAgent_DemoAgentContext;
};
