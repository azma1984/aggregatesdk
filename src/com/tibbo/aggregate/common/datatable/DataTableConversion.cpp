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

boost::shared_ptr<DataTable> DataTableConversion::beanToTable(AgObjectPtr bean, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields, bool ignoreErrors)
{
    return 0;
}

boost::shared_ptr<DataTable> DataTableConversion::beansToTable(std::list<AgObjectPtr> beans, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields)
{
    return 0;
}

AgObjectPtr DataTableConversion::beanFromTable(boost::shared_ptr<DataTable> table, boost::shared_ptr<AgClass> beanClass, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields)
{
    return 0;
}

std::list<AgObjectPtr> DataTableConversion::beansFromTable(boost::shared_ptr<DataTable> table, boost::shared_ptr<AgClass> beanClass, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields)
{
    return std::list<AgObjectPtr>();
}

AgObjectPtr DataTableConversion::beanFromRecord(boost::shared_ptr<DataRecord> rec, boost::shared_ptr<AgClass> beanClass, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields)
{
    return 0;
}

void DataTableConversion::populateBeanFromRecord(AgObjectPtr bean, boost::shared_ptr<DataRecord> rec, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields)
{
    populateBeanFromRecord(bean, rec, format, setReadOnlyFields, std::list<std::string>());
}

void DataTableConversion::populateBeanFromRecord(AgObjectPtr bean, boost::shared_ptr<DataRecord> rec, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields, std::list<std::string> fieldsToSkip)
{

}

boost::shared_ptr<TableFormat> DataTableConversion::getFormatFromDefaultValue(boost::shared_ptr<FieldFormat> ff)
{
    return 0;
}

AgObjectPtr DataTableConversion::convertValueToField(boost::shared_ptr<FieldFormat> ff, AgObjectPtr value, boost::shared_ptr<AgClass> requiredClass)
{
    return 0;
}

AgObjectPtr DataTableConversion::convertValueFromField(AgObjectPtr value)
{
    return 0;
}

AgObjectPtr DataTableConversion::convertValueFromField(AgObjectPtr value, boost::shared_ptr<AgClass> requiredClass)
{
    return 0;
}

AgObjectPtr DataTableConversion::convertValueToField(boost::shared_ptr<FieldFormat> ff, AgObjectPtr value)
{
    return 0;
}

void DataTableConversion::registerFormatConverter(boost::shared_ptr<FormatConverter> converter)
{
}

boost::shared_ptr<FormatConverter> DataTableConversion::getFormatConverter(boost::shared_ptr<AgClass> valueClass)
{
    return 0;
}

boost::shared_ptr<DataRecord> DataTableConversion::beanToRecord(AgObjectPtr bean, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields, bool ignoreErrors)
{
    return 0;
}

boost::shared_ptr<DataRecord> DataTableConversion::beanToRecord(AgObjectPtr bean, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields, bool ignoreErrors, const std::list<std::string> &fieldsToSkip)
{
    return 0;
}

boost::shared_ptr<FieldFormat> DataTableConversion::createFieldFormat(const std::string &name, AgObjectPtr value)
{
    return 0;
}

boost::shared_ptr<FieldFormat> DataTableConversion::createFieldFormat(const std::string &name, const std::string &valueClassName)
{
    return 0;
}

boost::shared_ptr<FieldFormat> DataTableConversion::createFieldFormat(const std::string &name, boost::shared_ptr<AgClass> valueClass)
{
    return 0;
}


boost::shared_ptr<FieldFormat> DataTableConversion::createTableField(const std::string &name, boost::shared_ptr<TableFormat> format)
{
    return 0;
}

boost::shared_ptr<FieldFormat> DataTableConversion::createTableField(const std::string &name, const std::string &description, boost::shared_ptr<TableFormat> format)
{
    return 0;
}

AgObjectPtr DataTableConversion::createAggreGateBean(AgObjectPtr value, boost::shared_ptr<AgClass> requiredClass)
{
    return 0;
}

AgObjectPtr DataTableConversion::createArray(boost::shared_ptr<FieldFormat> ff, AgObjectPtr value)
{
    return 0;
}

std::list<AgObjectPtr> DataTableConversion::createList(AgObjectPtr bean, boost::shared_ptr<DataRecord> rec, bool setReadOnlyFields, boost::shared_ptr<FieldFormat> ff)
{
    return std::list<AgObjectPtr>();
}

boost::shared_ptr<DataTable> DataTableConversion::convertList(AgObjectPtr bean, AgObjectPtr value, bool setReadOnlyFields, boost::shared_ptr<FieldFormat> ff)
{
    return 0;
}

boost::shared_ptr<DataTable> DataTableConversion::convertArray(boost::shared_ptr<FieldFormat> ff, AgObjectPtr value)
{
    return 0;
}
