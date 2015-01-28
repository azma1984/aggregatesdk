// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/command/ShowEventLog.java
#include <com/tibbo/aggregate/common/action/command/ShowEventLog.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/action/ActionUtils.h"
#include <com/tibbo/aggregate/common/context/EntityList.h"
#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/DataTableBindingProvider.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/datatable/field/StringFieldFormat.h"
#include <com/tibbo/aggregate/common/expression/function/Functions.h"
#include <com/tibbo/aggregate/common/server/EventFilterContextConstants.h"
#include <com/tibbo/aggregate/common/util/DashboardProperties.h"
#include <com/tibbo/aggregate/common/util/WindowLocation.h"
/*
//#include <java/lang/Boolean.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/util/ResourceBundle.h"
#include <ObjectArray.h"*/

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::action::command::ShowEventLog::ShowEventLog(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::action::command::ShowEventLog::ShowEventLog() 
    : ShowEventLog(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::action::command::ShowEventLog::ShowEventLog(const std::string & title, EntityListPtr eventList, bool showRealtime, bool showHistory, bool preloadHistory, bool showContexts, bool showNames, bool showLevels, bool showAcknowledgements, bool showEnrichments, int  customListenerCode, WindowLocationPtr location, DashboardPropertiesPtr dashboard) 
    : ShowEventLog(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,eventList,showRealtime,showHistory,preloadHistory,showContexts,showNames,showLevels,showAcknowledgements,showEnrichments,customListenerCode,location,dashboard);
}

com::tibbo::aggregate::common::action::command::ShowEventLog::ShowEventLog(const std::string & title, const std::string & eventFilter, bool showRealtime, bool showHistory, bool preloadHistory) 
    : ShowEventLog(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,eventFilter,showRealtime,showHistory,preloadHistory);
}

com::tibbo::aggregate::common::action::command::ShowEventLog::ShowEventLog(const std::string & title, DataTablePtr parameters) 
    : ShowEventLog(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,parameters);
}

void com::tibbo::aggregate::common::action::command::ShowEventLog::init()
{
    events = new EntityList();
}

std::string& com::tibbo::aggregate::common::action::command::ShowEventLog::CF_EVENT_FILTER()
{
    
    return CF_EVENT_FILTER_;
}
std::string com::tibbo::aggregate::common::action::command::ShowEventLog::CF_EVENT_FILTER_;

std::string& com::tibbo::aggregate::common::action::command::ShowEventLog::CF_EVENT_LIST()
{
    
    return CF_EVENT_LIST_;
}
std::string com::tibbo::aggregate::common::action::command::ShowEventLog::CF_EVENT_LIST_;

std::string& com::tibbo::aggregate::common::action::command::ShowEventLog::CF_SHOW_REALTIME()
{
    
    return CF_SHOW_REALTIME_;
}
std::string com::tibbo::aggregate::common::action::command::ShowEventLog::CF_SHOW_REALTIME_;

std::string& com::tibbo::aggregate::common::action::command::ShowEventLog::CF_SHOW_HISTORY()
{
    
    return CF_SHOW_HISTORY_;
}
std::string com::tibbo::aggregate::common::action::command::ShowEventLog::CF_SHOW_HISTORY_;

std::string& com::tibbo::aggregate::common::action::command::ShowEventLog::CF_PRELOAD_HISTORY()
{
    
    return CF_PRELOAD_HISTORY_;
}
std::string com::tibbo::aggregate::common::action::command::ShowEventLog::CF_PRELOAD_HISTORY_;

std::string& com::tibbo::aggregate::common::action::command::ShowEventLog::CF_SHOW_CONTEXTS()
{
    
    return CF_SHOW_CONTEXTS_;
}
std::string com::tibbo::aggregate::common::action::command::ShowEventLog::CF_SHOW_CONTEXTS_;

std::string& com::tibbo::aggregate::common::action::command::ShowEventLog::CF_SHOW_NAMES()
{
    
    return CF_SHOW_NAMES_;
}
std::string com::tibbo::aggregate::common::action::command::ShowEventLog::CF_SHOW_NAMES_;

std::string& com::tibbo::aggregate::common::action::command::ShowEventLog::CF_SHOW_LEVELS()
{
    
    return CF_SHOW_LEVELS_;
}
std::string com::tibbo::aggregate::common::action::command::ShowEventLog::CF_SHOW_LEVELS_;

