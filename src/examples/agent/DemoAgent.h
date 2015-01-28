// Generated from /aggregate_sdk_5.11.00/src/examples/agent/DemoAgent.java

#ifndef H
#define H

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
    static TableFormatPtr VFT_SETTING_;
    static TableFormatPtr VFT_PERIOD_;
    static TableFormatPtr FIFT_OPERATION_;
    static TableFormatPtr FOFT_OPERATION_;
    static TableFormatPtr EFT_EVENT_;
    static DataTablePtr setting_;
    static long period_;

public:
    static void main(std::stringArray* args);

private:
    static void initializeAgentContext(::com::tibbo::aggregate::common::agent::AgentContextPtr context);

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
    static TableFormatPtr& VFT_SETTING();
    static TableFormatPtr& VFT_PERIOD();
    static TableFormatPtr& FIFT_OPERATION();
    static TableFormatPtr& FOFT_OPERATION();
    static TableFormatPtr& EFT_EVENT();
    static DataTablePtr& setting();
    static long& period();
    AgClassPtr getClass0();
    friend class DemoAgent_main_1;
    friend class DemoAgent_initializeAgentContext_2;
    friend class DemoAgent_initializeAgentContext_3;
    friend class DemoAgent_initializeAgentContext_4;
    friend class DemoAgent_initializeAgentContext_5;
    friend class DemoAgent_initializeAgentContext_6;
    friend class DemoAgent_initializeAgentContext_7;
    friend class DemoAgent_DemoAgentContext;
};
