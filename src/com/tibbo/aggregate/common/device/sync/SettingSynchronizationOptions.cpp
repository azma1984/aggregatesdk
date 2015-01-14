#include "device/sync/SettingSynchronizationOptions.h"


SettingSynchronizationOptions::SettingSynchronizationOptions()
{
    ctor();
}

SettingSynchronizationOptions::SettingSynchronizationOptions(long syncPeriod)
{
    ctor();
    this->syncPeriod = syncPeriod;
}

SettingSynchronizationOptions::SettingSynchronizationOptions(long updateHistoryStorageTime, long syncPeriod)
{
    ctor();
    this->updateHistoryStorageTime = updateHistoryStorageTime;
    this->syncPeriod = syncPeriod;
}

SettingSynchronizationOptions::SettingSynchronizationOptions(long updateHistoryStorageTime, long syncPeriod, int historyRate)
{
    ctor();
    this->updateHistoryStorageTime = updateHistoryStorageTime;
    this->syncPeriod = syncPeriod;
    this->historyRate = historyRate;
}

void SettingSynchronizationOptions::ctor()
{
    this->mode = DeviceContext::SYNC_MODE_NORMAL;

    this->updateHistoryStorageTime = 0;
    this->syncPeriod = 0;
    this->historyRate = 0;
    this->synchronizationsCounter = 0;
}

int SettingSynchronizationOptions::getMode()
{
    return mode;
}

void SettingSynchronizationOptions::setMode(int mode)
{
    this->mode = mode;
}

long SettingSynchronizationOptions::getSyncPeriod()
{
    return syncPeriod;
}

void SettingSynchronizationOptions::setSyncPeriod(long syncPeriod)
{
    this->syncPeriod = syncPeriod;
}

std::string SettingSynchronizationOptions::getMaster()
{
    return master;
}

void SettingSynchronizationOptions::setMaster(const std::string& master)
{
    this->master = master;
}

long SettingSynchronizationOptions::getUpdateHistoryStorageTime()
{
    return updateHistoryStorageTime;
}

void SettingSynchronizationOptions::setUpdateHistoryStorageTime(long updateHistoryStorageTime)
{
    this->updateHistoryStorageTime = updateHistoryStorageTime;
}

int SettingSynchronizationOptions::getHistoryRate()
{
    return historyRate;
}

void SettingSynchronizationOptions::setHistoryRate(int historyRate)
{
    this->historyRate = historyRate;
}

std::string SettingSynchronizationOptions::getFilter()
{
    return filter;
}

void SettingSynchronizationOptions::setFilter(const std::string& filter)
{
    this->filter = filter;
}

boost::shared_ptr<Expression> SettingSynchronizationOptions::getFilterExpression()
{
    if (filterExpression == NULL && filter.length() > 0) {
        filterExpression = new Expression(filter);
    }

    return filterExpression;
}

std::string SettingSynchronizationOptions::getCondition()
{
    return condition;
}

boost::shared_ptr<Expression> SettingSynchronizationOptions::getConditionExpression()
{
    if (conditionExpression == NULL && condition.length() > 0) {
        conditionExpression = new Expression(condition);
    }

    return conditionExpression;
}

void SettingSynchronizationOptions::setCondition(const std::string& condition)
{
    this->condition = condition;
    conditionExpression.reset();
}

boost::shared_ptr<SynchronizationHandler> SettingSynchronizationOptions::getSynchronizationHandler()
{
    return synchronizationHandler;
}

void SettingSynchronizationOptions::setSynchronizationHandler(boost::shared_ptr<SynchronizationHandler> synchronizationHandler)
{
    this->synchronizationHandler = synchronizationHandler;
}

int SettingSynchronizationOptions::getSynchronizationsCounter()
{
    return synchronizationsCounter;
}

void SettingSynchronizationOptions::incrementSynchronizationsCounter()
{
    incrementSynchronizationsCounter++;
}

SettingSynchronizationOptions* SettingSynchronizationOptions::clone()
{
//    try
//    {
      SettingSynchronizationOptions* clone = new SettingSynchronizationOptions(this);
      clone->setSynchronizationHandler(NULL);
      return clone;
//    }
//    catch (CloneNotSupportedException ex)
//    {
//      throw new IllegalStateException(ex.getMessage(), ex);
//    }
}