std::string& com::tibbo::aggregate::common::action::command::ShowEventLog::CF_SHOW_DATA()
{
    
    return CF_SHOW_DATA_;
}
std::string com::tibbo::aggregate::common::action::command::ShowEventLog::CF_SHOW_DATA_;

std::string& com::tibbo::aggregate::common::action::command::ShowEventLog::CF_SHOW_ACKNOWLEDGEMENTS()
{
    
    return CF_SHOW_ACKNOWLEDGEMENTS_;
}
std::string com::tibbo::aggregate::common::action::command::ShowEventLog::CF_SHOW_ACKNOWLEDGEMENTS_;

std::string& com::tibbo::aggregate::common::action::command::ShowEventLog::CF_SHOW_ENRICHMENTS()
{
    
    return CF_SHOW_ENRICHMENTS_;
}
std::string com::tibbo::aggregate::common::action::command::ShowEventLog::CF_SHOW_ENRICHMENTS_;

std::string& com::tibbo::aggregate::common::action::command::ShowEventLog::CF_FILTER_PARAMETERS()
{
    
    return CF_FILTER_PARAMETERS_;
}
std::string com::tibbo::aggregate::common::action::command::ShowEventLog::CF_FILTER_PARAMETERS_;

std::string& com::tibbo::aggregate::common::action::command::ShowEventLog::CF_CUSTOM_LISTENER_CODE()
{
    
    return CF_CUSTOM_LISTENER_CODE_;
}
std::string com::tibbo::aggregate::common::action::command::ShowEventLog::CF_CUSTOM_LISTENER_CODE_;

std::string& com::tibbo::aggregate::common::action::command::ShowEventLog::CF_LOCATION()
{
    
    return CF_LOCATION_;
}
std::string com::tibbo::aggregate::common::action::command::ShowEventLog::CF_LOCATION_;

std::string& com::tibbo::aggregate::common::action::command::ShowEventLog::CF_DASHBOARD()
{
    
    return CF_DASHBOARD_;
}
std::string com::tibbo::aggregate::common::action::command::ShowEventLog::CF_DASHBOARD_;

std::string& com::tibbo::aggregate::common::action::command::ShowEventLog::RF_LISTENER_CODE()
{
    
    return RF_LISTENER_CODE_;
}
std::string com::tibbo::aggregate::common::action::command::ShowEventLog::RF_LISTENER_CODE_;

DateTableFormatPtr& com::tibbo::aggregate::common::action::command::ShowEventLog::CFT_SHOW_EVENT_LOG()
{
    
    return CFT_SHOW_EVENT_LOG_;
}
DateTableFormatPtr com::tibbo::aggregate::common::action::command::ShowEventLog::CFT_SHOW_EVENT_LOG_;

DateTableFormatPtr& com::tibbo::aggregate::common::action::command::ShowEventLog::RFT_SHOW_EVENT_LOG()
{
    
    return RFT_SHOW_EVENT_LOG_;
}
DateTableFormatPtr com::tibbo::aggregate::common::action::command::ShowEventLog::RFT_SHOW_EVENT_LOG_;

void com::tibbo::aggregate::common::action::command::ShowEventLog::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_EVENT_LOG(), CFT_SHOW_EVENT_LOG_, RFT_SHOW_EVENT_LOG_);
    init();
}

void com::tibbo::aggregate::common::action::command::ShowEventLog::ctor(const std::string & title, EntityListPtr eventList, bool showRealtime, bool showHistory, bool preloadHistory, bool showContexts, bool showNames, bool showLevels, bool showAcknowledgements, bool showEnrichments, int  customListenerCode, WindowLocationPtr location, DashboardPropertiesPtr dashboard)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_EVENT_LOG(), title);
    init();
    this->events = eventList;
    this->showRealtime = showRealtime;
    this->showHistory = showHistory;
    this->preloadHistory = preloadHistory;
    this->showContexts = showContexts;
    this->showNames = showNames;
    this->showLevels = showLevels;
    this->showData = true;
    this->showAcknowledgements = showAcknowledgements;
    this->showEnrichments = showEnrichments;
    this->customListenerCode = customListenerCode;
    this->location = location;
    this->dashboard = dashboard;
}

