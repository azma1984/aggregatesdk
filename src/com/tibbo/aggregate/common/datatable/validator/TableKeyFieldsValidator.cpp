#include "datatable/validator/TableKeyFieldsValidator.h"

#include "datatable/DataTableQuery.h"

TableKeyFieldsValidator::TableKeyFieldsValidator()
{
    AbstractTableValidator();
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

void TableKeyFieldsValidator::validate(boost::shared_ptr<DataTable> table) // throws(ValidationException);
{
    std::list<boost::shared_ptr<DataRecord>> list = table->getrecords();
    for (std::list<boost::shared_ptr<DataRecord>> it = list.begin(); it != list.end(); ++it) {
        validate(table, *it);
    }
}

//TODO: DataTableQuery
void TableKeyFieldsValidator::validate(boost::shared_ptr<DataTable> table, boost::shared_ptr<DataRecord> record) // throws(ValidationException);
{
    std::list<std::string> keyFields = table->getFormat()->getKeyFields();

    if (keyFields.size() == 0) {
        return;
    }

//    boost::shared_ptr<DataTableQuery> query = new DataTableQuery();
//    List key = new LinkedList();

//    for (String keyField : keyFields){
//        Object value = record.getValue(keyField);
//        key.add(value);
//        query.addCondition(new QueryCondition(keyField, value));
//    }

//    boost::shared_ptr<DataRecord> rec = table->select(query);

//    if (rec != null && rec != record)
//    {
//      throw new ValidationException(MessageFormat.format(Cres.get().getString("dtKeyFieldViolation"), key, StringUtils.print(keyFields)));
//    }
}
