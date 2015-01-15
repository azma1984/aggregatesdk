// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/util/ThreadUtils.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
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
typedef ::SubArray< ::java::lang::StackTraceElement, ObjectArray, ::java::io::SerializableArray > StackTraceElementArray;
    } // lang
} // java



class com::tibbo::aggregate::common::util::ThreadUtils
    
{

public:
    typedef void super;

private:
    static TableFormat* FORMAT_STACK_;

public:
    static DataTable* createStackTraceTable(::java::lang::StackTraceElementArray* elements);

    // Generated
    ThreadUtils();
protected:
    ThreadUtils(const ::default_init_tag&);


public:
    
    static void 
    static TableFormat*& FORMAT_STACK();

private:
    ::java::lang::Class* getClass0();
};
