// Generated from /aggregate_sdk_5.11.00/src/examples/agent/DemoAgent.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <examples/agent/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
#include <com/tibbo/aggregate/common/context/VariableGetter.h"



class examples::agent::DemoAgent_initializeAgentContext_2
    
    , public ::com::tibbo::aggregate::common::context::VariableGetter
{

public:
    typedef void super;
    ::com::tibbo::aggregate::common::datatable::DataTable* get(::com::tibbo::aggregate::common::context::Context* con, ::com::tibbo::aggregate::common::context::VariableDefinition* def, ::com::tibbo::aggregate::common::context::CallerController* caller, ::com::tibbo::aggregate::common::context::RequestController* request) /* throws(ContextException) */;

    // Generated
    DemoAgent_initializeAgentContext_2();
    

private:
    ::java::lang::Class* getClass0();
    friend class DemoAgent;
    friend class DemoAgent_main_1;
    friend class DemoAgent_initializeAgentContext_3;
    friend class DemoAgent_initializeAgentContext_4;
    friend class DemoAgent_initializeAgentContext_5;
    friend class DemoAgent_initializeAgentContext_6;
    friend class DemoAgent_initializeAgentContext_7;
    friend class DemoAgent_DemoAgentContext;
};
