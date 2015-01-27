#pragma once

#include <list>

#include "datatable/converter/FormatConverter.h"

class DataTable;

class DataTableConversion
{
private:
    std::list<boost::shared_ptr<FormatConverter>>  FORMAT_CONVERTERS;
    DataTableConversion();

public:
    static DataTableConversion &instance()
    {
        static DataTableConversion dataTableConversion;
        return dataTableConversion;
    }

    boost::shared_ptr<DataTable> beanToTable(boost::shared_ptr<AgObject> bean, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields = true, bool ignoreErrors = false);
    boost::shared_ptr<DataTable> beansToTable(std::list<boost::shared_ptr<AgObject>> beans, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields = true);

    boost::shared_ptr<AgObject> beanFromTable(boost::shared_ptr<DataTable> table, boost::shared_ptr<AgClass> beanClass, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields = true);
    std::list<boost::shared_ptr<AgObject>> beansFromTable(boost::shared_ptr<DataTable> table, boost::shared_ptr<AgClass> beanClass, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields = true);

    boost::shared_ptr<AgObject> beanFromRecord(boost::shared_ptr<DataRecord> rec, boost::shared_ptr<AgClass> beanClass, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields);

    void populateBeanFromRecord(boost::shared_ptr<AgObject> bean, boost::shared_ptr<DataRecord> rec, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields);
    void populateBeanFromRecord(boost::shared_ptr<AgObject> bean, boost::shared_ptr<DataRecord> rec, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields, std::list<std::string> fieldsToSkip);

    boost::shared_ptr<DataRecord> beanToRecord(boost::shared_ptr<AgObject> bean, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields, bool ignoreErrors);
    boost::shared_ptr<DataRecord> beanToRecord(boost::shared_ptr<AgObject> bean, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields, bool ignoreErrors, const std::list<std::string> &fieldsToSkip);

    boost::shared_ptr<AgObject> convertValueToField(boost::shared_ptr<FieldFormat> ff, boost::shared_ptr<AgObject> value, boost::shared_ptr<AgClass> requiredClass);
    boost::shared_ptr<AgObject> convertValueFromField(boost::shared_ptr<AgObject> value);



    void registerFormatConverter(boost::shared_ptr<FormatConverter> converter);
    boost::shared_ptr<FieldFormat> createTableField(const std::string & name, boost::shared_ptr<TableFormat> format);

private:
    boost::shared_ptr<TableFormat> getFormatFromDefaultValue(boost::shared_ptr<FieldFormat> ff);

};
