// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/DataTableQuery.java

#pragma once

#include "datatable/fwd-aggregate_sdk_5.11.00.h"


template<typename ComponentType, typename... Bases> struct SubArray;
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
typedef ::SubArray< QueryCondition, voidArray > QueryConditionArray;
                } // datatable
            } // common
        } // aggregate
    } // tibbo
} // com



class DateDataTableQuery
    
    , public ::java::lang::Iterable
{

public:
    typedef void super;

private:
    std::list  conditions;
protected:
    void ctor(QueryConditionArray*/*...*/ conditions);

public:
    std::list  getConditions();
    void addCondition(QueryCondition* condition);
    ::java::util::Iterator* iterator();

    // Generated
    DataTableQuery(QueryConditionArray* conditions);
protected:
    DataTableQuery(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
};
