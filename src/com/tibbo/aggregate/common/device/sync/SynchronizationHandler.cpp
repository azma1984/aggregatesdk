// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/sync/SynchronizationHandler.java
#include <com/tibbo/aggregate/common/device/sync/SynchronizationHandler.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/context/VariableDefinition.h"
#include <com/tibbo/aggregate/common/context/VariableStatus.h"
#include <com/tibbo/aggregate/common/device/DeviceContext.h"
#include <com/tibbo/aggregate/common/device/DeviceDriver.h"
#include <com/tibbo/aggregate/common/device/DeviceSettingStatus.h"
#include <com/tibbo/aggregate/common/device/sync/SettingSynchronizationOptions.h"
#include <com/tibbo/aggregate/common/device/sync/SynchronizationHandler_createServerWriter_1.h"
#include <com/tibbo/aggregate/common/device/sync/SynchronizationHandler_createServerReader_2.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/String.h"
//#include <java/util/Date.h"
//#include <java/util/ResourceBundle.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::device::sync::SynchronizationHandler::SynchronizationHandler(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::device::sync::SynchronizationHandler::SynchronizationHandler() 
    : SynchronizationHandler(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::device::sync::SynchronizationHandler::init()
{
    synchronizationEnabled = true;
}

void com::tibbo::aggregate::common::device::sync::SynchronizationHandler::ctor()
{
    super::ctor();
    init();
}

void com::tibbo::aggregate::common::device::sync::SynchronizationHandler::initialize(::com::tibbo::aggregate::common::device::DeviceContext* deviceContext, const std::string & variable, SettingSynchronizationOptions* synchronizationOptions, bool check) /* throws(ContextException) */
{
    this->deviceContext = deviceContext;
    this->variable = variable;
    this->synchronizationOptions = synchronizationOptions;
}

void com::tibbo::aggregate::common::device::sync::SynchronizationHandler::deinitialize()
{
}

void com::tibbo::aggregate::common::device::sync::SynchronizationHandler::startSynchronization() /* throws(DeviceException, ContextException) */
{
}

bool com::tibbo::aggregate::common::device::sync::SynchronizationHandler::isSynchronizationEnabled()
{
    return synchronizationEnabled;
}

void com::tibbo::aggregate::common::device::sync::SynchronizationHandler::setSynchronizationEnabled(bool synchronizationEnabled)
{
    this->synchronizationEnabled = synchronizationEnabled;
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::device::sync::SynchronizationHandler::readFromCache(::com::tibbo::aggregate::common::context::CallerController* caller, ::com::tibbo::aggregate::common::context::RequestController* request) /* throws(ContextException) */
{
    return 0;
}

void com::tibbo::aggregate::common::device::sync::SynchronizationHandler::writeToCache(::com::tibbo::aggregate::common::context::CallerController* caller, ::com::tibbo::aggregate::common::context::RequestController* request, DataTable* value) /* throws(ContextException) */
{
}

com::tibbo::aggregate::common::device::sync::ValueWriter* com::tibbo::aggregate::common::device::sync::SynchronizationHandler::createServerWriter()
{
    return new SynchronizationHandler_createServerWriter_1(this, Cres::get())->getString(u"server"_j));
}

com::tibbo::aggregate::common::device::sync::ValueReader* com::tibbo::aggregate::common::device::sync::SynchronizationHandler::createServerReader()
{
    return new SynchronizationHandler_createServerReader_2(this, Cres::get())->getString(u"server"_j));
}

java::util::Date* com::tibbo::aggregate::common::device::sync::SynchronizationHandler::getServerModificationTime() /* throws(ContextException) */
{
    return deviceContext)->getSettingStatus(variable))->getTime();
}

java::util::Date* com::tibbo::aggregate::common::device::sync::SynchronizationHandler::getDeviceModificationTime() /* throws(ContextException, DeviceException, DisconnectionException) */
{
    return deviceContext)->getDriver())->getVariableModificationTime(getVariable());
}

bool com::tibbo::aggregate::common::device::sync::SynchronizationHandler::isUpdatedOnTheServer(::com::tibbo::aggregate::common::context::CallerController* caller) /* throws(ContextException) */
{
    return deviceContext)->getSettingStatus(variable))->isUpdated();
}

int com::tibbo::aggregate::common::device::sync::SynchronizationHandler::getDirectionOverride()
{
    return ::com::tibbo::aggregate::common::device::DeviceContext::DIRECTION_AUTO;
}

com::tibbo::aggregate::common::context::VariableDefinition* com::tibbo::aggregate::common::device::sync::SynchronizationHandler::getPersistentDefinition(::com::tibbo::aggregate::common::context::VariableDefinition* vd)
{
    return vd)->clone();
}

com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions* com::tibbo::aggregate::common::device::sync::SynchronizationHandler::getSynchronizationOptions()
{
    return synchronizationOptions;
}

com::tibbo::aggregate::common::device::DeviceContext* com::tibbo::aggregate::common::device::sync::SynchronizationHandler::getDeviceContext()
{
    return deviceContext;
}

std::string com::tibbo::aggregate::common::device::sync::SynchronizationHandler::getVariable()
{
    return variable;
}

com::tibbo::aggregate::common::context::VariableStatus* com::tibbo::aggregate::common::device::sync::SynchronizationHandler::getCustomStatus()
{
    return customStatus;
}

void com::tibbo::aggregate::common::device::sync::SynchronizationHandler::setCustomStatus(::com::tibbo::aggregate::common::context::VariableStatus* customStatus)
{
    this->customStatus = customStatus;
}



java::lang::Class* com::tibbo::aggregate::common::device::sync::SynchronizationHandler::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.device.sync.SynchronizationHandler", 61);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::device::sync::SynchronizationHandler::getClass0()
{
    return class_();
}

