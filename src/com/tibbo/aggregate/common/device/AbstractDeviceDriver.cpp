// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/AbstractDeviceDriver.java
#include <com/tibbo/aggregate/common/device/AbstractDeviceDriver.h"

#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/device/DeviceContext.h"
#include <com/tibbo/aggregate/common/device/DeviceUtils.h"
/*
//#include <java/lang/ClassCastException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/String.h"
//#include <java/lang/UnsupportedOperationException.h"
//#include <java/util/Collections.h"
//#include <java/util/LinkedList.h"
//#include <java/util/List.h"
//#include <java/util/Set.h"
*/
template<typename ComponentType, typename... Bases> struct SubArray;
namespace com
{
    namespace tibbo
    {
        namespace aggregate
        {
            namespace common
            {
                namespace context
                {
typedef ::SubArray< ::com::tibbo::aggregate::common::context::EntityDefinition, voidArray > EntityDefinitionArray;
typedef ::SubArray< ::com::tibbo::aggregate::common::context::AbstractEntityDefinition, voidArray, EntityDefinitionArray > AbstractEntityDefinitionArray;
                } // context
            } // common
        } // aggregate
    } // tibbo
} // com

namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
    } // lang
} // java

namespace com
{
    namespace tibbo
    {
        namespace aggregate
        {
            namespace common
            {
                namespace context
                {
typedef ::SubArray< ::com::tibbo::aggregate::common::context::VariableDefinition, AbstractEntityDefinitionArray, ::java::lang::CloneableArray, ::java::lang::ComparableArray > VariableDefinitionArray;
                } // context
            } // common
        } // aggregate
    } // tibbo
} // com

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

