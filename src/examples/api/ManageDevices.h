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
    static void executeDeviceOperation(Context* deviceContext) ;
    static void listenerForDeviceEvents(Context* deviceContext);
    static void changeDeviceSettings(Context* deviceContext) ;
    static void deleteDeviceAccount(Context* deviceContext) ;
    static void listDeviceSettings(Context* deviceContext) ;
    static void awaitDeviceSynchronization(Context* deviceContext) /* throws(ContextException, InterruptedException) */;
    static Context* createDeviceAccount(const std::string & username, const std::string & name, const std::string & description, const std::string & driverId, ContextManager* cm) ;
    static void listDeviceAccounts(const std::string & username, ContextManager* cm) ;

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
