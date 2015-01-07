// Generated from /aggregate_sdk_5.11.00/src/examples/driver/DemoDeviceDriver.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/device/fwd-aggregate_sdk_5.11.00.h"
#include <examples/driver/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/device/AbstractDeviceDriver.h"



class examples::driver::DemoDeviceDriver
    : public ::com::tibbo::aggregate::common::device::AbstractDeviceDriver
{

public:
    typedef ::com::tibbo::aggregate::common::device::AbstractDeviceDriver super;

private:
    std::string* demoSettingValue;
protected:
    void ctor();

public:
    void setupDeviceContext(::com::tibbo::aggregate::common::device::DeviceContext* deviceContext) /* throws(ContextException) */;
    std::list  readVariableDefinitions() /* throws(ContextException, DeviceException, DisconnectionException) */;
    std::list  readFunctionDefinitions() /* throws(ContextException, DeviceException, DisconnectionException) */;
    std::list  readEventDefinitions() /* throws(ContextException, DeviceException, DisconnectionException) */;
    ::com::tibbo::aggregate::common::datatable::DataTable* readVariableValue(::com::tibbo::aggregate::common::context::VariableDefinition* vd) /* throws(ContextException, DeviceException, DisconnectionException) */;
    void writeVariableValue(::com::tibbo::aggregate::common::context::VariableDefinition* vd, ::com::tibbo::aggregate::common::datatable::DataTable* value, ::com::tibbo::aggregate::common::datatable::DataTable* deviceValue) /* throws(ContextException, DeviceException, DisconnectionException) */;
    ::com::tibbo::aggregate::common::datatable::DataTable* executeFunction(::com::tibbo::aggregate::common::context::FunctionDefinition* fd, ::com::tibbo::aggregate::common::datatable::DataTable* parameters) /* throws(ContextException, DeviceException, DisconnectionException) */;
    void finishSynchronization() /* throws(DeviceException) */;

    // Generated
    DemoDeviceDriver();
protected:
    DemoDeviceDriver(const ::default_init_tag&);


public:
    

private:
    void init();

public:
    std::list  readEventDefinitions(std::list  groups);
    std::list  readFunctionDefinitions(std::list  groups);
    std::list  readVariableDefinitions(std::list  groups);

private:
    ::java::lang::Class* getClass0();
};
