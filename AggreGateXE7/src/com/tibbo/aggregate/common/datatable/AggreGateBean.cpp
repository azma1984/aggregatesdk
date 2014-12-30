// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/AggreGateBean.java
#include "AggreGateBean.h"
/*

com::tibbo::aggregate::common::datatable::AggreGateBean::AggreGateBean(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::datatable::AggreGateBean::AggreGateBean(TableFormat* format) 
    : AggreGateBean(*static_cast< ::default_init_tag* >(0))
{
    ctor(format);
}

com::tibbo::aggregate::common::datatable::AggreGateBean::AggreGateBean(TableFormat* format, DataRecord* data) 
    : AggreGateBean(*static_cast< ::default_init_tag* >(0))
{
    ctor(format,data);
}

void com::tibbo::aggregate::common::datatable::AggreGateBean::ctor(TableFormat* format)
{
    super::ctor();
    this->format = format;
    if(format != 0) {
        try {
            DataTableConversion::populateBeanFromRecord(this, new DataRecord(format), format, true);
        } catch (DataTableException* ex) {
            throw new ::java::lang::IllegalStateException(static_cast< ::java::lang::Throwable* >(ex));
        }
    }
}

void com::tibbo::aggregate::common::datatable::AggreGateBean::ctor(TableFormat* format, DataRecord* data)
{
    super::ctor();
    this->format = format;
    try {
        DataTableConversion::populateBeanFromRecord(this, data, format, true);
    } catch (DataTableException* ex) {
        throw new ::java::lang::IllegalStateException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::datatable::AggreGateBean::toDataTable()
{
    try {
        return DataTableConversion::beanToTable(this, format, true, true);
    } catch (DataTableException* ex) {
        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
    }
}

com::tibbo::aggregate::common::datatable::DataRecord* com::tibbo::aggregate::common::datatable::AggreGateBean::toDataRecord()
{
    try {
        return DataTableConversion::beanToRecord(this, format, true, true);
    } catch (DataTableException* ex) {
        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
    }
}

com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::datatable::AggreGateBean::getFormat()
{
    return format;
}



java::lang::Class* com::tibbo::aggregate::common::datatable::AggreGateBean::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.AggreGateBean", 50);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::datatable::AggreGateBean::getClass0()
{
    return class_();
}
  */
