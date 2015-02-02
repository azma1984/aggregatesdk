#include "datatable/validator/KeyFieldsValidator.h"
#include "datatable/TableFormat.h"
#include "datatable/DataTable.h"
#include "datatable/DataRecord.h"
#include "datatable/DataTableQuery.h"
#include "datatable/ValidationException.h"
#include "Cres.h"

KeyFieldsValidator::KeyFieldsValidator()
{
}

KeyFieldsValidator::KeyFieldsValidator(const std::string &source)
{
}

std::string KeyFieldsValidator::encode()
{
    return "";
}

char KeyFieldsValidator::getType()
{
    return TableFormat::RECORD_VALIDATOR_KEY_FIELDS;
}

void KeyFieldsValidator::validate(DataTablePtr table, DataRecordPtr record)
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
        QueryConditionPtr queryCondition = QueryConditionPtr(new QueryCondition(*it, value));
        query->addCondition(queryCondition);
    }

    DataRecordPtr rec = table->select(query);

    if (rec.get() != NULL && rec.get() != record.get())
    {
        throw new ValidationException(Cres::get()->getString("dtKeyFieldViolation"));
    }
}
