// Generated from /aggregate_sdk_5.11.00/src/examples/api/ManageDevices.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <examples/api/fwd-aggregate_sdk_5.11.00.h"
//#include <java/io/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, voidArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< std::string, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java



class examples::api::ManageDevices
    
{

public:
    typedef void super;
    static void main(std::stringArray* args);

private:
    static void executeDeviceOperation(::com::tibbo::aggregate::common::context::Context* deviceContext) /* throws(ContextException) */;
    static void listenerForDeviceEvents(::com::tibbo::aggregate::common::context::Context* deviceContext);
    static void changeDeviceSettings(::com::tibbo::aggregate::common::context::Context* deviceContext) /* throws(ContextException) */;
    static void deleteDeviceAccount(::com::tibbo::aggregate::common::context::Context* deviceContext) /* throws(ContextException) */;
    static void listDeviceSettings(::com::tibbo::aggregate::common::context::Context* deviceContext) /* throws(ContextException) */;
    static void awaitDeviceSynchronization(::com::tibbo::aggregate::common::context::Context* deviceContext) /* throws(ContextException, InterruptedException) */;
    static ::com::tibbo::aggregate::common::context::Context* createDeviceAccount(std::string* username, std::string* name, std::string* description, std::string* driverId, ::com::tibbo::aggregate::common::context::ContextManager* cm) /* throws(ContextException) */;
    static void listDeviceAccounts(std::string* username, ::com::tibbo::aggregate::common::context::ContextManager* cm) /* throws(ContextException) */;

    // Generated

public:
    ManageDevices();
protected:
    ManageDevices(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
    friend class ManageDevices_listenerForDeviceEvents_1;
    friend class ManageDevices_awaitDeviceSynchronization_2;
};
