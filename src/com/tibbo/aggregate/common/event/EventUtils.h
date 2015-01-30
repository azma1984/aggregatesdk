#ifndef _EventLevel_H_
#define _EventLevel_H_

 #include "Cres.h"
 #include "context/Context.h"
 #include "context/ContextUtils.h"
 #include "context/EventDefinition.h"
 #include "datatable/DataRecord.h"
 #include "datatable/DataTable.h"
 #include "datatable/FieldFormat.h"
 #include "datatable/TableFormat.h"
 #include "event/EventLevel.h"
 #include "util/Util.h"



class EventUtils
{
private:
//
//	static std::map COLORS_;
//
//	static TableFormatPtr SEVERITY_STATS_FORMAT_;
//	static ::java::util::Random* ID_GENERATOR_;
//	static std::map& COLORS();
//	static TableFormatPtr& SEVERITY_STATS_FORMAT();
//	static ::java::util::Random*& ID_GENERATOR();

public:
//	static ::java::awt::Color* COLOR_FATAL;
//	static ::java::awt::Color* COLOR_ERROR;
//	static ::java::awt::Color* COLOR_WARNING;
//	static ::java::awt::Color* COLOR_INFO;
//	static ::java::awt::Color* COLOR_NOTICE;
//	static ::java::awt::Color* COLOR_NONE;

	static const std::string FIELD_SEVERITY_STATS_COLOR;
	static const std::string FIELD_SEVERITY_STATS_NUMBER;
	static const std::string FIELD_SEVERITY_STATS_LEVEL;

    static long generateEventId();
 //   static std::list  getEventDefinitions(ContextManagerPtr cm, const std::string & contextMask, const std::string & eventsMask, CallerControllerPtr caller);
   // static std::list  getEvents(ContextPtr context, const std::string & eventsMask, CallerControllerPtr caller);
    static bool matchesToMask(const std::string & eventMask, EventDefinitionPtr ed);
    static bool matchesToMask(const std::string & eventMask, const std::string & event);
    static DataTablePtr createSeverityStatisticsTable(int none, int notice, int info, int warning, int error, int fatal);
   // static ::java::awt::Color* getEventColor(int level);

    EventUtils();


};
#endif 
