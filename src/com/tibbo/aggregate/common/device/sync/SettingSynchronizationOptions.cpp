// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/sync/SettingSynchronizationOptions.java
#include <com/tibbo/aggregate/common/device/sync/SettingSynchronizationOptions.h"

#include <com/tibbo/aggregate/common/device/DeviceContext.h"
#include <com/tibbo/aggregate/common/device/sync/SynchronizationHandler.h"
#include <com/tibbo/aggregate/common/expression/Expression.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/CloneNotSupportedException.h"
//#include <java/lang/IllegalStateException.h"
//#include <java/lang/Long.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(0);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::SettingSynchronizationOptions(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::SettingSynchronizationOptions() 
    : SettingSynchronizationOptions(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::SettingSynchronizationOptions(::java::lang::Long* syncPeriod) 
    : SettingSynchronizationOptions(*static_cast< ::default_init_tag* >(0))
{
    ctor(syncPeriod);
}

com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::SettingSynchronizationOptions(::java::lang::Long* updateHistoryStorageTime, ::java::lang::Long* syncPeriod) 
    : SettingSynchronizationOptions(*static_cast< ::default_init_tag* >(0))
{
    ctor(updateHistoryStorageTime,syncPeriod);
}

com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::SettingSynchronizationOptions(::java::lang::Long* updateHistoryStorageTime, ::java::lang::Long* syncPeriod, int historyRate) 
    : SettingSynchronizationOptions(*static_cast< ::default_init_tag* >(0))
{
    ctor(updateHistoryStorageTime,syncPeriod,historyRate);
}

void com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::init()
{
    mode = ::com::tibbo::aggregate::common::device::DeviceContext::SYNC_MODE_NORMAL;
}

void com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::ctor()
{
    super::ctor();
    init();
}

void com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::ctor(::java::lang::Long* syncPeriod)
{
    ctor();
    this->syncPeriod = syncPeriod;
}

void com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::ctor(::java::lang::Long* updateHistoryStorageTime, ::java::lang::Long* syncPeriod)
{
    ctor(syncPeriod);
    this->updateHistoryStorageTime = updateHistoryStorageTime;
}

void com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::ctor(::java::lang::Long* updateHistoryStorageTime, ::java::lang::Long* syncPeriod, int historyRate)
{
    ctor(updateHistoryStorageTime, syncPeriod);
    this->historyRate = historyRate;
}

int com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::getMode()
{
    return mode;
}

void com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::setMode(int mode)
{
    this->mode = mode;
}

java::lang::Long* com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::getSyncPeriod()
{
    return syncPeriod;
}

void com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::setSyncPeriod(::java::lang::Long* syncPeriod)
{
    this->syncPeriod = syncPeriod;
}

std::string com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::getMaster()
{
    return master;
}

void com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::setMaster(const std::string & master)
{
    this->master = master;
}

java::lang::Long* com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::getUpdateHistoryStorageTime()
{
    return updateHistoryStorageTime;
}

void com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::setUpdateHistoryStorageTime(::java::lang::Long* updateHistoryStorageTime)
{
    this->updateHistoryStorageTime = updateHistoryStorageTime;
}

int com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::getHistoryRate()
{
    return historyRate;
}

void com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::setHistoryRate(int historyRate)
{
    this->historyRate = historyRate;
}

std::string com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::getFilter()
{
    return filter;
}

com::tibbo::aggregate::common::expression::Expression* com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::getFilterExpression()
{
    if(filterExpression == 0 && filter != 0 && filter)->length() > 0) {
        filterExpression = new ::com::tibbo::aggregate::common::expression::Expression(filter);
    }
    return filterExpression;
}

void com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::setFilter(const std::string & filter)
{
    this->filter = filter;
    filterExpression;
}

std::string com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::getCondition()
{
    return condition;
}

com::tibbo::aggregate::common::expression::Expression* com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::getConditionExpression()
{
    if(conditionExpression == 0 && condition != 0 && condition)->length() > 0) {
        conditionExpression = new ::com::tibbo::aggregate::common::expression::Expression(condition);
    }
    return conditionExpression;
}

void com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::setCondition(const std::string & condition)
{
    this->condition = condition;
    conditionExpression;
}

com::tibbo::aggregate::common::device::sync::SynchronizationHandler* com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::getSynchronizationHandler()
{
    return synchronizationHandler;
}

void com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::setSynchronizationHandler(SynchronizationHandler* synchronizationHandler)
{
    this->synchronizationHandler = synchronizationHandler;
}

int com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::getSynchronizationsCounter()
{
    return synchronizationsCounter;
}

void com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::incrementSynchronizationsCounter()
{
    synchronizationsCounter++;
}

com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions* com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::clone()
{
    try {
        auto clone = java_cast< SettingSynchronizationOptions* >(super::clone());
        clone)->setSynchronizationHandler(0);
        return clone;
    } catch (::java::lang::CloneNotSupportedException* ex) {
        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
    }
}



java::lang::Class* com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.device.sync.SettingSynchronizationOptions", 68);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions::getClass0()
{
    return class_();
}

