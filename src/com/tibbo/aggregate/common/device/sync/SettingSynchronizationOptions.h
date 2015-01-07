// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/sync/SettingSynchronizationOptions.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/device/sync/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/lang/Cloneable.h"



class com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions
    
    , public ::java::lang::Cloneable
{

public:
    typedef void super;

private:
    int mode;
    ::java::lang::Long* updateHistoryStorageTime;
    ::java::lang::Long* syncPeriod;
    int historyRate;
    std::string* filter;
    std::string* master;
    std::string* condition;
    ::com::tibbo::aggregate::common::expression::Expression* filterExpression;
    ::com::tibbo::aggregate::common::expression::Expression* conditionExpression;
    SynchronizationHandler* synchronizationHandler;
    int synchronizationsCounter;
protected:
    void ctor();
    void ctor(::java::lang::Long* syncPeriod);
    void ctor(::java::lang::Long* updateHistoryStorageTime, ::java::lang::Long* syncPeriod);
    void ctor(::java::lang::Long* updateHistoryStorageTime, ::java::lang::Long* syncPeriod, int historyRate);

public:
    int getMode();
    void setMode(int mode);
    ::java::lang::Long* getSyncPeriod();
    void setSyncPeriod(::java::lang::Long* syncPeriod);
    std::string* getMaster();
    void setMaster(std::string* master);
    ::java::lang::Long* getUpdateHistoryStorageTime();
    void setUpdateHistoryStorageTime(::java::lang::Long* updateHistoryStorageTime);
    int getHistoryRate();
    void setHistoryRate(int historyRate);
    std::string* getFilter();
    ::com::tibbo::aggregate::common::expression::Expression* getFilterExpression();
    void setFilter(std::string* filter);
    std::string* getCondition();
    ::com::tibbo::aggregate::common::expression::Expression* getConditionExpression();
    void setCondition(std::string* condition);
    SynchronizationHandler* getSynchronizationHandler();
    void setSynchronizationHandler(SynchronizationHandler* synchronizationHandler);
    int getSynchronizationsCounter();
    void incrementSynchronizationsCounter();
    SettingSynchronizationOptions* clone();

    // Generated
    SettingSynchronizationOptions();
    SettingSynchronizationOptions(::java::lang::Long* syncPeriod);
    SettingSynchronizationOptions(::java::lang::Long* updateHistoryStorageTime, ::java::lang::Long* syncPeriod);
    SettingSynchronizationOptions(::java::lang::Long* updateHistoryStorageTime, ::java::lang::Long* syncPeriod, int historyRate);
protected:
    SettingSynchronizationOptions(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
};