com::tibbo::aggregate::common::device::AbstractDeviceDriver::AbstractDeviceDriver(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::device::AbstractDeviceDriver::AbstractDeviceDriver(const std::string & description, TableFormat* connectionPropertiesFormat) 
    : AbstractDeviceDriver(*static_cast< ::default_init_tag* >(0))
{
    ctor(description,connectionPropertiesFormat);
}

com::tibbo::aggregate::common::device::AbstractDeviceDriver::AbstractDeviceDriver(const std::string & description, const std::string & protocol, TableFormat* connectionProperties) 
    : AbstractDeviceDriver(*static_cast< ::default_init_tag* >(0))
{
    ctor(description,protocol,connectionProperties);
}

void com::tibbo::aggregate::common::device::AbstractDeviceDriver::ctor(const std::string & description, TableFormat* connectionPropertiesFormat)
{
    super::ctor(description);
    this->connectionPropertiesFormat = connectionPropertiesFormat;
}

void com::tibbo::aggregate::common::device::AbstractDeviceDriver::ctor(const std::string & description, const std::string & protocol, TableFormat* connectionProperties)
{
    ctor(description, connectionProperties);
    this->protocol = protocol;
}

std::string com::tibbo::aggregate::common::device::AbstractDeviceDriver::getPrimaryAddress()
{
    return 0;
}

java::util::Set* com::tibbo::aggregate::common::device::AbstractDeviceDriver::getAddresses()
{
    auto const primaryAddress = getPrimaryAddress();
    return primaryAddress != 0 ? ::java::util::Collections::singleton(primaryAddress) : ::java::util::Collections::/* <String> */emptySet();
}

std::string com::tibbo::aggregate::common::device::AbstractDeviceDriver::getStatus()
{
    return 0;
}

java::util::List* com::tibbo::aggregate::common::device::AbstractDeviceDriver::getStatusExpressions(::com::tibbo::aggregate::common::context::CallerController* aCallerController)
{
    return new ::java::util::LinkedList();
}

void com::tibbo::aggregate::common::device::AbstractDeviceDriver::setupDeviceContext(DeviceContext* deviceContext) /* throws(ContextException) */
{
    this->deviceContext = deviceContext;
}

void com::tibbo::aggregate::common::device::AbstractDeviceDriver::configureDeviceAccount(DeviceContext* deviceContext, ::com::tibbo::aggregate::common::context::CallerController* caller) /* throws(ContextException) */
{
}

void com::tibbo::aggregate::common::device::AbstractDeviceDriver::accessSettingUpdated(const std::string & name)
{
}

bool com::tibbo::aggregate::common::device::AbstractDeviceDriver::shouldSynchronize(::com::tibbo::aggregate::common::device::sync::SynchronizationParameters* parameters) /* throws(ContextException) */
{
    return true;
}

void com::tibbo::aggregate::common::device::AbstractDeviceDriver::startSynchronization() /* throws(DeviceException) */
{
}

bool com::tibbo::aggregate::common::device::AbstractDeviceDriver::isUsesConnections()
{
    return true;
}

bool com::tibbo::aggregate::common::device::AbstractDeviceDriver::isConnected()
{
    return connected;
}

void com::tibbo::aggregate::common::device::AbstractDeviceDriver::connect() /* throws(DeviceException) */
{
    setConnected(true);
}

bool com::tibbo::aggregate::common::device::AbstractDeviceDriver::isUsesAssets()
{
    return false;
}

java::util::List* com::tibbo::aggregate::common::device::AbstractDeviceDriver::readAssets() /* throws(ContextException, DeviceException, DisconnectionException) */
{
    return new ::java::util::LinkedList();
}

bool com::tibbo::aggregate::common::device::AbstractDeviceDriver::isUseDeviceSideValuesCache()
{
    return false;
}

java::util::List* com::tibbo::aggregate::common::device::AbstractDeviceDriver::readVariableDefinitions() /* throws(ContextException, DeviceException, DisconnectionException) */
{
    return 0;
}

java::util::List* com::tibbo::aggregate::common::device::AbstractDeviceDriver::readVariableDefinitions(std::list  groups) /* throws(ContextException, DeviceException, DisconnectionException) */
{
    return readVariableDefinitions();
}

java::util::List* com::tibbo::aggregate::common::device::AbstractDeviceDriver::readFunctionDefinitions() /* throws(ContextException, DeviceException, DisconnectionException) */
{
    return 0;
}

java::util::List* com::tibbo::aggregate::common::device::AbstractDeviceDriver::readFunctionDefinitions(std::list  groups) /* throws(ContextException, DeviceException, DisconnectionException) */
{
    return 0;
}

java::util::List* com::tibbo::aggregate::common::device::AbstractDeviceDriver::readEventDefinitions() /* throws(ContextException, DeviceException, DisconnectionException) */
{
    return 0;
}

java::util::List* com::tibbo::aggregate::common::device::AbstractDeviceDriver::readEventDefinitions(std::list  groups) /* throws(ContextException, DeviceException, DisconnectionException) */
{
    return 0;
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::device::AbstractDeviceDriver::readVariableValue(::com::tibbo::aggregate::common::context::VariableDefinition* vd) /* throws(ContextException, DeviceException, DisconnectionException) */
{
    return 0;
}

void com::tibbo::aggregate::common::device::AbstractDeviceDriver::writeVariableValue(::com::tibbo::aggregate::common::context::VariableDefinition* vd, DataTable* value, DataTable* deviceValue) /* throws(ContextException, DeviceException, DisconnectionException) */
{
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::device::AbstractDeviceDriver::executeFunction(::com::tibbo::aggregate::common::context::FunctionDefinition* fd, DataTable* parameters) /* throws(ContextException, DeviceException, DisconnectionException) */
{
    throw new ::java::lang::UnsupportedOperationException();
}

java::util::Date* com::tibbo::aggregate::common::device::AbstractDeviceDriver::getVariableModificationTime(const std::string & name) /* throws(DeviceException, DisconnectionException) */
{
    return 0;
}

void com::tibbo::aggregate::common::device::AbstractDeviceDriver::updateVariableModificationTime(const std::string & name, ::java::util::Date* value) /* throws(DeviceException, DisconnectionException) */
{
}

com::tibbo::aggregate::common::context::VariableStatus* com::tibbo::aggregate::common::device::AbstractDeviceDriver::getCustomVariableStatus(const std::string & name) /* throws(DeviceException, DisconnectionException) */
{
    return 0;
}

void com::tibbo::aggregate::common::device::AbstractDeviceDriver::disconnect() /* throws(DeviceException) */
{
    setConnected(false);
}

void com::tibbo::aggregate::common::device::AbstractDeviceDriver::finishSynchronization() /* throws(DeviceException, DisconnectionException) */
{
}

void com::tibbo::aggregate::common::device::AbstractDeviceDriver::setConnected(bool connected)
{
    this->connected = connected;
}

com::tibbo::aggregate::common::device::DeviceContext* com::tibbo::aggregate::common::device::AbstractDeviceDriver::getDeviceContext()
{
    return deviceContext;
}

com::tibbo::aggregate::common::discovery::DiscoveryProvider* com::tibbo::aggregate::common::device::AbstractDeviceDriver::createDiscoveryProvider()
{
    return 0;
}

std::string com::tibbo::aggregate::common::device::AbstractDeviceDriver::getProtocol()
{
    return protocol;
}

com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::device::AbstractDeviceDriver::getConnectionPropertiesFormat()
{
    return connectionPropertiesFormat;
}

com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::device::AbstractDeviceDriver::createConnectionPropertiesFormat()
{
    auto format = getConnectionPropertiesFormat();
    if(format == 0) {
        format = new TableFormat(int(1), int(1));
    } else {
        format = format)->clone();
    }
    format)->addField(DeviceUtils::DESCRIPTION_FIELD(), int(0));
    format)->addField(DeviceUtils::NAME_FIELD(), int(0));
    return format;
}

