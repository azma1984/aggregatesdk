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
    virtual char /*Character* */ getType() = 0;
    virtual std::string encode() = 0;
    virtual void validate(DataTable* table, DataRecord* record) = 0; /* throws(ValidationException) */
};
#endif 
