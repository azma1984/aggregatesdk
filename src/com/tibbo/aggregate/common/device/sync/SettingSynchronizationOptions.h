#ifndef SettingSynchronizationOptionsH
#define SettingSynchronizationOptionsH

#include "device/DeviceContext.h"
#include "device/sync/SynchronizationHandler.h"
#include "expression/Expression.h"
#include "util/Cloneable.h"
#include <string>


class SettingSynchronizationOptions : public Cloneable
{

private:
    int mode;
    long  updateHistoryStorageTime;
    long  syncPeriod;
    int historyRate;
    std::string filter;
    std::string master;
    std::string condition;
    ExpressionPtr filterExpression;
    ExpressionPtr conditionExpression;
    SynchronizationHandlerPtr synchronizationHandler;
    int synchronizationsCounter;


public:
    int getMode();
    void setMode(int mode);
    long  getSyncPeriod();
    void setSyncPeriod(long  syncPeriod);
    std::string getMaster();
    void setMaster(const std::string & master);
    long  getUpdateHistoryStorageTime();
    void setUpdateHistoryStorageTime(long  updateHistoryStorageTime);
    int getHistoryRate();
    void setHistoryRate(int historyRate);
    std::string getFilter();
    ExpressionPtr getFilterExpression();
    void setFilter(const std::string & filter);
    std::string getCondition();
    ExpressionPtr getConditionExpression();
    void setCondition(const std::string & condition);
    SynchronizationHandlerPtr getSynchronizationHandler();
    void setSynchronizationHandler(SynchronizationHandlerPtr synchronizationHandler);
    int getSynchronizationsCounter();
    void incrementSynchronizationsCounter();
    SettingSynchronizationOptionsPtr clone() const;

    SettingSynchronizationOptions();
    SettingSynchronizationOptions(long  syncPeriod);
    SettingSynchronizationOptions(long  updateHistoryStorageTime, long  syncPeriod);
    SettingSynchronizationOptions(long  updateHistoryStorageTime, long  syncPeriod, int historyRate);
};


#endif 
