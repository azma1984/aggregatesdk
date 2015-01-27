#include "datatable/DataTableConversion.h"


DataTableConversion::DataTableConversion()
{
    /*registerFormatConverter(new FCByte());
    registerFormatConverter(new FCDouble());
    registerFormatConverter(new FCShort());
    registerFormatConverter(new FCSimpleBoolean());
    registerFormatConverter(new FCSimpleByte());
    registerFormatConverter(new FCSimpleDouble());
    registerFormatConverter(new FCSimpleFloat());
    registerFormatConverter(new FCSimpleInteger());
    registerFormatConverter(new FCSimpleLong());
    registerFormatConverter(new FCSimpleShort());
    registerFormatConverter(new FCNumber());
    registerFormatConverter(new FCComparable());

    registerFormatConverter(new FCBigDecimal());
    registerFormatConverter(new FCBigInteger());*/
}

boost::shared_ptr<DataTable> DataTableConversion::beanToTable(boost::shared_ptr<AgObject> bean, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields, bool ignoreErrors)
{
    return 0;
}

boost::shared_ptr<DataTable> DataTableConversion::beansToTable(std::list<boost::shared_ptr<AgObject>> beans, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields)
{
    return 0;
}

boost::shared_ptr<AgObject> DataTableConversion::beanFromTable(boost::shared_ptr<DataTable> table, boost::shared_ptr<AgClass> beanClass, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields)
{
    return 0;
}

std::list<boost::shared_ptr<AgObject>> DataTableConversion::beansFromTable(boost::shared_ptr<DataTable> table, boost::shared_ptr<AgClass> beanClass, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields)
{
    return std::list<boost::shared_ptr<AgObject>>();
}

boost::shared_ptr<AgObject> DataTableConversion::beanFromRecord(boost::shared_ptr<DataRecord> rec, boost::shared_ptr<AgClass> beanClass, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields)
{
    return 0;
}

void DataTableConversion::populateBeanFromRecord(boost::shared_ptr<AgObject> bean, boost::shared_ptr<DataRecord> rec, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields)
{
    populateBeanFromRecord(bean, rec, format, setReadOnlyFields, std::list<std::string>());
}

void DataTableConversion::populateBeanFromRecord(boost::shared_ptr<AgObject> bean, boost::shared_ptr<DataRecord> rec, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields, std::list<std::string> fieldsToSkip)
{

}

boost::shared_ptr<TableFormat> DataTableConversion::getFormatFromDefaultValue(boost::shared_ptr<FieldFormat> ff)
{
    return 0;
}

boost::shared_ptr<AgObject> DataTableConversion::convertValueToField(boost::shared_ptr<FieldFormat> ff, boost::shared_ptr<AgObject> value, boost::shared_ptr<AgClass> requiredClass)
{
    return 0;
}

boost::shared_ptr<AgObject> DataTableConversion::convertValueFromField(boost::shared_ptr<AgObject> value)
{
    return 0;
}






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
