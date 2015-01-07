// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/DataTableUtils.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
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
                namespace datatable
                {
typedef ::SubArray< ::com::tibbo::aggregate::common::datatable::DataTableUtils_FilterMode, ::java::lang::EnumArray > DataTableUtils_FilterModeArray;
                } // datatable
            } // common
        } // aggregate
    } // tibbo
} // com



class com::tibbo::aggregate::common::datatable::DataTableUtils_FilterMode final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static DataTableUtils_FilterMode *TEXT;
    static DataTableUtils_FilterMode *REGEXP;
    static DataTableUtils_FilterMode *EXPRESSION;

    // Generated

public:
    DataTableUtils_FilterMode(std::string* name, int ordinal);
protected:
    DataTableUtils_FilterMode(const ::default_init_tag&);


public:
    
    static DataTableUtils_FilterMode* valueOf(std::string* a0);
    static DataTableUtils_FilterModeArray* values();

private:
    ::java::lang::Class* getClass0();
    friend class DataTableUtils;
    friend class DataTableUtils_createEvaluator_1;
};
