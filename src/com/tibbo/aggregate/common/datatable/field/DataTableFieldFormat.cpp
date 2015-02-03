#include "datatable/field/DataTableFieldFormat.h"
#include "datatable/DataTable.h"
#include "datatable/TableFormat.h"
#include "datatable/DataTableReplication.h"
#include "datatable/encoding/ClassicEncodingSettings.h"
#include "AggreGateException.h"

DataTableFieldFormat::DataTableFieldFormat(const std::string &name) : FieldFormat(name)
{
    setTransferEncode(true);

    AgObjectPtr obj = getDefaultValue();
    DataTable *dataTable = dynamic_cast<DataTable *>(obj.get());
    assert(dataTable);
    fieldValidator = FieldValidatorPtr(new LocalFieldValidator(dataTable));
    addValidator(fieldValidator);
}

char DataTableFieldFormat::getType()
{
    return FieldFormat::DATATABLE_FIELD;
}

const type_info &DataTableFieldFormat::getFieldClass()
{
    return typeid(DataTable);
}

const type_info &DataTableFieldFormat::getFieldWrappedClass()
{
    return typeid(DataTable);
}

AgObjectPtr DataTableFieldFormat::getNotNullDefault()
{
    return AgObjectPtr(new DataTable());
}

AgObjectPtr DataTableFieldFormat::valueFromString(const std::string &value, ClassicEncodingSettingsPtr settings, bool validate)
{
    try
    {
        AgObjectPtr obj = getDefaultValue();
        DataTable *defaultValue = dynamic_cast<DataTable *>(obj.get());
        assert(defaultValue);
        bool tempEncodeFieldNames = false;
        TableFormatPtr oldFormat;

        if (settings.get() != NULL)
        {
            oldFormat = settings->getFormat();
            if (defaultValue != NULL)
            {
                settings->setFormat(defaultValue->getFormat());
            }
            tempEncodeFieldNames = settings->isEncodeFieldNames();
        }
        else
        {
            settings = ClassicEncodingSettingsPtr(new ClassicEncodingSettings(false));
            tempEncodeFieldNames = false;
        }

        DataTablePtr res = DataTablePtr(new DataTable(value, settings, validate));

        if (defaultValue != NULL && defaultValue->getFieldCount() > 0 && !res->getFormat()->extend(defaultValue->getFormat()))
        {
            DataTablePtr newRes = DataTablePtr(defaultValue->clone());
            DataTableReplication::copy(*res, newRes, true, true, true);
            res = newRes;
        }

        // todo need check try/finally from java
        if (validate)
        {
            res->validate();
        }

        if (settings.get() != NULL)
        {
            settings->setFormat(oldFormat);
            if (tempEncodeFieldNames)
            {
                settings->setEncodeFieldNames(tempEncodeFieldNames);
            }
        }

        return res;

    }
    catch (...)
    {
        throw AggreGateException("Error constructing value of field, DataTableFieldFormat::valueFromString()");
    }
}

std::string DataTableFieldFormat::valueToString(AgObjectPtr value, ClassicEncodingSettingsPtr settings)
{
    if (value.get() == NULL)
    {
        return "";
    }
    DataTable *dt = dynamic_cast<DataTable *>(value.get());
    assert(dt);

    return dt->encode(settings);
}

std::string DataTableFieldFormat::encodeEditorOptions(bool showTableData)
{
    return showTableData ? "1" : "0";
}

AgObjectPtr DataTableFieldFormat::LocalFieldValidator::validate(AgObjectPtr value)
{
    if (def == NULL || def->getFieldCount() == 0)
    {
        return value;
    }

    DataTable *dt = dynamic_cast<DataTable *>(value.get());
    if (dt == NULL)
    {
        return value;
    }
    std::string msg = dt->getFormat()->extendMessage(def->getFormat());
    if (msg.length() != NULL)
    {
        DataTablePtr newValue = DataTablePtr(def->clone());
        DataTableReplication::copy(*dt, newValue, true, true, true);
        return newValue;
    }

    return value;
}

