// Generated from /aggregate_sdk_5.11.00/src/examples/agent/DemoAgent.java

#ifndef H
#define H

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/agent/fwd-aggregate_sdk_5.11.00.h"
#include <examples/agent/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/security/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Thread.h"



class examples::agent::DemoAgent_main_1
    : public ::java::lang::Thread
{

public:
    typedef ::java::lang::Thread super;
    void run();

    // Generated
    DemoAgent_main_1(::com::tibbo::aggregate::common::agent::Agent* agent);
    DemoAgent_main_1(::com::tibbo::aggregate::common::agent::Agent* agent, ::java::lang::Runnable* arg0);
    DemoAgent_main_1(::com::tibbo::aggregate::common::agent::Agent* agent, const std::string & arg0);

public: /* package */
    DemoAgent_main_1(::com::tibbo::aggregate::common::agent::Agent* agent, ::java::lang::Runnable* arg0, ::java::security::AccessControlContextPtr arg1);

public:
    DemoAgent_main_1(::com::tibbo::aggregate::common::agent::Agent* agent, ::java::lang::ThreadGroup* arg0, ::java::lang::Runnable* arg1);
    DemoAgent_main_1(::com::tibbo::aggregate::common::agent::Agent* agent, ::java::lang::ThreadGroup* arg0, const std::string & arg1);
    DemoAgent_main_1(::com::tibbo::aggregate::common::agent::Agent* agent, ::java::lang::Runnable* arg0, const std::string & arg1);
    DemoAgent_main_1(::com::tibbo::aggregate::common::agent::Agent* agent, ::java::lang::ThreadGroup* arg0, ::java::lang::Runnable* arg1, const std::string & arg2);
    DemoAgent_main_1(::com::tibbo::aggregate::common::agent::Agent* agent, ::java::lang::ThreadGroup* arg0, ::java::lang::Runnable* arg1, const std::string & arg2, long arg3);
    
    ::com::tibbo::aggregate::common::agent::Agent* agent;

private:
    AgClassPtr getClass0();
    friend class DemoAgent;
    friend class DemoAgent_initializeAgentContext_2;
    friend class DemoAgent_initializeAgentContext_3;
    friend class DemoAgent_initializeAgentContext_4;
    friend class DemoAgent_initializeAgentContext_5;
    friend class DemoAgent_initializeAgentContext_6;
    friend class DemoAgent_initializeAgentContext_7;
    friend class DemoAgent_DemoAgentContext;
};
