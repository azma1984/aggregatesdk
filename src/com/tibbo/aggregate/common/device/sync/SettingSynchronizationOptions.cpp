#include "device/sync/SettingSynchronizationOptions.h"


SettingSynchronizationOptions::SettingSynchronizationOptions() 
{
 mode = DeviceContext::SYNC_MODE_NORMAL;
}

SettingSynchronizationOptions::SettingSynchronizationOptions(long  syncPeriod)//:SettingSynchronizationOptions()  
{
  mode = DeviceContext::SYNC_MODE_NORMAL;
  this->syncPeriod = syncPeriod;
}

SettingSynchronizationOptions::SettingSynchronizationOptions(long  updateHistoryStorageTime, long  syncPeriod)//:SettingSynchronizationOptions(syncPeriod) 
{
  mode = DeviceContext::SYNC_MODE_NORMAL;
  this->syncPeriod = syncPeriod;
  this->updateHistoryStorageTime = updateHistoryStorageTime;
}

SettingSynchronizationOptions::SettingSynchronizationOptions(long  updateHistoryStorageTime, long  syncPeriod, int historyRate)//:SettingSynchronizationOptions(updateHistoryStorageTime, syncPeriod) 
{
  mode = DeviceContext::SYNC_MODE_NORMAL;
  this->syncPeriod = syncPeriod;
  this->updateHistoryStorageTime = updateHistoryStorageTime;
  this->historyRate = historyRate;
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

void SettingSynchronizationOptions::setSyncPeriod(long  syncPeriod)
{
    this->syncPeriod = syncPeriod;
}

std::string SettingSynchronizationOptions::getMaster()
{
    return master;
}

void SettingSynchronizationOptions::setMaster(const std::string & master)
{
    this->master = master;
}

 long SettingSynchronizationOptions::getUpdateHistoryStorageTime()
{
    return updateHistoryStorageTime;
}

void SettingSynchronizationOptions::setUpdateHistoryStorageTime(long  updateHistoryStorageTime)
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

ExpressionPtr SettingSynchronizationOptions::getFilterExpression()
{
    if((filterExpression == 0) && (filter.empty() == false) && (filter.length() > 0)) 
	{
	 // filterExpression = new Expression(filter); todo
    }
    return filterExpression;
}

void SettingSynchronizationOptions::setFilter(const std::string & filter)
{
    this->filter = filter;
	filterExpression.reset();// =0;
}

std::string SettingSynchronizationOptions::getCondition()
{
    return condition;
}

ExpressionPtr SettingSynchronizationOptions::getConditionExpression()
{
    if((conditionExpression == 0) && (condition.empty() == false) && (condition.length() > 0)) 
	{
	  //conditionExpression = new Expression(condition);//todo
    }
    return conditionExpression;
}

void SettingSynchronizationOptions::setCondition(const std::string & condition)
{
    this->condition = condition;
	conditionExpression.reset();// =0;
}

SynchronizationHandlerPtr SettingSynchronizationOptions::getSynchronizationHandler()
{
    return synchronizationHandler;
}

void SettingSynchronizationOptions::setSynchronizationHandler(SynchronizationHandlerPtr synchronizationHandler)
{
    this->synchronizationHandler = synchronizationHandler;
}

int SettingSynchronizationOptions::getSynchronizationsCounter()
{
    return synchronizationsCounter;
}

void SettingSynchronizationOptions::incrementSynchronizationsCounter()
{
    synchronizationsCounter++;
}



//SettingSynchronizationOptionsPtr SettingSynchronizationOptions::clone() const
//{
//  SettingSynchronizationOptionsPtrsso = new  SettingSynchronizationOptions;
//
//  sso->mode = mode;
//  sso->updateHistoryStorageTime = updateHistoryStorageTime;
//  sso->syncPeriod = syncPeriod;
//  sso->historyRate = historyRate;
//  sso->filter = filter;
//  sso->master = master;
//  sso->condition = condition;
//  //todo - functions clone() indefined
////  sso->filterExpression       = filterExpression->clone();
////  sso->conditionExpression    = conditionExpression->clone();
////  sso->synchronizationHandler =synchronizationHandler->clone();
//  sso->synchronizationsCounter =synchronizationsCounter;
//  return sso;
//}




