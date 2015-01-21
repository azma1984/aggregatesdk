// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/SortOrder.java
#include <com/tibbo/aggregate/common/datatable/SortOrder.h"

//#include <java/lang/String.h"

DateSortOrder::SortOrder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

DateSortOrder::SortOrder(const std::string & field, bool ascending) 
    : SortOrder(*static_cast< ::default_init_tag* >(0))
{
    ctor(field,ascending);
}

void DateSortOrder::ctor(const std::string & field, bool ascending)
{
    super::ctor();
    this->field = field;
    this->ascending = ascending;
}

std::string DateSortOrder::getField()
{
    return field;
}

void DateSortOrder::setField(const std::string & field)
{
    this->field = field;
}

bool DateSortOrder::isAscending()
{
    return ascending;
}

void DateSortOrder::setAscending(bool ascending)
{
    this->ascending = ascending;
}



java::lang::Class* DateSortOrder::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.SortOrder", 46);
    return c;
}

java::lang::Class* DateSortOrder::getClass0()
{
    return class_();
}

