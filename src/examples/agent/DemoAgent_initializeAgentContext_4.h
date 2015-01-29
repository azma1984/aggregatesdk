// Generated from /aggregate_sdk_5.11.00/src/examples/agent/DemoAgent.java

#ifndef H
#define H

//#include "context/fwd-aggregate_sdk_5.11.00.h"
#include "datatable/fwd-aggregate_sdk_5.11.00.h"
#include <examples/agent/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
#include "context/VariableGetter.h"



class examples::agent::DemoAgent_initializeAgentContext_4
    
    , public VariableGetter
{

public:
    typedef void super;
    DataTablePtr get(ContextPtr con, VariableDefinitionPtr def, CallerControllerPtr caller, RequestControllerPtr request) ;

    // Generated
    DemoAgent_initializeAgentContext_4();
    

private:
    AgClassPtr getClass0();
    friend class DemoAgent;
    friend class DemoAgent_main_1;
    friend class DemoAgent_initializeAgentContext_2;
    friend class DemoAgent_initializeAgentContext_3;
    friend class DemoAgent_initializeAgentContext_5;
    friend class DemoAgent_initializeAgentContext_6;
    friend class DemoAgent_initializeAgentContext_7;
    friend class DemoAgent_DemoAgentContext;
};
