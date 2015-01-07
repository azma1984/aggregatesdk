// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/DeviceContext.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/device/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/device/sync/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/concurrent/locks/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/server/ServerContext.h"

struct com::tibbo::aggregate::common::device::DeviceContext
    : public ::com::tibbo::aggregate::common::server::ServerContext
{
    static const int CONNECTION_STATUS_OFFLINE) };
    static const int CONNECTION_STATUS_ONLINE = 1) };
    static const int CONNECTION_STATUS_SUSPENDED = 2) };
    static const int CONNECTION_STATUS_UNKNOWN = 3) };
    static const int SYNC_STATUS_OK = 20) };
    static const int SYNC_STATUS_WAITING = 30) };
    static const int SYNC_STATUS_ERROR = 40) };
    static const int SYNC_STATUS_UNDEFINED = 50) };
    static const int SYNC_STATUS_CONNECTING = 70) };
    static const int SYNC_STATUS_READING_METADATA = 80) };
    static const int SYNC_STATUS_SYNCHRONIZING_SETTINGS = 90) };
    static const int CURRENT_SYNC_STATUS_CONNECTING) };
    static const int CURRENT_SYNC_STATUS_READING_METADATA = 1) };
    static const int CURRENT_SYNC_STATUS_SYNCHRONIZING_PROPERTIES = 2) };
    static const int SYNC_MODE_NORMAL) };
    static const int SYNC_MODE_DISABLED = 1) };
    static const int SYNC_MODE_DIRECT_ACCESS = 2) };
    static const int SYNC_MODE_MASTER_VALUE = 3) };
    static const int SYNC_MODE_IGNORE_MODIFICATION_TIME = 4) };
    static const int SYNC_MODE_READ_ONLY = 5) };
    static const int SYNC_MODE_DIRECT_WRITE = 6) };
    static const int SYNC_MODE_CUSTOM = 100) };
    static const int DIRECTION_NONE = -1) };
    static const int DIRECTION_AUTO) };
    static const int DIRECTION_DEVICE_TO_SERVER = 1) };
    static const int DIRECTION_SERVER_TO_DEVICE = 2) };
    static const int HISTORY_RATE_CHANGES = -1) };
    static const int HISTORY_RATE_ALL) };
    ::com::tibbo::aggregate::common::context::CallerController* getCallerController();
    DeviceDriver* getDriver();
    std::string* getAddress();
    std::list  getAssets();
    ::com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions* getSynchronizationOptions(std::string* variable);
    DeviceSettingStatus* getSettingStatus(std::string* variable);
    bool isOnline();
    void setDefaultSynchronizationPeriod(long period);
    void setDefaultStatusExpression(std::string* expression);
    void setDefaultColorExpression(std::string* expression);
    void setDefaultLatitudeExpression(std::string* expression);
    void setDefaultLongitudeExpression(std::string* expression);
    void setDefaultCacheMode(int mode);
    void setDefaultSynchronizationOptions(std::string* variable, ::com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions* options);
    void setDefaultSynchronizationOptions(std::string* variable, bool local, ::com::tibbo::aggregate::common::device::sync::SettingSynchronizationOptions* options);
    void setCustomSynchronizationHandler(std::string* variable, ::com::tibbo::aggregate::common::device::sync::SynchronizationHandler* handler, bool forceCustomSyncMode);
    void removeCustomSynchronizationHandler(std::string* variable);
    void setDeviceType(std::string* deviceType) /* throws(ContextException) */;
    void setAccessSettingReinitializer(std::string* variable, AccessSettingReinizializer* reinitializer);
    void requestReconnection();
    void requestSynchronization();
    void requestSynchronization(bool useExtendedStatus);
    void requestAssetsUpdate();
    void asyncVariableUpdate(std::string* variable, ::com::tibbo::aggregate::common::datatable::DataTable* value) /* throws(DisconnectionException, ContextException, DeviceException) */;
    void processHistoricalValue(std::string* variable, ::java::util::Date* timestamp, ::com::tibbo::aggregate::common::datatable::DataTable* value) /* throws(ContextException) */;
    ::java::util::concurrent::locks::std::mutex ** getSynchronizationLock();
    ::com::tibbo::aggregate::common::device::sync::SynchronizationResult* executeSynchronization(::com::tibbo::aggregate::common::device::sync::SynchronizationParameters* parameters);
    void setOnline(bool online);
    ::com::tibbo::aggregate::common::context::VariableDefinition* discoverDeviceVariable(std::string* name, int timeout, void* helper) /* throws(ContextException) */;
    ::com::tibbo::aggregate::common::context::FunctionDefinition* discoverDeviceFunction(std::string* name, int timeout, void* helper) /* throws(ContextException) */;
    ::com::tibbo::aggregate::common::context::EventDefinition* discoverDeviceEvent(std::string* name, int timeout, void* helper) /* throws(ContextException) */;

    // Generated
    
};
