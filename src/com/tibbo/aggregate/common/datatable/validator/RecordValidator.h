#ifndef _RECORD_VALIDATOR_H_
#define _RECORD_VALIDATOR_H_

#include "util/Cloneable.h"
#include "util/Interface.h"
#include "datatable/DataTable.h"
#include "datatable/DataRecord.h"
#include <string>


class RecordValidator : public Interface, public Cloneable
{
public:
    virtual std::string /*Character* */ getType();
    virtual std::string encode();
    virtual void validate(DataTable* table, DataRecord* record); /* throws(ValidationException) */
};
#endif 