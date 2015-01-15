#pragma once


class SynchronizationHandler
{
private:
    SettingSynchronizationOptions* synchronizationOptions;
    ::com::tibbo::aggregate::common::device::DeviceContext* deviceContext;
    const std::string & variable;
    ::com::tibbo::aggregate::common::context::VariableStatus* customStatus;
    bool synchronizationEnabled;
protected:
    void ctor();

public:
    void initialize(::com::tibbo::aggregate::common::device::DeviceContext* deviceContext, const std::string & variable, SettingSynchronizationOptions* synchronizationOptions, bool check) /* throws(ContextException) */;
    void deinitialize();
    void startSynchronization() /* throws(DeviceException, ContextException) */;
    bool isSynchronizationEnabled();

public: /* protected */
    void setSynchronizationEnabled(bool synchronizationEnabled);

public:
    DataTable* readFromCache(::com::tibbo::aggregate::common::context::CallerController* caller, ::com::tibbo::aggregate::common::context::RequestController* request) /* throws(ContextException) */;
    void writeToCache(::com::tibbo::aggregate::common::context::CallerController* caller, ::com::tibbo::aggregate::common::context::RequestController* request, DataTable* value) /* throws(ContextException) */;
    ValueWriter* createServerWriter();
    ValueReader* createServerReader();
    ::java::util::Date* getServerModificationTime() /* throws(ContextException) */;
    ::java::util::Date* getDeviceModificationTime() /* throws(ContextException, DeviceException, DisconnectionException) */;
    bool isUpdatedOnTheServer(::com::tibbo::aggregate::common::context::CallerController* caller) /* throws(ContextException) */;
    int getDirectionOverride();
    ::com::tibbo::aggregate::common::context::VariableDefinition* getPersistentDefinition(::com::tibbo::aggregate::common::context::VariableDefinition* vd);
    SettingSynchronizationOptions* getSynchronizationOptions();

public: /* protected */
    ::com::tibbo::aggregate::common::device::DeviceContext* getDeviceContext();
    const std::string & getVariable();

public:
    ::com::tibbo::aggregate::common::context::VariableStatus* getCustomStatus();
    void setCustomStatus(::com::tibbo::aggregate::common::context::VariableStatus* customStatus);

    // Generated
    SynchronizationHandler();
};