void com::tibbo::aggregate::common::action::command::ShowEventLog::ctor(const std::string & title, const std::string & eventFilter, bool showRealtime, bool showHistory, bool preloadHistory)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_EVENT_LOG(), title);
    init();
    this->eventFilter = eventFilter;
    this->showRealtime = showRealtime;
    this->showHistory = showHistory;
    this->preloadHistory = preloadHistory;
}

void com::tibbo::aggregate::common::action::command::ShowEventLog::ctor(const std::string & title, DataTablePtr parameters)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_EVENT_LOG(), title, parameters, CFT_SHOW_EVENT_LOG_);
    init();
    events = new EntityList(parameters)->rec())->getDataTable(CF_EVENT_LIST_));
}

DateDataTablePtr com::tibbo::aggregate::common::action::command::ShowEventLog::constructParameters()
{
    return new DataTable(ShowEventLog::CFT_SHOW_EVENT_LOG_, new voidArray({eventFilter), events)->toDataTable()), ::java::lang::Boolean::valueOf(showRealtime)), ::java::lang::Boolean::valueOf(showHistory)), ::java::lang::Boolean::valueOf(preloadHistory)), ::java::lang::Boolean::valueOf(showContexts)), ::java::lang::Boolean::valueOf(showNames)), ::java::lang::Boolean::valueOf(showLevels)), ::java::lang::Boolean::valueOf(showData)), ::java::lang::Boolean::valueOf(showAcknowledgements)), ::java::lang::Boolean::valueOf(showEnrichments)), filterParameters), customListenerCode), location != 0 ? location)->toDataTable()) : 0), dashboard != 0 ? dashboard)->toDataTable()) : 0)}));
}

std::string com::tibbo::aggregate::common::action::command::ShowEventLog::getEventFilter()
{
    return eventFilter;
}

void com::tibbo::aggregate::common::action::command::ShowEventLog::setEventFilter(const std::string & eventFilter)
{
    this->eventFilter = eventFilter;
}

EntityListPtr com::tibbo::aggregate::common::action::command::ShowEventLog::getEvents()
{
    return events;
}

void com::tibbo::aggregate::common::action::command::ShowEventLog::setEvents(EntityListPtr eventList)
{
    this->events = eventList;
}

bool com::tibbo::aggregate::common::action::command::ShowEventLog::isShowRealtime()
{
    return showRealtime;
}

void com::tibbo::aggregate::common::action::command::ShowEventLog::setShowRealtime(bool showRealtime)
{
    this->showRealtime = showRealtime;
}

bool com::tibbo::aggregate::common::action::command::ShowEventLog::isShowHistory()
{
    return showHistory;
}

void com::tibbo::aggregate::common::action::command::ShowEventLog::setShowHistory(bool showHistory)
{
    this->showHistory = showHistory;
}

bool com::tibbo::aggregate::common::action::command::ShowEventLog::isPreloadHistory()
{
    return preloadHistory;
}

void com::tibbo::aggregate::common::action::command::ShowEventLog::setPreloadHistory(bool preloadHistory)
{
    this->preloadHistory = preloadHistory;
}

bool com::tibbo::aggregate::common::action::command::ShowEventLog::isShowContexts()
{
    return showContexts;
}

void com::tibbo::aggregate::common::action::command::ShowEventLog::setShowContexts(bool showContexts)
{
    this->showContexts = showContexts;
}

bool com::tibbo::aggregate::common::action::command::ShowEventLog::isShowNames()
{
    return showNames;
}

void com::tibbo::aggregate::common::action::command::ShowEventLog::setShowNames(bool showNames)
{
    this->showNames = showNames;
}

bool com::tibbo::aggregate::common::action::command::ShowEventLog::isShowLevels()
{
    return showLevels;
}

void com::tibbo::aggregate::common::action::command::ShowEventLog::setShowLevels(bool showLevels)
{
    this->showLevels = showLevels;
}

bool com::tibbo::aggregate::common::action::command::ShowEventLog::isShowData()
{
    return showData;
}

void com::tibbo::aggregate::common::action::command::ShowEventLog::setShowData(bool showData)
{
    this->showData = showData;
}

bool com::tibbo::aggregate::common::action::command::ShowEventLog::isShowAcknowledgements()
{
    return showAcknowledgements;
}

