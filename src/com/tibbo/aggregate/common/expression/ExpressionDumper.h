// Generated from /aggregate_sdk_5.11.00/test/com/tibbo/aggregate/common/expression/ExpressionDumper.java

#pragma once

//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
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



class com::tibbo::aggregate::common::expression::ExpressionDumper
    
{

public:
    typedef void super;
    static void main(std::stringArray* args);

    // Generated
    ExpressionDumper();
protected:
    ExpressionDumper(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
