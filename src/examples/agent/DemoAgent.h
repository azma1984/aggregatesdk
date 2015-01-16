// Generated from /aggregate_sdk_5.11.00/src/examples/agent/DemoAgent.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/agent/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <examples/agent/fwd-aggregate_sdk_5.11.00.h"
//#include <java/io/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, voidArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< std::string, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java



class examples::agent::DemoAgent
    
{

public:
    typedef void super;

private:
    static const std::string V_SETTING_;
    static const std::string V_PERIOD_;
    static const std::string F_OPERATION_;
    static const std::string E_EVENT_;
    static const std::string VF_SETTING_STRING_;
    static const std::string VF_SETTING_INTEGER_;
    static const std::string VF_PERIOD_PERIOD_;
    static const std::string FIF_OPERATION_LIMIT_;
    static const std::string FOF_OPERATION_RESULT_;
    static const std::string EF_EVENT_DATA_;
    static TableFormat* VFT_SETTING_;
    static TableFormat* VFT_PERIOD_;
    static TableFormat* FIFT_OPERATION_;
    static TableFormat* FOFT_OPERATION_;
    static TableFormat* EFT_EVENT_;
    static DataTable* setting_;
    static long period_;

public:
    static void main(std::stringArray* args);

private:
    static void initializeAgentContext(::com::tibbo::aggregate::common::agent::AgentContext* context);

    // Generated

public:
    DemoAgent();
protected:
    DemoAgent(const ::default_init_tag&);


public:
    
    static void 

private:
    static const std::string& V_SETTING();
    static const std::string& V_PERIOD();
    static const std::string& F_OPERATION();
    static const std::string& E_EVENT();
    static const std::string& VF_SETTING_STRING();
    static const std::string& VF_SETTING_INTEGER();
    static const std::string& VF_PERIOD_PERIOD();
    static const std::string& FIF_OPERATION_LIMIT();
    static const std::string& FOF_OPERATION_RESULT();
    static const std::string& EF_EVENT_DATA();
    static TableFormat*& VFT_SETTING();
    static TableFormat*& VFT_PERIOD();
    static TableFormat*& FIFT_OPERATION();
    static TableFormat*& FOFT_OPERATION();
    static TableFormat*& EFT_EVENT();
    static DataTable*& setting();
    static long& period();
    ::java::lang::Class* getClass0();
    friend class DemoAgent_main_1;
    friend class DemoAgent_initializeAgentContext_2;
    friend class DemoAgent_initializeAgentContext_3;
    friend class DemoAgent_initializeAgentContext_4;
    friend class DemoAgent_initializeAgentContext_5;
    friend class DemoAgent_initializeAgentContext_6;
    friend class DemoAgent_initializeAgentContext_7;
    friend class DemoAgent_DemoAgentContext;
};
