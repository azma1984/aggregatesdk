#include "datatable/AggreGateBean.h"


//AggreGateBean::AggreGateBean(const ::default_init_tag&)
//    : super(*static_cast< ::default_init_tag* >(0))
//{
//    
//}
//
AggreGateBean::AggreGateBean(boost::shared_ptr<TableFormat> format) 
{
//    this->format = format;
//    if(format != 0) {
//        try {
//            DataTableConversion::populateBeanFromRecord(this, new DataRecord(format), format, true);
//        } catch (DataTableException* ex) {
//            throw new ::java::lang::IllegalStateException(static_cast< ::java::lang::Throwable* >(ex));
//        }
//    }
}

AggreGateBean::AggreGateBean(boost::shared_ptr<TableFormat> format, boost::shared_ptr<DataRecord> data) 
{
   // ctor(format,data);
}
//
//void AggreGateBean::ctor(TableFormat* format)
//{

//}
//
//void AggreGateBean::ctor(TableFormat* format, DataRecord* data)
//{
//    super::ctor();
//    this->format = format;
//    try {
//        DataTableConversion::populateBeanFromRecord(this, data, format, true);
//    } catch (DataTableException* ex) {
//        throw new ::java::lang::IllegalStateException(static_cast< ::java::lang::Throwable* >(ex));
//    }
//}
//
//DataTable* AggreGateBean::toDataTable()
//{
//    try {
//        return DataTableConversion::beanToTable(this, format, true, true);
//    } catch (DataTableException* ex) {
//        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
//    }
//}
//
//DataRecord* AggreGateBean::toDataRecord()
//{
//    try {
//        return DataTableConversion::beanToRecord(this, format, true, true);
//    } catch (DataTableException* ex) {
//        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
//    }
//}
//
//TableFormat* AggreGateBean::getFormat()
//{
//    return format;
//}
//



