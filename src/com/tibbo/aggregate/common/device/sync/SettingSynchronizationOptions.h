// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/sync/SettingSynchronizationOptions.java

#pragma once

#include "device/sync/SynchronizationHandler.h"
#include "util/Cloneable.h"
#include <boost/shared_ptr.hpp>
#include <string>

class SettingSynchronizationOptions : public Cloneable
{
private:
    int mode;
    long updateHistoryStorageTime;
    long syncPeriod;
    int historyRate;
    std::string filter;
    std::string master;
    std::string condition;
    boost::shared_ptr<Expression> filterExpression;
    boost::shared_ptr<Expression> conditionExpression;
    boost::shared_ptr<SynchronizationHandler> synchronizationHandler;
    int synchronizationsCounter;

protected:
    void ctor();

public:
    int getMode();
    void setMode(int mode);
    long getSyncPeriod();
    void setSyncPeriod(long syncPeriod);
    std::string getMaster();
    void setMaster(const std::string& master);
    long getUpdateHistoryStorageTime();
    void setUpdateHistoryStorageTime(long updateHistoryStorageTime);
    int getHistoryRate();
    void setHistoryRate(int historyRate);
    std::string getFilter();
    boost::shared_ptr<Expression> getFilterExpression();
    void setFilter(const std::string& filter);
    std::string getCondition();
    boost::shared_ptr<Expression> getConditionExpression();
    void setCondition(const std::string& condition);
    boost::shared_ptr<SynchronizationHandler> getSynchronizationHandler();
    void setSynchronizationHandler(boost::shared_ptr<SynchronizationHandler> synchronizationHandler);
    int getSynchronizationsCounter();
    void incrementSynchronizationsCounter();
    SettingSynchronizationOptions* clone();

    SettingSynchronizationOptions();
    SettingSynchronizationOptions(long syncPeriod);
    SettingSynchronizationOptions(long updateHistoryStorageTime, long syncPeriod);
    SettingSynchronizationOptions(long updateHistoryStorageTime, long syncPeriod, int historyRate);
};
