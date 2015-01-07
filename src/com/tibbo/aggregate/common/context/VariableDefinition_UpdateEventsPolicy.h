// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/VariableDefinition.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <java/io/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Enum.h"

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
    } // lang

    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, voidArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
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
typedef ::SubArray< ::com::tibbo::aggregate::common::context::VariableDefinition_UpdateEventsPolicy, ::java::lang::EnumArray > VariableDefinition_UpdateEventsPolicyArray;
                } // context
            } // common
        } // aggregate
    } // tibbo
} // com



class com::tibbo::aggregate::common::context::VariableDefinition_UpdateEventsPolicy final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static VariableDefinition_UpdateEventsPolicy *NONE;
    static VariableDefinition_UpdateEventsPolicy *TRANSIENT;
    static VariableDefinition_UpdateEventsPolicy *PERSISTENT;

    // Generated

public:
    VariableDefinition_UpdateEventsPolicy(std::string* name, int ordinal);
protected:
    VariableDefinition_UpdateEventsPolicy(const ::default_init_tag&);


public:
    
    static VariableDefinition_UpdateEventsPolicy* valueOf(std::string* a0);
    static VariableDefinition_UpdateEventsPolicyArray* values();

private:
    ::java::lang::Class* getClass0();
    friend class VariableDefinition;
};
