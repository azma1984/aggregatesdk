// Generated from /aggregate_sdk_5.11.00/src/examples/agent/DemoAgent.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/protocol/fwd-aggregate_sdk_5.11.00.h"
#include <examples/agent/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/agent/AgentContext.h"



class examples::agent::DemoAgent_DemoAgentContext
    : public ::com::tibbo::aggregate::common::agent::AgentContext
{

public:
    typedef ::com::tibbo::aggregate::common::agent::AgentContext super;

private:
    bool sentHistory;
protected:
    void ctor(::com::tibbo::aggregate::common::protocol::RemoteServer* server, const std::string & name, bool eventConfirmation);

public: /* protected */
    std::list  getHistory();

    // Generated

public:
    DemoAgent_DemoAgentContext(::com::tibbo::aggregate::common::protocol::RemoteServer* server, const std::string & name, bool eventConfirmation);
protected:
    DemoAgent_DemoAgentContext(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
    friend class DemoAgent;
    friend class DemoAgent_main_1;
    friend class DemoAgent_initializeAgentContext_2;
    friend class DemoAgent_initializeAgentContext_3;
    friend class DemoAgent_initializeAgentContext_4;
    friend class DemoAgent_initializeAgentContext_5;
    friend class DemoAgent_initializeAgentContext_6;
    friend class DemoAgent_initializeAgentContext_7;
};
