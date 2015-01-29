#ifndef _KeyFieldsValidator_H_
#define _KeyFieldsValidator_H_

#include "datatable/validator/AbstractRecordValidator.h"
#include "datatable/DataTableQuery.h"

class KeyFieldsValidator : public AbstractRecordValidator
{
public:
    virtual std::string encode() {
        return "";
    }

    virtual char getType() {
        return TableFormat::RECORD_VALIDATOR_KEY_FIELDS;
    }

    //TODO:
    virtual void validate(boost::shared_ptr<DataTable> table, boost::shared_ptr<DataRecord> record) { /* throws(ValidationException) */
        std::list<std::string> keyFields = table->getFormat()->getKeyFields();

        if (keyFields.size() == 0) {
            return;
        }
        /*
        DataTableQuery* query = new DataTableQuery();
        List key = new LinkedList();

        for (String keyField : keyFields) {
          Object value = record.getValue(keyField);
          key.add(value);
          query.addCondition(new QueryCondition(keyField, value));
        }

        DataRecord* rec = table->select(query);
        if (rec != null && rec != record) {
          throw new ValidationException(MessageFormat.format(Cres::get()->getString("dtKeyFieldViolation"), key, StringUtils.print(keyFields)));
        }
        */
    }

    KeyFieldsValidator() {

    }

    KeyFieldsValidator(const std::string& source) {

    }
};
#endif  //_KeyFieldsValidator_H_