com::tibbo::aggregate::common::context::VariableDefinition* com::tibbo::aggregate::common::device::AbstractDeviceDriver::discoverVariable(const std::string & name, void* helper)
{
    return 0;
}

com::tibbo::aggregate::common::context::FunctionDefinition* com::tibbo::aggregate::common::device::AbstractDeviceDriver::discoverFunction(const std::string & name, void* helper)
{
    return 0;
}

com::tibbo::aggregate::common::context::EventDefinition* com::tibbo::aggregate::common::device::AbstractDeviceDriver::discoverEvent(const std::string & name, void* helper)
{
    return 0;
}



java::lang::Class* com::tibbo::aggregate::common::device::AbstractDeviceDriver::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.device.AbstractDeviceDriver", 54);
    return c;
}

com::tibbo::aggregate::common::context::Context* com::tibbo::aggregate::common::device::AbstractDeviceDriver::createGlobalConfigContext(::com::tibbo::aggregate::common::context::Context* rootContext, bool requestReboot, ::com::tibbo::aggregate::common::context::VariableDefinitionArray* properties)
{
    return java_cast< ::com::tibbo::aggregate::common::context::Context* >(BasePlugin::createGlobalConfigContext(rootContext, requestReboot, properties));
}

com::tibbo::aggregate::common::context::Context* com::tibbo::aggregate::common::device::AbstractDeviceDriver::createUserConfigContext(::com::tibbo::aggregate::common::context::Context* userContext, bool requestReboot, ::com::tibbo::aggregate::common::context::VariableDefinitionArray* properties)
{
    return java_cast< ::com::tibbo::aggregate::common::context::Context* >(BasePlugin::createUserConfigContext(userContext, requestReboot, properties));
}

std::string com::tibbo::aggregate::common::device::AbstractDeviceDriver::getDescription()
{
    return BasePlugin::getDescription();
}

com::tibbo::aggregate::common::context::Context* com::tibbo::aggregate::common::device::AbstractDeviceDriver::getGlobalConfigContext()
{
    return java_cast< ::com::tibbo::aggregate::common::context::Context* >(BasePlugin::getGlobalConfigContext());
}

std::string com::tibbo::aggregate::common::device::AbstractDeviceDriver::getId()
{
    return BasePlugin::getId();
}

std::string com::tibbo::aggregate::common::device::AbstractDeviceDriver::getShortId()
{
    return BasePlugin::getShortId();
}

int com::tibbo::aggregate::common::device::AbstractDeviceDriver::getSortIndex()
{
    return BasePlugin::getSortIndex();
}

com::tibbo::aggregate::common::context::Context* com::tibbo::aggregate::common::device::AbstractDeviceDriver::getUserConfigContext(const std::string & username)
{
    return java_cast< ::com::tibbo::aggregate::common::context::Context* >(BasePlugin::getUserConfigContext(username));
}

void com::tibbo::aggregate::common::device::AbstractDeviceDriver::globalDeinit(::com::tibbo::aggregate::common::context::Context* rootContext)
{
    BasePlugin::globalDeinit(rootContext);
}

void com::tibbo::aggregate::common::device::AbstractDeviceDriver::globalInit(::com::tibbo::aggregate::common::context::Context* rootContext)
{
    BasePlugin::globalInit(rootContext);
}

void com::tibbo::aggregate::common::device::AbstractDeviceDriver::globalStart()
{
    BasePlugin::globalStart();
}

void com::tibbo::aggregate::common::device::AbstractDeviceDriver::globalStop()
{
    BasePlugin::globalStop();
}

void com::tibbo::aggregate::common::device::AbstractDeviceDriver::userDeinit(::com::tibbo::aggregate::common::context::Context* userContext)
{
    BasePlugin::userDeinit(userContext);
}

void com::tibbo::aggregate::common::device::AbstractDeviceDriver::userInit(::com::tibbo::aggregate::common::context::Context* userContext)
{
    BasePlugin::userInit(userContext);
}

java::lang::Class* com::tibbo::aggregate::common::device::AbstractDeviceDriver::getClass0()
{
    return class_();
}

