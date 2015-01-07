// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/sync/SynchronizationHandler.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/device/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/device/sync/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::device::sync::SynchronizationHandler
    
{

public:
    typedef void super;

private:
    SettingSynchronizationOptions* synchronizationOptions;
    ::com::tibbo::aggregate::common::device::DeviceContext* deviceContext;
    std::string* variable;
    ::com::tibbo::aggregate::common::context::VariableStatus* customStatus;
    bool synchronizationEnabled;
protected:
    void ctor();

public:
    void initialize(::com::tibbo::aggregate::common::device::DeviceContext* deviceContext, std::string* variable, SettingSynchronizationOptions* synchronizationOptions, bool check) /* throws(ContextException) */;
    void deinitialize();
    void startSynchronization() /* throws(DeviceException, ContextException) */;
    bool isSynchronizationEnabled();

public: /* protected */
    void setSynchronizationEnabled(bool synchronizationEnabled);

public:
    ::com::tibbo::aggregate::common::datatable::DataTable* readFromCache(::com::tibbo::aggregate::common::context::CallerController* caller, ::com::tibbo::aggregate::common::context::RequestController* request) /* throws(ContextException) */;
    void writeToCache(::com::tibbo::aggregate::common::context::CallerController* caller, ::com::tibbo::aggregate::common::context::RequestController* request, ::com::tibbo::aggregate::common::datatable::DataTable* value) /* throws(ContextException) */;
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
    std::string* getVariable();

public:
    ::com::tibbo::aggregate::common::context::VariableStatus* getCustomStatus();
    void setCustomStatus(::com::tibbo::aggregate::common::context::VariableStatus* customStatus);

    // Generated
    SynchronizationHandler();
protected:
    SynchronizationHandler(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
    friend class SynchronizationHandler_createServerWriter_1;
    friend class SynchronizationHandler_createServerReader_2;
};