void com::tibbo::aggregate::common::action::command::ShowEventLog::setShowAcknowledgements(bool showAcknowledgements)
{
    this->showAcknowledgements = showAcknowledgements;
}

bool com::tibbo::aggregate::common::action::command::ShowEventLog::isShowEnrichments()
{
    return showEnrichments;
}

void com::tibbo::aggregate::common::action::command::ShowEventLog::setShowEnrichments(bool showEnrichments)
{
    this->showEnrichments = showEnrichments;
}

DateDataTablePtr com::tibbo::aggregate::common::action::command::ShowEventLog::getFilterParameters()
{
    return filterParameters;
}

void com::tibbo::aggregate::common::action::command::ShowEventLog::setFilterParameters(DataTablePtr filterParameters)
{
    this->filterParameters = filterParameters;
}

java::lang::Integer* com::tibbo::aggregate::common::action::command::ShowEventLog::getCustomListenerCode()
{
    return customListenerCode;
}

void com::tibbo::aggregate::common::action::command::ShowEventLog::setCustomListenerCode(int  customListenerCode)
{
    this->customListenerCode = customListenerCode;
}

com::tibbo::aggregate::common::util::WindowLocationPtr com::tibbo::aggregate::common::action::command::ShowEventLog::getLocation()
{
    return location;
}

void com::tibbo::aggregate::common::action::command::ShowEventLog::setLocation(WindowLocationPtr location)
{
    this->location = location;
}

com::tibbo::aggregate::common::util::DashboardPropertiesPtr com::tibbo::aggregate::common::action::command::ShowEventLog::getDashboard()
{
    return dashboard;
}

void com::tibbo::aggregate::common::action::command::ShowEventLog::setDashboard(DashboardPropertiesPtr dashboard)
{
    this->dashboard = dashboard;
}



java::lang::Class* com::tibbo::aggregate::common::action::command::ShowEventLog::class_()
{
    static AgClassPtr c = ::class_(u"com.tibbo.aggregate.common.action.command.ShowEventLog", 54);
    return c;
}

