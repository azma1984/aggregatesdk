#include "datatable/AggreGateBean.h"
#include "datatable/DataTableConversion.h"
#include "datatable/DataRecord.h"

AggreGateBean::AggreGateBean(TableFormatPtr format)
{
    this->format = format;
    DataTableConversion::instance().populateBeanFromRecord(shared_from_this(), DataRecordPtr(new DataRecord(format)), format, true);
}

AggreGateBean::AggreGateBean(TableFormatPtr format, DataRecordPtr data)
{
    this->format = format;
    DataTableConversion::instance().populateBeanFromRecord(shared_from_this(), data, format, true);

}

DataTablePtr AggreGateBean::toDataTable()
{
    return DataTableConversion::instance().beanToTable(shared_from_this(), format, true, true);
}

DataRecordPtr AggreGateBean::toDataRecord()
{
    return DataTableConversion::instance().beanToRecord(shared_from_this(), format, true, true);
}

TableFormatPtr AggreGateBean::getFormat()
{
    return format;
}




