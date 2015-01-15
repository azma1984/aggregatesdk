// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/DataTableUtils.java
#include <com/tibbo/aggregate/common/datatable/DataTableUtils_FilterMode.h"

//#include <java/io/Serializable.h"
//#include <java/lang/ArrayStoreException.h"
//#include <java/lang/Comparable.h"
//#include <java/lang/Enum.h"
//#include <java/lang/IllegalArgumentException.h"
//#include <java/lang/String.h"
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
                namespace datatable
                {
typedef ::SubArray< DataTableUtils_FilterMode, ::java::lang::EnumArray > DataTableUtils_FilterModeArray;
                } // datatable
            } // common
        } // aggregate
    } // tibbo
} // com

com::tibbo::aggregate::common::datatable::DataTableUtils_FilterMode::DataTableUtils_FilterMode(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::datatable::DataTableUtils_FilterMode::DataTableUtils_FilterMode(const std::string & name, int ordinal)
    : DataTableUtils_FilterMode(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

com::tibbo::aggregate::common::datatable::DataTableUtils_FilterMode* com::tibbo::aggregate::common::datatable::DataTableUtils_FilterMode::TEXT = new DataTableUtils_FilterMode(u"TEXT"_j, 0);
com::tibbo::aggregate::common::datatable::DataTableUtils_FilterMode* com::tibbo::aggregate::common::datatable::DataTableUtils_FilterMode::REGEXP = new DataTableUtils_FilterMode(u"REGEXP"_j, 1);
com::tibbo::aggregate::common::datatable::DataTableUtils_FilterMode* com::tibbo::aggregate::common::datatable::DataTableUtils_FilterMode::EXPRESSION = new DataTableUtils_FilterMode(u"EXPRESSION"_j, 2);


java::lang::Class* com::tibbo::aggregate::common::datatable::DataTableUtils_FilterMode::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.DataTableUtils.FilterMode", 62);
    return c;
}

com::tibbo::aggregate::common::datatable::DataTableUtils_FilterMode* com::tibbo::aggregate::common::datatable::DataTableUtils_FilterMode::valueOf(const std::string & a0)
{
    if(EXPRESSION->toString()->equals(a0))
        return EXPRESSION;
    if(REGEXP->toString()->equals(a0))
        return REGEXP;
    if(TEXT->toString()->equals(a0))
        return TEXT;
    throw new ::java::lang::IllegalArgumentException(a0);
}

com::tibbo::aggregate::common::datatable::DataTableUtils_FilterModeArray* com::tibbo::aggregate::common::datatable::DataTableUtils_FilterMode::values()
{
    return new com::tibbo::aggregate::common::datatable::DataTableUtils_FilterModeArray({
        EXPRESSION,
        REGEXP,
        TEXT,
    });
}

java::lang::Class* com::tibbo::aggregate::common::datatable::DataTableUtils_FilterMode::getClass0()
{
    return class_();
}