void com::tibbo::aggregate::common::action::command::ShowEventLog::clinit()
{
struct string_init_ {
    string_init_() {
    CF_EVENT_FILTER_ = u"eventFilter"_j;
    CF_EVENT_LIST_ = u"eventList"_j;
    CF_SHOW_REALTIME_ = u"showRealtime"_j;
    CF_SHOW_HISTORY_ = u"showHistory"_j;
    CF_PRELOAD_HISTORY_ = u"preloadHistory"_j;
    CF_SHOW_CONTEXTS_ = u"showContexts"_j;
    CF_SHOW_NAMES_ = u"showNames"_j;
    CF_SHOW_LEVELS_ = u"showLevels"_j;
    CF_SHOW_DATA_ = u"showData"_j;
    CF_SHOW_ACKNOWLEDGEMENTS_ = u"showAcknowledgements"_j;
    CF_SHOW_ENRICHMENTS_ = u"showEnrichments"_j;
    CF_FILTER_PARAMETERS_ = u"filterParameters"_j;
    CF_CUSTOM_LISTENER_CODE_ = u"customListenerCode"_j;
    CF_LOCATION_ = u"location"_j;
    CF_DASHBOARD_ = u"dashboard"_j;
    RF_LISTENER_CODE_ = u"listenerCode"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        CFT_SHOW_EVENT_LOG_ = new TableFormat(int(1), int(1));
        {
            CFT_SHOW_EVENT_LOG_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_EVENT_FILTER_)
                ->append(u"><S><F=N><D="_j)
                ->append(Cres::get())->getString(u"efEventFilter"_j))
                ->append(u"><E="_j)
                ->append(field::StringFieldFormat::EDITOR_CONTEXT())
                ->append(u">"_j)->toString());
            auto ff = FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(CF_EVENT_LIST_)
                ->append(u"><T><D="_j)
                ->append(Cres::get())->getString(u"events"_j))
                ->append(u">"_j)->toString());
            ff)->setDefault(new DataTable(EntityList::FORMAT(), true));
            CFT_SHOW_EVENT_LOG_)->addField(ff);
            CFT_SHOW_EVENT_LOG_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_SHOW_REALTIME_)
                ->append(u"><B><A=1><D="_j)
                ->append(Cres::get())->getString(u"wCurrentEvents"_j))
                ->append(u">"_j)->toString());
            CFT_SHOW_EVENT_LOG_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_SHOW_HISTORY_)
                ->append(u"><B><A=1><D="_j)
                ->append(Cres::get())->getString(u"wEventHistory"_j))
                ->append(u">"_j)->toString());
            CFT_SHOW_EVENT_LOG_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_PRELOAD_HISTORY_)
                ->append(u"><B><A=1><D="_j)
                ->append(Cres::get())->getString(u"wPreloadHistory"_j))
                ->append(u">"_j)->toString());
            CFT_SHOW_EVENT_LOG_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_SHOW_CONTEXTS_)
                ->append(u"><B><D="_j)
                ->append(Cres::get())->getString(u"wShowContextNames"_j))
                ->append(u">"_j)->toString());
            CFT_SHOW_EVENT_LOG_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_SHOW_NAMES_)
                ->append(u"><B><D="_j)
                ->append(Cres::get())->getString(u"wShowEventNames"_j))
                ->append(u">"_j)->toString());
            CFT_SHOW_EVENT_LOG_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_SHOW_LEVELS_)
                ->append(u"><B><D="_j)
                ->append(Cres::get())->getString(u"wShowEventLevels"_j))
                ->append(u">"_j)->toString());
            CFT_SHOW_EVENT_LOG_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_SHOW_DATA_)
                ->append(u"><B><A=1><D="_j)
                ->append(Cres::get())->getString(u"wShowEventDataPtr"_j))
                ->append(u">"_j)->toString());
            CFT_SHOW_EVENT_LOG_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_SHOW_ACKNOWLEDGEMENTS_)
                ->append(u"><B><D="_j)
                ->append(Cres::get())->getString(u"wShowEventAck"_j))
                ->append(u">"_j)->toString());
            CFT_SHOW_EVENT_LOG_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_SHOW_ENRICHMENTS_)
                ->append(u"><B><A=0><D="_j)
                ->append(Cres::get())->getString(u"wShowEventEnrichments"_j))
                ->append(u">"_j)->toString());
            CFT_SHOW_EVENT_LOG_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_FILTER_PARAMETERS_)
                ->append(u"><T><F=N><D="_j)
                ->append(Cres::get())->getString(u"parameters"_j))
                ->append(u">"_j)->toString());
            CFT_SHOW_EVENT_LOG_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_CUSTOM_LISTENER_CODE_)
                ->append(u"><I><F=NH>"_j)->toString());
            CFT_SHOW_EVENT_LOG_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_LOCATION_)
                ->append(u"><T><F=N>"_j)->toString());
            CFT_SHOW_EVENT_LOG_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_DASHBOARD_)
                ->append(u"><T><F=N>"_j)->toString());
            auto ref = std::stringBuilder().append(CF_EVENT_LIST_)->append(u"#"_j)
                ->append(DataTableBindingProvider::PROPERTY_ENABLED())->toString();
            auto exp = std::stringBuilder().append(u"{"_j)->append(CF_EVENT_FILTER_)
                ->append(u"} == null"_j)->toString();
            CFT_SHOW_EVENT_LOG_)->addBinding(ref, exp);
            ref = CF_FILTER_PARAMETERS_;
            exp = std::stringBuilder().append(u"{"_j)->append(CF_EVENT_FILTER_)
                ->append(u"} != null ? "_j)
                ->append(function::Functions::CALL_FUNCTION())
                ->append(u"({"_j)
                ->append(CF_EVENT_FILTER_)
                ->append(u"}, '"_j)
                ->append(::com::tibbo::aggregate::common::server::EventFilterContextConstants::F_GET_PARAMETERS())
                ->append(u"', true) : null"_j)->toString();
            CFT_SHOW_EVENT_LOG_)->addBinding(ref, exp);
        }
        RFT_SHOW_EVENT_LOG_ = new TableFormat(int(1), int(1), std::stringBuilder().append(u"<"_j)->append(ShowEventLog::RF_LISTENER_CODE_)
            ->append(u"><I><F=N>"_j)->toString());
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::action::command::ShowEventLog::getClass0()
{
    return class_();
}

