
#ifndef CommandProcessorStatisticsH
#define CommandProcessorStatisticsH

#include "Cres.h"
#include "communication/Command.h"
#include "communication/ReplyMonitor.h"
#include "datatable/DataTable.h"
#include "datatable/DataTableConversion.h"
#include "datatable/DataTableException.h"
#include "datatable/TableFormat.h"
#include "datatable/field/LongFieldFormat.h"
#include "util/TimeHelper.h"
#include "Cres.h"
#include "communication/Command.h"
#include "communication/ReplyMonitor.h"
//#include "datatable/DataTable.h"
//#include "datatable/DataTableConversion.h"
//#include "datatable/DataTableException.h"
//#include "datatable/TableFormat.h"
//#include "datatable/field/LongFieldFormat.h"
#include "util/TimeHelper.h"


class CommandProcessorStatistics
{

private:
	static TableFormatPtr FORMAT;
	long  startTime;
	long commandCount;
	float averageResponseTime;
	long outgoingTraffic;
	long incomingTraffic;
	long unrepliedCommandCount;
public:
	void update(ReplyMonitor<AgObjectPtr,AgObjectPtr>* monitor);
	DataTablePtr toDataTable();
    long  getStartTime();
	long  getConnectionTime();
    long getCommandCount();
	long getAverageResponseTime();
	long getOutgoingTraffic();
	long getIncomingTraffic();
    long getUnrepliedCommandCount();

	CommandProcessorStatistics();
};

#endif
