#pragma once

#include <list>

#include "datatable/converter/FormatConverter.h"
#include "util/Pointers.h"

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

    boost::shared_ptr<DataTable> beanToTable(AgObjectPtr bean, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields = true, bool ignoreErrors = false);
    boost::shared_ptr<DataTable> beansToTable(std::list<AgObjectPtr> beans, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields = true);

    AgObjectPtr beanFromTable(boost::shared_ptr<DataTable> table, boost::shared_ptr<AgClass> beanClass, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields = true);
    std::list<AgObjectPtr> beansFromTable(boost::shared_ptr<DataTable> table, boost::shared_ptr<AgClass> beanClass, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields = true);

    AgObjectPtr beanFromRecord(boost::shared_ptr<DataRecord> rec, boost::shared_ptr<AgClass> beanClass, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields);

    void populateBeanFromRecord(AgObjectPtr bean, boost::shared_ptr<DataRecord> rec, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields);
    void populateBeanFromRecord(AgObjectPtr bean, boost::shared_ptr<DataRecord> rec, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields, std::list<std::string> fieldsToSkip);

    boost::shared_ptr<DataRecord> beanToRecord(AgObjectPtr bean, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields, bool ignoreErrors);
    boost::shared_ptr<DataRecord> beanToRecord(AgObjectPtr bean, boost::shared_ptr<TableFormat> format, bool setReadOnlyFields, bool ignoreErrors, const std::list<std::string> &fieldsToSkip);

    AgObjectPtr convertValueToField(boost::shared_ptr<FieldFormat> ff, AgObjectPtr value, boost::shared_ptr<AgClass> requiredClass);
    AgObjectPtr convertValueFromField(AgObjectPtr value);
    AgObjectPtr convertValueFromField(AgObjectPtr value, boost::shared_ptr<AgClass> requiredClass);
    AgObjectPtr convertValueToField(boost::shared_ptr<FieldFormat> ff, AgObjectPtr value);

    void registerFormatConverter(boost::shared_ptr<FormatConverter> converter);
    boost::shared_ptr<FormatConverter> getFormatConverter(boost::shared_ptr<AgClass> valueClass);

    boost::shared_ptr<FieldFormat> createFieldFormat(const std::string &name, AgObjectPtr value);
    boost::shared_ptr<FieldFormat> createFieldFormat(const std::string &name, const std::string &valueClassName);
    boost::shared_ptr<FieldFormat> createFieldFormat(const std::string &name, boost::shared_ptr<AgClass> valueClass);

    boost::shared_ptr<FieldFormat> createTableField(const std::string & name, boost::shared_ptr<TableFormat> format);
    boost::shared_ptr<FieldFormat> createTableField(const std::string & name, const std::string &description, boost::shared_ptr<TableFormat> format);

    AgObjectPtr createAggreGateBean(AgObjectPtr value, boost::shared_ptr<AgClass> requiredClass);

private:
    boost::shared_ptr<TableFormat> getFormatFromDefaultValue(boost::shared_ptr<FieldFormat> ff);
    AgObjectPtr createArray(boost::shared_ptr<FieldFormat> ff, AgObjectPtr value);
    std::list<AgObjectPtr> createList(AgObjectPtr bean, boost::shared_ptr<DataRecord> rec, bool setReadOnlyFields, boost::shared_ptr<FieldFormat> ff);
    boost::shared_ptr<DataTable> convertList(AgObjectPtr bean, AgObjectPtr value, bool setReadOnlyFields, boost::shared_ptr<FieldFormat> ff);
    boost::shared_ptr<DataTable> convertArray(boost::shared_ptr<FieldFormat> ff, AgObjectPtr value);
};
