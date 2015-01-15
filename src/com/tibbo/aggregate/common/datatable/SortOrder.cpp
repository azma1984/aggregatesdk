// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/SortOrder.java
#include <com/tibbo/aggregate/common/datatable/SortOrder.h"

//#include <java/lang/String.h"

com::tibbo::aggregate::common::datatable::SortOrder::SortOrder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::datatable::SortOrder::SortOrder(const std::string & field, bool ascending) 
    : SortOrder(*static_cast< ::default_init_tag* >(0))
{
    ctor(field,ascending);
}

void com::tibbo::aggregate::common::datatable::SortOrder::ctor(const std::string & field, bool ascending)
{
    super::ctor();
    this->field = field;
    this->ascending = ascending;
}

std::string com::tibbo::aggregate::common::datatable::SortOrder::getField()
{
    return field;
}

void com::tibbo::aggregate::common::datatable::SortOrder::setField(const std::string & field)
{
    this->field = field;
}

bool com::tibbo::aggregate::common::datatable::SortOrder::isAscending()
{
    return ascending;
}

void com::tibbo::aggregate::common::datatable::SortOrder::setAscending(bool ascending)
{
    this->ascending = ascending;
}



java::lang::Class* com::tibbo::aggregate::common::datatable::SortOrder::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.SortOrder", 46);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::datatable::SortOrder::getClass0()
{
    return class_();
}

