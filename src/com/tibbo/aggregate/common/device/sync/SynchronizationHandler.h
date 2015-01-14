#pragma once

#include "ValueReader.h"
#include "ValueWriter.h"
#include "device/DeviceContext.h"
#include "device/sync/SettingSynchronizationOptions.h"
#include "context/VariableDefinition.h"
#include "context/VariableStatus.h"
#include <boost/shared_ptr.hpp>

class SynchronizationHandler
{
private:
    boost::shared_ptr<SettingSynchronizationOptions> synchronizationOptions;
    boost::shared_ptr<DeviceContext> deviceContext;
    std::string variable;
    boost::shared_ptr<VariableStatus> customStatus;
    bool synchronizationEnabled;

protected:
    void ctor();

public:
    void initialize(boost::shared_ptr<DeviceContext> deviceContext, const std::string& variable,
                    boost::shared_ptr<SettingSynchronizationOptions> synchronizationOptions, bool check) /* throws(ContextException) */;
    void deinitialize();
    void startSynchronization() /* throws(DeviceException, ContextException) */;
    bool isSynchronizationEnabled();  

public:
    boost::shared_ptr<DataTable> readFromCache(boost::shared_ptr<CallerController> caller, boost::shared_ptr<RequestController> request) /* throws(ContextException) */;
    void writeToCache(boost::shared_ptr<CallerController> caller, boost::shared_ptr<RequestController> request,
                      boost::shared_ptr<DataTable> value) /* throws(ContextException) */;
    boost::shared_ptr<ValueWriter> createServerWriter();
    boost::shared_ptr<ValueReader> createServerReader();
    boost::shared_ptr<Date> getServerModificationTime() /* throws(ContextException) */;
    boost::shared_ptr<Date> getDeviceModificationTime() /* throws(ContextException, DeviceException, DisconnectionException) */;
    bool isUpdatedOnTheServer(boost::shared_ptr<CallerController> caller) /* throws(ContextException) */;
    int getDirectionOverride();
    boost::shared_ptr<VariableDefinition> getPersistentDefinition(boost::shared_ptr<VariableDefinition> vd);
    boost::shared_ptr<SettingSynchronizationOptions> getSynchronizationOptions();

    boost::shared_ptr<VariableStatus> getCustomStatus();
    void setCustomStatus(boost::shared_ptr<VariableStatus> customStatus);


    SynchronizationHandler();

protected:
    void setSynchronizationEnabled(bool synchronizationEnabled);
    boost::shared_ptr<DeviceContext> getDeviceContext();
    std::string getVariable();
};
