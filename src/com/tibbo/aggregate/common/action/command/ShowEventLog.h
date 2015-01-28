#ifndef ShowEventLogH
#define ShowEventLogH
#include "action/GenericActionCommand.h"



class ShowEventLog : public GenericActionCommand
{
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
    static TableFormatPtr CFT_SHOW_EVENT_LOG_;
    static TableFormatPtr RFT_SHOW_EVENT_LOG_;
    const std::string & eventFilter;
    EntityListPtr events;
    bool showRealtime;
    bool showHistory;
    bool preloadHistory;
    bool showContexts;
    bool showNames;
    bool showLevels;
    bool showData;
    bool showAcknowledgements;
    bool showEnrichments;
    DataTablePtr filterParameters;
    int  customListenerCode;
    WindowLocationPtr location;
    DashboardPropertiesPtr dashboard;

public:
    DataTablePtr constructParameters();
//
public:
    const std::string & getEventFilter();
    void setEventFilter(const std::string & eventFilter);
    EntityListPtr getEvents();
    void setEvents(EntityListPtr eventList);
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
    DataTablePtr getFilterParameters();
    void setFilterParameters(DataTablePtr filterParameters);
    int  getCustomListenerCode();
    void setCustomListenerCode(int  customListenerCode);
    WindowLocationPtr getLocation();
    void setLocation(WindowLocationPtr location);
    DashboardPropertiesPtr getDashboard();
    void setDashboard(DashboardPropertiesPtr dashboard);

    ShowEventLog();
    ShowEventLog(const std::string & title, EntityListPtr eventList, bool showRealtime, bool showHistory, bool preloadHistory, bool showContexts, bool showNames, bool showLevels, bool showAcknowledgements, bool showEnrichments, int  customListenerCode, WindowLocationPtr location, DashboardPropertiesPtr dashboard);
    ShowEventLog(const std::string & title, const std::string & eventFilter, bool showRealtime, bool showHistory, bool preloadHistory);
    ShowEventLog(const std::string & title, DataTablePtr parameters);

private:
    void init();
//
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
    static TableFormatPtr& CFT_SHOW_EVENT_LOG();
	static TableFormatPtr& RFT_SHOW_EVENT_LOG();
 };
#endif
