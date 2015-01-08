#ifndef _RECORD_VALIDATOR_H_
#define _RECORD_VALIDATOR_H_

#include "util/Cloneable.h"
#include "util/Interface.h"
#include <string>

class DataTable;
class DataRecord;

class RecordValidator : public Interface, public Cloneable
{
public:
    std::string /*Character* */ getType();
    std::string encode();
    void validate(DataTable* table, DataRecord* record) /* throws(ValidationException) */;
};
#endif 