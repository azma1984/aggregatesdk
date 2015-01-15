// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/event/EventUtils.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/event/fwd-aggregate_sdk_5.11.00.h"
//#include <java/awt/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::event::EventUtils
    
{

public:
    typedef void super;

private:
    static ::java::awt::Color* COLOR_FATAL_;
    static ::java::awt::Color* COLOR_ERROR_;
    static ::java::awt::Color* COLOR_WARNING_;
    static ::java::awt::Color* COLOR_INFO_;
    static ::java::awt::Color* COLOR_NOTICE_;
    static ::java::awt::Color* COLOR_NONE_;
    static std::map COLORS_;
    static const std::string FIELD_SEVERITY_STATS_COLOR_;
    static const std::string FIELD_SEVERITY_STATS_NUMBER_;
    static const std::string FIELD_SEVERITY_STATS_LEVEL_;
    static TableFormat* SEVERITY_STATS_FORMAT_;
    static ::java::util::Random* ID_GENERATOR_;

public:
    static long generateEventId();
    static std::list  getEventDefinitions(::com::tibbo::aggregate::common::context::ContextManager* cm, const std::string & contextMask, const std::string & eventsMask, ::com::tibbo::aggregate::common::context::CallerController* caller);
    static std::list  getEvents(::com::tibbo::aggregate::common::context::Context* context, const std::string & eventsMask, ::com::tibbo::aggregate::common::context::CallerController* caller);
    static bool matchesToMask(const std::string & eventMask, ::com::tibbo::aggregate::common::context::EventDefinition* ed);
    static bool matchesToMask(const std::string & eventMask, const std::string & event);
    static DataTable* createSeverityStatisticsTable(int none, int notice, int info, int warning, int error, int fatal);
    static ::java::awt::Color* getEventColor(int level);

    // Generated
    EventUtils();
protected:
    EventUtils(const ::default_init_tag&);


public:
    
    static void 
    static ::java::awt::Color*& COLOR_FATAL();
    static ::java::awt::Color*& COLOR_ERROR();
    static ::java::awt::Color*& COLOR_WARNING();
    static ::java::awt::Color*& COLOR_INFO();
    static ::java::awt::Color*& COLOR_NOTICE();
    static ::java::awt::Color*& COLOR_NONE();

private:
    static std::map& COLORS();

public:
    static const std::string& FIELD_SEVERITY_STATS_COLOR();
    static const std::string& FIELD_SEVERITY_STATS_NUMBER();
    static const std::string& FIELD_SEVERITY_STATS_LEVEL();

private:
    static TableFormat*& SEVERITY_STATS_FORMAT();
    static ::java::util::Random*& ID_GENERATOR();
    ::java::lang::Class* getClass0();
};
