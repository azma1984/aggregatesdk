// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/command/ShowEventLog.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/action/command/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/action/GenericActionCommand.h"



class com::tibbo::aggregate::common::action::command::ShowEventLog
    : public ::com::tibbo::aggregate::common::action::GenericActionCommand
{

public:
    typedef ::com::tibbo::aggregate::common::action::GenericActionCommand super;

private:
    static const std::string CF_EVENT_FILTER_;
    static const std::string CF_EVENT_LIST_;
    static const std::string CF_SHOW_REALTIME_;
    static const std::string CF_SHOW_HISTORY_;
    static const std::string CF_PRELOAD_HISTORY_;
    static const std::string CF_SHOW_CONTEXTS_;
    static const std::string CF_SHOW_NAMES_;
    static const std::string CF_SHOW_LEVELS_;
    static const std::string CF_SHOW_DATA_;
    static const std::string CF_SHOW_ACKNOWLEDGEMENTS_;
    static const std::string CF_SHOW_ENRICHMENTS_;
    static const std::string CF_FILTER_PARAMETERS_;
    static const std::string CF_CUSTOM_LISTENER_CODE_;
    static const std::string CF_LOCATION_;
    static const std::string CF_DASHBOARD_;
    static const std::string RF_LISTENER_CODE_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* CFT_SHOW_EVENT_LOG_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* RFT_SHOW_EVENT_LOG_;
    std::string* eventFilter;
    ::com::tibbo::aggregate::common::context::EntityList* events;
    bool showRealtime;
    bool showHistory;
    bool preloadHistory;
    bool showContexts;
    bool showNames;
    bool showLevels;
    bool showData;
    bool showAcknowledgements;
    bool showEnrichments;
    ::com::tibbo::aggregate::common::datatable::DataTable* filterParameters;
    ::java::lang::Integer* customListenerCode;
    ::com::tibbo::aggregate::common::util::WindowLocation* location;
    ::com::tibbo::aggregate::common::util::DashboardProperties* dashboard;
protected:
    void ctor();
    void ctor(std::string* title, ::com::tibbo::aggregate::common::context::EntityList* eventList, bool showRealtime, bool showHistory, bool preloadHistory, bool showContexts, bool showNames, bool showLevels, bool showAcknowledgements, bool showEnrichments, ::java::lang::Integer* customListenerCode, ::com::tibbo::aggregate::common::util::WindowLocation* location, ::com::tibbo::aggregate::common::util::DashboardProperties* dashboard);
    void ctor(std::string* title, std::string* eventFilter, bool showRealtime, bool showHistory, bool preloadHistory);
    void ctor(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters);

public: /* protected */
    ::com::tibbo::aggregate::common::datatable::DataTable* constructParameters();

public:
    std::string* getEventFilter();
    void setEventFilter(std::string* eventFilter);
    ::com::tibbo::aggregate::common::context::EntityList* getEvents();
    void setEvents(::com::tibbo::aggregate::common::context::EntityList* eventList);
    bool isShowRealtime();
    void setShowRealtime(bool showRealtime);
    bool isShowHistory();
    void setShowHistory(bool showHistory);
    bool isPreloadHistory();
    void setPreloadHistory(bool preloadHistory);
    bool isShowContexts();
    void setShowContexts(bool showContexts);
    bool isShowNames();
    void setShowNames(bool showNames);
    bool isShowLevels();
    void setShowLevels(bool showLevels);
    bool isShowData();
    void setShowData(bool showData);
    bool isShowAcknowledgements();
    void setShowAcknowledgements(bool showAcknowledgements);
    bool isShowEnrichments();
    void setShowEnrichments(bool showEnrichments);
    ::com::tibbo::aggregate::common::datatable::DataTable* getFilterParameters();
    void setFilterParameters(::com::tibbo::aggregate::common::datatable::DataTable* filterParameters);
    ::java::lang::Integer* getCustomListenerCode();
    void setCustomListenerCode(::java::lang::Integer* customListenerCode);
    ::com::tibbo::aggregate::common::util::WindowLocation* getLocation();
    void setLocation(::com::tibbo::aggregate::common::util::WindowLocation* location);
    ::com::tibbo::aggregate::common::util::DashboardProperties* getDashboard();
    void setDashboard(::com::tibbo::aggregate::common::util::DashboardProperties* dashboard);

    // Generated
    ShowEventLog();
    ShowEventLog(std::string* title, ::com::tibbo::aggregate::common::context::EntityList* eventList, bool showRealtime, bool showHistory, bool preloadHistory, bool showContexts, bool showNames, bool showLevels, bool showAcknowledgements, bool showEnrichments, ::java::lang::Integer* customListenerCode, ::com::tibbo::aggregate::common::util::WindowLocation* location, ::com::tibbo::aggregate::common::util::DashboardProperties* dashboard);
    ShowEventLog(std::string* title, std::string* eventFilter, bool showRealtime, bool showHistory, bool preloadHistory);
    ShowEventLog(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters);
protected:
    ShowEventLog(const ::default_init_tag&);


public:
    
    static void 

private:
    void init();

public:
    static const std::string& CF_EVENT_FILTER();
    static const std::string& CF_EVENT_LIST();
    static const std::string& CF_SHOW_REALTIME();
    static const std::string& CF_SHOW_HISTORY();
    static const std::string& CF_PRELOAD_HISTORY();
    static const std::string& CF_SHOW_CONTEXTS();
    static const std::string& CF_SHOW_NAMES();
    static const std::string& CF_SHOW_LEVELS();
    static const std::string& CF_SHOW_DATA();
    static const std::string& CF_SHOW_ACKNOWLEDGEMENTS();
    static const std::string& CF_SHOW_ENRICHMENTS();
    static const std::string& CF_FILTER_PARAMETERS();
    static const std::string& CF_CUSTOM_LISTENER_CODE();
    static const std::string& CF_LOCATION();
    static const std::string& CF_DASHBOARD();
    static const std::string& RF_LISTENER_CODE();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& CFT_SHOW_EVENT_LOG();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& RFT_SHOW_EVENT_LOG();

private:
    ::java::lang::Class* getClass0();
};
