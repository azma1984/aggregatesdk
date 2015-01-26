#include "datatable/DataTableConversion.h"


void DataTableConversion::registerFormatConverter(boost::shared_ptr<FormatConverter> converter)
{
}

boost::shared_ptr<DataRecord> DataTableConversion::beanToRecord(boost::shared_ptr<AgObject> bean, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields, bool ignoreErrors)
{
    return 0;
}

boost::shared_ptr<DataRecord> DataTableConversion::beanToRecord(boost::shared_ptr<AgObject> bean, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields, bool ignoreErrors, const std::list<std::string> &fieldsToSkip)
{
    return 0;
}

boost::shared_ptr<FieldFormat> DataTableConversion::createTableField(const std::string & name, boost::shared_ptr<TableFormat> format)
{
    return 0;
}
