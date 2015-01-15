// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/VariableDefinition.java
#include <com/tibbo/aggregate/common/context/VariableDefinition_UpdateEventsPolicy.h"

////#include <java/io/Serializable.h"
////#include <java/lang/ArrayStoreException.h"
////#include <java/lang/Comparable.h"
////#include <java/lang/Enum.h"
////#include <java/lang/IllegalArgumentException.h"
////#include <java/lang/String.h"
#include <SubArray.h"
#include <ObjectArray.h"

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

com::tibbo::aggregate::common::context::VariableDefinition_UpdateEventsPolicy::VariableDefinition_UpdateEventsPolicy(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::context::VariableDefinition_UpdateEventsPolicy::VariableDefinition_UpdateEventsPolicy(const std::string & name, int ordinal)
    : VariableDefinition_UpdateEventsPolicy(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

com::tibbo::aggregate::common::context::VariableDefinition_UpdateEventsPolicy* com::tibbo::aggregate::common::context::VariableDefinition_UpdateEventsPolicy::NONE = new ::com::tibbo::aggregate::common::context::VariableDefinition_UpdateEventsPolicy(u"NONE"_j, 0);
com::tibbo::aggregate::common::context::VariableDefinition_UpdateEventsPolicy* com::tibbo::aggregate::common::context::VariableDefinition_UpdateEventsPolicy::TRANSIENT = new ::com::tibbo::aggregate::common::context::VariableDefinition_UpdateEventsPolicy(u"TRANSIENT"_j, 1);
com::tibbo::aggregate::common::context::VariableDefinition_UpdateEventsPolicy* com::tibbo::aggregate::common::context::VariableDefinition_UpdateEventsPolicy::PERSISTENT = new ::com::tibbo::aggregate::common::context::VariableDefinition_UpdateEventsPolicy(u"PERSISTENT"_j, 2);


java::lang::Class* com::tibbo::aggregate::common::context::VariableDefinition_UpdateEventsPolicy::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.context.VariableDefinition.UpdateEventsPolicy", 72);
    return c;
}

com::tibbo::aggregate::common::context::VariableDefinition_UpdateEventsPolicy* com::tibbo::aggregate::common::context::VariableDefinition_UpdateEventsPolicy::valueOf(const std::string & a0)
{
    if(NONE->toString()->equals(a0))
        return NONE;
    if(PERSISTENT->toString()->equals(a0))
        return PERSISTENT;
    if(TRANSIENT->toString()->equals(a0))
        return TRANSIENT;
    throw new ::java::lang::IllegalArgumentException(a0);
}

com::tibbo::aggregate::common::context::VariableDefinition_UpdateEventsPolicyArray* com::tibbo::aggregate::common::context::VariableDefinition_UpdateEventsPolicy::values()
{
    return new com::tibbo::aggregate::common::context::VariableDefinition_UpdateEventsPolicyArray({
        NONE,
        PERSISTENT,
        TRANSIENT,
    });
}

java::lang::Class* com::tibbo::aggregate::common::context::VariableDefinition_UpdateEventsPolicy::getClass0()
{
    return class_();
}

