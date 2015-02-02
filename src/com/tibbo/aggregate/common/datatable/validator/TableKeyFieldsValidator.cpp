#include "datatable/validator/TableKeyFieldsValidator.h"
#include "datatable/DataTableQuery.h"
#include "datatable/TableFormat.h"
#include "datatable/DataTable.h"
#include "datatable/DataRecord.h"
#include "datatable/ValidationException.h"

TableKeyFieldsValidator::TableKeyFieldsValidator()
{
}

TableKeyFieldsValidator::TableKeyFieldsValidator(const std::string& source)
{

}

std::string TableKeyFieldsValidator::encode()
{
    return "";
}

char TableKeyFieldsValidator::getType()
{
    return TableFormat::TABLE_VALIDATOR_KEY_FIELDS;
}

void TableKeyFieldsValidator::validate(DataTablePtr table)
{
    for (std::list<DataRecordPtr>::iterator it = table->iteratorBegin(); it != table->iteratorEnd(); ++it)
    {
        validate(table, *it);
    }
}

void TableKeyFieldsValidator::validate(DataTablePtr table, DataRecordPtr record)
{
    std::list<std::string> keyFields = table->getFormat()->getKeyFields();

    if (keyFields.size() == 0)
    {
        return;
    }

    DataTableQueryPtr query = DataTableQueryPtr(new DataTableQuery());
    std::list<AgObjectPtr> key;

    for (std::list<std::string>::iterator it = keyFields.begin(); it != keyFields.end(); ++it)
    {
        AgObjectPtr value = record->getValue(*it);
        key.push_back(value);
        query->addCondition(QueryConditionPtr(new QueryCondition(*it, value)));
    }

    DataRecordPtr rec = table->select(query);

    if (rec.get() != NULL && rec.get() != record.get())
    {
        throw ValidationException("dtKeyFieldViolation, TableKeyFieldsValidator::validate()");
    }
}
