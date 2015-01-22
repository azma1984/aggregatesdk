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
    Expression* filterExpression;
    Expression* conditionExpression;
    SynchronizationHandler* synchronizationHandler;
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
    Expression* getFilterExpression();
    void setFilter(const std::string & filter);
    std::string getCondition();
    Expression* getConditionExpression();
    void setCondition(const std::string & condition);
    SynchronizationHandler* getSynchronizationHandler();
    void setSynchronizationHandler(SynchronizationHandler* synchronizationHandler);
    int getSynchronizationsCounter();
    void incrementSynchronizationsCounter();
    SettingSynchronizationOptions* clone() const;

    SettingSynchronizationOptions();
    SettingSynchronizationOptions(long  syncPeriod);
    SettingSynchronizationOptions(long  updateHistoryStorageTime, long  syncPeriod);
    SettingSynchronizationOptions(long  updateHistoryStorageTime, long  syncPeriod, int historyRate);
};


#endif 
