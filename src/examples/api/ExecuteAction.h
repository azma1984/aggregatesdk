// Generated from /aggregate_sdk_5.11.00/src/examples/api/ExecuteAction.java

#ifndef H
#define H

//#include "action/fwd-aggregate_sdk_5.11.00.h"
//#include "context/fwd-aggregate_sdk_5.11.00.h"
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



class examples::api::ExecuteAction
    
{

public:
    typedef void super;
    static void main(std::stringArray* args);

private:
    static void executeDiscoveryAction(ContextManagerPtr cm) ;
    static ::com::tibbo::aggregate::common::action::GenericActionResponsePtr processCommand(::com::tibbo::aggregate::common::action::GenericActionCommandPtr cmd);

    // Generated

public:
    ExecuteAction();
protected:
    ExecuteAction(const ::default_init_tag&);


public:
    

private:
    AgClassPtr getClass0();
};
