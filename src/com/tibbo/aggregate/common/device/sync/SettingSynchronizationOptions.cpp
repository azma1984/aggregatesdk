#include "device/sync/SettingSynchronizationOptions.h"


//SettingSynchronizationOptions::SettingSynchronizationOptions() 
//{
// mode = SYNC_MODE_NORMAL;
//}
//
//SettingSynchronizationOptions::SettingSynchronizationOptions(long  syncPeriod) 
//{
//  SettingSynchronizationOptions() 
//  this->syncPeriod = syncPeriod;
//}
//
//SettingSynchronizationOptions::SettingSynchronizationOptions(long  updateHistoryStorageTime, long  syncPeriod) 
//{
//   SettingSynchronizationOptions(syncPeriod);
//   this->updateHistoryStorageTime = updateHistoryStorageTime;
//}
//
//SettingSynchronizationOptions::SettingSynchronizationOptions(long  updateHistoryStorageTime, long  syncPeriod, int historyRate) 
//{
//  SettingSynchronizationOptions(updateHistoryStorageTime, syncPeriod);
//  this->historyRate = historyRate;
//}
//
//
//
//int SettingSynchronizationOptions::getMode()
//{
//    return mode;
//}
//
//void SettingSynchronizationOptions::setMode(int mode)
//{
//    this->mode = mode;
//}
//
//long SettingSynchronizationOptions::getSyncPeriod()
//{
//    return syncPeriod;
//}
//
//void SettingSynchronizationOptions::setSyncPeriod(long  syncPeriod)
//{
//    this->syncPeriod = syncPeriod;
//}
//
//std::string SettingSynchronizationOptions::getMaster()
//{
//    return master;
//}
//
//void SettingSynchronizationOptions::setMaster(const std::string & master)
//{
//    this->master = master;
//}
//
// SettingSynchronizationOptions::getUpdateHistoryStorageTime()
//{
//    return updateHistoryStorageTime;
//}
//
//void SettingSynchronizationOptions::setUpdateHistoryStorageTime(long  updateHistoryStorageTime)
//{
//    this->updateHistoryStorageTime = updateHistoryStorageTime;
//}
//
//int SettingSynchronizationOptions::getHistoryRate()
//{
//    return historyRate;
//}
//
//void SettingSynchronizationOptions::setHistoryRate(int historyRate)
//{
//    this->historyRate = historyRate;
//}
//
//std::string SettingSynchronizationOptions::getFilter()
//{
//    return filter;
//}
//
////Expression* SettingSynchronizationOptions::getFilterExpression()
////{
////    if(filterExpression == 0 && filter != 0 && filter)->length() > 0) 
////	{
////        filterExpression = new Expression(filter);
////    }
////    return filterExpression;
////}
//
//void SettingSynchronizationOptions::setFilter(const std::string & filter)
//{
//    this->filter = filter;
//    filterExpression =0;
//}
//
//std::string SettingSynchronizationOptions::getCondition()
//{
//    return condition;
//}
//
////Expression* SettingSynchronizationOptions::getConditionExpression()
////{
////    if((conditionExpression == 0) && (condition != 0) && (condition->length() > 0)) 
////	{
////      conditionExpression = new Expression(condition);
////    }
////    return conditionExpression;
////}
//
////void SettingSynchronizationOptions::setCondition(const std::string & condition)
////{
////    this->condition = condition;
////    conditionExpression=0;
////}
//
////SynchronizationHandler* SettingSynchronizationOptions::getSynchronizationHandler()
////{
////    return synchronizationHandler;
////}
//
//void SettingSynchronizationOptions::setSynchronizationHandler(SynchronizationHandler* synchronizationHandler)
//{
//    this->synchronizationHandler = synchronizationHandler;
//}
//
//int SettingSynchronizationOptions::getSynchronizationsCounter()
//{
//    return synchronizationsCounter;
//}
//
//void SettingSynchronizationOptions::incrementSynchronizationsCounter()
//{
//    synchronizationsCounter++;
//}

/*
SettingSynchronizationOptions* SettingSynchronizationOptions::clone()
{
    try 
	{
      SettingSynchronizationOptions clone = (SettingSynchronizationOptions*)(super::clone());
      clone->setSynchronizationHandler(0);
      return clone;
    } 
	catch (CloneNotSupportedException* ex) 
	{
      throw new IllegalStateException(ex->getMessage(), ex);
    }
}
*/



