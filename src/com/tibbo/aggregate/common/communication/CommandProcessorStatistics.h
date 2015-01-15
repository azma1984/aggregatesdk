// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/communication/CommandProcessorStatistics.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/communication/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::communication::CommandProcessorStatistics
    
{

public:
    typedef void super;

private:
    static TableFormat* FORMAT_;
    ::java::lang::Long* startTime;
    long commandCount;
    float averageResponseTime;
    long outgoingTraffic;
    long incomingTraffic;
    long unrepliedCommandCount;

public:
    void update(ReplyMonitor* monitor);
    DataTable* toDataTable();
    ::java::lang::Long* getStartTime();
    ::java::lang::Long* getConnectionTime();
    long getCommandCount();
    long getAverageResponseTime();
    long getOutgoingTraffic();
    long getIncomingTraffic();
    long getUnrepliedCommandCount();

    // Generated
    CommandProcessorStatistics();
protected:
    CommandProcessorStatistics(const ::default_init_tag&);


public:
    
    static void 

private:
    static TableFormat*& FORMAT();
    ::java::lang::Class* getClass0();
};
