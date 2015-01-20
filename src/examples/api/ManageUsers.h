// Generated from /aggregate_sdk_5.11.00/src/examples/api/ManageUsers.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <examples/api/fwd-aggregate_sdk_5.11.00.h"
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



class examples::api::ManageUsers
    
{

public:
    typedef void super;
    static void main(std::stringArray* args);

private:
    static void createEditDeleteUser(ContextManager* cm) ;
    static void listUserAccounts(ContextManager* cm) ;

    // Generated

public:
    ManageUsers();
protected:
    ManageUsers(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
