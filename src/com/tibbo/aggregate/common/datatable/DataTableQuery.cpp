// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/DataTableQuery.java
#include <com/tibbo/aggregate/common/datatable/DataTableQuery.h"

#include <com/tibbo/aggregate/common/datatable/QueryCondition.h"
//#include <java/lang/ArrayStoreException.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/util/Arrays.h"
//#include <java/util/Collection.h"
//#include <java/util/Iterator.h"
//#include <java/util/LinkedList.h"
//#include <java/util/List.h"
#include <SubArray.h"
#include <ObjectArray.h"

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

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(0);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::datatable::DataTableQuery::DataTableQuery(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::datatable::DataTableQuery::DataTableQuery(QueryConditionArray*/*...*/ conditions) 
    : DataTableQuery(*static_cast< ::default_init_tag* >(0))
{
    ctor(conditions);
}

void com::tibbo::aggregate::common::datatable::DataTableQuery::init()
{
    conditions = new ::java::util::LinkedList();
}

void com::tibbo::aggregate::common::datatable::DataTableQuery::ctor(QueryConditionArray*/*...*/ conditions)
{
    super::ctor();
    init();
    java_cast< std::list  >(this->conditions))->addAll(static_cast< ::java::util::Collection* >(::java::util::Arrays::asList(conditions)));
}

java::util::List* com::tibbo::aggregate::common::datatable::DataTableQuery::getConditions()
{
    return conditions;
}

void com::tibbo::aggregate::common::datatable::DataTableQuery::addCondition(QueryCondition* condition)
{
    conditions)->add(condition));
}

java::util::Iterator* com::tibbo::aggregate::common::datatable::DataTableQuery::iterator()
{
    return conditions)->iterator();
}



java::lang::Class* com::tibbo::aggregate::common::datatable::DataTableQuery::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.DataTableQuery", 51);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::datatable::DataTableQuery::getClass0()
{
    return class_();
}

